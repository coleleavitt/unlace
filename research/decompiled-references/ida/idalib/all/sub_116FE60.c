__int64 __fastcall sub_116FE60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx
  _BYTE *v3; // rsi
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+10h] [rbp-28h] BYREF

  v1 = a1 + 792;
  if ( *(_DWORD *)(a1 + 800) )
    return v1;
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    v3 = *(_BYTE **)(a1 + 112);
    v1 = a1 + 792;
    v5.m128i_i64[0] = (__int64)v6;
    if ( v3 )
    {
      sub_116C0A0(&v5, v3, (__int64)&v3[v2]);
    }
    else
    {
      v5.m128i_i64[1] = 0;
      v6[0] = 0;
    }
    sub_116E790(v1, &v5);
    if ( (_BYTE *)v5.m128i_i64[0] != v6 )
      operator delete((void *)v5.m128i_i64[0]);
    sub_116DC70(a1);
    return v1;
  }
  return sub_116EBE0(a1);
}
