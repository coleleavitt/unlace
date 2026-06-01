/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmove
// Address: 0x000B0040

//----- (000B0040) --------------------------------------------------------
int __cdecl qmove(char *old, char *name, int a3)
{
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // ecx

  v3 = (unsigned int)name;
  if ( !qfileexist(name) )
  {
LABEL_6:
    v6 = rename(old, (const char *)v3);
    if ( v6 )
    {
      v7 = v6;
      set_qerrno(1);
      if ( *(_DWORD *)__errno(v8) != 18 )
        goto LABEL_22;
      if ( (a3 & 1) == 0 )
      {
        HIDWORD(v3) |= 1u;
        return HIDWORD(v3);
      }
      if ( (a3 & 4) != 0 && unlink(name) )
        set_qerrno(1);
      v7 = qcopyfile(old, name, 1, nullptr, 0);
      if ( (unsigned int)(v7 + 2) < 2 || v7 == -4 )
      {
LABEL_22:
        v3 = -(__int64)(unsigned int)v7;
        return HIDWORD(v3);
      }
      if ( v7 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1354);
        BUG();
      }
      if ( unlink(old) )
        set_qerrno(1);
    }
    v7 = 0;
    goto LABEL_22;
  }
  v5 = access(name, 2);
  if ( v5 )
    set_qerrno(1);
  HIDWORD(v3) = 4 * (v5 != 0) + 2;
  if ( (a3 & HIDWORD(v3)) == HIDWORD(v3) )
  {
    LODWORD(v3) = name;
    goto LABEL_6;
  }
  if ( !v5 )
    *(_DWORD *)__errno(v4) = 17;
  set_qerrno(1);
  return HIDWORD(v3);
}
// B00CD: variable 'v8' is possibly undefined
// B00EE: variable 'v4' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
