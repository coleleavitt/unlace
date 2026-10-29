__int64 __fastcall sub_445120(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  char *v6; // rdi
  char *v7; // rax

  v2 = a1[41] - 1LL;
  if ( v2 < 0 )
  {
LABEL_15:
    if ( !under_debugger )
      interr(1982);
    BUG();
  }
  while ( *(_QWORD *)(a1[40] + 8 * v2) != a2 )
  {
    if ( v2-- == 0 )
      goto LABEL_15;
  }
  if ( (*(_BYTE *)(a2 + 48) & 1) != 0 )
  {
    v6 = (char *)a1[47];
    v7 = &v6[8 * a1[48]];
    if ( v6 != v7 )
    {
      while ( a2 != *(_QWORD *)v6 )
      {
        v6 += 8;
        if ( v7 == v6 )
          goto LABEL_6;
      }
      if ( v7 != v6 )
      {
        memmove(v6, v6 + 8, v7 - v6 - 8);
        --a1[48];
      }
    }
  }
LABEL_6:
  sub_444E50((__int64)a1, a2);
  memmove((void *)(8 * v2 + a1[40]), (const void *)(8 * v2 + a1[40] + 8), 8LL * a1[41] - 8 - 8 * v2);
  result = a1[41] - 1LL;
  for ( a1[41] = result; (unsigned __int64)v2 < a1[41]; ++v2 )
  {
    result = *(_QWORD *)(a1[40] + 8 * v2);
    *(_QWORD *)(result + 120) = v2;
  }
  return result;
}

