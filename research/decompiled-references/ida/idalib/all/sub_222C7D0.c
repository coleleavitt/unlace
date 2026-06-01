__int64 __fastcall sub_222C7D0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // r13
  const void *v8; // r15
  void *v9; // r9
  int v10; // eax
  size_t v11; // rcx
  bool v12; // al
  char *v13; // rbp
  void *v14; // rbp
  void *v15; // rbp
  char *v16; // rbp
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  char *v19; // r13
  unsigned __int64 v20; // rax
  char *v21; // rbx
  char *v22; // rdi
  bool v23; // al
  int v24; // eax
  size_t v25; // [rsp+8h] [rbp-88h]
  void *v26; // [rsp+8h] [rbp-88h]
  void *v27; // [rsp+10h] [rbp-80h]
  void *v28[4]; // [rsp+18h] [rbp-78h] BYREF
  void *v29; // [rsp+38h] [rbp-58h] BYREF
  void *v30; // [rsp+40h] [rbp-50h]
  __int64 v31; // [rsp+48h] [rbp-48h]

  v3 = *(_DWORD *)(a2 + 8);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v3 )
    return a1;
  v5 = *(unsigned int *)(a2 + 16);
  v6 = *(_QWORD **)a2;
  sub_E59960((void ***)v28, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v7 = &v6[8 * v5];
  sub_E59960((void ***)&v29, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
  if ( v6 != v7 )
  {
    v8 = v28[1];
    v9 = v28[2];
    do
    {
      v13 = (char *)v6[1];
      v11 = v6[2];
      if ( v8 == (const void *)-1LL )
      {
        if ( v13 == (char *)-1LL )
          goto LABEL_10;
      }
      else
      {
        if ( v8 == (const void *)-2LL )
        {
          v12 = v13 + 2 == nullptr;
        }
        else
        {
          if ( (void *)v11 != v9 )
            goto LABEL_13;
          v25 = v6[2];
          if ( !v9 )
            goto LABEL_10;
          v27 = v9;
          v10 = memcmp(v13, v8, (size_t)v9);
          v11 = v25;
          v9 = v27;
          v12 = v10 == 0;
        }
        if ( v12 )
          goto LABEL_10;
      }
LABEL_13:
      if ( v30 == (void *)-1LL )
      {
        v23 = v13 + 1 == nullptr;
      }
      else if ( v30 == (void *)-2LL )
      {
        v23 = v13 + 2 == nullptr;
      }
      else
      {
        if ( v11 != v31 )
          break;
        if ( !v11 )
          goto LABEL_10;
        v26 = v9;
        v24 = memcmp(v13, v30, v11);
        v9 = v26;
        v23 = v24 == 0;
      }
      if ( !v23 )
        break;
LABEL_10:
      v6 += 8;
    }
    while ( v7 != v6 );
  }
  v14 = v29;
  if ( v29 )
  {
    if ( *(void **)v29 != (char *)v29 + 16 )
      operator delete(*(void **)v29);
    operator delete(v14, 0x20u);
  }
  v15 = v28[0];
  if ( v28[0] )
  {
    if ( *(void **)v28[0] != (char *)v28[0] + 16 )
      operator delete(*(void **)v28[0]);
    operator delete(v15, 0x20u);
  }
  v16 = *(char **)(a1 + 8);
  v17 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 16) << 6);
  while ( (_QWORD *)v17 != v6 )
  {
    v29 = v6;
    if ( *(char **)(a1 + 16) == v16 )
    {
      sub_222C680(a1, v16, (__int64 *)&v29);
      v16 = *(char **)(a1 + 8);
    }
    else
    {
      *(_QWORD *)v16 = v6;
      v16 += 8;
      *(_QWORD *)(a1 + 8) = v16;
    }
    for ( v6 += 8; v7 != v6; v6 += 8 )
    {
      v18 = v6[1];
      if ( v18 != -1 && v18 != -2 )
        break;
    }
  }
  v19 = *(char **)a1;
  if ( v16 != *(char **)a1 )
  {
    _BitScanReverse64(&v20, (v16 - v19) >> 3);
    sub_2228C50(*(char **)a1, v16, 2LL * (int)(63 - (v20 ^ 0x3F)));
    if ( v16 - v19 <= 128 )
    {
      sub_2228860(v19, v16);
    }
    else
    {
      v21 = v19 + 128;
      sub_2228860(v19, v19 + 128);
      if ( v16 != v19 + 128 )
      {
        do
        {
          v22 = v21;
          v21 += 8;
          sub_22287F0(v22);
        }
        while ( v16 != v21 );
      }
    }
  }
  return a1;
}
