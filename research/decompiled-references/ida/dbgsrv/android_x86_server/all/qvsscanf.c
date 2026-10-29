/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsscanf
// Address: 0x000B9910

//----- (000B9910) --------------------------------------------------------
int __cdecl qvsscanf(int a1, char *s, int a3)
{
  size_t v3; // eax
  const char *v4; // eax
  _DWORD v6[7]; // [esp+0h] [ebp-1Ch] BYREF

  v6[2] = __readgsdword(0x14u);
  v3 = strlen(s);
  v4 = sub_B9730(s, (unsigned int)v6 - ((v3 + 115) & 0xFFFFFFF0), v3 + 100);
  return vsscanf(a1, v4, a3, 760099);
}
// 18520: using guessed type int __stdcall vsscanf(_DWORD, _DWORD, _DWORD, _DWORD);
