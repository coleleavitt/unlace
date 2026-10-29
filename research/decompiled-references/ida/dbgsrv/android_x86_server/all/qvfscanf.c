/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvfscanf
// Address: 0x000B9990

//----- (000B9990) --------------------------------------------------------
int __cdecl qvfscanf(int a1, char *s, int a3)
{
  size_t v3; // eax
  const char *v4; // eax
  _DWORD v6[7]; // [esp+0h] [ebp-1Ch] BYREF

  v6[2] = __readgsdword(0x14u);
  v3 = strlen(s);
  v4 = sub_B9730(s, (unsigned int)v6 - ((v3 + 115) & 0xFFFFFFF0), v3 + 100);
  return vfscanf(a1, v4, a3, 760227);
}
// 18530: using guessed type int __stdcall vfscanf(_DWORD, _DWORD, _DWORD, _DWORD);
