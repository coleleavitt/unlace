/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448E10
// Address: 0x0000000000448E10

//----- (0000000000448E10) ----------------------------------------------------
__int64 __fastcall sub_448E10(__int64 *a1, int a2)
{
  __int64 *v3; // x0
  int v4; // w1

  v3 = sub_448A08(a1, 0);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int8 *)v3;
  if ( v4 == 2 || v4 == 9 )
  {
    v3[1] += a2;
    return 1;
  }
  else
  {
    if ( v4 != 3 )
    {
      sub_4869C8(61);
      return 0;
    }
    sub_487E08((__int64)(v3 + 1), (__int64)&qword_4DE310, v3 + 1, a2 < 0);
    return 1;
  }
}
// 4DE310: using guessed type __int64 qword_4DE310;
