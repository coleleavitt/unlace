__int64 __fastcall sub_193FF0(__int64 a1)
{
  __int64 v2; // rdi
  const __m128i *v3; // rax
  __int64 v4; // rdi
  __m128i *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v11; // rdi
  int v12; // [rsp+Ch] [rbp-8Ch] BYREF
  __m128i v13; // [rsp+10h] [rbp-88h] BYREF
  __m128i v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+58h] [rbp-40h]
  __int64 v20; // [rsp+60h] [rbp-38h]
  __int64 v21; // [rsp+68h] [rbp-30h]
  unsigned __int64 v22; // [rsp+78h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 232);
  if ( v2 )
  {
    v12 = -1;
    v3 = (const __m128i *)sub_1EA680(v2 + 384);
    v14.m128i_i64[0] = 0;
    v14.m128i_i64[1] = -1;
    v15 = 0;
    v16 = 0;
    v13 = 0;
    if ( v3 != &v13 )
    {
      v13 = _mm_loadu_si128(v3);
      v14 = _mm_loadu_si128(v3 + 1);
      LODWORD(v15) = v3[2].m128i_i32[0];
      v4 = v3[2].m128i_i64[1];
      if ( v4 )
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = &v13;
    if ( !(unsigned __int8)sub_1F9960(*(_QWORD *)(a1 + 232), &v13, 0, &v12) )
      goto LABEL_6;
    v11 = *(_QWORD *)(a1 + 232);
    v5 = (__m128i *)&v17;
    v18 = 0;
    v19 = -1;
    v20 = 0;
    v21 = 0;
    v17 = 0;
    if ( (unsigned int)sub_1EB7C0(v11, &v17, &v13, 0) == 1 )
    {
      v5 = (__m128i *)&v17;
      sub_1FFBB0(*(_QWORD *)(a1 + 232) + 384LL, &v17, (unsigned __int8)byte_8BA8E5);
    }
    if ( v21 )
    {
      qfree(v21, &v17, v6, v7, v8);
      v9 = v16;
      if ( !v16 )
        return 1;
    }
    else
    {
LABEL_6:
      v9 = v16;
      if ( !v16 )
        return 1;
    }
    qfree(v9, v5, v6, v7, v8);
    return 1;
  }
  return 0;
}
