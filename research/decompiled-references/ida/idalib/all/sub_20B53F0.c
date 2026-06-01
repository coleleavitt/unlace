__int64 __fastcall sub_20B53F0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // [rsp+8h] [rbp-80h]
  __int64 v8; // [rsp+18h] [rbp-70h] BYREF
  __m128i v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+30h] [rbp-58h]
  __int64 v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+40h] [rbp-48h]

  v9.m128i_i64[0] = (__int64)a2;
  v9.m128i_i64[1] = a3;
  v10 = 0;
  v11 = 0;
  v12 = sub_2092640(a2, a3);
  result = sub_20AFD00(*a1 + 568, (__int64)&v9);
  if ( !result )
  {
    v5 = v12;
    v7 = *a1;
    v6 = sub_20B4330(16, a3, 0);
    sub_20B2FD0(v6, (__int64)a1, 5, 0, (_QWORD **)a2, a3, nullptr, 0);
    *(_DWORD *)(v6 + 4) = v5;
    v8 = v6;
    sub_20B5160(&v9, v7 + 568, &v8);
    return v8;
  }
  return result;
}
