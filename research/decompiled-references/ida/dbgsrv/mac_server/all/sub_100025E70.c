/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025E70
// Address: 0x0000000100025E70

//----- (0000000100025E70) ----------------------------------------------------
__int64 __fastcall sub_100025E70(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  FILE *v4; // rax
  const char *v5; // rdi

  v2 = a1[1];
  v3 = -1;
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v2 )
  {
    v4 = *(FILE **)(xmmword_1000AE250 + 8 * v2);
    if ( v4 )
    {
      if ( a1[6] )
        v5 = (const char *)a1[5];
      else
        v5 = _s1;
      v3 = qfputs(v5, v4);
    }
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
