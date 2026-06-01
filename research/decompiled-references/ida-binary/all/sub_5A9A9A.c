void __fastcall sub_5A9A9A(__int64 *a1, unsigned __int64 a2)
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
    if ( a2 > (a1[2] - a1[1]) >> 1 )
    {
      v7 = sub_5AA028(a1, a2, "vector::_M_default_append");
      sub_5A92A2(a1);
      v6 = sub_5AA0F2(a1, v7);
      v3 = sub_5A9D64(a1);
      v8 = sub_5AA125(*a1, a1[1], v6, v3);
      v4 = sub_5A9D64(a1);
      v9 = sub_5AA1AF(v8, a2, v4);
      v5 = sub_5A9D64(a1);
      sub_5A9D72(*a1, a1[1], v5);
      sub_5AA17A(a1, *a1, (a1[2] - *a1) >> 1);
      *a1 = v6;
      a1[1] = v9;
      a1[2] = v6 + 2 * v7;
    }
    else
    {
      v2 = sub_5A9D64(a1);
      a1[1] = sub_5AA1AF(a1[1], a2, v2);
    }
  }
}
