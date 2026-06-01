__int64 __fastcall sub_114C120(__int64 a1)
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
      sub_1148360(&v5, v3, (__int64)&v3[v2]);
    }
    else
    {
      v5.m128i_i64[1] = 0;
      v6[0] = 0;
    }
    sub_114AA50(v1, &v5);
    if ( (_BYTE *)v5.m128i_i64[0] != v6 )
      operator delete((void *)v5.m128i_i64[0]);
    sub_1149F30(a1);
    return v1;
  }
  return sub_114AEA0(a1);
}

