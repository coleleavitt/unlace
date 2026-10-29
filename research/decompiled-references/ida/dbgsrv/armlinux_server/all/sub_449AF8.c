/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449AF8
// Address: 0x0000000000449AF8

//----- (0000000000449AF8) ----------------------------------------------------
__int64 __fastcall sub_449AF8(__int64 *a1)
{
  unsigned int v2; // w1
  __int64 result; // x0
  unsigned __int8 *v4; // x0
  __int64 v5; // x3
  unsigned __int8 *v6; // [xsp+20h] [xbp-20h] BYREF
  _QWORD v7[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( !a1 )
    return sub_4869C8(1531);
  while ( 1 )
  {
    v2 = *(unsigned __int8 *)a1;
    if ( v2 == 7 )
    {
      if ( a1[2] )
        v4 = (unsigned __int8 *)a1[1];
      else
        v4 = (unsigned __int8 *)&qword_4B2D48;
      v6 = v4;
      sub_488808(&v6, v7);
      sub_448310(a1);
      *(_BYTE *)a1 = 3;
      v5 = v7[1];
      a1[1] = v7[0];
      a1[2] = v5;
      return 0;
    }
    if ( v2 <= 7 )
      break;
    if ( v2 == 9 )
    {
      sub_4886D0(a1[1], (__int64)(a1 + 1));
      *(_BYTE *)a1 = 3;
      return 0;
    }
    if ( v2 != 10 )
      return sub_4869C8(1531);
    if ( !sub_448A08(a1, 2) )
      return sub_4869A0();
  }
  if ( v2 == 2 )
  {
    sub_488628(a1[1], (__int64)(a1 + 1));
    *(_BYTE *)a1 = 3;
    return 0;
  }
  else
  {
    result = 0;
    if ( v2 != 3 )
      return sub_4869C8(1531);
  }
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
