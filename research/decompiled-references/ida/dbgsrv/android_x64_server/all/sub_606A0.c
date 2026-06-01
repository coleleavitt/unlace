/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_606A0
// Address: 0x00000000000606A0

//----- (00000000000606A0) ----------------------------------------------------
__int64 __fastcall sub_606A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  FILE *v4; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( *((_QWORD *)&xmmword_155780 + 1) > v2 )
  {
    v4 = *(FILE **)(xmmword_155780 + 8 * v2);
    if ( v4 )
    {
      *(_BYTE *)a2 = 9;
      v3 = qfsize(v4);
    }
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
