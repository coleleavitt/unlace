/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x0005FAE0

//----- (0005FAE0) --------------------------------------------------------
char __cdecl call_idc_func(char *a1, char *a2, char *a3, int a4, int a5, int a6)
{
  char v7; // [esp+7h] [ebp-65h]
  _DWORD v8[25]; // [esp+8h] [ebp-64h] BYREF

  v8[20] = __readgsdword(0x14u);
  sub_5FB80((int)v8, a6, 0);
  v7 = sub_5D3A0((int)v8, a2, 0, a4, a3, a1, a5);
  sub_5FE80((int)v8);
  return v7;
}
