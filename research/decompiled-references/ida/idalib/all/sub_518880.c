__int64 __fastcall sub_518880(__int64 a1, unsigned __int64 a2, signed int a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v6; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // r15
  __int64 v14; // rdi
  unsigned __int64 *v15; // rdx
  char merge_state; // al
  const __m128i *v17; // rdx
  unsigned __int64 *v18; // rax
  __int64 v19; // rax
  __m128 v20; // xmm0
  unsigned __int64 *v21; // rax
  __int64 v22; // rsi
  bool v23; // zf
  unsigned __int64 v24; // rdx
  __int64 v26; // rax
  unsigned __int64 *v27; // rax
  _BYTE *v28; // rax
  unsigned __int64 v29; // r10
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // r10
  __int64 v32; // rdi
  char *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  char *v36; // r9
  _QWORD *v37; // rcx
  __m128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 *v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __m128i *v44; // rsi
  __m128i si128; // xmm0
  __int64 v46; // rax
  const __m128i *v47; // [rsp+8h] [rbp-90h]
  __int64 v48; // [rsp+8h] [rbp-90h]
  void *src[2]; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v50; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v51; // [rsp+28h] [rbp-70h] BYREF
  __m128i v52; // [rsp+30h] [rbp-68h] BYREF
  __m128i v53; // [rsp+40h] [rbp-58h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v6 = a5;
  v54 = __readfsqword(0x28u);
  if ( (get_merge_state(a1, a2) & 2) != 0 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a1 + 152) )
    {
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    v11 = a3 - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL);
    if ( v11 >= *(_QWORD *)(a1 + 40) )
      sub_5144F0();
    v12 = v11 << 6;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + v12 + 56) = a3;
    v14 = v12 + *(_QWORD *)(a1 + 32);
    v13 = (__int64 *)v14;
    v15 = sub_5168B0((unsigned __int64 **)v14, a2);
    if ( v15 == (unsigned __int64 *)(*v13 + 33 * v13[1]) )
      return 4294967294LL;
    if ( a2 < *v15 )
      return 4294967294LL;
    if ( a2 >= v15[1] )
      return 4294967294LL;
    v47 = (const __m128i *)v15;
    if ( !v15 )
      return 4294967294LL;
    merge_state = get_merge_state(v14, a2);
    v17 = v47;
    if ( (merge_state & 2) == 0 )
    {
      if ( (_BYTE)v6 == 2 )
        goto LABEL_15;
      if ( v47[1].m128i_i8[8] == 2 && v47->m128i_i64[0] == a2 )
        return 1;
    }
    if ( (_BYTE)v6 == 3 && a4 == -1 )
    {
      v18 = sub_505D70(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 1624LL, a2);
      v17 = v47;
      if ( v18 )
        a4 = v18[a3 - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) + 7];
    }
LABEL_15:
    v19 = v17[1].m128i_i64[0];
    v52 = _mm_loadu_si128(v17);
    v48 = v19;
    v53 = _mm_loadu_si128(v17 + 1);
    v20 = (__m128)_mm_loadu_si128(v17);
    _mm_storeh_ps((double *)&v50, v20);
    if ( a2 == v20.m128_u64[0] )
    {
      *(__m128 *)src = v20;
      v41 = (__int64 *)sub_5168B0((unsigned __int64 **)v14, a2);
      if ( v41 != (__int64 *)(*(_QWORD *)v14 + 33LL * *(_QWORD *)(v14 + 8)) && a2 >= *v41 )
      {
        v42 = v41[1];
        if ( a2 == *v41 && a2 < v42 && v50 == v42 )
        {
          v43 = *(unsigned int *)(v14 + 56);
          v51 = v41;
          sub_514ED0(v43, v41, a4, v6);
          v44 = (__m128i *)v51;
          si128 = _mm_load_si128((const __m128i *)src);
          v51[2] = a4;
          v44[1].m128i_i8[8] = v6;
          v44[2].m128i_i8[0] = 1;
          *v44 = si128;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v51 = (__int64 *)v17->m128i_i64[1];
      v21 = sub_5168B0((unsigned __int64 **)v14, a2);
      if ( v21 != (unsigned __int64 *)(*(_QWORD *)v14 + 33LL * *(_QWORD *)(v14 + 8)) )
      {
        v22 = *v21;
        v23 = a2 == *v21;
        if ( a2 >= *v21 )
        {
          src[0] = v21;
          v24 = v21[1];
          if ( !v23 && a2 < v24 )
          {
            sub_5154D0(*(unsigned int *)(v14 + 56), v22, v24, a2);
            v28 = src[0];
            v29 = v50;
            *((_QWORD *)src[0] + 1) = a2;
            v28[32] = 1;
            if ( a2 < v29 )
            {
              v30 = sub_5168B0((unsigned __int64 **)v14, a2);
              if ( v30 == (unsigned __int64 *)(*(_QWORD *)v14 + 33LL * *(_QWORD *)(v14 + 8)) || a2 < *v30 && *v30 >= v31 )
              {
                v32 = *(unsigned int *)(v14 + 56);
                src[0] = v30;
                v52.m128i_i64[0] = a2;
                v53.m128i_i64[0] = a4;
                v53.m128i_i8[8] = v6;
                sub_514A20(v32, v52.m128i_i64, 183);
                v33 = (char *)src[0];
                v34 = *v13;
                v35 = v13[1];
                v36 = (char *)src[0] - *v13;
                if ( v13[2] < (unsigned __int64)(v35 + 1) )
                {
                  src[0] = (char *)src[0] - *v13;
                  v46 = qvector_reserve(v13, v34, v35 + 1, 33);
                  v36 = (char *)src[0];
                  *v13 = v46;
                  v33 = &v36[v46];
                  v35 = v13[1];
                }
                src[0] = v33;
                memmove(v33 + 33, v33, 33 * v35 - (_QWORD)v36);
                v37 = src[0];
                *(_OWORD *)src[0] = 0;
                v38 = _mm_loadh_ps((const double *)&v51);
                v37[2] = 0;
                *((_BYTE *)v37 + 24) = 0;
                *((_BYTE *)v37 + 32) = 0;
                v13[3] = (__int64)v37;
                ++v13[1];
                v37[2] = a4;
                *((_BYTE *)v37 + 24) = v6;
                *(__m128 *)v37 = v38;
                *(_BYTE *)(v13[3] + 32) = 1;
LABEL_39:
                if ( a4 == v48 )
                  return 1;
                v39 = *(_QWORD *)(a1 + 8);
                if ( !*(_DWORD *)(v39 + 4) )
                {
                  if ( (unsigned __int8)getinf_flag(3, 2) )
                  {
LABEL_44:
                    sub_39ADA0(0x30u, a2, v50, (unsigned int)a3, a4, v48, v6);
                    return 1;
                  }
                  v39 = *(_QWORD *)(a1 + 8);
                }
                if ( (*(_BYTE *)(v39 + 9) & 0x40) != 0 || (v40 = sel2para(v48), v40 != sel2para(a4)) )
                  auto_mark_range(a2, v50, 40);
                goto LABEL_44;
              }
            }
          }
        }
      }
    }
    return 4294967294LL;
  }
  if ( !(unsigned __int8)is_mapped(a2) )
    return 1;
  v26 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v26 + 8) & 1) == 0 )
    return 1;
  if ( a3 < *(_DWORD *)(v26 + 68) || a3 > *(_DWORD *)(v26 + 72) || *(_DWORD *)(v26 + 80) == a3 )
    return 0xFFFFFFFFLL;
  if ( (get_flags_ex(a2, 4) & 0x600) != 0x200 )
  {
    if ( a5 == 3 && a2 )
    {
      v27 = sub_505D70(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 1624LL, a2 - 1);
      if ( v27 && v27[1] == a2 )
        return 1;
    }
    else if ( a5 != 4 )
    {
      goto LABEL_2;
    }
    v6 = 3;
    goto LABEL_2;
  }
  return 0;
}
