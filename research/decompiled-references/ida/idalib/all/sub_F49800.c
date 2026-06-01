void __fastcall sub_F49800(_BYTE *a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rbp
  void *v5; // rdi
  __int64 *v6; // rbp
  __m128i v7; // xmm0
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm3
  __m128i *v12; // rdx
  __int64 v13; // rdx
  __m128i v14; // xmm4
  __m128i *v15; // rdi
  __int64 v16; // rax
  bool v17; // zf
  __m128i v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm6
  __m128i *v26; // rsi
  void (__fastcall *v27)(__m128i *, __m128i *, __int64); // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rdi
  _BYTE *v39; // rax
  __int64 *v40; // [rsp+0h] [rbp-108h]
  __m128i *v41; // [rsp+8h] [rbp-100h]
  __m128i v42; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v43; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v45; // [rsp+40h] [rbp-C8h]
  _BYTE *v46; // [rsp+50h] [rbp-B8h]
  __m128i v47; // [rsp+58h] [rbp-B0h] BYREF
  void *v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h]
  __m128i v50; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v51; // [rsp+90h] [rbp-78h] BYREF
  __m128i v52; // [rsp+98h] [rbp-70h] BYREF
  void *v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  __m128i v55[5]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a1 + 137);
  v4 = j__strlen(" ");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_227BF10(v3, " ", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " ", v4);
    *(_QWORD *)(v3 + 32) += v4;
  }
  sub_F04EA0(v3, *(_BYTE *)(a2 + 33));
  v6 = *(__int64 **)(a2 + 48);
  v40 = &v6[*(_QWORD *)(a2 + 56)];
  if ( v40 != v6 )
  {
    v7 = (__m128i)_mm_loadh_ps((const double *)off_2B4C2E8);
    v42 = v7;
    do
    {
      while ( 1 )
      {
        v16 = *v6;
        v17 = a1[1056] == 0;
        v43.m128i_i64[1] = (__int64)a1;
        v43.m128i_i64[0] = v16;
        if ( !v17 )
          break;
        v18 = _mm_load_si128(&v43);
        v46 = a1;
        v48 = &v50;
        v47 = v18;
        sub_F24710(&v48, &byte_22F0C30, (__int64)&byte_22F0C30);
        if ( a1[1057] )
        {
          v8 = _mm_loadu_si128(&v47);
          v51 = v46;
          v53 = v55;
          v52 = v8;
          if ( v48 == &v50 )
          {
            v55[0] = _mm_loadu_si128(&v50);
          }
          else
          {
            v53 = v48;
            v55[0].m128i_i64[0] = v50.m128i_i64[0];
          }
          v9 = v49;
          v49 = 0;
          v50.m128i_i8[0] = 0;
          v54 = v9;
          v48 = &v50;
          v45.m128i_i64[0] = 0;
          v10 = operator new(0x38u);
          v11 = _mm_loadu_si128(&v52);
          *(_QWORD *)v10 = v51;
          *(_QWORD *)(v10 + 24) = v10 + 40;
          v12 = (__m128i *)v53;
          *(__m128i *)(v10 + 8) = v11;
          if ( v12 == v55 )
          {
            *(__m128i *)(v10 + 40) = _mm_loadu_si128(v55);
          }
          else
          {
            *(_QWORD *)(v10 + 24) = v12;
            *(_QWORD *)(v10 + 40) = v55[0].m128i_i64[0];
          }
          v13 = v54;
          v44.m128i_i64[0] = v10;
          v14 = _mm_load_si128(&v42);
          v54 = 0;
          *(_QWORD *)(v10 + 32) = v13;
          v53 = v55;
          v55[0].m128i_i8[0] = 0;
          v45 = v14;
          sub_ACD330((__int64)(a1 + 16), &v44);
          if ( v45.m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128i_i64[0])(&v44, &v44, 3);
        }
        else
        {
          v19 = *((unsigned int *)a1 + 6);
          v20 = *((_QWORD *)a1 + 2);
          v44.m128i_i8[0] = 0;
          v21 = v20 + 32 * v19 - 32;
          if ( !*(_QWORD *)(v21 + 16) )
            goto LABEL_43;
          (*(void (__fastcall **)(__int64, __m128i *))(v21 + 24))(v21, &v44);
          v22 = *((_QWORD *)a1 + 2) + 32LL * *((unsigned int *)a1 + 6) - 32;
          v52 = _mm_loadu_si128(&v47);
          v51 = v46;
          v53 = v55;
          if ( v48 == &v50 )
          {
            v55[0] = _mm_loadu_si128(&v50);
          }
          else
          {
            v53 = v48;
            v55[0].m128i_i64[0] = v50.m128i_i64[0];
          }
          v23 = v49;
          v41 = (__m128i *)v22;
          v49 = 0;
          v54 = v23;
          v48 = &v50;
          v50.m128i_i8[0] = 0;
          v45.m128i_i64[0] = 0;
          v24 = operator new(0x38u);
          v25 = _mm_loadu_si128(&v52);
          *(_QWORD *)v24 = v51;
          *(_QWORD *)(v24 + 24) = v24 + 40;
          v26 = (__m128i *)v53;
          *(__m128i *)(v24 + 8) = v25;
          if ( v26 == v55 )
          {
            *(__m128i *)(v24 + 40) = _mm_loadu_si128(v55);
          }
          else
          {
            *(_QWORD *)(v24 + 24) = v26;
            *(_QWORD *)(v24 + 40) = v55[0].m128i_i64[0];
          }
          v44.m128i_i64[0] = v24;
          v55[0].m128i_i8[0] = 0;
          v7 = _mm_load_si128(&v44);
          *(_QWORD *)(v24 + 32) = v54;
          v53 = v55;
          v54 = 0;
          v44 = _mm_loadu_si128(v41);
          v27 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v41[1].m128i_i64[0];
          v28 = v41[1].m128i_i64[1];
          *v41 = v7;
          v45.m128i_i64[0] = (__int64)v27;
          v41[1].m128i_i64[0] = (__int64)sub_F24D60;
          v45.m128i_i64[1] = v28;
          v41[1].m128i_i64[1] = (__int64)sub_F494B0;
          if ( v27 )
            v27(&v44, &v44, 3);
        }
        if ( v53 != v55 )
          operator delete(v53);
        v15 = (__m128i *)v48;
        a1[1057] = 0;
        if ( v15 != &v50 )
          operator delete(v15);
        if ( v40 == ++v6 )
          return;
      }
      a1[1056] = 0;
      sub_F48DF0(v43.m128i_i64, &v43.m128i_i64[1], *(double *)v7.m128i_i64);
      v29 = *((unsigned int *)a1 + 6);
      if ( (_DWORD)v29 )
      {
        v30 = *((_QWORD *)a1 + 2);
        LOBYTE(v51) = 1;
        v31 = v30 + 32 * v29 - 32;
        if ( !*(_QWORD *)(v31 + 16) )
LABEL_43:
          std::__throw_bad_function_call();
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, _BYTE **))(v31 + 24))(v31, &v51);
          v33 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
          *((_DWORD *)a1 + 6) = v33;
          v34 = *((_QWORD *)a1 + 2) + 32 * v33;
          v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
          if ( v35 )
            v35(v34, v34, 3);
          v36 = *((unsigned int *)a1 + 6);
          if ( !(_DWORD)v36 )
            break;
          v32 = *((_QWORD *)a1 + 2);
          LOBYTE(v51) = 1;
          v31 = v32 + 32 * v36 - 32;
          if ( !*(_QWORD *)(v31 + 16) )
            goto LABEL_43;
        }
      }
      v37 = *((_BYTE **)a1 + 133);
      *((_QWORD *)a1 + 134) = 0;
      *v37 = 0;
      v38 = *(_QWORD *)a1;
      v39 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
      if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v39 )
      {
        sub_227BF10(v38, "\n", 1);
      }
      else
      {
        *v39 = 10;
        ++*(_QWORD *)(v38 + 32);
      }
      a1[1056] = 1;
      ++v6;
    }
    while ( v40 != v6 );
  }
}
