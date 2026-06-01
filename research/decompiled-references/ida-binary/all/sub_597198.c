__int64 __fastcall sub_597198(_QWORD *a1, int a2)
{
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, _QWORD, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned int v7; // eax
  unsigned __int64 v8; // [rsp+10h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-38h]
  unsigned __int64 v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-28h]

  a1[15] = sub_5AEEA4(*a1);
  if ( (unsigned __int8)sub_59B1AC(a1[2], a1 + 14, a1 + 13, a1[15]) != 1 )
    return 1;
  if ( a2 >= 0 && a1[13] > (unsigned __int64)a2 )
    a1[13] = a2;
  a1[12] = sub_597FBA(a1, (unsigned int)a1[13]);
  v3 = a1[2];
  v4 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 64LL);
  v5 = a1[13];
  v6 = a1[14];
  v7 = sub_5983B2(v3);
  v4(v3, a1[12], v7, v6, v5);
  if ( *((_BYTE *)a1 + 32) != 1 )
    return 0;
  v11 = sub_59B77E(a1[2], a1[5]);
  if ( !v11 )
    return 2;
  v10 = *(_QWORD *)(v11 + 16);
  v9 = *(_QWORD *)(v11 + 24);
  v8 = sub_5AEEBA(*a1);
  if ( v10 <= v8 && v8 <= v9 )
    return 0;
  if ( (unsigned __int8)sub_59B600(a1[2], a1[12], a1[13], a1[15] - a1[14], v11) )
    return 0;
  return 2;
}
