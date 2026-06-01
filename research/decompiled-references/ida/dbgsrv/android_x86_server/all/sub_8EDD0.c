/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EDD0
// Address: 0x0008EDD0

//----- (0008EDD0) --------------------------------------------------------
_BYTE *__cdecl sub_8EDD0(int a1, int a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax

  v2 = operator new(0xFCu);
  sub_7C120((int)v2, a2, a1);
  v2[96] = *(_BYTE *)(a1 + 59);
  v3 = sub_2B570();
  v3[4] = 1;
  sub_7CEA0((int)v2, (int)v3);
  dword_13BE90 = (int)v2;
  return v2;
}
// 13BE90: using guessed type int dword_13BE90;
