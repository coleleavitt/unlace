__int64 __fastcall sub_1157870(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  unsigned int v6; // r13d
  __int64 v8; // r14
  __int64 v9; // rax
  size_t v10; // rax
  size_t v11; // rbp
  const void *v12; // rbx
  int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v13[0] = 2222;
  v2 = sub_21B6DA0(a1, v13, 1);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    return 0;
  while ( 1 )
  {
    if ( *v4 )
    {
      v6 = sub_21B9810(*v4, 2222);
      if ( (_BYTE)v6 )
        break;
    }
    if ( v5 == ++v4 )
      return 0;
  }
  if ( v5 == v4 )
    return 0;
  do
  {
    v8 = *v4;
    v9 = *(_QWORD *)(*v4 + 16LL);
    if ( !v9 )
      v9 = *v4;
    ++v4;
    *(_BYTE *)(v9 + 44) |= 1u;
    if ( v4 == v5 )
      break;
    while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 2222) )
    {
      if ( v5 == ++v4 )
        goto LABEL_14;
    }
  }
  while ( v5 != v4 );
LABEL_14:
  if ( a2 )
  {
    v10 = strlen(a2);
    v11 = v10;
    v12 = **(const void ***)(v8 + 48);
    if ( v12 )
      goto LABEL_16;
    LOBYTE(v6) = v10 == 0;
    return v6;
  }
  else
  {
    v11 = 0;
    v12 = **(const void ***)(v8 + 48);
    if ( v12 )
    {
LABEL_16:
      if ( strlen((const char *)v12) == v11 )
      {
        if ( v11 )
        {
          LOBYTE(v6) = memcmp(v12, a2, v11) == 0;
          return v6;
        }
        return v6;
      }
      return 0;
    }
    return v6;
  }
}
