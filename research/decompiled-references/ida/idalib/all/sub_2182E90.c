__int64 __fastcall sub_2182E90(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  __m128i v14[4]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a2[1].m128i_i64[0];
  if ( *(_DWORD *)(a3 + 4) == 0x8000000 )
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    v6 = _byteswap_uint64(*(_QWORD *)(a3 + 32));
    v7 = v4 + _byteswap_uint64(*(_QWORD *)(a3 + 24));
    sub_215DED0(v14, a2);
    v9 = __CFADD__(v7, v6);
    if ( (__CFADD__(v7, v6)
       || __CFADD__(v7, v6)
       || (v9 = v14[0].m128i_i64[0],
           v8 = v14[0].m128i_i64[0] + v14[0].m128i_i64[1],
           v7 + v6 > v14[0].m128i_i64[0] + v14[0].m128i_i64[1])
       || v14[0].m128i_i64[0] > v7)
      && (v10 = sub_2195B10(v14, a2, v9, v8), sub_2220500(&v13, 4, v10), v13) )
    {
      *(_QWORD *)a1 = v13;
      *(_BYTE *)(a1 + 16) |= 1u;
      return a1;
    }
    else
    {
      v11 = sub_2162D00(*(_QWORD *)(a3 + 32));
      v12 = a2[1].m128i_i64[0] + sub_2162D00(*(_QWORD *)(a3 + 24));
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = v12;
      *(_BYTE *)(a1 + 16) &= ~1u;
      return a1;
    }
  }
}
