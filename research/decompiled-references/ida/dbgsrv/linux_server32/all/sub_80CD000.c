/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD000
// Address: 0x080CD000

//----- (080CD000) --------------------------------------------------------
_DWORD *__cdecl sub_80CD000(int a1, int a2, int a3)
{
  int *v3; // esi

  v3 = (int *)operator new(0x8060u);
  sub_80CCF30((int)v3, a1, a2, a3);
  return sub_80CD580(v3);
}
