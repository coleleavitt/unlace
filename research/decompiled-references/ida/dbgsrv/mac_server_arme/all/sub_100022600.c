/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022600
// Address: 0x0000000100022600

//----- (0000000100022600) ----------------------------------------------------
__int64 __fastcall sub_100022600(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x8
  __int64 v4; // x19
  int v5; // w0
  __int64 v6; // x8

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_1000A5928 > v2 && (v3 = *(FILE **)(qword_1000A5920 + 8 * v2)) != nullptr )
  {
    v4 = a2;
    v5 = qfseek(v3, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 72));
    a2 = v4;
    v6 = v5;
  }
  else
  {
    v6 = -1;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
