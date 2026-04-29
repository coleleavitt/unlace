__int64 __fastcall sub_26E1C0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  char tinfo_details; // al
  const __m128i *v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  const __m128i *v11; // rcx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rsi
  const __m128i *v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r15
  const __m128i *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v21; // eax
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // r13
  __int64 tinfo_size; // r15
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  char tinfo_property; // al
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 *v43; // [rsp+0h] [rbp-88h]
  __int64 v44; // [rsp+0h] [rbp-88h]
  const __m128i *v45; // [rsp+0h] [rbp-88h]
  int v46; // [rsp+8h] [rbp-80h]
  const __m128i *v47; // [rsp+10h] [rbp-78h] BYREF
  __int128 v48; // [rsp+18h] [rbp-70h]
  __int128 v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+38h] [rbp-50h]
  int v51; // [rsp+40h] [rbp-48h]
  unsigned __int64 v52; // [rsp+48h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( !a1[8] )
    return 0;
  v3 = a1[11] - a1[12];
  if ( v3 < 0 )
    return 0;
  if ( *(_DWORD *)(a2 + 8) != 52
    || (v5 = *(_QWORD *)(a2 + 24), *(_DWORD *)(v5 + 8) != 65)
    || (v23 = *(_QWORD *)(*(_QWORD *)(a1[1] + 64LL) + 8LL),
        v24 = get_tinfo_property(*(_QWORD *)(v5 + 48), 2),
        (v24 & 0xFu) > 0xA)
    && (v24 & 0x3F) != 0x2D )
  {
    if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x3F) == 0xD )
    {
      v6 = *(_QWORD *)(a2 + 48);
      v51 = 1;
      v47 = nullptr;
      v50 = 0;
      v48 = 0;
      v49 = 0;
      tinfo_details = get_tinfo_details(v6, 13, &v47);
      v8 = v47;
      if ( tinfo_details )
      {
        v9 = v48;
        v10 = 8 * v3;
        v11 = v47;
        v12 = 0;
        if ( !(_QWORD)v48 )
        {
          if ( !v47 )
            return 0;
LABEL_69:
          qfree(v8);
          return 0;
        }
        while ( 1 )
        {
          v13 = _mm_loadu_si128(v11);
          v14 = v12++;
          if ( _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0] >= v10 )
            break;
          v11 += 9;
          if ( (_QWORD)v48 == v12 )
            goto LABEL_58;
        }
        if ( v14 + 1 >= (unsigned __int64)v48 )
        {
LABEL_58:
          v16 = 0;
          if ( v47 )
            goto LABEL_22;
          return 0;
        }
        v15 = &v47[9 * v14 + 9];
        if ( v14 )
        {
          v39 = _mm_loadu_si128(v15 - 9);
          if ( v10 < _mm_add_epi64(v39, _mm_srli_si128(v39, 8)).m128i_u64[0] )
          {
            v45 = &v47[9 * v14 + 9];
            tinfo_property = get_tinfo_property(v15[-5].m128i_i64[0], 2);
            v8 = v47;
            if ( (tinfo_property & 0xF) == 0xB )
              goto LABEL_20;
            v9 = v48;
            v15 = v45;
          }
        }
        while ( !v15->m128i_i64[1] && &v15[9] < &v8[9 * v9] )
          v15 += 9;
        if ( v10 != v15->m128i_i64[0] )
        {
          v43 = (__int64 *)v15;
          if ( (get_tinfo_property(v15[4].m128i_i64[0], 2) & 0xF) != 0xB )
          {
            v8 = v47;
            goto LABEL_20;
          }
          v41 = j__qalloc_or_throw(64);
          *(_QWORD *)v41 = -1;
          v42 = v41;
          *(_DWORD *)(v41 + 8) = 0;
          *(_QWORD *)(v41 + 48) = 0;
          *(_QWORD *)(v41 + 12) = -1;
          *(_DWORD *)(v41 + 56) = 0;
          sub_257370(v41, a2);
          v16 = j__qalloc_or_throw(64);
          *(_QWORD *)(v16 + 12) = -1;
          *(_QWORD *)v16 = -1;
          *(_DWORD *)(v16 + 8) = 59;
          *(_QWORD *)(v16 + 24) = v42;
          *(_QWORD *)(v16 + 32) = 0;
          *(_QWORD *)(v16 + 40) = 0;
          *(_QWORD *)(v16 + 48) = 0;
          *(_DWORD *)(v16 + 56) = 0;
          *(_DWORD *)(v16 + 32) = (unsigned __int64)*v43 >> 3;
          copy_tinfo_t(v16 + 48, v43 + 8);
          v8 = v47;
          v3 -= *(unsigned int *)(v16 + 32);
          if ( !v47 )
            goto LABEL_29;
          v9 = v48;
          if ( (_QWORD)v48 )
            goto LABEL_22;
          goto LABEL_28;
        }
        if ( !v8 )
          return 0;
        v16 = 0;
        if ( !v9 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(v8);
          return 0;
        }
LABEL_22:
        v17 = 0;
        do
        {
          v18 = &v8[9 * v17];
          clear_tinfo_t(&v18[4]);
          v19 = v18[2].m128i_i64[1];
          if ( v19 )
          {
            v18[3].m128i_i64[0] = 0;
            qfree(v19);
          }
          v20 = v18[1].m128i_i64[0];
          if ( v20 )
          {
            v18[1].m128i_i64[1] = 0;
            qfree(v20);
          }
          ++v17;
          v8 = v47;
        }
        while ( v17 != v9 );
LABEL_28:
        *(_QWORD *)&v48 = 0;
        qfree(v8);
        goto LABEL_29;
      }
LABEL_20:
      if ( v8 )
      {
        v9 = v48;
        v16 = 0;
        if ( !(_QWORD)v48 )
          goto LABEL_69;
        goto LABEL_22;
      }
    }
    return 0;
  }
  v25 = *(_QWORD *)(a2 + 24);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v25 + 48), 0);
  v27 = *(_QWORD *)(*(_QWORD *)(v25 + 24) + 432LL) + 104LL * *(int *)(v25 + 32);
  if ( *(_DWORD *)v27 != 1 )
    return 0;
  v28 = *(_QWORD *)(v27 + 8) + *(int *)(v27 + 88);
  v29 = 0x7FFFFFFF;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 1496) + 24LL) + 24LL) == 8 )
    v29 = 0x7FFFFFFFFFFFFFFFLL;
  v30 = *(_QWORD *)(v23 + 432);
  v31 = v30 + 104LL * *(_QWORD *)(v23 + 440);
  if ( v30 == v31 )
    return 0;
  v32 = *(_QWORD *)(v23 + 432);
  v33 = -1;
  v34 = 0;
  do
  {
    if ( *(_DWORD *)v32 == 1 )
      v35 = *(_QWORD *)(v32 + 8);
    else
      v35 = -1;
    if ( v28 <= v35 && v35 < v29 )
    {
      v29 = v35;
      v33 = v34;
    }
    v32 += 104;
    ++v34;
  }
  while ( v31 != v32 );
  if ( v33 == -1 )
    return 0;
  v36 = v30 + 104 * v33;
  v37 = *(_DWORD *)v36 == 1 ? *(_QWORD *)(v36 + 8) : -1LL;
  if ( *(_QWORD *)(v23 + 136) <= v37 && v37 < *(_QWORD *)(v23 + 144) - *(int *)(v23 + 120) )
    return 0;
  v46 = v33;
  v44 = v30 + 104 * v33;
  if ( (get_tinfo_property(*(_QWORD *)(v36 + 80), 2) & 0xF) != 0xB )
    return 0;
  v38 = j__qalloc_or_throw(64);
  *(_QWORD *)(v38 + 32) = 0;
  v3 = v29 + v3 - tinfo_size - v28;
  v16 = v38;
  *(_QWORD *)v38 = -1;
  *(_QWORD *)(v38 + 12) = -1;
  *(_QWORD *)(v38 + 40) = 0;
  *(_QWORD *)(v38 + 48) = 0;
  *(_DWORD *)(v38 + 56) = 0;
  *(_DWORD *)(v38 + 8) = 65;
  *(_QWORD *)(v38 + 24) = v23;
  *(_DWORD *)(v38 + 32) = v46;
  copy_tinfo_t(v38 + 48, v44 + 80);
LABEL_29:
  if ( !v16 )
    return 0;
  v21 = get_tinfo_property(*(_QWORD *)(v16 + 48), 14);
  if ( v21 <= 0 || v3 % v21 )
  {
    sub_2519B0(v16);
    clear_tinfo_t(v16 + 48);
    j__qfree(v16);
    return 0;
  }
  *(_DWORD *)(v16 + 56) |= 1u;
  a1[12] = -v3;
  a1[11] = 0;
  return v16;
}
