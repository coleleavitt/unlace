/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51C50
// Address: 0x00051C50

//----- (00051C50) --------------------------------------------------------
char __cdecl sub_51C50(char *a1, char *a2, char *a3, int a4, int a5)
{
  int v5; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-24h] BYREF
  _DWORD v8[7]; // [esp+10h] [ebp-1Ch] BYREF

  v8[2] = __readgsdword(0x14u);
  callui((int)v8);
  v5 = v7[0];
  v7[0] = &off_137F60;
  v7[1] = v5;
  return call_idc_func(a1, a2, a3, a4, a5, (int)v7);
}
// 137F60: using guessed type int (__cdecl *off_137F60)(int, int);
// 13BC20: using guessed type int (__stdcall *callui)(int);
