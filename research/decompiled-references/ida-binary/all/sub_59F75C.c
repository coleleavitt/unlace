void __fastcall sub_59F75C(__int64 *a1, unsigned __int64 a2)
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
    if ( a2 > (a1[5] - a1[4]) >> 2 )
    {
      v7 = sub_59FD02(a1, a2, "vector::_M_default_append");
      sub_59BDEE((__int64)a1);
      v6 = sub_59DA64((__int64)a1, v7);
      v3 = sub_59C4EA((__int64)a1);
      v8 = sub_59FDCB(a1[3], a1[4], v6, v3);
      v4 = sub_59C4EA((__int64)a1);
      v9 = sub_59FC6F(v8, a2, v4);
      v5 = sub_59C4EA((__int64)a1);
      sub_59C4F8(a1[3], a1[4], v5);
      sub_59D192((__int64)a1, a1[3], (a1[5] - a1[3]) >> 2);
      a1[3] = v6;
      a1[4] = v9;
      a1[5] = v6 + 4 * v7;
    }
    else
    {
      v2 = sub_59C4EA((__int64)a1);
      a1[4] = sub_59FC6F(a1[4], a2, v2);
    }
  }
}
