/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen_shared
// Address: 0x00000000000BCE98

//----- (00000000000BCE98) ----------------------------------------------------
__int64 __fastcall qopen_shared(__int64 a1, int a2, int a3)
{
  int v3; // w21
  unsigned int v4; // w20
  unsigned int v5; // w19

  v3 = a3 + 1;
  if ( (unsigned int)(a3 + 1) >= 4 )
  {
    if ( !under_debugger )
      LODWORD(a1) = (unsigned int)interr(707);
    __break(1u);
    return sub_BCF40(a1, a2, a3);
  }
  else
  {
    v4 = a2 & 0xFFFDFDBF | 0x20000;
    v5 = __open_2(a1, v4);
    if ( v5 == -1 )
    {
      set_qerrno(1u);
    }
    else if ( (unsigned int)sub_BCF40(v5, v4, dword_11BF8C[v3]) )
    {
      if ( close(v5) == -1 )
        set_qerrno(1u);
      return (unsigned int)-1;
    }
    return v5;
  }
}
// BCF3D: variable 'a2' is possibly undefined
// BCF3D: variable 'a3' is possibly undefined
// 36DE0: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
// 11BF8C: using guessed type int dword_11BF8C[];
// 168DF0: using guessed type char under_debugger;
