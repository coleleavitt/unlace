__int64 __fastcall sub_124E110(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  size_t v7; // rbp
  __int64 v8; // r12

  v4 = (a2 - a1) >> 7;
  v5 = a1;
  v6 = (a2 - a1) >> 5;
  if ( v4 <= 0 )
  {
LABEL_21:
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          return a2;
LABEL_29:
        if ( sub_124DB00(a3, v5) )
          return v5;
        return a2;
      }
      if ( sub_124DB00(a3, v5) )
        return v5;
      v5 += 32;
    }
    if ( sub_124DB00(a3, v5) )
      return v5;
    v5 += 32;
    goto LABEL_29;
  }
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a1 + (v4 << 7);
  while ( *(_QWORD *)(v5 + 8) != v7 || v7 && memcmp(*(const void **)v5, *(const void **)a3, v7) )
  {
    if ( v7 == *(_QWORD *)(v5 + 40) && (!v7 || !memcmp(*(const void **)(v5 + 32), *(const void **)a3, v7)) )
      return v5 + 32;
    if ( v7 == *(_QWORD *)(v5 + 72) && (!v7 || !memcmp(*(const void **)(v5 + 64), *(const void **)a3, v7)) )
    {
      v5 += 64;
      return v5;
    }
    if ( v7 == *(_QWORD *)(v5 + 104) && (!v7 || !memcmp(*(const void **)(v5 + 96), *(const void **)a3, v7)) )
    {
      v5 += 96;
      return v5;
    }
    v5 += 128;
    if ( v5 == v8 )
    {
      v6 = (a2 - v5) >> 5;
      goto LABEL_21;
    }
  }
  return v5;
}
