__int64 __fastcall sub_E5D2E0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  bool v5; // al
  void **v6; // rbp
  char *v7; // r13
  size_t v8; // rbp
  bool v9; // al
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // [rsp+0h] [rbp-68h] BYREF
  void *s2; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h]
  void *v15; // [rsp+20h] [rbp-48h] BYREF
  void *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v1 = *((unsigned int *)a1 + 4);
  if ( !(_DWORD)v1 )
    return operator delete(*a1, v1 << 6, 8);
  sub_E59960((void ***)&v12, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  sub_E59960((void ***)&v15, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
  v3 = *a1;
  v4 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 4) << 6);
  if ( *a1 != v4 )
  {
    do
    {
      v7 = *(char **)(v3 + 8);
      v8 = *(_QWORD *)(v3 + 16);
      if ( s2 == (void *)-1LL )
      {
        if ( v7 == (char *)-1LL )
          goto LABEL_10;
      }
      else
      {
        if ( s2 == (void *)-2LL )
        {
          v5 = v7 + 2 == nullptr;
        }
        else
        {
          if ( v14 != v8 )
            goto LABEL_17;
          if ( !v8 )
            goto LABEL_10;
          v5 = memcmp(*(const void **)(v3 + 8), s2, *(_QWORD *)(v3 + 16)) == 0;
        }
        if ( v5 )
          goto LABEL_10;
      }
LABEL_17:
      if ( v16 == (void *)-1LL )
      {
        v9 = v7 + 1 == nullptr;
        goto LABEL_22;
      }
      if ( v16 == (void *)-2LL )
      {
        v9 = v7 + 2 == nullptr;
LABEL_22:
        if ( !v9 )
        {
LABEL_23:
          sub_222B2A0(v3 + 24);
          goto LABEL_10;
        }
        goto LABEL_10;
      }
      if ( v8 != v17 )
        goto LABEL_23;
      if ( v8 )
      {
        v9 = memcmp(v7, v16, v8) == 0;
        goto LABEL_22;
      }
LABEL_10:
      v6 = *(void ***)v3;
      if ( *(_QWORD *)v3 )
      {
        if ( *v6 != v6 + 2 )
          operator delete(*v6);
        operator delete(v6, 0x20u);
      }
      v3 += 64;
    }
    while ( v4 != v3 );
  }
  v10 = v15;
  if ( v15 )
  {
    if ( *(void **)v15 != (char *)v15 + 16 )
      operator delete(*(void **)v15);
    operator delete(v10, 0x20u);
  }
  v11 = v12;
  if ( v12 )
  {
    if ( *(void **)v12 != (char *)v12 + 16 )
      operator delete(*(void **)v12);
    operator delete(v11, 0x20u);
  }
  v1 = *((unsigned int *)a1 + 4);
  return operator delete(*a1, v1 << 6, 8);
}
