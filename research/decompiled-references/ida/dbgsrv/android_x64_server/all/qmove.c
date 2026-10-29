/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmove
// Address: 0x00000000000C2560

//----- (00000000000C2560) ----------------------------------------------------
__int64 __fastcall qmove(char *name, char *a2, int a3)
{
  int v5; // r13d
  unsigned int v6; // ebp
  char *v7; // rdi
  int v8; // ebx
  int v9; // eax
  int v10; // ebx

  v5 = 0;
  v6 = 0;
  if ( !qfileexist(a2) )
    goto LABEL_5;
  v7 = a2;
  v8 = access(a2, 2);
  if ( v8 )
  {
    v7 = (_BYTE *)(&dword_0 + 1);
    set_qerrno(1u);
  }
  v6 = 4 * (v8 != 0) + 2;
  if ( (a3 & v6) == v6 )
  {
LABEL_5:
    v9 = rename(name, a2);
    if ( v9 )
    {
      v10 = v9;
      set_qerrno(1u);
      v5 = v10;
      if ( *(_DWORD *)__errno(1) == 18 )
      {
        if ( (a3 & 1) == 0 )
        {
          v6 |= 1u;
          return v6;
        }
        if ( (a3 & 4) != 0 && unlink(a2) )
          set_qerrno(1u);
        v5 = qcopyfile(name, a2, 1, nullptr, 0);
        if ( (unsigned int)(v5 + 2) >= 2 && v5 != -4 )
        {
          if ( v5 )
          {
            if ( !(_BYTE)under_debugger )
              interr(1354);
            BUG();
          }
          v5 = 0;
          if ( unlink(name) )
            set_qerrno(1u);
        }
      }
    }
    return (unsigned int)-(v5 != 0);
  }
  if ( !v8 )
    *(_DWORD *)__errno(v7) = 17;
  set_qerrno(1u);
  return v6;
}
// 0: using guessed type int dword_0;
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
