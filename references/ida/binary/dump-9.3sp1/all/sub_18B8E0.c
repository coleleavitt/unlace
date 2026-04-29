__int64 __fastcall sub_18B8E0(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // r12
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __m128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  _QWORD v31[5]; // [rsp+10h] [rbp-98h] BYREF
  char v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  __m128 v35; // [rsp+50h] [rbp-58h]
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v2 = a1[1] + 216LL * a2[4].m128i_i32[2];
  if ( !*(_BYTE *)(v2 + 208) )
  {
    *(_BYTE *)(v2 + 208) = 1;
    *(_QWORD *)v2 = a2;
    v4 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2[4].m128i_i64[0] + 1472) + 40 * a2[32].m128i_i64[0] + 8));
    *(_QWORD *)(v2 + 200) = _mm_add_epi64(v4, _mm_srli_si128(v4, 8)).m128i_u64[0];
    *(_QWORD *)(v2 + 192) = a2[32].m128i_i64[0];
    v5 = a2[22].m128i_i64[0];
    if ( (int)v5 > 0 )
    {
      v6 = 0;
      v7 = 4LL * (unsigned int)(v5 - 1) + 4;
      while ( 1 )
      {
        v8 = *(unsigned int *)(a2[21].m128i_i64[1] + v6);
        if ( (unsigned int)v8 >= *(_DWORD *)(*a1 + 64LL) )
          break;
        v9 = sub_18B8E0(a1, *(_QWORD *)(*(_QWORD *)(*a1 + 528LL) + 8 * v8));
        v10 = *(_QWORD *)(v2 + 24);
        v11 = *(_QWORD *)(v2 + 32);
        v12 = v9;
        v13 = (__int64 *)(v10 + 8 * v11);
        if ( (__int64 *)v10 == v13 )
          goto LABEL_9;
        v14 = *(__int64 **)(v2 + 24);
        while ( v12 != *v14 )
        {
          if ( v13 == ++v14 )
            goto LABEL_9;
        }
        if ( v13 == v14 )
        {
LABEL_9:
          v15 = v11 + 1;
          if ( *(_QWORD *)(v2 + 40) < v15 )
          {
            v24 = qvector_reserve(v2 + 24, v10, v15, 8);
            v25 = *(_QWORD *)(v2 + 32);
            *(_QWORD *)(v2 + 24) = v24;
            v13 = (__int64 *)(v24 + 8 * v25);
          }
          *v13 = v12;
          ++*(_QWORD *)(v2 + 32);
        }
        v6 += 4;
        if ( v7 == v6 )
          goto LABEL_13;
      }
      if ( !under_debugger )
        sub_383060(52719);
LABEL_35:
      BUG();
    }
LABEL_13:
    v16 = a2[4].m128i_i64[0];
    memset(&v31[1], 0, 32);
    v32 = 0;
    v33 = v2;
    v34 = 0;
    v17 = _mm_loadh_ps((const double *)(v16 + 128));
    v31[0] = &off_4DE108;
    v35 = v17;
    sub_11F5B0(a2, (__int64)v31);
    v18 = *(_QWORD *)v2;
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 64LL) + 144LL);
    if ( v19 > *(_QWORD *)(v2 + 176) )
      v19 = *(_QWORD *)(v2 + 176);
    if ( v19 )
    {
      do
      {
        if ( !(unsigned __int8)sub_317040(v2 + 128, v19) )
          break;
        --v19;
      }
      while ( v19 );
      v18 = *(_QWORD *)v2;
    }
    v20 = *(_QWORD *)(v2 + 168);
    *(_QWORD *)(v2 + 176) = v19;
    *(_QWORD *)(v18 + 336) = v20;
    v21 = *(_QWORD *)(v2 + 176);
    *(_QWORD *)(*(_QWORD *)v2 + 328LL) = v21;
    *(_QWORD *)(*(_QWORD *)v2 + 520LL) = v21;
    v22 = *(_QWORD **)v2;
    if ( (*(_BYTE *)(*(_QWORD *)v2 + 26LL) & 4) == 0 )
      goto LABEL_21;
    v26 = *(_QWORD *)(v22[8] + 1472LL) + 40LL * v22[64];
    v27 = *(_QWORD *)(v2 + 200);
    v28 = *(_QWORD *)(v26 + 16);
    v29 = *(_QWORD *)(v26 + 8);
    if ( v28 && v27 >= v29 )
    {
      v30 = v29 + v28;
      if ( v30 - 1 >= v27 )
      {
LABEL_29:
        v22[65] = v27;
LABEL_21:
        sub_316CB0(a1 + 4, v2 + 128);
        return v2;
      }
    }
    else
    {
      v30 = v29 + v28;
    }
    if ( v27 != v30 )
    {
      if ( !under_debugger )
        sub_383060(52727);
      goto LABEL_35;
    }
    goto LABEL_29;
  }
  return v2;
}
