/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47130B
// Address: 0x0047130B

//----- (0047130B) --------------------------------------------------------
char __thiscall sub_47130B(int this)
{
  _DWORD *v1; // esi
  int v2; // eax

  v1 = (_DWORD *)(this + 8);
  v2 = sub_46E4D9((unsigned __int8 **)(this + 8), *(_DWORD **)(this + 104));
  sub_4718E9(v1, v2);
  return 1;
}
