__int64 __fastcall sub_955770(__m128i **a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128i *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rbx
  __m128i *v10; // rbp
  void (__fastcall ***v11)(__int64); // r14
  __int64 v12; // rdi
  __int64 v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  __m128i *v16; // rbp
  __m128i si128; // xmm3
  _OWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 (__fastcall *v21)(); // rax
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rax
  void (__fastcall ***v25)(_QWORD); // r14
  __int64 v26; // rbp
  __int64 v27; // rax
  void (__fastcall ***v28)(_QWORD); // r14
  __int64 v29; // rbp
  __int64 v30; // rbp
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  void (__fastcall ***v35)(_QWORD); // r14
  __int64 v36; // rbp
  void *v37; // r13
  __m128i v39[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (__m128i)(unsigned __int64)a1;
  v4 = *a1;
  v5 = (*a1)[74].m128i_i64[1];
  v6 = v4->m128i_u64[1];
  v7 = v4[1].m128i_i64[0];
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 24LL);
  v39[0] = _mm_unpacklo_epi64(v2, (__m128i)v6);
  if ( v8 == sub_955EE0 )
  {
    v9 = sub_186B270(0x50u);
    *(_QWORD *)v9 = &off_1C55E60;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 56) = 0;
    *(_QWORD *)(v9 + 64) = 0;
    *(_BYTE *)(v9 + 72) = 0;
    *(_OWORD *)(v9 + 24) = 0;
    *(_OWORD *)(v9 + 40) = 0;
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(__int64, __int64))v8)(v5, a2);
  }
  v10 = *a1;
  v11 = (void (__fastcall ***)(__int64))(*a1)[74].m128i_i64[1];
  if ( v11 )
  {
    (**v11)((*a1)[74].m128i_i64[1]);
    sub_186B220(v11);
  }
  v12 = v10[74].m128i_i64[0];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = v10[73].m128i_i64[0];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (void *)v10[71].m128i_i64[1];
  if ( v14 )
    sub_186B220(v14);
  v15 = (void *)v10[69].m128i_i64[0];
  if ( v15 )
    sub_186B220(v15);
  sub_9564E0(&v10[1].m128i_u64[1]);
  v16 = *a1;
  si128 = _mm_load_si128(v39);
  v16[1].m128i_i64[0] = v7;
  *v16 = si128;
  sub_ADB950(&v16[1].m128i_u64[1], a1, v6, v7 + 104);
  v18 = (_OWORD *)sub_186B270(0x80u);
  *v18 = 0;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  v18[4] = 0;
  v18[5] = 0;
  v18[6] = 0;
  v18[7] = 0;
  v19 = *(_QWORD *)(v6 + 104);
  v16[69].m128i_i64[0] = (__int64)v18;
  v16[69].m128i_i64[1] = 8;
  v16[70].m128i_i32[0] = 0;
  sub_15CD880(&v16[70].m128i_u64[1], v19, v6 + 8400);
  v16[74].m128i_i64[0] = 0;
  v16[74].m128i_i64[1] = v9;
  v16[75].m128i_i32[0] = 0;
  sub_ADACC0(&v16[1].m128i_u64[1]);
  v20 = *(_QWORD *)v9;
  *a1 = v16;
  v21 = *(__int64 (__fastcall **)())(v20 + 16);
  if ( v21 != sub_956300 )
    return ((__int64 (__fastcall *)(__int64, __m128i **))v21)(v9, a1);
  v22 = v16->m128i_i64[1];
  *(_QWORD *)(v9 + 24) = v22;
  *(__m128 *)(v9 + 8) = _mm_loadh_ps((const double *)(v22 + 112));
  v23 = *(_QWORD *)(v22 + 104);
  v24 = ((__int64 (*)(void))sub_B9C860)();
  v25 = *(void (__fastcall ****)(_QWORD))(v9 + 32);
  v26 = v24;
  if ( (void (__fastcall ***)(_QWORD))v24 != v25 )
  {
    if ( v25 )
    {
      (**v25)(*(_QWORD *)(v9 + 32));
      sub_186B220(v25);
    }
    *(_QWORD *)(v9 + 32) = v26;
  }
  v27 = sub_B9C860(*(_QWORD *)(v9 + 24));
  v28 = *(void (__fastcall ****)(_QWORD))(v9 + 40);
  v29 = v27;
  if ( (void (__fastcall ***)(_QWORD))v27 != v28 )
  {
    if ( v28 )
    {
      (**v28)(*(_QWORD *)(v9 + 40));
      sub_186B220(v28);
    }
    *(_QWORD *)(v9 + 40) = v29;
  }
  v30 = sub_186B270(0x80u);
  sub_AC7EF0(v30, v23, v31, v32, v33, v34, v39[0].m128i_i64[0]);
  v35 = *(void (__fastcall ****)(_QWORD))(v9 + 48);
  if ( (void (__fastcall ***)(_QWORD))v30 != v35 )
  {
    if ( v35 )
    {
      (**v35)(*(_QWORD *)(v9 + 48));
      sub_186B220(v35);
    }
    *(_QWORD *)(v9 + 48) = v30;
  }
  v36 = sub_186B270(0xB8u);
  sub_ADEB60(v36, v23, *(_QWORD *)(v9 + 16) + 104LL, *(_QWORD *)(v9 + 48));
  v37 = *(void **)(v9 + 56);
  if ( (void *)v36 != v37 )
  {
    if ( v37 )
    {
      sub_ADEC40(*(_QWORD *)(v9 + 56));
      sub_186B220(v37);
    }
    *(_QWORD *)(v9 + 56) = v36;
  }
  sub_AC7950(*(_QWORD *)(v9 + 48), *(_QWORD *)(v9 + 24));
  return sub_ADEE50(*(_QWORD *)(v9 + 56), a1);
}

