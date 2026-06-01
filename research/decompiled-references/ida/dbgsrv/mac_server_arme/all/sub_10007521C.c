/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007521C
// Address: 0x000000010007521C

//----- (000000010007521C) ----------------------------------------------------
void __fastcall sub_10007521C(_QWORD *a1)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  *a1 = &off_10009EA38;
  qsem_free(a1[2]);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(a1);
}
// 100075264: variable '_18' is possibly undefined
// 10009EA38: using guessed type _UNKNOWN *off_10009EA38;
