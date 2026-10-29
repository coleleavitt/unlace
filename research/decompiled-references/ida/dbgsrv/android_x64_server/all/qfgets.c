/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgets
// Address: 0x00000000000C2E20

//----- (00000000000C2E20) ----------------------------------------------------
char *__fastcall qfgets(char *a1, __int64 a2, FILE *a3)
{
  char *v3; // rax
  char *v4; // rbx
  size_t v5; // rax

  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( !a3 )
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 9;
    set_qerrno(1u);
    return nullptr;
  }
  v3 = fgets(a1, a2, a3);
  if ( !v3 )
    return nullptr;
  v4 = v3;
  if ( *v3 )
  {
    v5 = strlen(v3);
    if ( v5 >= 2 && v4[v5 - 2] == 13 && v4[v5 - 1] == 10 )
      *(_WORD *)&v4[v5 - 2] = 10;
    if ( *v4 == 26 )
      return nullptr;
  }
  return v4;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
