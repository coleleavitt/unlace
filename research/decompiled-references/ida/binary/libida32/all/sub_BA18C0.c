void __fastcall sub_BA18C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rsi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = (char *)&v19;
    v18 = 0x800000000LL;
    ptr = &v19;
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 80) = v4;
      }
      else
      {
        v5 = *(_QWORD *)(a2 + 64);
        v19 = a2;
        LODWORD(v18) = 1;
        if ( (v5 & 3) != 0 )
        {
          v14 = &v20;
        }
        else
        {
          while ( 1 )
          {
            v7 = v5 & 0xFFFFFFFFFFFFFFFCLL;
            v8 = v7;
            if ( !v7 )
              break;
            v9 = *(_QWORD *)(v7 + 80);
            if ( v9 )
            {
              v13 = (__int64 *)ptr;
              *(_QWORD *)(a1 + 80) = v9;
              if ( v13 != &v19 )
                free(v13);
              return;
            }
            v10 = (unsigned int)v18;
            v11 = (unsigned int)v18 + 1LL;
            if ( v11 > HIDWORD(v18) )
            {
              sub_22134E0(&ptr, &v19, v11, 8);
              v10 = (unsigned int)v18;
            }
            *((_QWORD *)ptr + v10) = v8;
            v12 = (unsigned int)(v18 + 1);
            v5 = *(_QWORD *)(v8 + 64);
            LODWORD(v18) = v18 + 1;
            if ( (v5 & 3) != 0 )
              goto LABEL_12;
          }
          v12 = (unsigned int)v18;
LABEL_12:
          v3 = (char *)ptr + 8 * v12;
          if ( ptr == v3 )
            goto LABEL_13;
          v14 = (__int64 *)v3;
          v3 = (char *)ptr;
        }
        v15 = (__int64 *)v3;
        do
        {
          v16 = *v15++;
          *(_QWORD *)(v16 + 80) = v2;
        }
        while ( v14 != v15 );
LABEL_13:
        if ( v3 != (char *)&v19 )
          free(v3);
      }
    }
  }
}

