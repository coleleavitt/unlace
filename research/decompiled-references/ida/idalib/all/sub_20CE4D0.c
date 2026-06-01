__int64 __fastcall sub_20CE4D0(__int64 a1)
{
  __int64 v2; // rbx
  const void *v3; // rsi
  size_t v4; // r12
  void *v5; // rdi
  int v6; // r12d
  _WORD *v7; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(const void **)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(void **)(v2 + 32);
  if ( v4 > *(_QWORD *)(v2 + 24) - (_QWORD)v5 )
  {
    sub_227BF10(v2, v3, v4);
    v2 = *(_QWORD *)(a1 + 8);
  }
  else if ( v4 )
  {
    memcpy(v5, v3, v4);
    *(_QWORD *)(v2 + 32) += v4;
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( *(int *)(a1 + 16) <= 0 )
    return v2;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *(_WORD **)(v2 + 32);
      if ( *(_QWORD *)(v2 + 24) - (_QWORD)v7 > 1u )
        break;
      ++v6;
      sub_227BF10(v2, "  ", 2);
      v2 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 16) <= v6 )
        return v2;
    }
    ++v6;
    *v7 = 8224;
    *(_QWORD *)(v2 + 32) += 2LL;
    v2 = *(_QWORD *)(a1 + 8);
  }
  while ( *(_DWORD *)(a1 + 16) > v6 );
  return *(_QWORD *)(a1 + 8);
}
