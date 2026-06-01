void __fastcall sub_AC0590(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  bool v3; // cl
  __int64 v4; // r12
  __int64 *v5; // rbp
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm6
  __m128i v12; // xmm7
  __int64 (__fastcall *v13)(__int64 *, __int64 *, int); // rax
  __m128i *v14; // rdi
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rax
  size_t v18; // rax
  char v19; // al
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i *v25; // r14
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm4
  __int64 v29; // rax
  __m128i v30; // xmm5
  __m128i si128; // xmm6
  __m128i v32; // xmm0
  __m128d v33; // xmm3
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdi
  void (__fastcall *v40)(__int64, __int64, __int64); // rax
  __int64 v41; // rax
  int v42; // [rsp+1Ch] [rbp-16Ch]
  __int64 v43; // [rsp+20h] [rbp-168h]
  __int64 *v44; // [rsp+28h] [rbp-160h]
  __m128d v45; // [rsp+30h] [rbp-158h]
  __int64 v46; // [rsp+40h] [rbp-148h]
  __m128i v47; // [rsp+50h] [rbp-138h] BYREF
  __m128i v48; // [rsp+60h] [rbp-128h] BYREF
  void *v49[2]; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v50[16]; // [rsp+80h] [rbp-108h] BYREF
  __m128i v51; // [rsp+90h] [rbp-F8h] BYREF
  __int64 (__fastcall *v52)(__int64 *, __int64 *, int); // [rsp+A0h] [rbp-E8h]
  __int64 (__fastcall *v53)(); // [rsp+A8h] [rbp-E0h]
  char v54; // [rsp+B0h] [rbp-D8h]
  __int64 v55; // [rsp+B8h] [rbp-D0h]
  void *v56; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-C0h]
  __m128i v58; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v59; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v60; // [rsp+F0h] [rbp-98h] BYREF
  char v61[8]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v62; // [rsp+108h] [rbp-80h]
  void *v63; // [rsp+110h] [rbp-78h]
  __int64 v64; // [rsp+118h] [rbp-70h]
  __m128i v65; // [rsp+120h] [rbp-68h] BYREF
  __m128i v66; // [rsp+130h] [rbp-58h] BYREF
  __m128i v67[4]; // [rsp+140h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    sub_ABAAB0(a1 + 8, 0, 0, *(_QWORD *)(a2 + 32), a1);
    sub_ABF9B0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  }
  else
  {
    sub_ABF9B0(a1, **(_QWORD **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32));
  }
  v2 = *(_WORD *)(a2 + 16) & 0x7FFF;
  v42 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
  v3 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
  v4 = 0;
  v5 = (__int64 *)(a2 + 8LL * v3 + 32);
  v46 = a1 + 8;
  v43 = a2 + 8LL * (unsigned __int16)(v2 + v3) + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0) + 32;
  v44 = &v5[v2];
  while ( v44 != v5 )
  {
    while ( 1 )
    {
      v47.m128i_i64[0] = a1;
      v15 = *v5;
      v48.m128i_i8[8] = v42 == (_DWORD)v4;
      v16 = *(_BYTE *)(a1 + 9) == 0;
      v17 = *(_QWORD *)(v43 + 8 * v4);
      v47.m128i_i64[1] = v15;
      v48.m128i_i64[0] = v17;
      if ( v16 )
        break;
      *(_BYTE *)(a1 + 9) = 0;
      sub_2205CB0(a1 + 1056);
      sub_E35EC0(v47.m128i_i64[0] + 8, &v47.m128i_u64[1]);
      if ( v48.m128i_i64[0] )
        sub_ABF9B0(v47.m128i_i64[0], *(_QWORD *)v48.m128i_i64[0]);
      v33 = (__m128d)_mm_load_si128(&v47);
      v45 = _mm_shuffle_pd(v33, v33, 1);
      sub_ABAAB0(v47.m128i_i64[0] + 8, 0, 0, *(__int64 *)&v45.m128d_f64[0], *(__int64 *)&v45.m128d_f64[1]);
      v34 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v34 )
      {
        v35 = *(_QWORD *)(a1 + 16);
        v61[0] = 1;
        v36 = v35 + 32 * v34 - 32;
        if ( !*(_QWORD *)(v36 + 16) )
LABEL_43:
          std::__throw_bad_function_call();
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, char *))(v36 + 24))(v36, v61);
          v38 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v38;
          v39 = *(_QWORD *)(a1 + 16) + 32 * v38;
          v40 = *(void (__fastcall **)(__int64, __int64, __int64))(v39 + 16);
          if ( v40 )
            v40(v39, v39, 3);
          v41 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v41 )
            break;
          v37 = *(_QWORD *)(a1 + 16);
          v61[0] = 1;
          v36 = v37 + 32 * v41 - 32;
          if ( !*(_QWORD *)(v36 + 16) )
            goto LABEL_43;
        }
      }
      ++v4;
      ++v5;
      sub_2205E20(a1 + 1056);
      *(_BYTE *)(a1 + 9) = 1;
      if ( v44 == v5 )
        return;
    }
    v18 = j__strlen("inner");
    v49[0] = v50;
    sub_AA6CE0(v49, "inner", (__int64)&aInner[v18]);
    v19 = *(_BYTE *)(a1 + 8);
    v56 = &v58;
    v54 = v19;
    v55 = v46;
    sub_AA6DA0(&v56, (_BYTE *)v49[0], (__int64)v49[0] + (unsigned __int64)v49[1]);
    v20 = _mm_load_si128(&v47);
    v21 = _mm_load_si128(&v48);
    v16 = *(_BYTE *)(a1 + 8) == 0;
    v59 = v20;
    v60 = v21;
    if ( v16 )
    {
      v22 = *(unsigned int *)(a1 + 24);
      v23 = *(_QWORD *)(a1 + 16);
      v51.m128i_i8[0] = 0;
      v24 = v23 + 32 * v22 - 32;
      if ( !*(_QWORD *)(v24 + 16) )
        goto LABEL_43;
      (*(void (__fastcall **)(__int64, __m128i *))(v24 + 24))(v24, &v51);
      v25 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v61[0] = v54;
      v62 = v55;
      v63 = &v65;
      if ( v56 == &v58 )
      {
        v65 = _mm_load_si128(&v58);
      }
      else
      {
        v63 = v56;
        v65.m128i_i64[0] = v58.m128i_i64[0];
      }
      v26 = v57;
      v27 = _mm_load_si128(&v59);
      v56 = &v58;
      v28 = _mm_load_si128(&v60);
      v57 = 0;
      v64 = v26;
      v58.m128i_i8[0] = 0;
      v66 = v27;
      v67[0] = v28;
      v52 = nullptr;
      v29 = operator new(0x50u);
      *(_BYTE *)v29 = v61[0];
      *(_QWORD *)(v29 + 8) = v62;
      *(_QWORD *)(v29 + 16) = v29 + 32;
      if ( v63 == &v65 )
      {
        *(__m128i *)(v29 + 32) = _mm_load_si128(&v65);
      }
      else
      {
        *(_QWORD *)(v29 + 16) = v63;
        *(_QWORD *)(v29 + 32) = v65.m128i_i64[0];
      }
      v51.m128i_i64[0] = v29;
      v30 = _mm_load_si128(&v66);
      si128 = _mm_load_si128(v67);
      v65.m128i_i8[0] = 0;
      v32 = _mm_load_si128(&v51);
      *(_QWORD *)(v29 + 24) = v64;
      v63 = &v65;
      *(__m128i *)(v29 + 48) = v30;
      *(__m128i *)(v29 + 64) = si128;
      v64 = 0;
      v51 = _mm_loadu_si128(v25);
      v13 = (__int64 (__fastcall *)(__int64 *, __int64 *, int))v25[1].m128i_i64[0];
      *v25 = v32;
      v52 = v13;
      v25[1].m128i_i64[0] = (__int64)sub_AA6F20;
      v53 = (__int64 (__fastcall *)())v25[1].m128i_i64[1];
      v25[1].m128i_i64[1] = (__int64)sub_AC1210;
      if ( !v13 )
        goto LABEL_11;
    }
    else
    {
      v61[0] = v54;
      v62 = v55;
      v63 = &v65;
      if ( v56 == &v58 )
      {
        v7 = v20;
        v8 = v21;
        v65 = _mm_load_si128(&v58);
      }
      else
      {
        v63 = v56;
        v7 = v20;
        v8 = v21;
        v65.m128i_i64[0] = v58.m128i_i64[0];
      }
      v9 = v57;
      v56 = &v58;
      v57 = 0;
      v64 = v9;
      v58.m128i_i8[0] = 0;
      v66 = v7;
      v67[0] = v8;
      v52 = nullptr;
      v10 = operator new(0x50u);
      *(_BYTE *)v10 = v61[0];
      *(_QWORD *)(v10 + 8) = v62;
      *(_QWORD *)(v10 + 16) = v10 + 32;
      if ( v63 == &v65 )
      {
        *(__m128i *)(v10 + 32) = _mm_load_si128(&v65);
      }
      else
      {
        *(_QWORD *)(v10 + 16) = v63;
        *(_QWORD *)(v10 + 32) = v65.m128i_i64[0];
      }
      v51.m128i_i64[0] = v10;
      v11 = _mm_load_si128(&v66);
      v65.m128i_i8[0] = 0;
      v12 = _mm_load_si128(v67);
      *(_QWORD *)(v10 + 24) = v64;
      *(__m128i *)(v10 + 48) = v11;
      *(__m128i *)(v10 + 64) = v12;
      v63 = &v65;
      v53 = sub_AC1210;
      v64 = 0;
      v52 = sub_AA6F20;
      sub_AA95F0(a1 + 16, &v51);
      v13 = v52;
      if ( !v52 )
        goto LABEL_11;
    }
    v13(v51.m128i_i64, v51.m128i_i64, 3);
LABEL_11:
    if ( v63 != &v65 )
      operator delete(v63);
    v14 = (__m128i *)v56;
    *(_BYTE *)(a1 + 8) = 0;
    if ( v14 != &v58 )
      operator delete(v14);
    if ( v49[0] != v50 )
      operator delete(v49[0]);
    ++v4;
    ++v5;
  }
}

