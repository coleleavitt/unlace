/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmove
// Address: 0x0007E2E0

//----- (0007E2E0) --------------------------------------------------------
int __fastcall qmove(const char *a1, const char *a2, int a3)
{
  const char *v4; // r7
  int v5; // r6
  int v6; // r4
  int v7; // r7
  unsigned int v8; // r0
  int v9; // r0
  bool v10; // zf

  v4 = a1;
  v5 = 0;
  if ( qfileexist(a2) )
  {
    v5 = 2;
    v6 = access(a2, 2);
    if ( v6 )
    {
      set_qerrno(1);
      v5 = 6;
    }
    if ( (v5 & a3) != v5 )
    {
      if ( !v6 )
        *(_DWORD *)_errno(v5 & a3) = 17;
      set_qerrno(1);
      return v5;
    }
    v4 = a1;
  }
  v7 = rename(v4, a2);
  v8 = 0;
  if ( v7 )
  {
    v9 = set_qerrno(1);
    v10 = *(_DWORD *)_errno(v9) == 18;
    v8 = v7;
    if ( v10 )
    {
      if ( !(a3 << 31) )
        return v5 | 1;
      if ( (a3 & 4) != 0 && unlink(a2) )
        set_qerrno(1);
      v8 = qcopyfile(a1, a2, (FILE *)((char *)&dword_0 + 1), nullptr, 0);
      if ( v8 < 0xFFFFFFFE && v8 != -4 )
      {
        if ( v8 )
        {
          if ( !under_debugger )
            interr(1354);
          __debugbreak();
        }
        v10 = unlink(a1) == 0;
        v8 = 0;
        if ( !v10 )
        {
          set_qerrno(1);
          v8 = 0;
        }
      }
    }
  }
  v5 = -1;
  if ( !v8 )
    return 0;
  return v5;
}
// 0: using guessed type int dword_0;
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
