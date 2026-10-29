__int64 __fastcall sub_18052C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  const void *v5; // r13
  size_t v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r15
  const void *v11; // r12
  size_t v12; // rbp

  v4 = 0x2E8BA2E8BA2E8BA3LL * ((a2 - a1) >> 3);
  if ( v4 >> 2 <= 0 )
  {
    v7 = a1;
LABEL_19:
    switch ( v4 )
    {
      case 2LL:
        v11 = *(const void **)a3;
        v12 = *(_QWORD *)(a3 + 8);
        break;
      case 3LL:
        v11 = *(const void **)a3;
        v12 = *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)(v7 + 8) == v12
          && (!v12 || !memcmp(*(const void **)v7, *(const void **)a3, *(_QWORD *)(a3 + 8))) )
        {
          return v7;
        }
        v7 += 88;
        break;
      case 1LL:
        v11 = *(const void **)a3;
        v12 = *(_QWORD *)(a3 + 8);
LABEL_26:
        if ( *(_QWORD *)(v7 + 8) == v12 )
        {
          if ( v12 && memcmp(*(const void **)v7, v11, v12) )
            return a2;
          return v7;
        }
        return a2;
      default:
        return a2;
    }
    if ( *(_QWORD *)(v7 + 8) == v12 && (!v12 || !memcmp(*(const void **)v7, v11, v12)) )
      return v7;
    v7 += 88;
    goto LABEL_26;
  }
  v5 = *(const void **)a3;
  v6 = *(_QWORD *)(a3 + 8);
  v7 = a1;
  v8 = a1 + 352 * (v4 >> 2);
  while ( *(_QWORD *)(v7 + 8) != v6 || v6 && memcmp(*(const void **)v7, v5, v6) )
  {
    v9 = v7 + 88;
    if ( v6 == *(_QWORD *)(v7 + 96) && (!v6 || !memcmp(*(const void **)(v7 + 88), v5, v6)) )
      return v9;
    v9 = v7 + 176;
    if ( v6 == *(_QWORD *)(v7 + 184) && (!v6 || !memcmp(*(const void **)(v7 + 176), v5, v6)) )
      return v9;
    v9 = v7 + 264;
    if ( v6 == *(_QWORD *)(v7 + 272) && (!v6 || !memcmp(*(const void **)(v7 + 264), v5, v6)) )
      return v9;
    v7 += 352;
    if ( v8 == v7 )
    {
      v4 = 0x2E8BA2E8BA2E8BA3LL * ((a2 - v7) >> 3);
      goto LABEL_19;
    }
  }
  return v7;
}
