/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD440
// Address: 0x080BD440

//----- (080BD440) --------------------------------------------------------
int __cdecl sub_80BD440(int a1, int *a2)
{
  int v2; // esi

  v2 = a1 + 12;
  if ( a2 != dword_80E0438 && !(unsigned __int8)sub_80D7AD0((int)a2) )
    return 0;
  return v2;
}
// 80E0438: using guessed type int dword_80E0438[2];
