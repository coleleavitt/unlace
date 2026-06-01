__int64 __fastcall sub_2181540(__int64 a1, const __m128i *a2, _DWORD *a3)
{
  __int64 v3; // r12
  unsigned __int32 v6; // ebp
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int32 v11; // edx
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __m128i v13[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1].m128i_i64[0];
  if ( a3[1] == 0x8000000 )
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    v6 = _byteswap_ulong(a3[5]);
    v7 = _byteswap_ulong(a3[4]) + v3;
    sub_215DED0(v13, a2);
    v9 = __CFADD__(v7, v6);
    if ( (__CFADD__(v7, v6)
       || __CFADD__(v7, v6)
       || (v9 = v13[0].m128i_i64[0],
           v8 = v13[0].m128i_i64[0] + v13[0].m128i_i64[1],
           v7 + v6 > v13[0].m128i_i64[0] + v13[0].m128i_i64[1])
       || v13[0].m128i_i64[0] > v7)
      && (v10 = sub_2195B10(v13, a2, v9, v8), sub_2220500(&v12, 4, v10), v12) )
    {
      *(_QWORD *)a1 = v12;
      *(_BYTE *)(a1 + 16) |= 1u;
      return a1;
    }
    else
    {
      v11 = _byteswap_ulong(a3[5]);
      *(_QWORD *)a1 = a2[1].m128i_i64[0] + _byteswap_ulong(a3[4]);
      *(_QWORD *)(a1 + 8) = v11;
      *(_BYTE *)(a1 + 16) &= ~1u;
      return a1;
    }
  }
}
