void __fastcall sub_1005500(__int64 a1)
{
  __int64 v1; // rbp
  void *v2; // rdi
  void **v3; // r12
  unsigned __int64 v4; // rax
  void **v5; // r13
  void **v6; // rbx
  void **v7; // rdi
  void **v8; // rdi
  void **v9; // rbx
  void **v10; // r13
  __int64 v11; // rdx
  void *v12; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-70h]
  __int64 v14; // [rsp+10h] [rbp-68h]
  void *v15; // [rsp+20h] [rbp-58h]
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v17; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v1 + 8) )
    return;
  sub_FA3370((__int64)&v12, *(_QWORD *)v1, **(_DWORD **)a1, 154);
  if ( !(_BYTE)v17 )
  {
    v2 = v15;
    if ( v15 == v16 )
      goto LABEL_5;
    goto LABEL_4;
  }
  sub_FA3A50(v14, (__int64)&v12, SHIBYTE(v17));
  v2 = v15;
  v14 = 0;
  v17 = 0;
  if ( v15 != v16 )
LABEL_4:
    operator delete(v2);
LABEL_5:
  v3 = (void **)v12;
  if ( v12 )
  {
    v4 = v13;
    if ( v13 )
    {
      if ( (unsigned __int64)v12 < v13 || (unsigned __int64)v12 > v13 + 14848 )
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
                goto LABEL_11;
            }
          }
          while ( v5 != v6 );
LABEL_11:
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
              goto LABEL_19;
          }
          v9 -= 4;
        }
        while ( v10 != v9 );
LABEL_19:
        operator delete(v3, 0x3A0u);
      }
      else
      {
        v11 = *(unsigned int *)(v13 + 14976);
        *(_DWORD *)(v13 + 14976) = v11 + 1;
        *(_QWORD *)(v4 + 8 * v11 + 14848) = v3;
      }
    }
  }
  *(_BYTE *)(v1 + 8) = 1;
}

