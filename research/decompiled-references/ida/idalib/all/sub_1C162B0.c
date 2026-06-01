unsigned __int64 __fastcall sub_1C162B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v5; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  _QWORD *v9; // [rsp+30h] [rbp-28h]

  a1[11] = sub_1C160F0((__int64)a1, *(_QWORD *)(a1[10] + 24LL));
  v2 = sub_1C160F0((__int64)a1, *(_QWORD *)(a1[10] + 32LL));
  v5 = a1;
  a1[12] = v2;
  v6[0] = sub_1C15420;
  v6[1] = &v5;
  v3 = a1[1];
  v8 = 0;
  v7 = v3;
  v9 = v6;
  return sub_1C15630((__int64)&v7, a2);
}
