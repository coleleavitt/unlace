__int64 __fastcall sub_82E820(const __m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  if ( a3 <= 1 || a3 == 10 )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 0x20) == 0 && a3 != 10 )
      return 0;
  }
  else
  {
    if ( a3 <= 7 )
    {
      result = 1;
      if ( a3 > 4 )
        return result;
    }
    if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 0x20) == 0 )
      return 0;
  }
  v9 = _mm_loadu_si128(a1);
  if ( (unsigned int)sub_69F3D0((__int64)&v9) || (~v9.m128i_i8[0] & 3) == 0 )
    return 1;
  if ( *(_DWORD *)(a2 + 856) != 1 )
    return 0;
  v5 = (_QWORD *)(a2 + 840);
  if ( (unsigned __int8)sub_69F550((_QWORD *)(a2 + 840), &v9) )
    return 1;
  if ( !v9.m128i_i64[0] )
    return 0;
  if ( (v9.m128i_i8[0] & 3) != 1 )
    return 0;
  v6 = v9.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v9.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_WORD *)v6 & 0x1FF) != 0x31 )
    return 0;
  v7 = *(_QWORD *)(v6 + 16);
  v8 = 0;
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  sub_69F1C0((__int64)v10, v8, 0, 0);
  return sub_69F550(v5, v10);
}

