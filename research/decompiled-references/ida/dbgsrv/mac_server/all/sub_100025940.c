/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025940
// Address: 0x0000000100025940

//----- (0000000100025940) ----------------------------------------------------
__int64 __fastcall sub_100025940(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  FILE *v4; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v2 )
  {
    v4 = *(FILE **)(xmmword_1000AE250 + 8 * v2);
    if ( v4 )
      v3 = (int)qfseek(v4, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 72));
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
