__int64 __fastcall sub_18054D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  size_t v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v9; // r12
  size_t v10; // rbp

  v4 = 0x2E8BA2E8BA2E8BA3LL * ((a2 - a1) >> 3);
  if ( v4 >> 2 <= 0 )
  {
    v6 = a1;
LABEL_19:
    switch ( v4 )
    {
      case 2LL:
        v10 = *(_QWORD *)(a3 + 8);
        break;
      case 3LL:
        v10 = *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)(v6 + 8) == v10
          && (!v10 || !memcmp(*(const void **)v6, *(const void **)a3, *(_QWORD *)(a3 + 8))) )
        {
          return v6;
        }
        v6 += 88;
        break;
      case 1LL:
        v10 = *(_QWORD *)(a3 + 8);
LABEL_26:
        if ( v10 == *(_QWORD *)(v6 + 8) )
        {
          if ( v10 && memcmp(*(const void **)v6, *(const void **)a3, v10) )
            return a2;
          return v6;
        }
        return a2;
      default:
        return a2;
    }
    if ( *(_QWORD *)(v6 + 8) == v10 && (!v10 || !memcmp(*(const void **)v6, *(const void **)a3, v10)) )
      return v6;
    v6 += 88;
    goto LABEL_26;
  }
  v5 = *(_QWORD *)(a3 + 8);
  v6 = a1;
  v7 = a1 + 352 * (v4 >> 2);
  while ( *(_QWORD *)(v6 + 8) != v5 || v5 && memcmp(*(const void **)v6, *(const void **)a3, v5) )
  {
    v9 = v6 + 88;
    if ( v5 == *(_QWORD *)(v6 + 96) && (!v5 || !memcmp(*(const void **)(v6 + 88), *(const void **)a3, v5)) )
      return v9;
    v9 = v6 + 176;
    if ( v5 == *(_QWORD *)(v6 + 184) && (!v5 || !memcmp(*(const void **)(v6 + 176), *(const void **)a3, v5)) )
      return v9;
    v9 = v6 + 264;
    if ( v5 == *(_QWORD *)(v6 + 272) && (!v5 || !memcmp(*(const void **)(v6 + 264), *(const void **)a3, v5)) )
      return v9;
    v6 += 352;
    if ( v6 == v7 )
    {
      v4 = 0x2E8BA2E8BA2E8BA3LL * ((a2 - v6) >> 3);
      goto LABEL_19;
    }
  }
  return v6;
}
