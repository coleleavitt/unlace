__int64 __fastcall sub_23BBB0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v10; // ebp
  int v11; // edx
  const __m128i *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm1
  __m128 si128; // xmm0
  __int64 v17; // r13
  unsigned int *v18; // r10
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned int *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, _QWORD, __m128i *); // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __m128i v30; // xmm1
  int v31; // eax
  _DWORD *v32; // rdi
  unsigned int v33; // ebp
  unsigned int v34; // r13d
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r15d
  const __m128i *v38; // rax
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm4
  unsigned __int64 v42; // xmm4_8
  __m128 v43; // xmm5
  unsigned int *v44; // xmm5_8
  const __m128i *v45; // rax
  __m128 v46; // xmm1
  __m128 v47; // xmm0
  __int64 result; // rax
  __m128i v49; // xmm1
  unsigned int v50; // edx
  __int64 v51; // rcx
  unsigned int *v52; // r14
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  unsigned int *v57; // r11
  __int64 v58; // r10
  __int64 v59; // r14
  __m128i v60; // xmm0
  unsigned int v61; // edx
  _DWORD *v62; // rax
  __int64 v63; // rcx
  unsigned int **v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // edx
  __int64 v68; // rdx
  unsigned int *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  unsigned int v72; // ecx
  unsigned int v73; // edx
  __int64 v74; // rdi
  __int64 v75; // rax
  char v76; // al
  __int64 v77; // rax
  signed int v78; // eax
  unsigned int v79; // esi
  __int64 v80; // r14
  __int64 *v81; // rax
  __int64 v82; // rdx
  int v83; // [rsp+0h] [rbp-108h]
  __m128i *v84; // [rsp+8h] [rbp-100h]
  int v85; // [rsp+10h] [rbp-F8h]
  int v86; // [rsp+14h] [rbp-F4h]
  __int64 v87; // [rsp+18h] [rbp-F0h]
  int v88[2]; // [rsp+18h] [rbp-F0h]
  int v89[2]; // [rsp+18h] [rbp-F0h]
  int v90[2]; // [rsp+18h] [rbp-F0h]
  int v91[2]; // [rsp+18h] [rbp-F0h]
  int v92[2]; // [rsp+18h] [rbp-F0h]
  int v93[2]; // [rsp+18h] [rbp-F0h]
  int v94[2]; // [rsp+18h] [rbp-F0h]
  int v95[4]; // [rsp+20h] [rbp-E8h] BYREF
  int v96[4]; // [rsp+30h] [rbp-D8h] BYREF
  int v97[4]; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v98; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int **v99; // [rsp+60h] [rbp-A8h]
  unsigned int **v100; // [rsp+68h] [rbp-A0h]
  int v101[2]; // [rsp+70h] [rbp-98h]
  unsigned int v102; // [rsp+78h] [rbp-90h]
  unsigned int v103; // [rsp+7Ch] [rbp-8Ch]
  __int64 v104; // [rsp+88h] [rbp-80h] BYREF
  __m128 v105; // [rsp+90h] [rbp-78h] BYREF
  __m128 v106; // [rsp+A0h] [rbp-68h]
  __m128i v107; // [rsp+B0h] [rbp-58h] BYREF
  __m128 v108; // [rsp+C0h] [rbp-48h]

  v104 = a1;
  v102 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  sub_232F80((__int64)&v104);
  v99 = (unsigned int **)(a1 + 96);
  v86 = v11;
  v84 = &v107;
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      v12 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                               *(_QWORD *)(a1 + 16),
                               v10);
      v15 = (__m128)_mm_loadu_si128(v12);
      si128 = (__m128)_mm_loadu_si128(v12 + 1);
      a4 = _mm_movehl_ps(a4, v15);
      a5 = _mm_movehl_ps(a5, si128);
      v17 = si128.m128_u64[0];
      v105 = v15;
      v18 = (unsigned int *)a4.m128_u64[0];
      v106 = si128;
      if ( a4.m128_u64[0] )
        ++*(_DWORD *)(a4.m128_u64[0] + 8);
      if ( si128.m128_u64[0] )
        ++*(_DWORD *)(si128.m128_u64[0] + 8);
      if ( a5.m128_u64[0] )
        *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                  | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
      v19 = *(_QWORD *)(a1 + 96);
      if ( !v19 || (v20 = *(_DWORD *)(v19 - 4), v20 == *(_DWORD *)(v19 - 8)) )
      {
        *(__m128 *)v95 = si128;
        sub_23A6F0(v99);
        v19 = *(_QWORD *)(a1 + 96);
        v18 = (unsigned int *)a4.m128_u64[0];
        v23 = *(_QWORD *)(a1 + 88);
        si128 = (__m128)_mm_load_si128((const __m128i *)v95);
        v50 = *(_DWORD *)(v19 - 4);
        *(_QWORD *)(v19 + 8LL * v50) = a4.m128_u64[0];
        v22 = v50 + 1;
        *(_DWORD *)(v19 - 4) = v22;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(v19 + 8 * v21) = a4.m128_u64[0];
        *(_DWORD *)(v19 - 4) = v22;
      }
      if ( (_DWORD)v22 )
        break;
LABEL_18:
      v26 = *(_QWORD *)(a1 + 16);
      v27 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 32LL);
      if ( v23 && (v28 = *v18, (unsigned int)v28 < *(_DWORD *)(v23 - 4)) )
      {
        v29 = *(_QWORD *)(v23 + 8 * v28);
        v30 = _mm_loadl_epi64((const __m128i *)(a1 + 32));
        v108 = si128;
        v107 = _mm_unpacklo_epi64(v30, (__m128i)v29);
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
      }
      else
      {
        v49 = _mm_loadl_epi64((const __m128i *)(a1 + 32));
        v108 = si128;
        v107 = v49;
      }
      if ( a5.m128_u64[0] )
        *(_DWORD *)a5.m128_u64[0] = (*(_DWORD *)a5.m128_u64[0] + 1) & 0x3FFFFFFF
                                  | *(_DWORD *)a5.m128_u64[0] & 0xC0000000;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v27(v26, v10, v84);
      sub_234F80(v84->m128i_i64);
      sub_234F80((__int64 *)&v105);
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
        || v10 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
      {
        v10 = v102;
      }
      else
      {
        ++v10;
      }
      if ( v86 == v10 )
        goto LABEL_31;
    }
    while ( 1 )
    {
      v24 = *(unsigned int **)(v19 + 8LL * (unsigned int)(v22 - 1));
      if ( v23 )
      {
        v25 = *v24;
        if ( (unsigned int)v25 < *(_DWORD *)(v23 - 4) && *(_QWORD *)(v23 + 8 * v25) )
        {
          *(_DWORD *)(v19 - 4) = v22 - 1;
          goto LABEL_16;
        }
        v51 = *((unsigned __int16 *)v24 + 2);
        if ( !(_WORD)v51 )
          goto LABEL_66;
        if ( (_WORD)v51 != 2 )
        {
LABEL_65:
          *(_QWORD *)v88 = v18;
          *(__m128 *)v95 = si128;
          sub_237E20((_QWORD *)a1, v24, (__int64)v24);
          v19 = *(_QWORD *)(a1 + 96);
          v23 = *(_QWORD *)(a1 + 88);
          si128 = (__m128)_mm_load_si128((const __m128i *)v95);
          v18 = *(unsigned int **)v88;
          goto LABEL_16;
        }
        v52 = *((unsigned int **)v24 + 3);
        v53 = *v52;
        if ( (unsigned int)v53 < *(_DWORD *)(v23 - 4) )
        {
          v54 = *(_QWORD *)(v23 + 8 * v53);
          if ( v54 )
          {
            v55 = *(_QWORD *)(a1 + 32);
            *(_QWORD *)v96 = v18;
            *(_QWORD *)v95 = v24;
            v87 = v55;
            *(__m128 *)v97 = si128;
            v56 = sub_15DBB60(v55, v24, v54);
            v57 = *(unsigned int **)v95;
            v58 = *(_QWORD *)v96;
            v59 = v56;
            v60 = _mm_load_si128((const __m128i *)v97);
            if ( v56 )
              ++*(_DWORD *)(v56 + 8);
LABEL_58:
            *(_QWORD *)v95 = v58;
            *(__m128i *)v96 = v60;
            sub_237E20((_QWORD *)a1, v57, v56);
            sub_22BCA0(v59, v87);
            v19 = *(_QWORD *)(a1 + 96);
            v23 = *(_QWORD *)(a1 + 88);
            v18 = *(unsigned int **)v95;
            si128 = (__m128)_mm_load_si128((const __m128i *)v96);
            goto LABEL_16;
          }
        }
      }
      else
      {
        v51 = *((unsigned __int16 *)v24 + 2);
        if ( !(_WORD)v51 )
        {
LABEL_66:
          *(_QWORD *)v101 = *((_QWORD *)v24 + 2);
          v62 = *(_DWORD **)(*(_QWORD *)v101 + 24LL);
          if ( !v62 || *v62 == -1 )
          {
            *(_QWORD *)v95 = v18;
            *(_QWORD *)v93 = v24;
            *(__m128 *)v96 = si128;
            v77 = sub_23AAF0(a1, *(__int64 *)v101, v22, v51, v13, v14);
            si128 = (__m128)_mm_load_si128((const __m128i *)v96);
            v18 = *(unsigned int **)v95;
            *(_QWORD *)v101 = v77;
            v24 = *(unsigned int **)v93;
          }
          v63 = *(_QWORD *)(a1 + 104);
          if ( !v63 )
          {
            v64 = (unsigned int **)(v24 + 8);
            v103 = v24[6];
            v13 = (__int64)&v24[2 * v103 + 8];
            if ( 8LL * v103 )
              goto LABEL_70;
            goto LABEL_93;
          }
          *(_DWORD *)(v63 - 4) = 0;
          v64 = (unsigned int **)(v24 + 8);
          v103 = v24[6];
          v13 = (__int64)&v24[2 * v103 + 8];
          if ( 8LL * v103 )
          {
LABEL_70:
            v100 = (unsigned int **)(a1 + 104);
            do
            {
              while ( 1 )
              {
                v68 = *(_QWORD *)(a1 + 88);
                v69 = *v64;
                if ( !v68 )
                  break;
                v70 = *v69;
                if ( (unsigned int)v70 >= *(_DWORD *)(v68 - 4) )
                  break;
                v65 = *(_QWORD *)(v68 + 8 * v70);
                if ( !v65 )
                  break;
                v66 = *(_QWORD *)(a1 + 104);
                if ( !v66 || (v67 = *(_DWORD *)(v66 - 4), v67 == *(_DWORD *)(v66 - 8)) )
                {
                  *(_QWORD *)v97 = v18;
                  *(_QWORD *)v96 = v65;
                  *(_QWORD *)v95 = v24;
                  *(_QWORD *)v90 = v13;
                  v98 = si128;
                  sub_23A6F0(v100);
                  v66 = *(_QWORD *)(a1 + 104);
                  si128 = (__m128)_mm_load_si128((const __m128i *)&v98);
                  v18 = *(unsigned int **)v97;
                  v65 = *(_QWORD *)v96;
                  v67 = *(_DWORD *)(v66 - 4);
                  v24 = *(unsigned int **)v95;
                  v13 = *(_QWORD *)v90;
                }
                ++v64;
                *(_QWORD *)(v66 + 8LL * v67) = v65;
                *(_DWORD *)(v66 - 4) = v67 + 1;
                if ( (unsigned int **)v13 == v64 )
                  goto LABEL_80;
              }
              v71 = *(_QWORD *)(a1 + 96);
              if ( !v71 || (v72 = *(_DWORD *)(v71 - 4), v72 == *(_DWORD *)(v71 - 8)) )
              {
                *(_QWORD *)v97 = v18;
                *(_QWORD *)v96 = v69;
                *(_QWORD *)v95 = v24;
                *(_QWORD *)v91 = v13;
                v98 = si128;
                sub_23A6F0(v99);
                v71 = *(_QWORD *)(a1 + 96);
                si128 = (__m128)_mm_load_si128((const __m128i *)&v98);
                v18 = *(unsigned int **)v97;
                v69 = *(unsigned int **)v96;
                v72 = *(_DWORD *)(v71 - 4);
                v24 = *(unsigned int **)v95;
                v13 = *(_QWORD *)v91;
              }
              ++v64;
              *(_QWORD *)(v71 + 8LL * v72) = v69;
              *(_DWORD *)(v71 - 4) = v72 + 1;
            }
            while ( (unsigned int **)v13 != v64 );
LABEL_80:
            v63 = *(_QWORD *)(a1 + 104);
            if ( v63 )
            {
              v73 = *(_DWORD *)(v63 - 4);
              goto LABEL_82;
            }
LABEL_93:
            if ( v103 )
            {
LABEL_94:
              v19 = *(_QWORD *)(a1 + 96);
              v23 = *(_QWORD *)(a1 + 88);
LABEL_16:
              if ( !v19 )
                goto LABEL_18;
              goto LABEL_17;
            }
            v73 = 0;
            v63 = *(_QWORD *)(*(_QWORD *)v101 + 24LL);
            *(_QWORD *)v89 = *(_QWORD *)(a1 + 32);
            if ( v63 )
              LODWORD(v63) = 0;
LABEL_86:
            v56 = sub_15DC610(
                    v89[0],
                    v101[0],
                    v73,
                    v63,
                    v13,
                    v14,
                    v83,
                    (int)v84,
                    v85,
                    v89[0],
                    (int)v24,
                    v95[2],
                    (int)v18,
                    v96[2],
                    si128.m128_i32[0],
                    (void *)si128.m128_u64[1]);
          }
          else
          {
            v73 = 0;
LABEL_82:
            if ( v73 < v103 )
              goto LABEL_94;
            v74 = *(_QWORD *)(a1 + 32);
            v75 = *(_QWORD *)(*(_QWORD *)v101 + 24LL);
            v89[0] = v74;
            if ( !v75 )
              goto LABEL_86;
            v76 = *(_BYTE *)(v75 + 17);
            if ( (v76 & 1) == 0 || (v76 & 2) == 0 )
              goto LABEL_86;
            if ( (v76 & 8) != 0 && v103 > 1 )
            {
              v78 = v73 - 1;
              if ( (int)(v73 - 1) > 0 )
              {
                LODWORD(v13) = *(_DWORD *)(a1 + 112);
                v79 = v73;
                *(_QWORD *)v94 = v78;
                v80 = v78;
                do
                {
                  LODWORD(v13) = 214013 * v13 + 2531011;
                  v81 = (__int64 *)(v63 + 8LL * ((WORD1(v13) & 0x7FFF) % ((int)v80 + 1)));
                  v82 = *(_QWORD *)(v63 + 8 * v80);
                  v14 = *v81;
                  *(_QWORD *)(v63 + 8 * v80--) = *v81;
                  *v81 = v82;
                }
                while ( (int)v80 > 0 );
                *(_DWORD *)(a1 + 112) = v13;
                *(_QWORD *)(v63 + 8 * (*(_QWORD *)v94 - (int)(v79 - 2))) = v14;
                *v81 = v82;
              }
            }
            v56 = sub_15DC610(
                    v74,
                    v101[0],
                    *(_DWORD *)(v63 - 4),
                    v63,
                    v13,
                    v14,
                    v83,
                    (int)v84,
                    v85,
                    v74,
                    (int)v24,
                    v95[2],
                    (int)v18,
                    v96[2],
                    si128.m128_i32[0],
                    (void *)si128.m128_u64[1]);
          }
          v57 = *(unsigned int **)v95;
          v58 = *(_QWORD *)v96;
          v59 = v56;
          v60 = _mm_load_si128((const __m128i *)v97);
          if ( v56 )
            ++*(_DWORD *)(v56 + 8);
          goto LABEL_58;
        }
        if ( (_WORD)v51 != 2 )
          goto LABEL_65;
        v52 = *((unsigned int **)v24 + 3);
      }
      if ( *(_DWORD *)(v19 - 8) == (_DWORD)v22 )
      {
        *(_QWORD *)v92 = v18;
        *(__m128 *)v95 = si128;
        sub_23A6F0(v99);
        v23 = *(_QWORD *)(a1 + 88);
        v19 = *(_QWORD *)(a1 + 96);
        si128 = (__m128)_mm_load_si128((const __m128i *)v95);
        v18 = *(unsigned int **)v92;
      }
      v61 = *(_DWORD *)(v19 - 4);
      *(_QWORD *)(v19 + 8LL * v61) = v52;
      *(_DWORD *)(v19 - 4) = v61 + 1;
LABEL_17:
      v22 = *(unsigned int *)(v19 - 4);
      if ( !(_DWORD)v22 )
        goto LABEL_18;
    }
  }
LABEL_31:
  v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v32 = *(_DWORD **)(a1 + 16);
  v33 = v32[2];
  v34 = v31 - v33;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v33 >= (unsigned int)result )
      break;
    v32 = *(_DWORD **)(a1 + 16);
    v35 = v32[2];
    v36 = 214013 * *(_DWORD *)(a1 + 112) + 2531011;
    *(_DWORD *)(a1 + 112) = v36;
    v37 = (HIWORD(v36) & 0x7FFFu) % v34 + v35;
    if ( v33 != v37 )
    {
      v38 = (const __m128i *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v32 + 24LL))(v32, v33);
      v39 = (__m128)_mm_loadu_si128(v38);
      v40 = (__m128)_mm_loadu_si128(v38 + 1);
      v42 = _mm_movehl_ps(v41, v39).m128_u64[0];
      v44 = (unsigned int *)_mm_movehl_ps(v43, v40).m128_u64[0];
      v105 = v39;
      v106 = v40;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      if ( v40.m128_u64[0] )
        ++*(_DWORD *)(v40.m128_u64[0] + 8);
      if ( v44 )
        *v44 = (*v44 + 1) & 0x3FFFFFFF | *v44 & 0xC0000000;
      v45 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 16) + 24LL))(
                               *(_QWORD *)(a1 + 16),
                               v37,
                               v44);
      v46 = (__m128)_mm_loadu_si128(v45);
      v47 = (__m128)_mm_loadu_si128(v45 + 1);
      a8 = _mm_movehl_ps(a8, v46);
      a9 = _mm_movehl_ps(a9, v47);
      v107 = (__m128i)v46;
      v108 = v47;
      if ( a8.m128_u64[0] )
        ++*(_DWORD *)(a8.m128_u64[0] + 8);
      if ( v47.m128_u64[0] )
        ++*(_DWORD *)(v47.m128_u64[0] + 8);
      if ( a9.m128_u64[0] )
        *(_DWORD *)a9.m128_u64[0] = (*(_DWORD *)a9.m128_u64[0] + 1) & 0x3FFFFFFF
                                  | *(_DWORD *)a9.m128_u64[0] & 0xC0000000;
      (*(void (__fastcall **)(_QWORD, _QWORD, __m128i *))(**(_QWORD **)(a1 + 16) + 32LL))(
        *(_QWORD *)(a1 + 16),
        v33,
        &v107);
      (*(void (__fastcall **)(_QWORD, _QWORD, __m128 *))(**(_QWORD **)(a1 + 16) + 32LL))(
        *(_QWORD *)(a1 + 16),
        v37,
        &v105);
      sub_234F80(v107.m128i_i64);
      sub_234F80((__int64 *)&v105);
      v32 = *(_DWORD **)(a1 + 16);
    }
    ++v33;
  }
  return result;
}

