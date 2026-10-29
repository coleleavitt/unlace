/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EA34
// Address: 0x0007EA34

//----- (0007EA34) --------------------------------------------------------
int __fastcall sub_7EA34(int a1, char *s, int a3)
{
  size_t v6; // r0
  const char *v7; // r0
  _BYTE v9[4]; // [sp+0h] [bp+0h] BYREF

  v6 = strlen(s);
  v7 = sub_7E804(s, v9, v6 + 100);
  return vsscanf(a1, v7, a3);
}
// 14810: using guessed type int __fastcall vsscanf(_DWORD, _DWORD, _DWORD);
