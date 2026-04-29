__int64 __fastcall sub_285B10(__int64 a1, __int64 a2)
{
  char v2; // r13
  const __m128i *v3; // rbx
  __int64 *v4; // r14
  unsigned int v5; // r12d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128d v12; // xmm0
  __m128i *v13; // r13
  int v14; // r8d
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  int radix; // eax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+30h] [rbp-40h] BYREF

  v2 = 0;
  v23[1] = __readfsqword(0x28u);
  v3 = (const __m128i *)a2;
  v4 = (__int64 *)sub_27A480(a2, 47);
  if ( (v4
     || (v16 = sub_27A480(a2, 36), (v4 = (__int64 *)v16) != nullptr)
     && (v17 = *(_QWORD *)(v16 + 32), *(_DWORD *)(v17 + 8) == 61)
     && (v2 = 1, sub_250E30(*(__int64 **)(v17 + 24), (_QWORD *)(v17 + 48)) == 1))
    && (v5 = sub_298080(v4[3] + 48), (_BYTE)v5) )
  {
    v22 = 0;
    copy_tinfo_t(&v22, a2 + 48);
    if ( *(__int64 **)(a2 + 32) == v4 )
      *(__m128 *)(a2 + 24) = _mm_loadh_ps((const double *)(a2 + 24));
    if ( *(_DWORD *)(a2 + 8) == 19 )
    {
      v7 = 1;
      v8 = -1;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    v9 = (_QWORD *)sub_23C350(*(_QWORD *)(a1 + 72), v8, 0, -1, 0, v7, 0);
    v10 = v3->m128i_i64[0];
    v3[2].m128i_i64[1] = (__int64)v9;
    *v9 = v10;
    v3->m128i_i32[2] = 16;
    if ( v2 )
    {
      if ( v4[4] )
      {
        v20 = v4[4];
        sub_250A30(v20);
        clear_tinfo_t(v20 + 48);
        j__qfree(v20);
      }
      v4[4] = 0;
      sub_250C50(v4, v4[3]);
      sub_23F5C0((__int64)v4, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    }
    else
    {
      sub_250C50(v4, v4[3]);
    }
    v11 = v3[2].m128i_i64[0];
    if ( *(_DWORD *)(v11 + 8) == 61 )
    {
      v23[0] = 39;
      if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v11 + 48), 39, 0)
        || (v21 = *(_QWORD *)(v3[2].m128i_i64[0] + 24),
            radix = get_radix(*(_QWORD *)(v21 + 40), (unsigned int)*(char *)(v21 + 12)),
            (unsigned __int8)sub_25C990(
                               (_QWORD *)v21,
                               *(_QWORD *)(a1 + 72),
                               *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
                               radix)) )
      {
        clear_tinfo_t(v23);
      }
      else
      {
        clear_tinfo_t(v23);
        v19 = v3[2].m128i_i64[0];
        v23[0] = 7;
        copy_tinfo_t(v19 + 48, v23);
        clear_tinfo_t(v23);
        sub_23F5C0((__int64)v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      }
    }
    if ( v2 != (_BYTE)v7 )
    {
      v12 = (__m128d)_mm_loadu_si128(v3 + 2);
      v3[2] = (const __m128i)_mm_shuffle_pd(v12, v12, 1);
    }
    v13 = *(__m128i **)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v14 = v13->m128i_i32[2];
    if ( (unsigned int)(v14 - 35) <= 1 )
    {
      v15 = v13[1].m128i_i64[1];
      if ( *(_DWORD *)(v15 + 8) == 61 || (v15 = v13[2].m128i_i64[0], *(_DWORD *)(v15 + 8) == 61) )
      {
        if ( v15 )
        {
          v3[2].m128i_i64[0] = sub_285990(*(_QWORD *)(a1 + 64), v3[2].m128i_i64[0], v15, v13->m128i_i64[0], v14);
          v3[2].m128i_i64[1] = sub_285990(
                                 *(_QWORD *)(a1 + 64),
                                 v3[2].m128i_i64[1],
                                 v15,
                                 v13->m128i_i64[0],
                                 v13->m128i_i32[2]);
          sub_23F5C0((__int64)v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          sub_250A30(v15);
          clear_tinfo_t(v15 + 48);
          j__qfree(v15);
          sub_250C50(v13->m128i_i64, (__int64)v3);
          *(_DWORD *)(a1 + 8) |= 8u;
          v3 = v13;
        }
      }
    }
    sub_23F5C0((__int64)v3, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned int)lexcompare_tinfo(v3[3].m128i_i64[0], v22, 0)
      && (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    {
      *(_DWORD *)(a1 + 8) |= 8u;
    }
    clear_tinfo_t(&v22);
  }
  else
  {
    return 0;
  }
  return v5;
}
