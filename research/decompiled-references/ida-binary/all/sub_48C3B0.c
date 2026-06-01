unsigned __int64 __fastcall sub_48C3B0(__int64 a1, __m128i *a2, _QWORD *a3, double a4, double a5, __m128 a6)
{
  __m128i *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r15
  const char *v11; // rdx
  __int64 v12; // rsi
  __m128 v13; // xmm0
  __int64 v14; // r14
  __int64 *v15; // r10
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rsi
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  _QWORD *v26; // [rsp+8h] [rbp-120h]
  _QWORD *v28; // [rsp+20h] [rbp-108h]
  __int64 *v29; // [rsp+28h] [rbp-100h]
  __m128i v30; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-E8h]
  __m128 v32; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-B8h]
  __m128i v35; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+90h] [rbp-98h]
  __m128i v37; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-78h]
  __m128i v39; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-60h]
  __int64 v41; // [rsp+D0h] [rbp-58h]
  __m128i *v42; // [rsp+D8h] [rbp-50h]
  __int64 v43; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-40h]

  v6 = a2;
  v44 = __readfsqword(0x28u);
  v7 = a3;
  v42 = a2;
  v37 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v38 = 0;
  v39 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v8 = a3[1];
  v9 = *v7;
  v40 = 0;
  v41 = -1;
  v43 = a1;
  v10 = v9 + 24 * v8;
  if ( v9 == v10 )
    goto LABEL_26;
  v28 = v7;
  do
  {
    while ( 1 )
    {
      v11 = &s1;
      if ( *(_QWORD *)(v9 + 8) )
        v11 = *(const char **)v9;
      v12 = **(_QWORD **)(a1 + 208);
      v35 = (__m128i)-1LL;
      dirtree_make_cursor(&v35, v12, v11);
      v13 = (__m128)_mm_load_si128(&v35);
      v14 = v13.m128_u64[0];
      if ( v13.m128_u64[0] == -1 )
      {
        a6 = _mm_movehl_ps(a6, v13);
        if ( a6.m128_u64[0] )
          goto LABEL_22;
      }
      v32 = v13;
      sub_48B610((__int64)&v33, v43, (__int64 *)&v32);
      if ( (v33.m128i_i32[1] | v33.m128i_i32[0]) < 0 || !v34 )
        goto LABEL_22;
      if ( (v37.m128i_i32[1] | v37.m128i_i32[0]) >= 0 && v38 )
        break;
      v20 = _mm_load_si128(&v33);
      v40 = v34;
      v38 = v34;
      v39 = v20;
      v37 = v20;
LABEL_22:
      v9 += 24;
      if ( v10 == v9 )
        goto LABEL_16;
    }
    if ( v41 == v13.m128_u64[0] && v33.m128i_i32[0] == v39.m128i_i32[0] + 1 )
    {
      v39 = _mm_load_si128(&v33);
      v40 = v34;
      goto LABEL_22;
    }
    v15 = &v42->m128i_i64[1];
    if ( v40 )
    {
      v16 = *(_QWORD *)(v43 + 32);
      if ( (_DWORD)v16 == v39.m128i_i32[1] )
      {
        v25 = _mm_loadu_si128(&v39);
        v36 = v40;
        v35 = v25;
      }
      else
      {
        v29 = &v42->m128i_i64[1];
        (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v40 + 112LL))(
          &v35,
          v40,
          v39.m128i_u32[0],
          (unsigned int)v16,
          &v39);
        v15 = v29;
      }
    }
    else
    {
      v36 = 0;
      v35 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    }
    v9 += 24;
    QT::QItemSelection::select(v15, &v37, &v35);
    v17 = _mm_load_si128(&v33);
    v41 = v14;
    v38 = v34;
    v40 = v34;
    v37 = v17;
    v39 = v17;
  }
  while ( v10 != v9 );
LABEL_16:
  v6 = a2;
  v7 = v28;
  if ( (v37.m128i_i32[1] | v37.m128i_i32[0]) >= 0 && v38 )
  {
    v18 = &v42->m128i_i64[1];
    if ( v40 )
    {
      v19 = *(_QWORD *)(v43 + 32);
      if ( (_DWORD)v19 == v39.m128i_i32[1] )
      {
        v24 = _mm_loadu_si128(&v39);
        v36 = v40;
        v35 = v24;
      }
      else
      {
        (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v40 + 112LL))(
          &v35,
          v40,
          v39.m128i_u32[0],
          (unsigned int)v19,
          &v39);
        v7 = v28;
      }
    }
    else
    {
      v36 = 0;
      v35 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    }
    v26 = v7;
    QT::QItemSelection::select(v18, &v37, &v35);
    v7 = v26;
  }
LABEL_26:
  if ( v7[4] > 1u )
  {
    v21 = v7[3];
    v22 = **(_QWORD **)(a1 + 208);
    v37 = (__m128i)-1LL;
    dirtree_make_cursor(&v37, v22, v21);
    sub_48B610((__int64)&v30, a1, v37.m128i_i64);
    v6[2] = _mm_loadu_si128(&v30);
    v6[3].m128i_i64[0] = v31;
  }
  return v44 - __readfsqword(0x28u);
}
