/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000259A0
// Address: 0x00000001000259A0

//----- (00000001000259A0) ----------------------------------------------------
__int64 __fastcall sub_1000259A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  off_t v3; // rax
  FILE *v4; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v2 )
  {
    v4 = *(FILE **)(xmmword_1000AE250 + 8 * v2);
    if ( v4 )
    {
      *(_BYTE *)a2 = 9;
      v3 = qftell(v4);
    }
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
