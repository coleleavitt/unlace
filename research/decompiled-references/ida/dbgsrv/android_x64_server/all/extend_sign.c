/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: extend_sign
// Address: 0x00000000000B19B0

//----- (00000000000B19B0) ----------------------------------------------------
__int64 __fastcall extend_sign(__int64 a1, int a2, char a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rsi

  if ( a2 <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1112);
    BUG();
  }
  if ( a2 <= 7 )
  {
    v3 = (unsigned int)(8 * a2 - 1);
    v4 = 1LL << (8 * (unsigned __int8)a2 - 1);
    v5 = 2 * v4 - 1;
    v6 = a1 | (-2 * v4);
    v7 = a1 & v5;
    if ( !a3 )
      v6 = v7;
    if ( !_bittest64(&a1, v3) )
      return v7;
    return v6;
  }
  return a1;
}
// 158B40: using guessed type __int64 under_debugger;
