/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DCC4
// Address: 0x0007DCC4

//----- (0007DCC4) --------------------------------------------------------
int __fastcall sub_7DCC4(const char *a1, unsigned __int16 a2, int a3)
{
  int v4; // r4
  int v5; // r1
  int v6; // r0

  v4 = open(a1, 131138, a2);
  if ( v4 != -1 )
  {
    if ( !sub_7DBE8(v4, 66, a3) )
    {
      if ( !ftruncate64(v4, v5, 0, 0) )
        return v4;
      set_qerrno(1);
    }
    v6 = close(v4);
    v4 = -1;
    if ( v6 != -1 )
      return v4;
  }
  set_qerrno(1);
  return -1;
}
// 7DCEE: variable 'v5' is possibly undefined
// 1973C: using guessed type int __fastcall ftruncate64(_DWORD, _DWORD, _DWORD, _DWORD);
