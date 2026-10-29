/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: print_idcv
// Address: 0x00043DFC

//----- (00043DFC) --------------------------------------------------------
int __fastcall print_idcv(int a1, unsigned __int8 *a2, const char *a3, signed int a4)
{
  int *v5; // [sp+8h] [bp-10h] BYREF
  _DWORD *v6[2]; // [sp+Ch] [bp-Ch] BYREF

  v6[1] = nullptr;
  v6[0] = nullptr;
  v5 = (int *)v6;
  sub_43E4C(a1, a2, a3, a4, &v5);
  sub_4D7F2((int)&v5, v6[0]);
  return 1;
}
