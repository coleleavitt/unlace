__int64 __fastcall sub_FB6A0(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  const __m128i *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // r13d
  unsigned int v11; // r12d
  __int16 v12; // bp
  int v13; // eax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+20h] [rbp-38h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v2 = a1[1];
  v17 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 168LL))(a1, a2, *(unsigned int *)(v2 + 20));
  if ( !(_BYTE)v3 )
  {
    v5 = (const __m128i *)sub_15CFF0(a1[1] + 440LL);
    v9 = v5[2].m128i_i64[0];
    v10 = v5[1].m128i_i16[7];
    v14 = _mm_loadu_si128(v5);
    v16 = v9;
    v15 = _mm_loadu_si128(v5 + 1);
    if ( a2 )
    {
      if ( !(_WORD)v10 )
        return v3;
      if ( (*(_BYTE *)(a1[1] + 912LL) & 2) != 0 )
        v15.m128i_i16[6] = 0;
      v11 = 0;
      v12 = 0;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 128LL))(
              a1,
              1,
              v9,
              v6,
              v7,
              v8,
              v14.m128i_i64[0],
              v14.m128i_i64[1],
              v15.m128i_i64[0],
              v15.m128i_i64[1],
              v16);
      v11 = v13;
      if ( v13 == v10 )
        return v3;
      v12 = v13;
      if ( (*(_BYTE *)(a1[1] + 912LL) & 2) != 0 && sub_FAF70((__int64)a1, v13) )
        v15.m128i_i16[6] = tag_strlen();
    }
    v15.m128i_i16[7] = v12;
    return (unsigned int)sub_FB5C0((__int64)a1, v11, (__int64)&v14, 0);
  }
  return v3;
}

