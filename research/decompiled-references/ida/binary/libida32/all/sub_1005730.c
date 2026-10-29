void __fastcall sub_1005730(__int64 a1, int a2)
{
  void **v3; // r12
  unsigned __int64 v4; // rax
  void **v5; // r13
  void **v6; // rbp
  void **v7; // rdi
  void **v8; // rdi
  void **v9; // rbp
  void **v10; // r13
  __int64 v11; // rdx
  void *v12; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-70h]
  __int64 v14; // [rsp+10h] [rbp-68h]
  void *v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int16 v17; // [rsp+40h] [rbp-38h]

  if ( sub_1005410() && !*(_BYTE *)(a1 + 8) )
  {
    sub_FA3370((__int64)&v12, *(_QWORD *)a1, a2, 154);
    if ( (_BYTE)v17 )
    {
      sub_FA3A50(v14, (__int64)&v12, SHIBYTE(v17));
      v14 = 0;
      v17 = 0;
    }
    if ( v15 != &v16 )
      operator delete(v15);
    v3 = (void **)v12;
    if ( v12 )
    {
      v4 = v13;
      if ( v13 )
      {
        if ( (unsigned __int64)v12 >= v13 && (unsigned __int64)v12 <= v13 + 14848 )
        {
          v11 = *(unsigned int *)(v13 + 14976);
          *(_DWORD *)(v13 + 14976) = v11 + 1;
          *(_QWORD *)(v4 + 8 * v11 + 14848) = v3;
        }
        else
        {
          v5 = *((void ***)v12 + 66);
          v6 = &v5[8 * (unsigned __int64)*((unsigned int *)v12 + 134)];
          if ( v5 != v6 )
          {
            do
            {
              while ( 1 )
              {
                v6 -= 8;
                v7 = (void **)v6[3];
                if ( v7 == v6 + 5 )
                  break;
                operator delete(v7);
                if ( v5 == v6 )
                  goto LABEL_15;
              }
            }
            while ( v5 != v6 );
LABEL_15:
            v6 = (void **)v3[66];
          }
          if ( v6 != v3 + 68 )
            free(v6);
          v8 = (void **)v3[52];
          if ( v8 != v3 + 54 )
            free(v8);
          v9 = v3 + 48;
          v10 = v3 + 8;
          do
          {
            while ( *v9 != v9 + 2 )
            {
              operator delete(*v9);
              v9 -= 4;
              if ( v10 == v9 )
                goto LABEL_23;
            }
            v9 -= 4;
          }
          while ( v10 != v9 );
LABEL_23:
          operator delete(v3, 0x3A0u);
        }
      }
    }
    *(_BYTE *)(a1 + 8) = 1;
  }
}

