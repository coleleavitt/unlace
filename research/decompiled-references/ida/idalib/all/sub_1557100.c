__int64 __fastcall sub_1557100(const __m128i *a1, double a2, __m128 a3)
{
  __int16 v3; // dx
  __int64 v5; // rdi
  __int64 m128i_i64; // rax
  __int16 v7; // cx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 v16; // dx
  __int64 result; // rax
  char v18; // dl
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int16 v29; // cx
  unsigned __int16 v30; // cx
  __int64 v31; // rdi
  unsigned __int64 v32; // rax

  v3 = a1[2].m128i_i16[0];
  v5 = a1->m128i_i64[1];
  if ( v3 == 129 )
  {
    v23 = *(_QWORD *)(v5 + 2944);
    if ( *(unsigned int *)(v5 + 2912) <= v23 )
      v24 = sub_14180A0(v5, 1u);
    else
      v24 = *(_QWORD *)(v5 + 2904) + 24 * v23;
    v25 = (unsigned int)*(unsigned __int16 *)(v24 + 16) - 5;
    if ( (unsigned __int16)v25 <= 0x3Du )
    {
      v26 = 0x2801800000400000LL;
      if ( _bittest64(&v26, v25) )
        return 0;
      if ( !(_WORD)v25 && a1[2].m128i_i16[0] != 1 )
      {
        v27 = a1->m128i_i64[1];
        v28 = *(_QWORD *)(v27 + 2944) + 1LL;
        v29 = v28 >= *(unsigned int *)(v27 + 2912)
            ? *(_WORD *)(sub_14180A0(v27, 2u) + 16)
            : *(_WORD *)(*(_QWORD *)(v27 + 2904) + 24 * v28 + 16);
        v30 = v29 - 52;
        if ( v30 <= 0xEu && ((1LL << v30) & 0x5003) != 0 )
          return 0;
      }
    }
    return 1;
  }
  if ( *(char *)(*(_QWORD *)(v5 + 56) + 1LL) < 0 )
  {
    v18 = sub_1556F60(a1, a2, a3);
    result = 3;
    if ( v18 )
      return result;
    v3 = a1[2].m128i_i16[0];
    m128i_i64 = (__int64)a1[1].m128i_i64;
    v7 = v3;
    if ( v3 != 416 )
      goto LABEL_4;
  }
  else
  {
    m128i_i64 = (__int64)a1[1].m128i_i64;
    v7 = v3;
    if ( v3 != 416 )
      goto LABEL_4;
  }
  v19 = a1->m128i_i64[1];
  v20 = *(_QWORD *)(v19 + 2944);
  if ( v20 < *(unsigned int *)(v19 + 2912) )
  {
    v21 = *(_QWORD *)(v19 + 2904) + 24 * v20;
    if ( *(_WORD *)(v21 + 16) != 418 )
      return 1;
    v22 = *(_QWORD *)(v21 + 8);
    v9 = 2;
    v8 = 1;
    if ( *(_DWORD *)(v22 + 32) != 6 )
      return 1;
    goto LABEL_9;
  }
  m128i_i64 = sub_14180A0(v19, 1u);
  v7 = a1[2].m128i_i16[0];
  v3 = *(_WORD *)(m128i_i64 + 16);
LABEL_4:
  if ( v3 != 418 || *(_DWORD *)(*(_QWORD *)(m128i_i64 + 8) + 32LL) != 6 )
    goto LABEL_14;
  if ( v7 == 416 )
  {
    v8 = 1;
    v9 = 2;
  }
  else
  {
    if ( v7 == 1 )
      return 0;
    v8 = 0;
    v9 = 1;
  }
LABEL_9:
  v10 = a1->m128i_i64[1];
  v11 = *(_QWORD *)(v10 + 2944) + v8;
  if ( v11 >= *(unsigned int *)(v10 + 2912) )
    v12 = *(_WORD *)(sub_14180A0(v10, v9) + 16);
  else
    v12 = *(_WORD *)(*(_QWORD *)(v10 + 2904) + 24 * v11 + 16);
  if ( v12 != 163 && v12 != 76 )
    return 0;
  v7 = a1[2].m128i_i16[0];
LABEL_14:
  if ( v7 != 151 && v7 != 105 )
    return 1;
  v13 = a1->m128i_i64[1];
  v14 = *(_QWORD *)(v13 + 2944);
  if ( v14 >= *(unsigned int *)(v13 + 2912) )
    v15 = sub_14180A0(v13, 1u);
  else
    v15 = *(_QWORD *)(v13 + 2904) + 24 * v14;
  v16 = *(_WORD *)(v15 + 16);
  if ( v16 == 5 )
  {
    result = 1;
    if ( a1[2].m128i_i16[0] == 1 )
      return result;
    v31 = a1->m128i_i64[1];
    v32 = *(_QWORD *)(v31 + 2944) + 1LL;
    if ( v32 >= *(unsigned int *)(v31 + 2912) )
      v16 = *(_WORD *)(sub_14180A0(v31, 2u) + 16);
    else
      v16 = *(_WORD *)(*(_QWORD *)(v31 + 2904) + 24 * v32 + 16);
  }
  if ( v16 == 64 )
    return 0;
  if ( v16 > 0x40u )
  {
    if ( v16 != 105 )
    {
      if ( v16 <= 0x69u )
        return v16 != 66;
      result = 0;
      if ( v16 != 129 )
        return v16 != 151;
      return result;
    }
    return 0;
  }
  result = 0;
  if ( v16 != 27 )
  {
    result = 1;
    if ( v16 >= 0x1Bu )
      return (unsigned __int16)(v16 - 52) > 1u;
  }
  return result;
}
