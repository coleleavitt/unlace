void __fastcall sub_222B0E0(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r13
  bool v3; // al
  void **v4; // rbp
  char *v5; // r12
  size_t v6; // rbp
  bool v7; // al
  void *v8; // rbx
  void *v9; // rbx
  void *v10; // [rsp+0h] [rbp-68h] BYREF
  void *s2; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+10h] [rbp-58h]
  void *v13; // [rsp+20h] [rbp-48h] BYREF
  void *v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]

  if ( !*((_DWORD *)a1 + 4) )
    return;
  sub_E59960((void ***)&v10, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  sub_E59960((void ***)&v13, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
  v1 = *a1;
  v2 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 4) << 6);
  if ( *a1 != v2 )
  {
    do
    {
      v5 = *(char **)(v1 + 8);
      v6 = *(_QWORD *)(v1 + 16);
      if ( s2 == (void *)-1LL )
      {
        if ( v5 == (char *)-1LL )
          goto LABEL_9;
      }
      else
      {
        if ( s2 == (void *)-2LL )
        {
          v3 = v5 + 2 == nullptr;
        }
        else
        {
          if ( v12 != v6 )
            goto LABEL_16;
          if ( !v6 )
            goto LABEL_9;
          v3 = memcmp(*(const void **)(v1 + 8), s2, *(_QWORD *)(v1 + 16)) == 0;
        }
        if ( v3 )
          goto LABEL_9;
      }
LABEL_16:
      if ( v14 == (void *)-1LL )
      {
        v7 = v5 + 1 == nullptr;
        goto LABEL_21;
      }
      if ( v14 == (void *)-2LL )
      {
        v7 = v5 + 2 == nullptr;
LABEL_21:
        if ( !v7 )
        {
LABEL_22:
          sub_222B2A0(v1 + 24);
          goto LABEL_9;
        }
        goto LABEL_9;
      }
      if ( v15 != v6 )
        goto LABEL_22;
      if ( v6 )
      {
        v7 = memcmp(v5, v14, v6) == 0;
        goto LABEL_21;
      }
LABEL_9:
      v4 = *(void ***)v1;
      if ( *(_QWORD *)v1 )
      {
        if ( *v4 != v4 + 2 )
          operator delete(*v4);
        operator delete(v4, 0x20u);
      }
      v1 += 64;
    }
    while ( v2 != v1 );
  }
  v8 = v13;
  if ( v13 )
  {
    if ( *(void **)v13 != (char *)v13 + 16 )
      operator delete(*(void **)v13);
    operator delete(v8, 0x20u);
  }
  v9 = v10;
  if ( v10 )
  {
    if ( *(void **)v10 != (char *)v10 + 16 )
      operator delete(*(void **)v10);
    operator delete(v9, 0x20u);
  }
}
