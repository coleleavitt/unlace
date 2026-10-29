/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EAF4
// Address: 0x0007EAF4

//----- (0007EAF4) --------------------------------------------------------
int __fastcall sub_7EAF4(int a1, char *s, int a3)
{
  size_t v6; // r0
  const char *v7; // r0
  _BYTE v9[4]; // [sp+0h] [bp+0h] BYREF

  if ( a1 )
  {
    v6 = strlen(s);
    v7 = sub_7E804(s, v9, v6 + 100);
    return _vfprintf_chk(a1, 1, v7, a3);
  }
  else
  {
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
    return -1;
  }
}
// 143FC: using guessed type int __fastcall _vfprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD);
