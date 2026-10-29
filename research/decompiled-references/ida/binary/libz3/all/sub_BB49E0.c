__int64 __fastcall sub_BB49E0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  bool v6; // zf
  _DWORD *v7; // rax
  int v8; // r12d
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r13
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r12d
  void *v24; // rbx
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // r12
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // r12
  __int64 v58; // rax
  unsigned int v59; // ebp
  char v60; // al
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // ebp
  _QWORD *v66; // rdx
  __int64 v67; // rax
  int *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __m128i *v71; // r15
  __int64 v72; // r13
  int v73; // r12d
  int v74; // eax
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  int v79; // eax
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  int v84; // eax
  int v85; // edx
  int v86; // ecx
  int v87; // r8d
  int v88; // r9d
  __m128i v89; // xmm0
  __m128i v90; // xmm3
  __int64 v91; // rcx
  int v92; // eax
  int v93; // edx
  int v94; // ecx
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // rbx
  unsigned int v98; // ebx
  unsigned int v99; // ecx
  unsigned int *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  unsigned int v106; // [rsp+18h] [rbp-E0h]
  unsigned int v107; // [rsp+18h] [rbp-E0h]
  unsigned int v108; // [rsp+20h] [rbp-D8h]
  unsigned int v109; // [rsp+20h] [rbp-D8h]
  __int64 v110; // [rsp+28h] [rbp-D0h]
  unsigned int v111; // [rsp+34h] [rbp-C4h]
  unsigned int v112; // [rsp+44h] [rbp-B4h] BYREF
  __int64 v113; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v114; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v116; // [rsp+60h] [rbp-98h] BYREF
  __int64 v117; // [rsp+68h] [rbp-90h]
  __m128i v118; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v119[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v120[2]; // [rsp+90h] [rbp-68h] BYREF
  __m128i v121; // [rsp+A0h] [rbp-58h] BYREF
  char v122; // [rsp+B0h] [rbp-48h] BYREF

  v6 = *(_WORD *)(a2 + 4) == 0;
  v119[0] = 0;
  v119[1] = 0;
  v120[0] = 1;
  v120[1] = 0;
  if ( !v6 )
    goto LABEL_78;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v7 || *(_DWORD *)(a1 + 1744) != *v7 )
    goto LABEL_78;
  if ( v7[1] == 6 && *(_DWORD *)(a2 + 24) == 3 )
  {
    v69 = *(_QWORD *)(a2 + 32);
    v114 = *(_QWORD *)(a2 + 40);
    v70 = *(_QWORD *)(a2 + 48);
    v113 = v69;
    v115 = v70;
    sub_1579480(&v116, a1 + 1224);
    v110 = *(_QWORD *)(a1 + 24);
    sub_BB1E10(&v118, a1);
    v71 = &v121;
    sub_BB1E10(&v121, a1);
    v72 = v121.m128i_i64[0];
    if ( v121.m128i_i64[0] )
      ++*(_DWORD *)(v121.m128i_i64[0] + 8);
    sub_BB0560(v72, v121.m128i_i64[1]);
    sub_BB0560(v118.m128i_i64[0], v118.m128i_i64[1]);
    if ( !(unsigned __int8)sub_1666AE0(a1 + 1832, v114, v119, &v112) || LODWORD(v119[0]) )
    {
      v73 = a1 + 2184;
      sub_993400(a1 + 2208, 0);
      v92 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
      v107 = sub_BF5550((int)a1 + 2184, v92, v93, v94, v95, v96);
    }
    else
    {
      v73 = a1 + 2184;
      v107 = dword_1C7ED94;
    }
    sub_BB1E10(&v121, a1);
    sub_993400(a1 + 2208, 0);
    v74 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
    v111 = sub_BF5550(v73, v74, v75, v76, v77, v78) ^ 1;
    sub_BB0560(v121.m128i_i64[0], v121.m128i_i64[1]);
    sub_993400(a1 + 2208, 0);
    v79 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
    v109 = sub_BF5550(v73, v79, v80, v81, v82, v83);
    sub_993400(a1 + 2208, 0);
    v84 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
    v89 = _mm_cvtsi32_si128(sub_BF5550(v73, v84, v85, v86, v87, v88));
    v90 = _mm_cvtsi32_si128(v111);
    v91 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL);
    v121 = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v107), v90),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v109), v89));
    if ( *(_BYTE *)(v91 + v107) == 1
      && *(_BYTE *)(v91 + (unsigned int)_mm_cvtsi128_si32(v90)) == 1
      && *(_BYTE *)(v91 + v109) == 1
      && *(_BYTE *)(v91 + (unsigned int)_mm_cvtsi128_si32(v89)) == 1 )
    {
      v97 = v115;
      if ( v115 )
        ++*(_DWORD *)(v115 + 8);
      sub_BB0560(*a3, a3[1]);
      *a3 = v97;
      do
      {
        sub_BB4940(a4, (unsigned int *)v71);
        v71 = (__m128i *)((char *)v71 + 4);
      }
      while ( &v122 != (char *)v71 );
      sub_BB0560(v72, v110);
      sub_BB0560(v116, v117);
      goto LABEL_23;
    }
    sub_BB0560(v72, v110);
    sub_BB0560(v116, v117);
    goto LABEL_9;
  }
  if ( v7[1] == 8 && *(_DWORD *)(a2 + 24) == 2 )
  {
    v44 = *(_QWORD *)(a2 + 32);
    v45 = *(_QWORD *)(a2 + 40);
    v113 = v44;
    v114 = v45;
    if ( !(unsigned __int8)sub_1666AE0(a1 + 1832, v45, v119, &v118) || LODWORD(v119[0]) )
    {
      v47 = a1 + 2184;
      v102 = sub_993400(a1 + 2208, 0);
      v46 = (unsigned int)sub_BCEDE0(a1 + 2184, v114, v102);
    }
    else
    {
      v46 = (unsigned int)dword_1C7ED94;
      v47 = a1 + 2184;
    }
    sub_1579480(&v118, a1 + 1224);
    sub_BB1E10(&v121, a1);
    v48 = v121.m128i_i64[0];
    v49 = sub_993400(a1 + 2208, 0);
    v50 = (unsigned int)sub_BCEDE0(v47, v48, v49) ^ 1;
    sub_BB0560(v121.m128i_i64[0], v121.m128i_i64[1]);
    sub_BB0560(v118.m128i_i64[0], v118.m128i_i64[1]);
    v51 = *(_QWORD *)(a1 + 16);
    v121.m128i_i64[0] = __PAIR64__(v50, v46);
    v52 = *(_QWORD *)(v51 + 8848);
    if ( *(_BYTE *)(v52 + v46) == 1 && *(_BYTE *)(v52 + v50) == 1 )
    {
      v53 = sub_993400(a1 + 1832, 1u);
      v54 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      sub_BB0560(*a3, a3[1]);
      *a3 = v54;
      v55 = a4;
      sub_BB4940(a4, (unsigned int *)&v121);
      goto LABEL_41;
    }
  }
  else
  {
LABEL_78:
    if ( (unsigned __int8)sub_1409000(a1 + 1848, a2, &v113, &v114) )
    {
      if ( (unsigned __int8)sub_1666AE0(a1 + 1832, v114, v119, &v121) && !LODWORD(v119[0]) )
      {
        v14 = (unsigned int)dword_1C7ED94;
        v8 = a1 + 2184;
      }
      else
      {
        v8 = a1 + 2184;
        sub_993400(a1 + 2208, 0);
        v9 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v14 = (unsigned int)sub_BF5550((int)a1 + 2184, v9, v10, v11, v12, v13);
      }
      sub_1579480(&v118, a1 + 1224);
      sub_BB1E10(&v121, a1);
      sub_993400(a1 + 2208, 0);
      v15 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
      v20 = (unsigned int)sub_BF5550(v8, v15, v16, v17, v18, v19) ^ 1;
      sub_BB0560(v121.m128i_i64[0], v121.m128i_i64[1]);
      sub_BB0560(v118.m128i_i64[0], v118.m128i_i64[1]);
      v21 = *(_QWORD *)(a1 + 16);
      v121.m128i_i64[0] = __PAIR64__(v20, v14);
      v22 = *(_QWORD *)(v21 + 8848);
      if ( *(_BYTE *)(v22 + v14) == 1 && *(_BYTE *)(v22 + v20) == 1 )
      {
        v56 = v114;
        if ( v114 )
          ++*(_DWORD *)(v114 + 8);
        sub_BB0560(*a3, a3[1]);
        *a3 = v56;
        v55 = a4;
        sub_BB4940(a4, (unsigned int *)&v121);
LABEL_41:
        sub_BB4940(v55, &v121.m128i_u32[1]);
        goto LABEL_23;
      }
    }
    else if ( (unsigned __int8)sub_1409060(a1 + 1848, a2, &v113, &v114) )
    {
      sub_993400(a1 + 2208, 0);
      v26 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
      v106 = sub_BF5550((int)a1 + 2184, v26, v27, v28, v29, v30);
      sub_1579480(&v118, a1 + 1224);
      sub_BB1E10(&v121, a1);
      sub_993400(a1 + 2208, 0);
      v31 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
      v108 = sub_BF5550((int)a1 + 2184, v31, v32, v33, v34, v35);
      sub_BB0560(v121.m128i_i64[0], v121.m128i_i64[1]);
      sub_BB0560(v118.m128i_i64[0], v118.m128i_i64[1]);
      v36 = *(_QWORD *)(a1 + 16);
      v116 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v106), _mm_cvtsi32_si128(v108)).m128i_u64[0];
      v37 = _mm_cvtsi32_si128(v108);
      v38 = *(_QWORD *)(v36 + 8848);
      if ( *(_BYTE *)(v38 + v106) == 1 && *(_BYTE *)(v38 + (unsigned int)_mm_cvtsi128_si32(v37)) == 1 )
      {
        sub_1579480(&v118, a1 + 1224);
        sub_BB1E10(&v121, a1);
        v39 = v121.m128i_i64[1];
        v40 = *a3;
        *a3 = v121.m128i_i64[0];
        v121.m128i_i64[0] = v40;
        sub_BB0560(v40, v39);
        sub_BB0560(v118.m128i_i64[0], v118.m128i_i64[1]);
        sub_BB4940(a4, (unsigned int *)&v116);
        sub_BB4940(a4, (unsigned int *)&v116 + 1);
LABEL_23:
        v23 = 1;
        goto LABEL_10;
      }
    }
    else
    {
      if ( (unsigned __int8)sub_1408E70(a1 + 1848, a2, &v113, &v115) )
      {
        sub_1579480(&v116, a1 + 1224);
        sub_BB1E10(&v121, a1);
        v57 = v121.m128i_i64[0];
        v58 = sub_993400(a1 + 2208, 1u);
        v112 = sub_BCEDE0(a1 + 2184, v57, v58);
        v59 = v112;
        sub_BB0560(v121.m128i_i64[0], v121.m128i_i64[1]);
        v60 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v112);
        if ( v60 == -1 )
        {
          v63 = sub_993400(a1 + 1832, 0);
          v64 = v63;
          if ( v63 )
            ++*(_DWORD *)(v63 + 8);
          sub_BB0560(*a3, a3[1]);
          *a3 = v64;
          v65 = v59 ^ 1;
          v66 = (_QWORD *)*a4;
          if ( *a4 )
          {
            v67 = *((unsigned int *)v66 - 1);
            if ( (_DWORD)v67 == *((_DWORD *)v66 - 2) )
            {
              v98 = (unsigned int)(3 * v67 + 1) >> 1;
              v99 = 4 * v98 + 8;
              if ( 4 * (int)v67 + 8 >= v99 || (unsigned int)v67 >= v98 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_154526(v121.m128i_i64, "Overflow encountered when expanding vector", v5);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v121);
                sub_233E40((__int64)&v121);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v100 = (unsigned int *)sub_186B300(v66 - 1, v99);
              v66 = v100 + 2;
              *v100 = v98;
              v101 = v100[1];
              *a4 = v66;
              v68 = (int *)v66 + v101;
            }
            else
            {
              v68 = (int *)v66 + v67;
            }
          }
          else
          {
            v103 = (_QWORD *)sub_186B270(0x10u);
            *v103 = 2;
            v66 = v103 + 1;
            *a4 = v103 + 1;
            v68 = (int *)(v103 + 1);
          }
          *v68 = v65;
          ++*((_DWORD *)v66 - 1);
        }
        else
        {
          if ( v60 != 1 )
          {
            sub_BB0560(v116, v117);
            goto LABEL_9;
          }
          sub_993400(a1 + 1832, 1u);
          sub_BB1E10(&v118, a1);
          sub_BB1E10(&v121, a1);
          v61 = v121.m128i_i64[1];
          v62 = *a3;
          *a3 = v121.m128i_i64[0];
          v121.m128i_i64[0] = v62;
          sub_BB0560(v62, v61);
          sub_BB0560(v118.m128i_i64[0], v118.m128i_i64[1]);
          sub_BB4940(a4, &v112);
        }
        sub_BB0560(v116, v117);
        goto LABEL_23;
      }
      if ( !*(_WORD *)(a2 + 4) )
      {
        v41 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
        if ( v41 )
        {
          if ( *(_DWORD *)(a1 + 1744) == *v41 && !v41[1] )
          {
            v42 = sub_993400(a1 + 1832, 1u);
            v43 = v42;
            if ( v42 )
              ++*(_DWORD *)(v42 + 8);
            sub_BB0560(*a3, a3[1]);
            *a3 = v43;
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_9:
  v23 = 0;
LABEL_10:
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v119);
  sub_182CBA0(v24, v120);
  return v23;
}

