/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68478
// Address: 0x00068478

//----- (00068478) --------------------------------------------------------
int __fastcall sub_68478(int a1)
{
  const char *v1; // r0

  v1 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
  return sub_68430((int)"%s", v1);
}
