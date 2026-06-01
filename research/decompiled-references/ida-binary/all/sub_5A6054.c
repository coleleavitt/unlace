void __fastcall sub_5A6054(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-30h]
  __int64 v7; // [rsp+20h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-18h]

  if ( a2 )
  {
    if ( a2 > a1[5] - a1[4] )
    {
      v7 = sub_5A6A6C(a1, a2, "vector::_M_default_append");
      sub_5A6030((__int64)a1);
      v6 = sub_5A6B36(a1, v7);
      v3 = sub_5A5FDC((__int64)a1);
      v8 = sub_5A6B69(a1[3], a1[4], v6, v3);
      v4 = sub_5A5FDC((__int64)a1);
      v9 = sub_5A69D9(v8, a2, v4);
      v5 = sub_5A5FDC((__int64)a1);
      sub_5A5FEA(a1[3], a1[4], v5);
      sub_5A6966(a1, a1[3], a1[5] - a1[3]);
      a1[3] = v6;
      a1[4] = v9;
      a1[5] = v7 + v6;
    }
    else
    {
      v2 = sub_5A5FDC((__int64)a1);
      a1[4] = sub_5A69D9(a1[4], a2, v2);
    }
  }
}
