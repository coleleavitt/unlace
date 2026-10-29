char __fastcall sub_81F8C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _BYTE *v11; // rax
  __m128i v12; // [rsp+0h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+10h] [rbp-28h] BYREF

  v12.m128i_i64[0] = a2;
  v12.m128i_i64[1] = a3;
  if ( (unsigned int)sub_69F3D0((__int64)&v12) || (~v12.m128i_i8[0] & 3) == 0 )
    return 1;
  v5 = *(_DWORD *)(a1 + 856);
  if ( v5 != 1 )
  {
    if ( v5 != 2 || a4 || !(unsigned __int8)sub_69F550(&v12, (_QWORD *)(a1 + 840)) )
      return 0;
    v13[0] = _mm_load_si128(&v12);
    v10 = sub_69F240((__int64 *)v13);
    if ( (v10 & 1) == 0 )
    {
      v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v11[8] & 1) == 0 )
        return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 42 <= 1;
    }
    return 1;
  }
  if ( (unsigned __int8)sub_69F550((_QWORD *)(a1 + 840), &v12) )
    return 1;
  if ( !v12.m128i_i64[0] )
    return 0;
  if ( (v12.m128i_i8[0] & 3) != 1 )
    return 0;
  v7 = v12.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v12.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_WORD *)v7 & 0x1FF) != 0x31 )
    return 0;
  v8 = *(_QWORD *)(v7 + 16);
  v9 = 0;
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  sub_69F1C0((__int64)v13, v9, 0, 0);
  return sub_69F550((_QWORD *)(a1 + 840), v13);
}

