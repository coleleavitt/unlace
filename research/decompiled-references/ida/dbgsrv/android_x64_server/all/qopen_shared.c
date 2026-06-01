/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qopen_shared
// Address: 0x00000000000C1B10

//----- (00000000000C1B10) ----------------------------------------------------
__int64 __fastcall qopen_shared(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // r14d
  int v6; // eax

  v3 = a3 + 1;
  if ( (unsigned int)(a3 + 1) >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(707);
    BUG();
  }
  v4 = __open_2(a1, a2 & 0xFFFF7DBF | 0x8000);
  if ( v4 == -1 )
  {
    set_qerrno(1u);
    return (unsigned int)-1;
  }
  else
  {
    v5 = v4;
    if ( (unsigned int)sub_C1BB0(v4, a2 & 0xBF, *((_DWORD *)qword_116390 + v3)) )
    {
      v6 = close(v5);
      v5 = -1;
      if ( v6 == -1 )
        set_qerrno(1u);
    }
  }
  return v5;
}
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
// 116390: using guessed type __int64 qword_116390[2];
// 158B40: using guessed type __int64 under_debugger;
