bool __fastcall sub_BEBDD0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // eax
  __int64 v7; // rax
  _BYTE *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  _OWORD vars10[2]; // [rsp+10h] [rbp+10h] BYREF

  vars0.m128i_i64[0] = a2;
  vars0.m128i_i64[1] = a3;
  if ( (unsigned int)sub_A2B770((__int64)&vars0) || (vars0.m128i_i8[0] & 3) == 3 )
    return 1;
  v5 = *(_DWORD *)(a1 + 808);
  if ( v5 != 1 )
  {
    if ( v5 == 2 && !a4 && sub_A2B910(&vars0, (_QWORD *)(a1 + 792)) )
    {
      vars10[0] = _mm_load_si128(&vars0);
      v7 = sub_A2B5D0(vars10);
      if ( (v7 & 1) == 0 )
      {
        v8 = (_BYTE *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v8[8] & 1) == 0 )
          return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 <= 1;
      }
      return 1;
    }
    return 0;
  }
  if ( sub_A2B910((_QWORD *)(a1 + 792), &vars0) )
    return 1;
  if ( !vars0.m128i_i64[0] )
    return 0;
  if ( (vars0.m128i_i8[0] & 3) != 1 )
    return 0;
  v9 = vars0.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (vars0.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_WORD *)v9 & 0x1FF) != 0x30 )
    return 0;
  v10 = *(_QWORD *)(v9 + 16);
  v11 = 0;
  if ( (v10 & 4) != 0 )
    v11 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  sub_A2B560((__int64)vars10, v11, 0, 0);
  return sub_A2B910((_QWORD *)(a1 + 792), &vars0);
}

