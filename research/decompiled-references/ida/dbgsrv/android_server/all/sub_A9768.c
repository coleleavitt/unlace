/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9768
// Address: 0x00000000000A9768

//----- (00000000000A9768) ----------------------------------------------------
long double __fastcall sub_A9768(__int64 a1)
{
  const char *v2; // x1
  long double result; // q0
  __int64 v4; // x8
  __int64 v5; // x10

  __break(1u);
  if ( *(_QWORD *)(a1 + 40) >= 2u )
  {
    sub_A97FC("certificate", *(const char **)(a1 + 32), 17);
    if ( *(_QWORD *)(a1 + 64) )
      v2 = *(const char **)(a1 + 56);
    else
      v2 = &byte_F154B;
    sub_A97FC("private key", v2, 17);
  }
  v4 = *((_QWORD *)&xmmword_166D00 + 1);
  if ( *((_QWORD *)&xmmword_166D00 + 1) >= 2u )
  {
    result = *(long double *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = xmmword_166D00;
    *(_QWORD *)(a1 + 120) = v4;
    v5 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 128) = xmmword_166D10;
    xmmword_166D00 = *(_OWORD *)&result;
    *(_QWORD *)&xmmword_166D10 = v5;
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
// 166D00: using guessed type __int128 xmmword_166D00;
// 166D10: using guessed type __int128 xmmword_166D10;
