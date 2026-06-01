/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E98C
// Address: 0x0007E98C

//----- (0007E98C) --------------------------------------------------------
int __fastcall sub_7E98C(int a1, char *s, int a3)
{
  size_t v6; // r0
  const char *v7; // r0
  _BYTE v9[4]; // [sp+0h] [bp+0h] BYREF

  if ( a1 )
  {
    v6 = strlen(s);
    v7 = sub_7E69C(s, v9, v6 + 100);
    return _vfprintf_chk(a1, 1, v7, a3);
  }
  else
  {
    sub_70A2C(1);
    *_errno_location() = 9;
    sub_70A2C(1);
    return -1;
  }
}
// 14290: using guessed type int __fastcall _vfprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD);
