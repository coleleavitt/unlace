__int64 __fastcall sub_5A9070(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v8; // [rsp+10h] [rbp-30h] BYREF
  __int64 v9; // [rsp+18h] [rbp-28h]
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h]

  v9 = a1;
  v8 = a2;
  v10 = sub_5A9508(a1);
  v13 = sub_5A9538(&v8, &v10);
  v11 = sub_5A9020(v9);
  v4 = sub_5A9A5C(&v11, v13);
  sub_5A957A(v9, v4, a3, a4);
  v12 = sub_5A9020(v9);
  return sub_5A9A5C(&v12, v13);
}
