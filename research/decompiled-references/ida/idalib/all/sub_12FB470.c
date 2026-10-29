__int64 __fastcall sub_12FB470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  const void *v7; // r13
  size_t v8; // rbp
  __int64 v9; // r12
  const void *v11; // r12
  size_t v12; // rbp

  v4 = (a2 - a1) >> 6;
  v5 = a1;
  v6 = (a2 - a1) >> 4;
  if ( v4 > 0 )
  {
    v7 = *(const void **)a3;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = a1 + (v4 << 6);
    while ( *(_QWORD *)(v5 + 8) != v8 || v8 && memcmp(*(const void **)v5, v7, v8) )
    {
      if ( v8 == *(_QWORD *)(v5 + 24) && (!v8 || !memcmp(*(const void **)(v5 + 16), v7, v8)) )
        return v5 + 16;
      if ( v8 == *(_QWORD *)(v5 + 40) && (!v8 || !memcmp(*(const void **)(v5 + 32), v7, v8)) )
        return v5 + 32;
      if ( v8 == *(_QWORD *)(v5 + 56) && (!v8 || !memcmp(*(const void **)(v5 + 48), v7, v8)) )
        return v5 + 48;
      v5 += 64;
      if ( v5 == v9 )
      {
        v6 = (a2 - v5) >> 4;
        goto LABEL_18;
      }
    }
    return v5;
  }
LABEL_18:
  switch ( v6 )
  {
    case 2LL:
      v11 = *(const void **)a3;
      v12 = *(_QWORD *)(a3 + 8);
LABEL_32:
      if ( *(_QWORD *)(v5 + 8) == v12 && (!v12 || !memcmp(*(const void **)v5, v11, v12)) )
        return v5;
      v5 += 16;
LABEL_27:
      if ( *(_QWORD *)(v5 + 8) != v12 || v12 && memcmp(*(const void **)v5, v11, v12) )
        return a2;
      return v5;
    case 3LL:
      v11 = *(const void **)a3;
      v12 = *(_QWORD *)(a3 + 8);
      if ( *(_QWORD *)(v5 + 8) == v12 && (!v12 || !memcmp(*(const void **)v5, *(const void **)a3, *(_QWORD *)(a3 + 8))) )
        return v5;
      v5 += 16;
      goto LABEL_32;
    case 1LL:
      v11 = *(const void **)a3;
      v12 = *(_QWORD *)(a3 + 8);
      goto LABEL_27;
  }
  return a2;
}
