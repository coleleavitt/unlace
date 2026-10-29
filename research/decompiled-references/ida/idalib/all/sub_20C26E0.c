__int64 __fastcall sub_20C26E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  const void *v6; // r13
  size_t v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r15
  const void *v12; // r12
  size_t v13; // rbp

  v4 = (a2 - a1) >> 7;
  v5 = (a2 - a1) >> 5;
  if ( v4 <= 0 )
  {
    v8 = a1;
LABEL_19:
    switch ( v5 )
    {
      case 2LL:
        v12 = *(const void **)a3;
        v13 = *(_QWORD *)(a3 + 8);
        break;
      case 3LL:
        v12 = *(const void **)a3;
        v13 = *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)(v8 + 8) == v13
          && (!v13 || !memcmp(*(const void **)v8, *(const void **)a3, *(_QWORD *)(a3 + 8))) )
        {
          return v8;
        }
        v8 += 32;
        break;
      case 1LL:
        v12 = *(const void **)a3;
        v13 = *(_QWORD *)(a3 + 8);
LABEL_26:
        if ( *(_QWORD *)(v8 + 8) == v13 )
        {
          if ( v13 && memcmp(*(const void **)v8, v12, v13) )
            return a2;
          return v8;
        }
        return a2;
      default:
        return a2;
    }
    if ( *(_QWORD *)(v8 + 8) == v13 && (!v13 || !memcmp(*(const void **)v8, v12, v13)) )
      return v8;
    v8 += 32;
    goto LABEL_26;
  }
  v6 = *(const void **)a3;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a1;
  v9 = a1 + (v4 << 7);
  while ( *(_QWORD *)(v8 + 8) != v7 || v7 && memcmp(*(const void **)v8, v6, v7) )
  {
    v10 = v8 + 32;
    if ( v7 == *(_QWORD *)(v8 + 40) && (!v7 || !memcmp(*(const void **)(v8 + 32), v6, v7)) )
      return v10;
    v10 = v8 + 64;
    if ( v7 == *(_QWORD *)(v8 + 72) && (!v7 || !memcmp(*(const void **)(v8 + 64), v6, v7)) )
      return v10;
    v10 = v8 + 96;
    if ( v7 == *(_QWORD *)(v8 + 104) && (!v7 || !memcmp(*(const void **)(v8 + 96), v6, v7)) )
      return v10;
    v8 += 128;
    if ( v9 == v8 )
    {
      v5 = (a2 - v8) >> 5;
      goto LABEL_19;
    }
  }
  return v8;
}
