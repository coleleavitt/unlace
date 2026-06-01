/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F988
// Address: 0x000000000048F988

//----- (000000000048F988) ----------------------------------------------------
unsigned __int64 __fastcall sub_48F988(unsigned __int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v6; // x20
  unsigned __int8 v8[4096]; // [xsp+48h] [xbp-1008h] BYREF

  v6 = (unsigned __int8 *)__realpath_chk(a3, v8, 4096, 0);
  if ( !v6 )
  {
    v6 = a3;
    if ( !sub_48F628(a3) )
    {
      sub_48F950((char *)v8, 0x1000u);
      v6 = v8;
      sub_48F278((char *)v8, 4096, v8, a3, 0);
    }
  }
  sub_4860D8(a1, v6, a2);
  return a1;
}
// 405B30: using guessed type __int64 __fastcall __realpath_chk(_QWORD, _QWORD, _QWORD, _QWORD);
