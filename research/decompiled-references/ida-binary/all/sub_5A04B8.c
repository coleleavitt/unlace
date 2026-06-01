__int64 __fastcall sub_5A04B8(_QWORD *a1)
{
  __int64 v2; // r12
  void (__fastcall *v3)(__int64, __int64, _QWORD, __int64, __int64); // rbx
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // [rsp+10h] [rbp-60h] BYREF
  __int64 v8[2]; // [rsp+18h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-48h]
  unsigned __int64 v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-38h]
  unsigned __int64 v12; // [rsp+40h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-28h]

  if ( !a1[2] || !a1[20] )
    return 0;
  v13 = *(_QWORD *)(a1[20] + 16LL);
  v12 = *(_QWORD *)(a1[20] + 24LL);
  v11 = sub_5AEEA4(a1[2]);
  v10 = sub_5AEEBA(a1[2]);
  if ( v10 >= v13 && v10 < v12 )
    return 1;
  if ( (unsigned __int8)sub_59B1AC(a1[4], v8, &v7, v11) != 1 )
    return 0;
  v9 = sub_5A304E(a1, (unsigned int)v7);
  v2 = a1[4];
  v3 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 64LL);
  v4 = v7;
  v5 = v8[0];
  v6 = sub_5A3080(a1);
  v3(v2, v9, v6, v5, v4);
  v8[1] = v11 - v8[0];
  return sub_59B600(a1[4], v9, v7, v11 - v8[0], a1[20]);
}
