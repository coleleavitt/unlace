__int64 __fastcall sub_20B52A0(__int64 *a1, _QWORD **a2, __int64 a3, int a4, char a5)
{
  __int64 v7; // r15
  int v9; // r14d
  __int64 v10; // r15
  __int64 v12; // [rsp+8h] [rbp-80h]
  __int64 v13; // [rsp+18h] [rbp-70h] BYREF
  __m128i v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  int v17; // [rsp+40h] [rbp-48h]

  if ( a4 )
  {
    v7 = sub_20B4330(16, a3, a4);
    sub_20B2FD0(v7, (__int64)a1, 5, a4, a2, a3, nullptr, 0);
    *(_DWORD *)(v7 + 4) = 0;
    v13 = v7;
    if ( a4 == 1 )
    {
      sub_20AC2A0((unsigned __int8 *)v7);
      return v13;
    }
  }
  else
  {
    v14.m128i_i64[0] = (__int64)a2;
    v14.m128i_i64[1] = a3;
    v15 = 0;
    v16 = 0;
    v17 = sub_2092640(a2, a3);
    v7 = sub_20AFD00(*a1 + 568, (__int64)&v14);
    if ( !v7 && a5 )
    {
      v9 = v17;
      v12 = *a1;
      v10 = sub_20B4330(16, a3, 0);
      sub_20B2FD0(v10, (__int64)a1, 5, 0, a2, a3, nullptr, 0);
      *(_DWORD *)(v10 + 4) = v9;
      v13 = v10;
      sub_20B5160(&v14, v12 + 568, &v13);
      return v13;
    }
  }
  return v7;
}
