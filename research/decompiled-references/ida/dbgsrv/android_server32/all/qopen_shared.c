/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen_shared
// Address: 0x0007DB68

//----- (0007DB68) --------------------------------------------------------
int __fastcall qopen_shared(int a1, int a2, int a3)
{
  unsigned int v3; // r5
  int v4; // r6
  int v5; // r4
  int v6; // r0

  v3 = (a2 & 0xFFFDFDBF) + 0x20000;
  if ( (unsigned int)(a3 + 1) >= 4 )
  {
    if ( !under_debugger )
      interr(707);
    __debugbreak();
  }
  v4 = a3 + 1;
  v5 = _open_2(a1, v3);
  if ( v5 != -1 )
  {
    if ( !sub_7DBE8(v5, v3, dword_C6950[v4]) )
      return v5;
    v6 = close(v5);
    v5 = -1;
    if ( v6 != -1 )
      return v5;
  }
  set_qerrno(1);
  return -1;
}
// 192E0: using guessed type int __fastcall _open_2(_DWORD, _DWORD);
// C6950: using guessed type int dword_C6950[4];
// E0550: using guessed type char under_debugger;
