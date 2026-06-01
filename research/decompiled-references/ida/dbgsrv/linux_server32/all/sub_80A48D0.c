/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A48D0
// Address: 0x080A48D0

//----- (080A48D0) --------------------------------------------------------
int __cdecl sub_80A48D0(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  v2 = operator new(0xFCu);
  sub_80A9F00(v2, a2, a1);
  *(_BYTE *)(v2 + 96) = *(_BYTE *)(a1 + 59);
  v3 = sub_805D7D0();
  *(_DWORD *)(v3 + 16) = 1;
  sub_80AA010(v2, v3);
  dword_811E72C = v2;
  return v2;
}
// 811E72C: using guessed type int dword_811E72C;
