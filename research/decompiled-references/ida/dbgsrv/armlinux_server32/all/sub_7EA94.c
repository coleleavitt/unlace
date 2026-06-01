/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EA94
// Address: 0x0007EA94

//----- (0007EA94) --------------------------------------------------------
int __fastcall sub_7EA94(int a1, char *s, int a3)
{
  size_t v6; // r0
  const char *v7; // r0
  _BYTE v9[4]; // [sp+0h] [bp+0h] BYREF

  v6 = strlen(s);
  v7 = sub_7E804(s, v9, v6 + 100);
  return vfscanf(a1, v7, a3);
}
// 1459C: using guessed type int __fastcall vfscanf(_DWORD, _DWORD, _DWORD);
