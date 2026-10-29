void __fastcall sub_ADA760(__int64 a1, _DWORD *a2)
{
  const __m128i *v3; // rbp
  __m128i v4; // xmm5
  __m128i v5; // xmm6
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm7
  __m128i v9; // xmm4
  __m128i v10; // xmm5
  __int64 v11; // rdx
  __m128i *v12; // rdx
  void (__fastcall *v13)(__m128i *, __m128i *, __int64); // rax
  __m128i *v14; // rdi
  __m128i v15; // xmm3
  __int64 v16; // rax
  bool v17; // zf
  __m128i si128; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm7
  __m128i v25; // xmm4
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm5
  __m128i v29; // xmm6
  __m128i v30; // xmm7
  __int64 v31; // rcx
  __m128i *v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rdi
  void (__fastcall *v42)(__int64, __int64, __int64); // rax
  __int64 v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rdi
  _BYTE *v46; // rax
  const __m128i *v47; // r14
  const __m128i *v48; // rsi
  __int64 v49; // [rsp+0h] [rbp-1F8h]
  __int64 v50; // [rsp+8h] [rbp-1F0h]
  __m128i *v51; // [rsp+18h] [rbp-1E0h]
  __int64 v52; // [rsp+18h] [rbp-1E0h]
  __m128i v53; // [rsp+20h] [rbp-1D8h] BYREF
  __m128 v54; // [rsp+30h] [rbp-1C8h]
  _BYTE v55[24]; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-1A0h]
  __m128i v57; // [rsp+60h] [rbp-198h] BYREF
  __int64 v58; // [rsp+70h] [rbp-188h]
  __m128i v59; // [rsp+80h] [rbp-178h]
  __m128i v60; // [rsp+90h] [rbp-168h]
  __m128i v61; // [rsp+A0h] [rbp-158h]
  __int64 v62; // [rsp+B0h] [rbp-148h]
  __m128i v63; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v64; // [rsp+D0h] [rbp-128h]
  __m128i v65; // [rsp+E0h] [rbp-118h]
  __int64 v66; // [rsp+F0h] [rbp-108h]
  __int64 v67; // [rsp+100h] [rbp-F8h]
  __m128i v68; // [rsp+108h] [rbp-F0h] BYREF
  __m128i v69; // [rsp+118h] [rbp-E0h] BYREF
  __m128i v70; // [rsp+128h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+138h] [rbp-C0h]
  void *v72; // [rsp+140h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+148h] [rbp-B0h]
  __m128i v74; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+160h] [rbp-98h] BYREF
  __m128i v76; // [rsp+168h] [rbp-90h] BYREF
  __m128i v77; // [rsp+178h] [rbp-80h] BYREF
  __m128i v78; // [rsp+188h] [rbp-70h] BYREF
  __int64 v79; // [rsp+198h] [rbp-60h]
  void *v80; // [rsp+1A0h] [rbp-58h]
  __int64 v81; // [rsp+1A8h] [rbp-50h]
  __m128i v82[4]; // [rsp+1B0h] [rbp-48h] BYREF

  if ( *a2 )
  {
    v3 = (const __m128i *)(a2 + 2);
    v50 = (__int64)&a2[6 * (*a2 - 1) + 8];
    v49 = a1 + 8;
    do
    {
      while ( 1 )
      {
        v15 = _mm_loadu_si128(v3);
        v16 = v3[1].m128i_i64[0];
        *(_QWORD *)v55 = a1;
        v57 = 0u;
        v17 = *(_BYTE *)(a1 + 1064) == 0;
        *(__m128i *)&v55[8] = v15;
        si128 = _mm_load_si128((const __m128i *)v55);
        v56 = v16;
        v19 = _mm_load_si128((const __m128i *)&v55[16]);
        v20 = _mm_load_si128(&v57);
        v58 = 0;
        v59 = si128;
        v60 = v19;
        v61 = v20;
        v62 = 0;
        v63 = si128;
        v64 = v19;
        v65 = v20;
        v66 = 0;
        if ( v17 )
          break;
        *(_BYTE *)(a1 + 1064) = 0;
        sub_F4F420(v49, &v63.m128i_u64[1], v65.m128i_i64[0], 0, 0, 0);
        v35 = v63.m128i_i64[0];
        switch ( v63.m128i_i32[2] & 0x7FFFFFFF )
        {
          case 0:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            break;
          case 1:
            sub_AD8780(v63.m128i_i64[0], v64.m128i_i64[0]);
            break;
          case 8:
            sub_AD2220(v63.m128i_i64[0] + 8, 0, 0, v64.m128i_i64[0], v63.m128i_i64[0], v34);
            break;
          case 9:
            v47 = (const __m128i *)v64.m128i_i64[0];
            v52 = v64.m128i_i64[0] + 24LL * v63.m128i_u32[3];
            if ( v64.m128i_i64[0] != v52 )
            {
              do
              {
                v48 = v47;
                v47 = (const __m128i *)((char *)v47 + 24);
                sub_AD68F0(v35, v48, 0);
              }
              while ( (const __m128i *)v52 != v47 );
            }
            break;
        }
        v36 = *(unsigned int *)(a1 + 32);
        if ( (_DWORD)v36 )
        {
          v37 = *(_QWORD *)(a1 + 24);
          LOBYTE(v75) = 1;
          v38 = v37 + 32 * v36 - 32;
          if ( !*(_QWORD *)(v38 + 16) )
LABEL_46:
            std::__throw_bad_function_call();
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(v38 + 24))(v38, &v75);
            v40 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
            *(_DWORD *)(a1 + 32) = v40;
            v41 = *(_QWORD *)(a1 + 24) + 32 * v40;
            v42 = *(void (__fastcall **)(__int64, __int64, __int64))(v41 + 16);
            if ( v42 )
              v42(v41, v41, 3);
            v43 = *(unsigned int *)(a1 + 32);
            if ( !(_DWORD)v43 )
              break;
            v39 = *(_QWORD *)(a1 + 24);
            LOBYTE(v75) = 1;
            v38 = v39 + 32 * v43 - 32;
            if ( !*(_QWORD *)(v38 + 16) )
              goto LABEL_46;
          }
        }
        v44 = *(_BYTE **)(a1 + 1072);
        *(_QWORD *)(a1 + 1080) = 0;
        *v44 = 0;
        v45 = *(_QWORD *)(a1 + 8);
        v46 = *(_BYTE **)(v45 + 32);
        if ( *(_BYTE **)(v45 + 24) == v46 )
        {
          sub_227BF10(v45, "\n", 1);
        }
        else
        {
          *v46 = 10;
          ++*(_QWORD *)(v45 + 32);
        }
        *(_BYTE *)(a1 + 1064) = 1;
        v3 = (const __m128i *)((char *)v3 + 24);
        if ( v3 == (const __m128i *)v50 )
          return;
      }
      v68 = si128;
      v69 = v19;
      v67 = v49;
      v70 = v20;
      v72 = &v74;
      v71 = 0;
      sub_ACAA20(&v72, &byte_22F0C30, (__int64)&byte_22F0C30);
      if ( *(_BYTE *)(a1 + 1065) )
      {
        v4 = _mm_loadu_si128(&v69);
        v5 = _mm_loadu_si128(&v70);
        v76 = _mm_loadu_si128(&v68);
        v75 = v67;
        v77 = v4;
        v79 = v71;
        v80 = v82;
        v78 = v5;
        if ( v72 == &v74 )
        {
          v82[0] = _mm_load_si128(&v74);
        }
        else
        {
          v80 = v72;
          v82[0].m128i_i64[0] = v74.m128i_i64[0];
        }
        v6 = v73;
        v72 = &v74;
        v73 = 0;
        v81 = v6;
        v74.m128i_i8[0] = 0;
        v54.m128_u64[0] = 0;
        v7 = operator new(0x60u);
        v8 = _mm_loadu_si128(&v76);
        v9 = _mm_loadu_si128(&v77);
        v10 = _mm_loadu_si128(&v78);
        *(_QWORD *)v7 = v75;
        v11 = v79;
        *(__m128i *)(v7 + 8) = v8;
        *(_QWORD *)(v7 + 56) = v11;
        *(_QWORD *)(v7 + 64) = v7 + 80;
        v12 = (__m128i *)v80;
        *(__m128i *)(v7 + 24) = v9;
        *(__m128i *)(v7 + 40) = v10;
        if ( v12 == v82 )
        {
          *(__m128i *)(v7 + 80) = _mm_load_si128(v82);
        }
        else
        {
          *(_QWORD *)(v7 + 64) = v12;
          *(_QWORD *)(v7 + 80) = v82[0].m128i_i64[0];
        }
        v53.m128i_i64[0] = v7;
        v82[0].m128i_i8[0] = 0;
        *(_QWORD *)(v7 + 72) = v81;
        v80 = v82;
        v81 = 0;
        v54 = _mm_loadh_ps((const double *)off_2C78F40);
        sub_ACD330(a1 + 24, &v53);
        v13 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v54.m128_u64[0];
        if ( !v54.m128_u64[0] )
          goto LABEL_9;
      }
      else
      {
        v21 = *(unsigned int *)(a1 + 32);
        v22 = *(_QWORD *)(a1 + 24);
        v53.m128i_i8[0] = 0;
        v23 = v22 + 32 * v21 - 32;
        if ( !*(_QWORD *)(v23 + 16) )
          goto LABEL_46;
        (*(void (__fastcall **)(__int64, __m128i *))(v23 + 24))(v23, &v53);
        v24 = _mm_loadu_si128(&v69);
        v25 = _mm_loadu_si128(&v70);
        v26 = *(_QWORD *)(a1 + 24) + 32LL * *(unsigned int *)(a1 + 32) - 32;
        v76 = _mm_loadu_si128(&v68);
        v77 = v24;
        v75 = v67;
        v78 = v25;
        v79 = v71;
        v80 = v82;
        if ( v72 == &v74 )
        {
          v82[0] = _mm_load_si128(&v74);
        }
        else
        {
          v80 = v72;
          v82[0].m128i_i64[0] = v74.m128i_i64[0];
        }
        v51 = (__m128i *)v26;
        v72 = &v74;
        v81 = v73;
        v73 = 0;
        v74.m128i_i8[0] = 0;
        v54.m128_u64[0] = 0;
        v27 = operator new(0x60u);
        v28 = _mm_loadu_si128(&v76);
        v29 = _mm_loadu_si128(&v77);
        v30 = _mm_loadu_si128(&v78);
        *(_QWORD *)v27 = v75;
        v31 = v79;
        *(__m128i *)(v27 + 8) = v28;
        *(__m128i *)(v27 + 24) = v29;
        *(_QWORD *)(v27 + 56) = v31;
        *(_QWORD *)(v27 + 64) = v27 + 80;
        v32 = (__m128i *)v80;
        *(__m128i *)(v27 + 40) = v30;
        if ( v32 == v82 )
        {
          *(__m128i *)(v27 + 80) = _mm_load_si128(v82);
        }
        else
        {
          *(_QWORD *)(v27 + 64) = v32;
          *(_QWORD *)(v27 + 80) = v82[0].m128i_i64[0];
        }
        v53.m128i_i64[0] = v27;
        v82[0].m128i_i8[0] = 0;
        v33 = _mm_load_si128(&v53);
        *(_QWORD *)(v27 + 72) = v81;
        v80 = v82;
        v81 = 0;
        v53 = _mm_loadu_si128(v51);
        v13 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v51[1].m128i_i64[0];
        *v51 = v33;
        v54.m128_u64[0] = (unsigned __int64)v13;
        v51[1].m128i_i64[0] = (__int64)sub_ACC0A0;
        v54.m128_u64[1] = v51[1].m128i_u64[1];
        v51[1].m128i_i64[1] = (__int64)sub_ADA3E0;
        if ( !v13 )
          goto LABEL_9;
      }
      v13(&v53, &v53, 3);
LABEL_9:
      if ( v80 != v82 )
        operator delete(v80);
      v14 = (__m128i *)v72;
      *(_BYTE *)(a1 + 1065) = 0;
      if ( v14 != &v74 )
        operator delete(v14);
      v3 = (const __m128i *)((char *)v3 + 24);
    }
    while ( v3 != (const __m128i *)v50 );
  }
}
