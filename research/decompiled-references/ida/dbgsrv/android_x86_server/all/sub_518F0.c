/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_518F0
// Address: 0x000518F0

//----- (000518F0) --------------------------------------------------------
char __cdecl sub_518F0(char *haystack, int a2)
{
  int v2; // eax
  int v4[2]; // [esp+8h] [ebp-24h] BYREF
  _DWORD v5[7]; // [esp+10h] [ebp-1Ch] BYREF

  v5[2] = __readgsdword(0x14u);
  callui((int)v5);
  v2 = v4[0];
  v4[0] = (int)&off_137F60;
  v4[1] = v2;
  if ( !strstr(haystack, "static ") )
    return eval_idc_snippet(nullptr, haystack, a2, (int)v4);
  sub_4E380("main", 0, &dword_F4584, 7u);
  if ( (unsigned __int8)compile_idc_text(haystack, a2, v4, 0) )
    return call_idc_func(nullptr, "main", nullptr, 0, a2, (int)v4);
  else
    return 0;
}
// 4E2D0: using guessed type _DWORD __cdecl compile_idc_text(_DWORD, _DWORD, _DWORD, char);
// F4584: using guessed type int dword_F4584;
// 137F60: using guessed type int (__cdecl *off_137F60)(int, int);
// 13BC20: using guessed type int (__stdcall *callui)(int);
