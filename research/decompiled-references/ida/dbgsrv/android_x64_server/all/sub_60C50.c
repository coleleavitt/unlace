/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60C50
// Address: 0x0000000000060C50

//----- (0000000000060C50) ----------------------------------------------------
__int64 __fastcall sub_60C50(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  FILE *v5; // rsi
  const char *v6; // rdi

  v3 = a1[1];
  v4 = -1;
  if ( *((_QWORD *)&xmmword_155780 + 1) > v3 )
  {
    v5 = *(FILE **)(xmmword_155780 + 8 * v3);
    if ( v5 )
    {
      if ( a1[6] )
        v6 = (const char *)a1[5];
      else
        v6 = s1;
      v4 = qfputs(v6, v5);
    }
  }
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
