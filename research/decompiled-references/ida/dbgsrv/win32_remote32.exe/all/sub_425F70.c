/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425F70
// Address: 0x00425F70

//----- (00425F70) --------------------------------------------------------
char __userpurge sub_425F70@<al>(int a1@<ebx>, char *a2, char *a3, char *a4, int a5, int a6)
{
  int v7; // [esp+0h] [ebp-Ch] BYREF
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF

  ((void (__cdecl *)(int, int *))off_4B46B0)(11, &v7);
  v8[1] = v7;
  v8[0] = &off_48BE8C;
  return sub_4235F0(a1, a2, a3, a4, a5, a6, (int)v8);
}
// 48BE8C: using guessed type _UNKNOWN *off_48BE8C;
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
