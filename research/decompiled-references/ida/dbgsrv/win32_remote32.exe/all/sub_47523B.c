/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47523B
// Address: 0x0047523B

//----- (0047523B) --------------------------------------------------------
int __usercall sub_47523B@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v4; // [esp+14h] [ebp-1Ch]

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
  {
    sub_47C4AE(a3);
    return -1;
  }
  sub_469596(a3);
  v4 = sub_4751C4(a1, a2, a3);
  sub_4695AA(a3);
  return v4;
}
