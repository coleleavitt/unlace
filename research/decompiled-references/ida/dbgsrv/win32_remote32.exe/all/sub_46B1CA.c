/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B1CA
// Address: 0x0046B1CA

//----- (0046B1CA) --------------------------------------------------------
char __usercall sub_46B1CA@<al>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v3; // eax
  int *v4; // ecx
  int v5; // esi
  int v6; // edx
  int *v7; // edi

  if ( (*(_DWORD *)(a3 + 12) & 0x1000) != 0 )
    return 1;
  v3 = sub_47631B(a1, a2, a3);
  v4 = dword_4B60F0;
  if ( v3 == -1 || v3 == -2 )
  {
    v6 = v3 >> 6;
    v7 = dword_4B60F0;
    v5 = v3 & 0x3F;
  }
  else
  {
    v5 = v3 & 0x3F;
    v6 = v3 >> 6;
    v7 = (int *)((char *)*(&dword_4B7B38 + (v3 >> 6)) + 56 * v5);
  }
  if ( !*((_BYTE *)v7 + 41) )
  {
    if ( v3 != -1 && v3 != -2 )
      v4 = (int *)((char *)*(&dword_4B7B38 + v6) + 56 * v5);
    if ( (*((_BYTE *)v4 + 45) & 1) == 0 )
      return 1;
  }
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return 0;
}
// 46B1CA: could not find valid save-restore pair for edi
// 4B60F0: using guessed type int dword_4B60F0[6];
