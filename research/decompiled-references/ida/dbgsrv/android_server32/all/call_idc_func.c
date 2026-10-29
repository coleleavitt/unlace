/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x000484C4

//----- (000484C4) --------------------------------------------------------
int __fastcall call_idc_func(int a1, const char *a2, unsigned __int8 *a3, int a4, int a5, int a6)
{
  _DWORD *v8; // r0
  int v9; // r4
  _BYTE v13[80]; // [sp+1Ch] [bp-54h] BYREF

  v8 = (_DWORD *)((int (__fastcall *)(_BYTE *, int, _DWORD))loc_48528)(v13, a6, 0);
  v9 = sub_46D88(v8, a2, 0, a4, a3, a1, a5);
  sub_486C4((int)v13);
  return v9;
}
