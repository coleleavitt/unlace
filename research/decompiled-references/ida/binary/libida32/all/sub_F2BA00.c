void __fastcall sub_F2BA00(__int64 a1, __int64 a2)
{
  const __m128i *v3; // rbp
  unsigned __int16 v4; // r13
  __int64 v5; // r12
  unsigned __int16 v6; // bx
  size_t v7; // r15
  void *v8; // rdi
  __int64 v9; // r13
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm5
  __m128i v15; // xmm6
  __m128i *v16; // rdx
  __m128i v17; // xmm7
  __m128i *v18; // rdi
  _BYTE *v19; // r15
  __m128i v20; // xmm0
  bool v21; // zf
  __m128i si128; // xmm1
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm4
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i *v30; // rdx
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i *v33; // rsi
  __m128i v34; // xmm0
  void (__fastcall *v35)(__m128i *, __m128i *, __int64); // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  __m128i *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdi
  void (__fastcall *v45)(__int64, __int64, __int64); // rax
  __int64 v46; // rax
  _BYTE *v47; // rax
  __int64 v48; // rdi
  _BYTE *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int128 v53; // [rsp+0h] [rbp-188h] BYREF
  const __m128i *v54; // [rsp+10h] [rbp-178h]
  __m128i *v55; // [rsp+18h] [rbp-170h]
  __m128i v56[2]; // [rsp+20h] [rbp-168h] BYREF
  __m128i v57[3]; // [rsp+40h] [rbp-148h] BYREF
  __m128i v58; // [rsp+70h] [rbp-118h] BYREF
  __m128i v59; // [rsp+80h] [rbp-108h]
  __m128i v60; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v61; // [rsp+A0h] [rbp-E8h]
  _BYTE *v62; // [rsp+B0h] [rbp-D8h]
  __m128i v63; // [rsp+B8h] [rbp-D0h] BYREF
  __m128i v64; // [rsp+C8h] [rbp-C0h] BYREF
  void *v65; // [rsp+D8h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-A8h]
  __m128i v67; // [rsp+E8h] [rbp-A0h] BYREF
  _BYTE *v68; // [rsp+100h] [rbp-88h] BYREF
  __m256i v69; // [rsp+108h] [rbp-80h] BYREF
  void *v70; // [rsp+128h] [rbp-60h]
  __int64 v71; // [rsp+130h] [rbp-58h]
  __m128i v72[5]; // [rsp+138h] [rbp-50h] BYREF

  v3 = (const __m128i *)(a1 + 24);
  v4 = *(_WORD *)(a1 + 2);
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 1096LL);
  v6 = (*(_DWORD *)a1 >> 3) & 0x3FFF;
  v7 = j__strlen(" start ");
  v8 = *(void **)(v5 + 32);
  v9 = v4 >> 1;
  if ( v7 > *(_QWORD *)(v5 + 24) - (_QWORD)v8 )
  {
    v5 = sub_22581D0(v5, " start ", v7);
  }
  else if ( v7 )
  {
    memcpy(v8, " start ", v7);
    *(_QWORD *)(v5 + 32) += v7;
  }
  sub_2257BD0(v5, v6);
  v54 = (const __m128i *)((char *)v3 + 24 * v9);
  if ( v3 != v54 )
  {
    v56[0] = (__m128i)_mm_loadh_ps((const double *)&off_2B22388);
    do
    {
      v19 = *(_BYTE **)a2;
      v20 = _mm_loadu_si128(v3);
      v57[0].m128i_i64[0] = v3[1].m128i_i64[0];
      v21 = v19[1056] == 0;
      v57[0].m128i_i64[1] = (__int64)v19;
      si128 = _mm_load_si128(v57);
      v56[1] = v20;
      v57[1] = v20;
      v57[2] = si128;
      v58 = v20;
      v59 = si128;
      if ( v21 )
      {
        v62 = v19;
        v63 = v20;
        v64 = si128;
        v65 = &v67;
        sub_F009D0(&v65, &byte_22CD811, (__int64)&byte_22CD811);
        if ( v19[1057] )
        {
          v10 = _mm_loadu_si128(&v63);
          v11 = _mm_loadu_si128(&v64);
          *(_QWORD *)&v53 = v19 + 16;
          *(__m128i *)v69.m256i_i8 = v10;
          v68 = v62;
          v70 = v72;
          *(__m128i *)&v69.m256i_u64[2] = v11;
          if ( v65 == &v67 )
          {
            v72[0] = _mm_loadu_si128(&v67);
          }
          else
          {
            v70 = v65;
            v72[0].m128i_i64[0] = v67.m128i_i64[0];
          }
          v12 = v66;
          v66 = 0;
          v67.m128i_i8[0] = 0;
          v71 = v12;
          v65 = &v67;
          v61.m128i_i64[0] = 0;
          v13 = operator new(0x48u);
          v14 = _mm_loadu_si128((const __m128i *)&v69);
          v15 = _mm_loadu_si128((const __m128i *)&v69.m256i_u64[2]);
          *(_QWORD *)v13 = v68;
          *(_QWORD *)(v13 + 40) = v13 + 56;
          v16 = (__m128i *)v70;
          *(__m128i *)(v13 + 8) = v14;
          *(__m128i *)(v13 + 24) = v15;
          if ( v16 == v72 )
          {
            *(__m128i *)(v13 + 56) = _mm_loadu_si128(v72);
          }
          else
          {
            *(_QWORD *)(v13 + 40) = v16;
            *(_QWORD *)(v13 + 56) = v72[0].m128i_i64[0];
          }
          v17 = _mm_load_si128(v56);
          v60.m128i_i64[0] = v13;
          *(_QWORD *)(v13 + 48) = v71;
          v70 = v72;
          v71 = 0;
          v72[0].m128i_i8[0] = 0;
          v61 = v17;
          sub_AA95F0((__int64)(v19 + 16), &v60);
          if ( v61.m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
        }
        else
        {
          v23 = *((unsigned int *)v19 + 6);
          v24 = *((_QWORD *)v19 + 2);
          v60.m128i_i8[0] = 0;
          v25 = v24 + 32 * v23 - 32;
          if ( !*(_QWORD *)(v25 + 16) )
            goto LABEL_60;
          v55 = &v60;
          (*(void (__fastcall **)(__int64, __m128i *))(v25 + 24))(v25, &v60);
          v26 = _mm_loadu_si128(&v64);
          v27 = *((_QWORD *)v19 + 2) + 32LL * *((unsigned int *)v19 + 6) - 32;
          *(__m128i *)v69.m256i_i8 = _mm_loadu_si128(&v63);
          *(__m128i *)&v69.m256i_u64[2] = v26;
          v68 = v62;
          v70 = v72;
          if ( v65 == &v67 )
          {
            v72[0] = _mm_loadu_si128(&v67);
          }
          else
          {
            v70 = v65;
            v72[0].m128i_i64[0] = v67.m128i_i64[0];
          }
          v28 = v66;
          *(_QWORD *)&v53 = v27;
          v66 = 0;
          v71 = v28;
          v65 = &v67;
          v67.m128i_i8[0] = 0;
          v61.m128i_i64[0] = 0;
          v29 = operator new(0x48u);
          v30 = (__m128i *)v53;
          v31 = _mm_loadu_si128((const __m128i *)&v69);
          v32 = _mm_loadu_si128((const __m128i *)&v69.m256i_u64[2]);
          *(_QWORD *)v29 = v68;
          *(_QWORD *)(v29 + 40) = v29 + 56;
          v33 = (__m128i *)v70;
          *(__m128i *)(v29 + 8) = v31;
          *(__m128i *)(v29 + 24) = v32;
          if ( v33 == v72 )
          {
            *(__m128i *)(v29 + 56) = _mm_loadu_si128(v72);
          }
          else
          {
            *(_QWORD *)(v29 + 40) = v33;
            *(_QWORD *)(v29 + 56) = v72[0].m128i_i64[0];
          }
          v60.m128i_i64[0] = v29;
          v72[0].m128i_i8[0] = 0;
          v34 = _mm_load_si128(&v60);
          *(_QWORD *)(v29 + 48) = v71;
          v70 = v72;
          v71 = 0;
          v60 = _mm_loadu_si128(v30);
          v35 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v30[1].m128i_i64[0];
          v36 = v30[1].m128i_i64[1];
          *v30 = v34;
          v61.m128i_i64[0] = (__int64)v35;
          v30[1].m128i_i64[0] = (__int64)sub_F01F90;
          v61.m128i_i64[1] = v36;
          v30[1].m128i_i64[1] = (__int64)sub_F2C660;
          if ( v35 )
            v35(v55, v55, 3);
        }
        if ( v70 != v72 )
          operator delete(v70);
        v18 = (__m128i *)v65;
        v19[1057] = 0;
        if ( v18 != &v67 )
          operator delete(v18);
      }
      else
      {
        v37 = *((_QWORD *)v19 + 137);
        v19[1056] = 0;
        v38 = *(__m128i **)(v37 + 32);
        if ( *(_QWORD *)(v37 + 24) - (_QWORD)v38 > 0xFu )
        {
          *v38 = _mm_load_si128((const __m128i *)&xmmword_23850E0);
          *(_QWORD *)(v37 + 32) += 16LL;
        }
        else
        {
          sub_22581D0(v37, "TemplateArgument", 16);
        }
        switch ( v58.m128i_i32[0] & 0x7FFFFFFF )
        {
          case 0:
            sub_971800(*((_QWORD *)v19 + 137), " null");
            break;
          case 1:
            sub_971800(*((_QWORD *)v19 + 137), " type");
            sub_F071F0((__int64)v19, &v58);
            break;
          case 2:
            sub_971800(*((_QWORD *)v19 + 137), " decl");
            sub_F071F0((__int64)v19, &v58);
            if ( v59.m128i_i64[0] )
            {
              *(_QWORD *)&v53 = v59.m128i_i64[0];
              v68 = nullptr;
              v69.m256i_i64[0] = 0;
              v53 = (__int128)_mm_loadh_ps((const double *)&v53);
              *(_OWORD *)&v69.m256i_u64[1] = v53;
              sub_F1B570((__int64)v19, (__int64)&byte_22CD811, 0, v50, v51, v52, 0, v53);
            }
            break;
          case 3:
            sub_971800(*((_QWORD *)v19 + 137), " nullptr");
            sub_F071F0((__int64)v19, &v58);
            break;
          case 4:
            sub_971800(*((_QWORD *)v19 + 137), " integral");
            sub_F071F0((__int64)v19, &v58);
            break;
          case 5:
            sub_971800(*((_QWORD *)v19 + 137), " structural value");
            sub_F071F0((__int64)v19, &v58);
            break;
          case 6:
            sub_F2B640((__int64)v19, &v58);
            break;
          case 7:
            sub_F2B5A0((__int64)v19, &v58);
            break;
          case 8:
            sub_971800(*((_QWORD *)v19 + 137), " expr");
            if ( (v58.m128i_i8[4] & 1) != 0 )
              sub_971800(*((_QWORD *)v19 + 137), " canonical");
            goto LABEL_38;
          case 9:
            sub_971800(*((_QWORD *)v19 + 137), " pack");
LABEL_38:
            sub_F071F0((__int64)v19, &v58);
            break;
        }
        v39 = *((unsigned int *)v19 + 6);
        if ( (_DWORD)v39 )
        {
          v40 = *((_QWORD *)v19 + 2);
          LOBYTE(v68) = 1;
          v41 = v40 + 32 * v39 - 32;
          if ( !*(_QWORD *)(v41 + 16) )
LABEL_60:
            std::__throw_bad_function_call();
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, _BYTE **))(v41 + 24))(v41, &v68);
            v43 = (unsigned int)(*((_DWORD *)v19 + 6) - 1);
            *((_DWORD *)v19 + 6) = v43;
            v44 = *((_QWORD *)v19 + 2) + 32 * v43;
            v45 = *(void (__fastcall **)(__int64, __int64, __int64))(v44 + 16);
            if ( v45 )
              v45(v44, v44, 3);
            v46 = *((unsigned int *)v19 + 6);
            if ( !(_DWORD)v46 )
              break;
            v42 = *((_QWORD *)v19 + 2);
            LOBYTE(v68) = 1;
            v41 = v42 + 32 * v46 - 32;
            if ( !*(_QWORD *)(v41 + 16) )
              goto LABEL_60;
          }
        }
        v47 = *((_BYTE **)v19 + 133);
        *((_QWORD *)v19 + 134) = 0;
        *v47 = 0;
        v48 = *(_QWORD *)v19;
        v49 = *(_BYTE **)(*(_QWORD *)v19 + 32LL);
        if ( *(_BYTE **)(*(_QWORD *)v19 + 24LL) == v49 )
        {
          sub_22581D0(v48, "\n", 1);
        }
        else
        {
          *v49 = 10;
          ++*(_QWORD *)(v48 + 32);
        }
        v19[1056] = 1;
      }
      v3 = (const __m128i *)((char *)v3 + 24);
    }
    while ( v54 != v3 );
  }
}

