/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qread
// Address: 0x00000000000C1D90

//----- (00000000000C1D90) ----------------------------------------------------
__int64 __fastcall qread(int a1, void *a2, signed __int64 a3)
{
  unsigned int v4; // r14d

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v4 = read(a1, a2, a3);
  if ( v4 != a3 )
    set_qerrno(2 * (v4 != -1) + 1);
  return v4;
}
// 158B40: using guessed type __int64 under_debugger;
