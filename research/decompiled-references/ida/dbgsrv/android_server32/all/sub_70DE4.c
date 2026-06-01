/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70DE4
// Address: 0x00070DE4

//----- (00070DE4) --------------------------------------------------------
bool __fastcall sub_70DE4(_DWORD *a1, unsigned int a2)
{
  _BOOL4 v2; // r2
  int v3; // r1

  v2 = (int)a2 > 0 && a2 >> 3 < 0x29;
  if ( v2 )
  {
    v3 = 2 * a2;
    *a1 = dword_C517C[v3];
    a1[1] = dword_C517C[v3 + 1] + 1;
  }
  return v2;
}
// C517C: using guessed type int dword_C517C[2];
