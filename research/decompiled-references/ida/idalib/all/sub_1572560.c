void *__fastcall sub_1572560(__int64 a1)
{
  __int16 v1; // ax
  void **v2; // rbp
  unsigned __int64 v3; // rax
  void **v4; // r12
  void **v5; // rbx
  void **v6; // rdi
  void **v7; // rdi
  void **v8; // rbx
  void **v9; // r12
  unsigned __int64 v10; // rax
  void *v12; // rbx
  void **v13; // r12
  void **v14; // rbx
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rbx
  void **v18; // r12
  void *v19; // rdi
  __int64 v20; // rdx
  void *v21; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h]
  void *v24; // [rsp+30h] [rbp-48h]
  _BYTE v25[16]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v26; // [rsp+50h] [rbp-28h]

  v1 = *(_WORD *)(a1 + 32);
  if ( v1 == 23 )
  {
    sub_1564840((__int64)&v21, a1, (int *)(a1 + 16), 1524);
    if ( (_BYTE)v26 )
    {
      sub_FC7790(v23, (__int64 *)&v21, SHIBYTE(v26));
      v23 = 0;
      v26 = 0;
    }
    if ( v24 != v25 )
      operator delete(v24);
    v2 = (void **)v21;
    if ( !v21 )
      goto LABEL_26;
    v3 = v22;
    if ( !v22 )
      goto LABEL_26;
    if ( (unsigned __int64)v21 < v22 || (unsigned __int64)v21 > v22 + 14848 )
    {
      v13 = *((void ***)v21 + 66);
      v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v21 + 134)];
      if ( v13 != v14 )
      {
        do
        {
          while ( 1 )
          {
            v14 -= 8;
            v15 = (void **)v14[3];
            if ( v15 == v14 + 5 )
              break;
            operator delete(v15);
            if ( v13 == v14 )
              goto LABEL_39;
          }
        }
        while ( v13 != v14 );
LABEL_39:
        v14 = (void **)v2[66];
      }
      if ( v14 != v2 + 68 )
        free(v14);
      v16 = (void **)v2[52];
      v17 = v2 + 52;
      if ( v16 != v2 + 54 )
        free(v16);
      v18 = v2 + 12;
      while ( 1 )
      {
        v17 -= 4;
        v19 = *v17;
        if ( *v17 != v17 + 2 )
          break;
LABEL_48:
        if ( v17 == v18 )
          goto LABEL_24;
      }
      while ( 1 )
      {
        operator delete(v19);
        if ( v17 == v18 )
          goto LABEL_24;
        v17 -= 4;
        v19 = *v17;
        if ( *v17 == v17 + 2 )
          goto LABEL_48;
      }
    }
LABEL_54:
    v20 = *(unsigned int *)(v3 + 14976);
    *(_DWORD *)(v3 + 14976) = v20 + 1;
    *(_QWORD *)(v3 + 8 * v20 + 14848) = v2;
    goto LABEL_26;
  }
  if ( v1 == 5 )
  {
    v12 = *(void **)(a1 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v21 = v12;
    LOBYTE(v22) = 2;
    return v21;
  }
  if ( (unsigned __int16)(v1 - 14) <= 1u || (unsigned __int16)(v1 - 17) <= 2u )
  {
    v10 = sub_14B6B60(a1, 0, 1);
    if ( v10 > 1 )
    {
      LOBYTE(v22) = 1;
      return (void *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    }
    goto LABEL_26;
  }
  sub_1564840((__int64)&v21, a1, (int *)(a1 + 16), 1524);
  if ( (_BYTE)v26 )
  {
    sub_FC7790(v23, (__int64 *)&v21, SHIBYTE(v26));
    v23 = 0;
    v26 = 0;
  }
  if ( v24 != v25 )
    operator delete(v24);
  v2 = (void **)v21;
  if ( v21 )
  {
    v3 = v22;
    if ( v22 )
    {
      if ( (unsigned __int64)v21 < v22 || (unsigned __int64)v21 > v22 + 14848 )
      {
        v4 = *((void ***)v21 + 66);
        v5 = &v4[8 * (unsigned __int64)*((unsigned int *)v21 + 134)];
        if ( v4 != v5 )
        {
          do
          {
            while ( 1 )
            {
              v5 -= 8;
              v6 = (void **)v5[3];
              if ( v6 == v5 + 5 )
                break;
              operator delete(v6);
              if ( v4 == v5 )
                goto LABEL_16;
            }
          }
          while ( v4 != v5 );
LABEL_16:
          v5 = (void **)v2[66];
        }
        if ( v5 != v2 + 68 )
          free(v5);
        v7 = (void **)v2[52];
        if ( v7 != v2 + 54 )
          free(v7);
        v8 = v2 + 48;
        v9 = v2 + 8;
        do
        {
          while ( *v8 != v8 + 2 )
          {
            operator delete(*v8);
            v8 -= 4;
            if ( v9 == v8 )
              goto LABEL_24;
          }
          v8 -= 4;
        }
        while ( v9 != v8 );
LABEL_24:
        operator delete(v2, 0x3A0u);
        goto LABEL_26;
      }
      goto LABEL_54;
    }
  }
LABEL_26:
  LOBYTE(v22) = 0;
  return v21;
}
