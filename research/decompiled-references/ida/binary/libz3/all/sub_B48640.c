__int64 __fastcall sub_B48640(__int64 a1, _DWORD **a2, _DWORD *a3, unsigned int a4)
{
  char **v4; // rbx
  char **v5; // rbx
  char **exception; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  unsigned int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // ebp
  int v13; // esi
  __int64 v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // r12
  unsigned int v19; // ebp
  __int64 v20; // r12
  __int64 result; // rax
  _QWORD *v22; // rax
  __int64 v23; // rbp
  __m128i v24; // xmm0
  void (__fastcall *v25)(__m128i **, const __m128i **, int); // rax
  __m128i *v26; // rdx
  __m128i v27; // xmm0
  unsigned int v28; // eax
  __int64 v29; // rcx
  __m128i *v30; // rcx
  __int64 v31; // rsi
  int v32; // r12d
  __int64 v33; // r15
  __int64 v34; // r12
  int v35; // eax
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // r15
  __m128i v40; // xmm0
  __int64 v41; // rax
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  __m128i v47; // xmm0
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rdi
  __int64 v52; // rbx
  __m128 *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  __m128 *v56; // rcx
  __m128 v57; // xmm0
  unsigned int v58; // ebx
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rcx
  __m128i v62; // xmm0
  _QWORD *v63; // rax
  unsigned int v64; // r14d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // ebp
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rdx
  __m128i v74; // [rsp+0h] [rbp-108h] BYREF
  __int64 *v75; // [rsp+18h] [rbp-F0h]
  __int64 v76; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v77; // [rsp+28h] [rbp-E0h]
  __int64 *v78; // [rsp+30h] [rbp-D8h]
  unsigned int v79; // [rsp+3Ch] [rbp-CCh] BYREF
  _DWORD *v80; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD **v81; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v82[8]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v83; // [rsp+80h] [rbp-88h] BYREF
  __m128i v84; // [rsp+90h] [rbp-78h]
  __int64 v85; // [rsp+A0h] [rbp-68h]
  int v86; // [rsp+A8h] [rbp-60h]
  __int64 v87; // [rsp+B0h] [rbp-58h]
  __m128i v88; // [rsp+B8h] [rbp-50h] BYREF

  v81 = a2;
  v80 = a3;
  v79 = a4;
  if ( a4 != -2 )
  {
    v84 = 0u;
    v83 = 0;
    v22 = (_QWORD *)operator new(0x20u);
    *v22 = a1;
    v23 = *(_QWORD *)(a1 + 24);
    v24 = _mm_loadl_epi64((const __m128i *)off_1C573F8);
    v22[1] = &v81;
    v22[2] = &v80;
    v22[3] = &v79;
    *(_QWORD *)&v83 = v22;
    v25 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_B44820;
    v84 = _mm_unpacklo_epi64(v24, (__m128i)(unsigned __int64)sub_B45CA0);
    if ( !*(_QWORD *)(v23 + 912) )
      goto LABEL_14;
    sub_B45CA0((__int64 **)&v83);
    if ( *(_QWORD *)(v23 + 912) )
      std::__ostream_insert<char,std::char_traits<char>>();
    v25 = (void (__fastcall *)(__m128i **, const __m128i **, int))v84.m128i_i64[0];
    if ( v84.m128i_i64[0] )
LABEL_14:
      v25((__m128i **)&v83, (const __m128i **)&v83, 3);
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
  {
    v10 = sub_966380(a1, *v81, v80);
    v11 = *(_QWORD *)(a1 + 16);
    v12 = v10;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 7488) + 48LL))(
      *(_QWORD *)(v11 + 7488),
      *(_QWORD *)(*(_QWORD *)(v11 + 8840) + 8LL * (v10 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 7488) + 64LL))(*(_QWORD *)(v11 + 7488));
    v13 = *(_DWORD *)(a1 + 8);
    LODWORD(v83) = v12;
    v14 = *(_QWORD *)(a1 + 16);
    if ( v79 == -2 )
      return sub_B69FE0(v14, v13, 1, (unsigned int)&v83, 0, 0, 1);
    DWORD1(v83) = v79 ^ 1;
    return sub_B69FE0(v14, v13, 2, (unsigned int)&v83, 0, 0, 1);
  }
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v15 = *(_QWORD **)(a1 + 16);
  v16 = (__int64)v81;
  if ( v79 != -2 )
  {
    if ( *(_BYTE *)(v15[1106] + v79) != 1 )
    {
      v17 = sub_966380(a1, *v81, v80);
      v18 = *(_QWORD *)(a1 + 16);
      v19 = v17;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 7488) + 48LL))(
        *(_QWORD *)(v18 + 7488),
        *(_QWORD *)(*(_QWORD *)(v18 + 8840) + 8LL * (v17 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 7488) + 64LL))(*(_QWORD *)(v18 + 7488));
      v20 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 7488) + 48LL))(
        *(_QWORD *)(v20 + 7488),
        *(_QWORD *)(*(_QWORD *)(v20 + 8840) + 8LL * (v79 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 7488) + 64LL))(*(_QWORD *)(v20 + 7488));
      LODWORD(v83) = v19;
      v13 = *(_DWORD *)(a1 + 8);
      v14 = *(_QWORD *)(a1 + 16);
      DWORD1(v83) = v79 ^ 1;
      return sub_B69FE0(v14, v13, 2, (unsigned int)&v83, 0, 0, 1);
    }
    v31 = *(_QWORD *)(a1 + 16);
    v32 = *(_DWORD *)(a1 + 8);
    v33 = *(_QWORD *)(v15[1082] + 8LL * (unsigned int)*v80);
    v82[0] = v79;
    v78 = (__int64 *)v82;
    v76 = v33;
    sub_B72D60(&v83, v31, 1, v82, 0, 0);
    v86 = v32;
    v88.m128i_i64[0] = v16;
    v87 = 0;
    *(_QWORD *)&v83 = &off_1C579E8;
    v88.m128i_i64[1] = v33;
    nullsub_687(&v83, v15);
    *(_QWORD *)&v83 = &off_1C72738;
    v75 = qword_1C6E7C8;
    v34 = sub_180C100(v15 + 1050, 72);
    *(_BYTE *)(v34 + 8) = BYTE8(v83) & 3 | *(_BYTE *)(v34 + 8) & 0xFC;
    *(_DWORD *)(v34 + 12) = HIDWORD(v83);
    *(_QWORD *)(v34 + 16) = v84.m128i_i64[0];
    *(_DWORD *)(v34 + 24) = v84.m128i_i32[2];
    *(_QWORD *)(v34 + 32) = v85;
    v75 = qword_1C6E7C8;
    *(_QWORD *)v34 = qword_1C6E7C8;
    v35 = v86;
    *(_QWORD *)(v34 + 48) = 0;
    *(_DWORD *)(v34 + 40) = v35;
    if ( v87 )
    {
      v36 = *(_DWORD *)(v87 - 4);
      v74.m128i_i32[0] = *(_DWORD *)(v87 - 8);
      v37 = sub_186B270(16LL * v74.m128i_u32[0] + 8) + 8;
      *(_QWORD *)(v37 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v74.m128i_u32[0]), _mm_cvtsi32_si128(v36)).m128i_u64[0];
      *(_QWORD *)(v34 + 48) = v37;
      v38 = v87;
      v77 = v37;
      if ( !v87 || (v74.m128i_i64[0] = v87 + 16LL * *(unsigned int *)(v87 - 4), v87 == v74.m128i_i64[0]) )
      {
        v62 = _mm_loadu_si128(&v88);
        *(_QWORD *)v34 = &off_1C72738;
        *(__m128i *)(v34 + 56) = v62;
        goto LABEL_27;
      }
      v39 = v77;
      do
      {
        sub_15D0E50(v39, v38);
        v38 += 16;
        v39 += 16;
      }
      while ( v74.m128i_i64[0] != v38 );
      v40 = _mm_loadu_si128(&v88);
      v41 = *(_QWORD *)(v34 + 48);
      *(_QWORD *)v34 = &off_1C72738;
      v77 = v41;
      *(__m128i *)(v34 + 56) = v40;
      if ( v41 )
      {
LABEL_27:
        if ( *(_DWORD *)(v77 - 4) )
        {
          v42 = (_QWORD *)v15[1075];
          if ( v42 )
          {
            v43 = *((_DWORD *)v42 - 1);
            if ( v43 == *((_DWORD *)v42 - 2) )
            {
              v68 = (3 * v43 + 1) >> 1;
              v69 = 8 * v68 + 8;
              if ( 8 * v43 + 8 >= v69 || v43 >= v68 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v78, "Overflow encountered when expanding vector");
                v7 = v78;
                v8 = v78;
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v8);
                sub_233E40((__int64)v7);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v70 = (unsigned int *)sub_186B300(v42 - 1, v69);
              v71 = v70[1];
              v42 = v70 + 2;
              v15[1075] = v70 + 2;
              *v70 = v68;
              LODWORD(v70) = v71;
              v46 = &v42[v71];
              v45 = (_DWORD)v70 + 1;
            }
            else
            {
              v44 = v43;
              v45 = v43 + 1;
              v46 = &v42[v44];
            }
          }
          else
          {
            v73 = (_QWORD *)sub_186B270(0x18u);
            *v73 = 2;
            v45 = 1;
            v42 = v73 + 1;
            v15[1075] = v42;
            v46 = v42;
          }
          *v46 = v34;
          *((_DWORD *)v42 - 1) = v45;
        }
      }
    }
    else
    {
      v47 = _mm_loadu_si128(&v88);
      *(_QWORD *)v34 = &off_1C72738;
      *(__m128i *)(v34 + 56) = v47;
    }
    v48 = v87;
    *(_QWORD *)&v83 = v75;
    if ( v87 )
    {
      v49 = *(unsigned int *)(v87 - 4);
      if ( (_DWORD)v49 )
      {
        v50 = v87 + 16 * v49;
        do
        {
          v51 = v48;
          v48 += 16;
          sub_15D0DF0(v51);
        }
        while ( v48 != v50 );
        v48 = v87;
      }
      sub_186B220((void *)(v48 - 8));
    }
    result = *(_QWORD *)(v76 + 8);
    if ( v81[1] != (_DWORD *)result )
    {
      v52 = *(_QWORD *)(a1 + 16);
      v53 = *(__m128 **)(v52 + 8760);
      if ( v53 )
      {
        v54 = v53[-1].m128_u32[3];
        if ( v54 == v53[-1].m128_i32[2] )
        {
          v64 = (3 * v54 + 1) >> 1;
          v65 = 8 * (v64 + ((3 * v54 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * v54 + 8 >= (unsigned int)v65 || v54 >= v64 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v83, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v83);
            sub_233E40((__int64)&v83);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = (unsigned int *)sub_186B300(&v53[-1].m128_u16[4], v65);
          v67 = v66[1];
          v53 = (__m128 *)(v66 + 2);
          *(_QWORD *)(v52 + 8760) = v66 + 2;
          *v66 = v64;
          LODWORD(v66) = v67;
          v56 = (__m128 *)((char *)v53 + 24 * v67);
          result = (unsigned int)((_DWORD)v66 + 1);
        }
        else
        {
          v55 = v54;
          result = v54 + 1;
          v56 = (__m128 *)((char *)v53 + 24 * v55);
        }
      }
      else
      {
        v63 = (_QWORD *)sub_186B270(0x38u);
        v53 = (__m128 *)(v63 + 1);
        *v63 = 2;
        result = 1;
        *(_QWORD *)(v52 + 8760) = v53;
        v56 = v53;
      }
      v57 = _mm_loadh_ps((const double *)&v76);
      v56[1].m128_u64[0] = v34 | 3;
      *v56 = v57;
      v53[-1].m128_i32[3] = result;
    }
    return result;
  }
  result = *(_QWORD *)(v15[1082] + 8LL * (unsigned int)*v80);
  if ( v81[1] != *(_DWORD **)(result + 8) )
  {
    v26 = (__m128i *)v15[1095];
    v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v81, (__m128i)(unsigned __int64)result);
    if ( v26 )
    {
      v28 = v26[-1].m128i_u32[3];
      if ( v28 == v26[-1].m128i_i32[2] )
      {
        v58 = (3 * v28 + 1) >> 1;
        v59 = 8 * (v58 + ((3 * v28 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v28 + 8 >= (unsigned int)v59 || v28 >= v58 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v83, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v83);
          sub_233E40((__int64)&v83);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = v27;
        v60 = (unsigned int *)sub_186B300(&v26[-1].m128i_u64[1], v59);
        v27 = _mm_load_si128(&v74);
        v61 = v60[1];
        v26 = (__m128i *)(v60 + 2);
        v15[1095] = v60 + 2;
        *v60 = v58;
        LODWORD(v60) = v61;
        v30 = (__m128i *)((char *)v26 + 24 * v61);
        result = (unsigned int)((_DWORD)v60 + 1);
      }
      else
      {
        v29 = v28;
        result = v28 + 1;
        v30 = (__m128i *)((char *)v26 + 24 * v29);
      }
    }
    else
    {
      v74 = v27;
      v72 = (_QWORD *)sub_186B270(0x38u);
      v27 = _mm_load_si128(&v74);
      v26 = (__m128i *)(v72 + 1);
      *v72 = 2;
      result = 1;
      v15[1095] = v26;
      v30 = v26;
    }
    v30[1].m128i_i64[0] = 0;
    *v30 = v27;
    v26[-1].m128i_i32[3] = result;
  }
  return result;
}

