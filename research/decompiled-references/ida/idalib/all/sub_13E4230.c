void __fastcall sub_13E4230(__int64 a1, int a2)
{
  __int64 v3; // rsi
  void *v4; // rdi
  void **v5; // rbp
  unsigned __int64 v6; // rax
  void **v7; // r12
  void **v8; // rbx
  void **v9; // rdi
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // r12
  __int64 v13; // rdx
  void *v14; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  void *v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v19; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 660) = 1;
  if ( !v3 )
    return;
  sub_FC70B0((__int64)&v14, v3, a2, 1056);
  if ( (_BYTE)v19 )
  {
    sub_FC7790(v16, (__int64 *)&v14, SHIBYTE(v19));
    v4 = v17;
    v16 = 0;
    v19 = 0;
    if ( v17 == v18 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v4 = v17;
  if ( v17 != v18 )
LABEL_4:
    operator delete(v4);
LABEL_5:
  v5 = (void **)v14;
  if ( v14 )
  {
    v6 = v15;
    if ( v15 )
    {
      if ( (unsigned __int64)v14 >= v15 && (unsigned __int64)v14 <= v15 + 14848 )
      {
        v13 = *(unsigned int *)(v15 + 14976);
        *(_DWORD *)(v15 + 14976) = v13 + 1;
        *(_QWORD *)(v6 + 8 * v13 + 14848) = v5;
      }
      else
      {
        v7 = *((void ***)v14 + 66);
        v8 = &v7[8 * (unsigned __int64)*((unsigned int *)v14 + 134)];
        if ( v7 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 8;
              v9 = (void **)v8[3];
              if ( v9 == v8 + 5 )
                break;
              operator delete(v9);
              if ( v7 == v8 )
                goto LABEL_12;
            }
          }
          while ( v7 != v8 );
LABEL_12:
          v8 = (void **)v5[66];
        }
        if ( v8 != v5 + 68 )
          free(v8);
        v10 = (void **)v5[52];
        if ( v10 != v5 + 54 )
          free(v10);
        v11 = v5 + 48;
        v12 = v5 + 8;
        do
        {
          while ( *v11 != v11 + 2 )
          {
            operator delete(*v11);
            v11 -= 4;
            if ( v12 == v11 )
              goto LABEL_20;
          }
          v11 -= 4;
        }
        while ( v12 != v11 );
LABEL_20:
        operator delete(v5, 0x3A0u);
      }
    }
  }
}
