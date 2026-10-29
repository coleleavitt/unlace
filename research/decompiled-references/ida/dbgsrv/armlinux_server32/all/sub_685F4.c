/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_685F4
// Address: 0x000685F4

//----- (000685F4) --------------------------------------------------------
int __fastcall sub_685F4(int a1)
{
  const char *v1; // r0

  v1 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
  return sub_685AC((int)"%s", v1);
}
