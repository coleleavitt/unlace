bool __fastcall sub_566520(__m128i *a1, unsigned __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5, int a6, char a7)
{
  unsigned __int64 v8; // rbp
  int v9; // ebx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v13; // r14
  int v15; // esi
  unsigned __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int32 v19; // eax
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v28; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v30; // [rsp+2Ch] [rbp-7Ch] BYREF
  unsigned __int8 v31; // [rsp+2Dh] [rbp-7Bh]
  char v32; // [rsp+2Eh] [rbp-7Ah]
  __m128i v33; // [rsp+30h] [rbp-78h] BYREF
  __m128i v34; // [rsp+40h] [rbp-68h] BYREF
  __m128i v35; // [rsp+50h] [rbp-58h] BYREF
  __int64 v36; // [rsp+60h] [rbp-48h]
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v8 = a2;
  v9 = a6;
  v37 = __readfsqword(0x28u);
  v30 = a4;
  v31 = a3;
  v32 = 0;
  while ( 1 )
  {
    v11 = a1[3].m128i_i64[0];
    v33 = _mm_loadu_si128(a1);
    v12 = _mm_loadu_si128(a1 + 1);
    v36 = v11;
    v34 = v12;
    v35 = _mm_loadu_si128(a1 + 2);
    v13 = sub_565F30((unsigned __int64 *)a1, &v30, v8, nullptr);
    if ( v9 == a6 )
    {
      if ( a2 != v13 )
        return 0;
    }
    else if ( a7 )
    {
      v10 = *(_QWORD *)(*a5 + 144LL * (v9 - 1));
      if ( v10 < v13 )
        return 0;
      if ( v13 < v10 )
        return 1;
    }
    v8 = v13 + v31;
    if ( v9 == a5[1] || !(unsigned __int8)get_tinfo_details(*(_QWORD *)(*a5 + 144LL * v9 + 64), 14, &v30) || v30 != a4 )
      break;
    ++v9;
  }
  if ( a1[1].m128i_i64[0] )
  {
    if ( !a1->m128i_i64[1] || (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
      v15 = 8;
    else
      v15 = a1[1].m128i_i32[0];
    if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
    {
      v23 = a1->m128i_u64[1];
      if ( v23 )
      {
        if ( v8 < v23 )
        {
          if ( !under_debugger )
            interr(1138);
          BUG();
        }
        if ( v8 - v23 + ((v23 + v15 - 1) & -v15) < v8 )
          sub_561E80();
        v8 = v8 - v23 + ((v23 + v15 - 1) & -v15);
      }
      v24 = a1[2].m128i_i64[1];
      if ( v24 )
      {
        v25 = 8 * v24;
        v26 = 8 * v24;
        if ( v25 < v15 )
          v15 = v26;
      }
    }
    *(__m128i *)((char *)a1 + 8) = 0;
    v8 = (v8 + v15 - 1) & -v15;
  }
  a1->m128i_i64[0] = v8;
  v16 = v9 + 1;
  if ( v16 < a5[1] )
  {
    v28 = *(_QWORD *)(*a5 + 144 * v16);
    if ( v28 < v8 )
      goto LABEL_19;
    return 1;
  }
  v28 = 8LL * a5[3];
  if ( v28 >= v8 )
    return 1;
LABEL_19:
  v17 = v30;
  if ( (getinf(57) & 0xF) == 6 )
    return 0;
  if ( (getinf(67) & 0x80u) != 0LL )
    return 0;
  v18 = a1[1].m128i_i64[1];
  if ( v17 == v18 || !v18 || v16 >= a5[1] )
    return 0;
  v19 = v36;
  *a1 = _mm_load_si128(&v33);
  v20 = _mm_load_si128(&v34);
  a1[3].m128i_i32[0] = v19;
  a1[1] = v20;
  v21 = _mm_load_si128(&v35);
  v30 = a4;
  a1[2] = v21;
  v22 = sub_565F30((unsigned __int64 *)a1, &v30, v13, nullptr);
  return v28 >= v22 + v31;
}
