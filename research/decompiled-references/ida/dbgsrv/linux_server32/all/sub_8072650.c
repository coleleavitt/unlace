/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072650
// Address: 0x08072650

//----- (08072650) --------------------------------------------------------
int __cdecl sub_8072650(int a1, int (***a2)(), char a3)
{
  int *v3; // eax
  int *v4; // esi
  __int32 v5; // edi

  v3 = sub_80CD4D0(a1, a3);
  if ( !v3 )
    return -1;
  v4 = v3;
  sub_80A4BE0();
  v5 = sub_80719C0(v4, a2);
  sub_80A4BF0();
  sub_80CD620(v4);
  return v5;
}
