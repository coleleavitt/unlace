__int64 __fastcall sub_7EE1F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  bool v14; // zf
  __int64 (__fastcall *v15)(__int64); // rax
  _QWORD *v16; // rcx
  __m128i *v17; // r12
  void (__fastcall *v18)(__m128i *, _QWORD *, __int64); // rax
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // r12
  __m128i v21; // rax
  __m128i v22; // xmm0
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v24; // rax
  void (__fastcall ***v25)(_QWORD); // r12
  __int64 v26; // rbp
  __int64 result; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // cf
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  _QWORD *v34; // rcx
  __m128i *v35; // r8
  __m128i *v36; // rdi
  void (__fastcall *v37)(__m128i *, _QWORD *, __int64, _QWORD *, __m128i *); // rax
  __int64 v38; // rax
  const __m128i *v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rsi
  __m128i v42; // xmm0
  __int64 v43; // r12
  __int64 v44; // [rsp+18h] [rbp-C0h]
  _QWORD *v45; // [rsp+18h] [rbp-C0h]
  _QWORD *v46; // [rsp+18h] [rbp-C0h]
  __int64 v47; // [rsp+20h] [rbp-B8h]
  __int64 v48; // [rsp+20h] [rbp-B8h]
  __int64 v49; // [rsp+28h] [rbp-B0h]
  _QWORD *v50; // [rsp+30h] [rbp-A8h]
  __m128i *v51; // [rsp+38h] [rbp-A0h]
  _QWORD v52[2]; // [rsp+40h] [rbp-98h] BYREF
  __m128i v53; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v54[2]; // [rsp+60h] [rbp-78h] BYREF
  __m128i v55; // [rsp+70h] [rbp-68h]
  __m128i v56; // [rsp+80h] [rbp-58h] BYREF
  void (__fastcall *v57)(_QWORD, _QWORD, _QWORD); // [rsp+90h] [rbp-48h]
  __int64 v58; // [rsp+98h] [rbp-40h]

  *(_QWORD *)a1 = &off_1C54B88;
  v5 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 16) = a3;
  v6 = *(__int64 (__fastcall **)(__int64))(v5 + 424);
  *(_QWORD *)(a1 + 8) = a2;
  if ( v6 == sub_79EFD0 )
    v7 = *(_QWORD *)(a2 + 144);
  else
    v7 = v6(a2);
  *(_QWORD *)(a1 + 24) = v7;
  sub_866C20(a1 + 32, a2);
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 432LL);
  if ( v8 == sub_79EFF0 )
    v9 = a2 + 2144;
  else
    v9 = v8(a2);
  sub_15CD880(a1 + 240, *(_QWORD *)(a1 + 24), v9);
  v10 = (_QWORD *)sub_186B270(0x80u);
  v10[1] = 0;
  v10[3] = 0;
  v10[5] = 0;
  v10[7] = 0;
  v10[9] = 0;
  v10[11] = 0;
  v10[13] = 0;
  v10[15] = 0;
  *(_QWORD *)(a1 + 296) = v10;
  *(_QWORD *)(a1 + 304) = 8;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  sub_8696C0(a1 + 336, a1, a2);
  *(_QWORD *)(a1 + 1248) = 0;
  sub_DB2A00(a1 + 1256, *(_QWORD *)(a1 + 24), a2 + 832);
  *(_QWORD *)(a1 + 2312) = 0;
  *(_OWORD *)(a1 + 2296) = 0;
  v11 = sub_186B270(0x80u);
  *(_QWORD *)v11 = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_DWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_DWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_DWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_DWORD *)(v11 + 120) = 0;
  *(_QWORD *)(a1 + 2320) = v11;
  *(_OWORD *)(a1 + 2352) = 0;
  *(_QWORD *)(a1 + 2328) = 8;
  *(_DWORD *)(a1 + 2336) = 0;
  *(_QWORD *)(a1 + 2344) = 0;
  *(_DWORD *)(a1 + 2368) = 0;
  *(_QWORD *)(a1 + 2376) = a1 + 2392;
  *(_QWORD *)(a1 + 2384) = 0x1000000000LL;
  *(_DWORD *)(a1 + 2520) = 3;
  *(_QWORD *)(a1 + 2528) = 0;
  *(_BYTE *)(a1 + 2536) = 0;
  *(_DWORD *)(a1 + 2544) = 0;
  *(_QWORD *)(a1 + 2552) = 0;
  *(_DWORD *)(a1 + 2560) = 0;
  *(_QWORD *)(a1 + 2568) = 0;
  *(_DWORD *)(a1 + 2576) = 0;
  *(_BYTE *)(a1 + 2600) = 1;
  *(_OWORD *)(a1 + 2584) = 0;
  sub_180C5A0(a1 + 2608, "ematch");
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 2640) = 0;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 2632) = v12;
  *(_QWORD *)(a1 + 2648) = v12;
  *(_OWORD *)(a1 + 2616) = 0;
  sub_13A2DE0(a1 + 2664, v12, "z3name");
  v13 = *(_QWORD **)(a1 + 24);
  v56.m128i_i64[0] = 0;
  sub_13A5730(a1 + 2680, a1 + 336, a1 + 1256, a1 + 2680, v44, v47);
  sub_18572D0(&v56);
  v52[0] = a1;
  v14 = *(_BYTE *)(a2 + 1394) == 0;
  v52[1] = 0;
  v54[0] = a1;
  v53 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C54C18), (__m128i)(unsigned __int64)sub_7EE1E0);
  v54[1] = 0;
  v55 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C54C20), (__m128i)(unsigned __int64)sub_7E8F40);
  if ( !v14 )
  {
    v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 440LL);
    if ( v15 == sub_79F010 )
      v16 = (_QWORD *)(a2 + 1592);
    else
      v16 = (_QWORD *)((__int64 (__fastcall *)(__int64, _QWORD *))v15)(a2, v13);
    v17 = (__m128i *)v16[45];
    if ( v17 == (__m128i *)v16[46] )
    {
      v28 = v16[44];
      v29 = ((__int64)v17->m128i_i64 - v28) >> 5;
      if ( v29 == 0x3FFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v30 = 1;
      if ( v29 )
        v30 = ((__int64)v17->m128i_i64 - v28) >> 5;
      v31 = __CFADD__(v30, v29);
      v32 = v30 + v29;
      if ( v31 )
      {
        v48 = 0x7FFFFFFFFFFFFFE0LL;
        v33 = 0x7FFFFFFFFFFFFFE0LL;
      }
      else
      {
        if ( v32 > 0x3FFFFFFFFFFFFFFLL )
          v32 = 0x3FFFFFFFFFFFFFFLL;
        v48 = 32 * v32;
        v33 = 32 * v32;
      }
      v51 = (__m128i *)v16[44];
      v50 = v16;
      v13 = (__int64 *)((char *)v17->m128i_i64 - v28);
      v49 = operator new(v33);
      v34 = v50;
      v35 = v51;
      v36 = (__m128i *)((char *)v13 + v49);
      v37 = (void (__fastcall *)(__m128i *, _QWORD *, __int64, _QWORD *, __m128i *))v53.m128i_i64[0];
      v14 = v53.m128i_i64[0] == 0;
      v36[1].m128i_i64[0] = 0;
      v36[1].m128i_i64[1] = 0;
      *v36 = 0;
      if ( !v14 )
      {
        v13 = v52;
        v37(v36, v52, 2, v50, v51);
        v35 = v51;
        v34 = v50;
        v36[1] = _mm_load_si128(&v53);
      }
      if ( v17 == v35 )
      {
        v40 = v49;
      }
      else
      {
        v38 = v49;
        v39 = v35;
        v40 = v49 + (char *)v17 - (char *)v35;
        do
        {
          v41 = v39[1].m128i_i64[1];
          *(_QWORD *)(v38 + 16) = 0;
          *(_OWORD *)v38 = 0;
          *(_QWORD *)(v38 + 24) = v41;
          v13 = (_QWORD *)v39[1].m128i_i64[0];
          if ( v13 )
          {
            v42 = _mm_loadu_si128(v39);
            *(_QWORD *)(v38 + 16) = v13;
            *(__m128i *)v38 = v42;
          }
          v38 += 32;
          v39 += 2;
        }
        while ( v40 != v38 );
      }
      v43 = v40 + 32;
      if ( v35 )
      {
        v46 = v34;
        v13 = (_QWORD *)(v34[46] - (_QWORD)v35);
        operator delete(v35, (unsigned __int64)v13);
        v34 = v46;
      }
      v34[45] = v43;
      v34[44] = v49;
      v34[46] = v49 + v48;
    }
    else
    {
      v18 = (void (__fastcall *)(__m128i *, _QWORD *, __int64))v53.m128i_i64[0];
      v17[1].m128i_i64[0] = 0;
      v17[1].m128i_i64[1] = 0;
      *v17 = 0;
      if ( v18 )
      {
        v45 = v16;
        v13 = v52;
        v18(v17, v52, 2);
        v16 = v45;
        v17[1] = _mm_load_si128(&v53);
      }
      v16[45] += 32LL;
    }
    if ( !*(_BYTE *)(a2 + 168) )
    {
      v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 440LL);
      v20 = v19 == sub_79F010 ? a2 + 1592 : ((__int64 (__fastcall *)(__int64, _QWORD *))v19)(a2, v13);
      v57 = nullptr;
      v58 = 0;
      v56 = 0;
      if ( v55.m128i_i64[0] )
      {
        ((void (__fastcall *)(__m128i *, _QWORD *, __int64))v55.m128i_i64[0])(&v56, v54, 2);
        v21 = v55;
      }
      else
      {
        v21 = 0u;
      }
      v22 = _mm_load_si128(&v56);
      v56 = _mm_loadu_si128((const __m128i *)(v20 + 408));
      v23 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v20 + 424);
      *(__m128i *)(v20 + 408) = v22;
      v57 = v23;
      *(_QWORD *)(v20 + 424) = v21.m128i_i64[0];
      v58 = *(_QWORD *)(v20 + 432);
      *(_QWORD *)(v20 + 432) = v21.m128i_i64[1];
      if ( v23 )
        v23(&v56, &v56, 3);
    }
  }
  v24 = sub_13ED240(a2 + 72, a1);
  v25 = *(void (__fastcall ****)(_QWORD))(a1 + 2296);
  v26 = v24;
  if ( (void (__fastcall ***)(_QWORD))v24 != v25 )
  {
    if ( v25 )
    {
      (**v25)(*(_QWORD *)(a1 + 2296));
      sub_186B220(v25);
    }
    *(_QWORD *)(a1 + 2296) = v26;
  }
  if ( v55.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v55.m128i_i64[0])(v54, v54, 3);
  result = v53.m128i_i64[0];
  if ( v53.m128i_i64[0] )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))v53.m128i_i64[0])(v52, v52, 3);
  return result;
}

