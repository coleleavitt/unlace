/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsscanf
// Address: 0x000841C8

//----- (000841C8) --------------------------------------------------------
int __fastcall qvsscanf(int a1, char *s, int a3)
{
  size_t v4; // r0
  const char *v5; // r0
  _DWORD v7[2]; // [sp+4h] [bp-20h] BYREF
  int v8; // [sp+Ch] [bp-18h]
  int v9; // [sp+10h] [bp-14h] BYREF

  v7[1] = &v9;
  v8 = a3;
  v7[0] = a1;
  v4 = strlen(s);
  v5 = sub_840A0(s, (_BYTE *)v7 - ((v4 + 107) & 0xFFFFFFF8), v4 + 100);
  return vsscanf(v7[0], v5, v8);
}
// 19AFC: using guessed type int __fastcall vsscanf(_DWORD, _DWORD, _DWORD);
