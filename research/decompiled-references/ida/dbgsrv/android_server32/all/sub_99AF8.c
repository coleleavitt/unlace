/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99AF8
// Address: 0x00099AF8

//----- (00099AF8) --------------------------------------------------------
int __fastcall sub_99AF8(__int64 *a1, char *a2, size_t a3, _DWORD *a4)
{
  __int64 v5; // kr00_8
  int v8; // r0

  v5 = *a1;
  v8 = (*(int (__fastcall **)(__int64 *, int))(*(_DWORD *)a1 + 12))(a1, -1);
  return sub_99E88(SHIDWORD(v5), v8, a2, a3, a4);
}
