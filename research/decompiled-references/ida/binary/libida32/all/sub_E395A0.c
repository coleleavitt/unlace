__int64 __fastcall sub_E395A0(__int64 *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r14
  bool v4; // al
  void **v5; // rbp
  char *v6; // r13
  size_t v7; // rbp
  bool v8; // al
  void *v9; // rbx
  void *v10; // rbx
  void *v11; // [rsp+0h] [rbp-68h] BYREF
  void *s2; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+10h] [rbp-58h]
  void *v14; // [rsp+20h] [rbp-48h] BYREF
  void *v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  if ( !*((_DWORD *)a1 + 4) )
    return operator delete();
  sub_E35C20((void ***)&v11, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  sub_E35C20((void ***)&v14, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
  v2 = *a1;
  v3 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 4) << 6);
  if ( *a1 != v3 )
  {
    do
    {
      v6 = *(char **)(v2 + 8);
      v7 = *(_QWORD *)(v2 + 16);
      if ( s2 == (void *)-1LL )
      {
        if ( v6 == (char *)-1LL )
          goto LABEL_10;
      }
      else
      {
        if ( s2 == (void *)-2LL )
        {
          v4 = v6 + 2 == nullptr;
        }
        else
        {
          if ( v13 != v7 )
            goto LABEL_17;
          if ( !v7 )
            goto LABEL_10;
          v4 = memcmp(*(const void **)(v2 + 8), s2, *(_QWORD *)(v2 + 16)) == 0;
        }
        if ( v4 )
          goto LABEL_10;
      }
LABEL_17:
      if ( v15 == (void *)-1LL )
      {
        v8 = v6 + 1 == nullptr;
        goto LABEL_22;
      }
      if ( v15 == (void *)-2LL )
      {
        v8 = v6 + 2 == nullptr;
LABEL_22:
        if ( !v8 )
        {
LABEL_23:
          sub_2207560(v2 + 24);
          goto LABEL_10;
        }
        goto LABEL_10;
      }
      if ( v7 != v16 )
        goto LABEL_23;
      if ( v7 )
      {
        v8 = memcmp(v6, v15, v7) == 0;
        goto LABEL_22;
      }
LABEL_10:
      v5 = *(void ***)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *v5 != v5 + 2 )
          operator delete(*v5);
        operator delete(v5, 0x20u);
      }
      v2 += 64;
    }
    while ( v3 != v2 );
  }
  v9 = v14;
  if ( v14 )
  {
    if ( *(void **)v14 != (char *)v14 + 16 )
      operator delete(*(void **)v14);
    operator delete(v9, 0x20u);
  }
  v10 = v11;
  if ( v11 )
  {
    if ( *(void **)v11 != (char *)v11 + 16 )
      operator delete(*(void **)v11);
    operator delete(v10, 0x20u);
  }
  return operator delete();
}

