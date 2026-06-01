/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmove
// Address: 0x00000000000BD8DC

//----- (00000000000BD8DC) ----------------------------------------------------
__int64 __fastcall qmove(const char *a1, const char *a2, int a3)
{
  __int64 v6; // x0
  int v7; // w23
  unsigned int v8; // w22
  int v9; // w23
  __int64 v10; // x0
  const char *v11; // x0
  const char *v12; // x1
  char v13; // w2
  __int64 (__fastcall *v14)(__int64, __int64, __int64); // x3
  __int64 v15; // x4

  if ( qfileexist(a2) )
  {
    v6 = access(a2, 2);
    v7 = v6;
    if ( (_DWORD)v6 )
      v6 = set_qerrno(1u);
    if ( v7 )
      v8 = 6;
    else
      v8 = 2;
    if ( (v8 & ~a3) != 0 )
    {
      if ( !v7 )
        *(_DWORD *)__errno(v6) = 17;
      set_qerrno(1u);
      return v8;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = rename(a1, a2);
  if ( !v9 )
    goto LABEL_25;
  v10 = set_qerrno(1u);
  if ( *(_DWORD *)__errno(v10) != 18 )
    goto LABEL_25;
  if ( (a3 & 1) == 0 )
  {
    v8 |= 1u;
    return v8;
  }
  if ( (a3 & 4) != 0 && unlink(a2) )
    set_qerrno(1u);
  v11 = (const char *)qcopyfile(a1, a2, 1, nullptr, 0);
  v9 = (int)v11;
  if ( (unsigned int)v11 >= 0xFFFFFFFE || (_DWORD)v11 == -4 )
  {
LABEL_25:
    if ( v9 )
      return (unsigned int)-1;
    else
      return 0;
  }
  if ( !(_DWORD)v11 )
  {
    if ( unlink(a1) )
      set_qerrno(1u);
    v9 = 0;
    goto LABEL_25;
  }
  if ( !under_debugger )
    v11 = (const char *)interr(1354);
  __break(1u);
  return qcopyfile(v11, v12, v13, v14, v15);
}
// BDA29: variable 'v12' is possibly undefined
// BDA29: variable 'v13' is possibly undefined
// BDA29: variable 'v14' is possibly undefined
// BDA29: variable 'v15' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
