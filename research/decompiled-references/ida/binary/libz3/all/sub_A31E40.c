__int64 __fastcall sub_A31E40(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rcx
  __int32 v15; // r8d
  _DWORD *v16; // rax
  unsigned int v17; // edi
  _DWORD *v18; // r9
  __int64 v19; // rdi
  _DWORD *v20; // rsi
  _DWORD *v21; // rcx
  int v22; // edi
  __int32 *v23; // rcx
  __int64 v24; // rax
  __int32 *v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  __int32 *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r14
  const __m128i *v32; // r13
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r10
  int v37; // r15d
  int v38; // ecx
  int v39; // edx
  int v40; // r11d
  unsigned int v41; // ecx
  __int64 v42; // r15
  int v43; // edx
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // r11
  __int64 i; // rcx
  unsigned __int64 v48; // rsi
  __m128i *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rdi
  int v52; // eax
  __m128i *v53; // rdi
  unsigned int *v54; // rdx
  unsigned int v55; // ecx
  unsigned int v56; // esi
  __int64 result; // rax
  unsigned __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rdi
  int v61; // eax
  __m128i *v62; // rdi
  unsigned int v63; // r15d
  unsigned int v64; // edx
  __int64 v65; // rax
  __int64 v66; // rdi
  _DWORD *v67; // rcx
  __int64 v68; // r9
  unsigned __int64 v69; // rax
  __int64 v70; // r9
  unsigned int v71; // edx
  size_t v72; // rsi
  unsigned int v73; // r14d
  unsigned int *v74; // rax
  __int64 v75; // rax
  unsigned int v76; // edx
  size_t v77; // rsi
  unsigned int v78; // r14d
  unsigned int *v79; // rax
  __int64 v80; // rax
  unsigned int v81; // r15d
  unsigned int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rdi
  _DWORD *v85; // rcx
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // r9
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  char **v93; // r13
  char **exception; // r13
  char **v95; // r13
  char **v96; // r13
  __int64 v97; // [rsp+8h] [rbp-198h]
  __int64 *v98; // [rsp+18h] [rbp-188h]
  __m128i *v99; // [rsp+20h] [rbp-180h]
  __m128i *v100; // [rsp+20h] [rbp-180h]
  _DWORD *v101; // [rsp+28h] [rbp-178h]
  _DWORD *v102; // [rsp+28h] [rbp-178h]
  __int64 v103; // [rsp+30h] [rbp-170h]
  __int64 v104; // [rsp+38h] [rbp-168h]
  __int64 *v105; // [rsp+40h] [rbp-160h]
  __int32 v106; // [rsp+48h] [rbp-158h]
  __int64 v107; // [rsp+48h] [rbp-158h]
  __int64 v108; // [rsp+58h] [rbp-148h] BYREF
  __int64 v109; // [rsp+60h] [rbp-140h] BYREF
  __int64 v110; // [rsp+68h] [rbp-138h]
  __int64 v111; // [rsp+70h] [rbp-130h] BYREF
  __int64 *v112; // [rsp+78h] [rbp-128h]
  __m128i v113; // [rsp+80h] [rbp-120h] BYREF
  __int64 v114; // [rsp+90h] [rbp-110h]
  __int64 v115; // [rsp+98h] [rbp-108h]
  __int64 v116; // [rsp+A0h] [rbp-100h]
  __int64 v117; // [rsp+A8h] [rbp-F8h]
  _QWORD v118[6]; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 (__fastcall **v119)(); // [rsp+E0h] [rbp-C0h]
  int v120; // [rsp+E8h] [rbp-B8h]
  _BYTE v121[96]; // [rsp+F0h] [rbp-B0h] BYREF
  char v122; // [rsp+150h] [rbp-50h]
  __int128 v123; // [rsp+158h] [rbp-48h]

  v3 = *(unsigned int *)(a1 + 1320);
  v109 = a1;
  v110 = a1 + 48 * v3 + 1176;
  sub_9A4DA0(v110);
  ++*(_DWORD *)(a1 + 1320);
  v113 = 0u;
  v114 = 1;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v118[0] = 1;
  v118[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v118);
  BYTE4(v118[0]) &= ~1u;
  v119 = &off_1C563C8;
  LODWORD(v118[0]) = 1;
  v118[2] = 0;
  v118[3] = 0;
  v118[4] = 1;
  v118[5] = 0;
  v120 = -1;
  sub_8A6550((__int64)v121, (__int64)&v113);
  v4.m128i_i64[0] = 0;
  v122 &= 0xFCu;
  v119 = &off_1C56470;
  v123 = 0;
  sub_2A6060((__int64)&v113);
  v108 = 0;
  sub_A30ED0(a1 + 888, a2, &v108);
  v5 = v108;
  v104 = a1 + 272;
  v97 = v108;
  sub_9E4980(a1 + 272);
  v103 = a1 + 296;
  sub_9E7500(a1 + 296);
  if ( v5 )
  {
    v98 = (__int64 *)(v5 + 8LL * *(unsigned int *)(v5 - 4));
    if ( (__int64 *)v5 != v98 )
    {
      v105 = (__int64 *)v5;
      do
      {
        v6 = *v105;
        v7 = *(unsigned int *)(a1 + 1320);
        v111 = a1;
        v112 = (__int64 *)(a1 + 48 * v7 + 1176);
        sub_9A4DA0((__int64)v112);
        v8 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(a1 + 1320);
        (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v6 + 24LL))(
          v6,
          &v111,
          &qword_1C7F2A0,
          *(_DWORD *)(v8 + 712) != 0);
        v9 = v112;
        v10 = *v112;
        if ( *v112 )
        {
          v11 = *(unsigned int *)(v10 - 4);
          if ( (_DWORD)v11 )
          {
            v12 = 4 * v11;
            v13 = 0;
            while ( 1 )
            {
              v14 = *(unsigned int *)(a1 + 280);
              v15 = *(_DWORD *)(v10 + v13);
              v16 = *(_DWORD **)(a1 + 272);
              v17 = v14 - 1;
              v14 *= 8;
              v106 = v15;
              v18 = (_DWORD *)((char *)v16 + v14);
              v19 = 8LL * (v15 & v17);
              v20 = &v16[(unsigned __int64)v19 / 4];
              if ( v19 != v14 )
              {
                v21 = &v16[(unsigned __int64)v19 / 4];
                do
                {
                  v22 = v21[1];
                  if ( v22 + 0x80000000 > 1 )
                  {
                    if ( *v21 == v15 && v15 == v22 )
                      goto LABEL_20;
                  }
                  else if ( v22 == 0x80000000 )
                  {
                    v106 = v15;
                    goto LABEL_15;
                  }
                  v21 += 2;
                }
                while ( v18 != v21 );
                v106 = v15;
              }
              for ( ; v20 != v16; v16 += 2 )
              {
                v26 = v16[1];
                if ( v26 + 0x80000000 > 1 )
                {
                  if ( *v16 == v106 && v106 == v26 )
                    goto LABEL_20;
                }
                else if ( v26 == 0x80000000 )
                {
                  break;
                }
              }
LABEL_15:
              v23 = (__int32 *)v123;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
              {
                if ( (_QWORD)v123 )
                {
                  v24 = *(unsigned int *)(v123 - 4);
                  if ( (_DWORD)v24 == *(_DWORD *)(v123 - 8) )
                  {
                    v71 = (unsigned int)(3 * v24 + 1) >> 1;
                    v72 = 4 * v71 + 8;
                    v73 = v71;
                    if ( 4 * (int)v24 + 8 >= (unsigned int)v72 || (unsigned int)v24 >= v71 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_98B3B0(v113.m128i_i64, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v113);
                      sub_233E40((__int64)&v113);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v74 = (unsigned int *)sub_186B300((void *)(v123 - 8), v72);
                    v23 = (__int32 *)(v74 + 2);
                    *v74 = v73;
                    v75 = v74[1];
                    *(_QWORD *)&v123 = v23;
                    v9 = v112;
                    v25 = &v23[v75];
                  }
                  else
                  {
                    v25 = (__int32 *)(v123 + 4 * v24);
                  }
                }
                else
                {
                  v91 = (_QWORD *)sub_186B270(0x10u);
                  v9 = v112;
                  v23 = (__int32 *)(v91 + 1);
                  *v91 = 2;
                  v25 = v23;
                  *(_QWORD *)&v123 = v23;
                }
                *v25 = v106;
                ++*(v23 - 1);
LABEL_20:
                v13 += 4;
                if ( v13 == v12 )
                  break;
              }
              else
              {
                if ( (_QWORD)v123 )
                {
                  v27 = *(unsigned int *)(v123 - 4);
                  if ( (_DWORD)v27 == *(_DWORD *)(v123 - 8) )
                  {
                    v76 = (unsigned int)(3 * v27 + 1) >> 1;
                    v77 = 4 * v76 + 8;
                    v78 = v76;
                    if ( 4 * (int)v27 + 8 >= (unsigned int)v77 || (unsigned int)v27 >= v76 )
                    {
                      v96 = (char **)__cxa_allocate_exception(0x28u);
                      sub_98B3B0(v113.m128i_i64, "Overflow encountered when expanding vector");
                      *v96 = (char *)off_1C63128;
                      sub_2333C0(v96 + 1, &v113);
                      sub_233E40((__int64)&v113);
                      __cxa_throw(
                        v96,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v79 = (unsigned int *)sub_186B300((void *)(v123 - 8), v77);
                    v23 = (__int32 *)(v79 + 2);
                    *v79 = v78;
                    v80 = v79[1];
                    *(_QWORD *)&v123 = v23;
                    v28 = &v23[v80];
                  }
                  else
                  {
                    v28 = (__int32 *)(v123 + 4 * v27);
                  }
                }
                else
                {
                  v89 = (_QWORD *)sub_186B270(0x10u);
                  v23 = (__int32 *)(v89 + 1);
                  *v89 = 2;
                  v28 = v23;
                  *(_QWORD *)&v123 = v23;
                }
                *v28 = v106;
                ++*(v23 - 1);
                v113.m128i_i32[0] = v106;
                sub_9E1E20(v104, v113.m128i_i32);
                v13 += 4;
                v9 = v112;
                if ( v13 == v12 )
                  break;
              }
              v10 = *v9;
            }
          }
        }
        v29 = v9[1];
        if ( !v29 )
          goto LABEL_54;
        v30 = *(unsigned int *)(v29 - 4);
        if ( !(_DWORD)v30 )
          goto LABEL_54;
        v31 = 0;
        v107 = 16 * v30;
LABEL_38:
        v32 = (const __m128i *)(v29 + v31);
        v33 = *(unsigned int *)(a1 + 304);
        v34 = *(_QWORD *)(a1 + 296);
        v35 = *(_QWORD *)(v29 + v31);
        v36 = *(_QWORD *)(v29 + v31 + 8);
        v37 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
        v38 = (*(_DWORD *)(*(_QWORD *)v36 + 12LL) - v37) ^ (v37 << 8);
        v39 = (v37 - v38) << 10;
        v40 = v38 - v37 + (v38 ^ ((v37 - v38) << 16));
        v41 = v33 - 1;
        v42 = 24 * v33;
        v43 = v40 ^ v39;
        v44 = v34 + 24 * v33;
        v45 = 24LL * (v43 & v41);
        v46 = v34 + v45;
        if ( v45 != v42 )
        {
          for ( i = v34 + v45; v44 != i; i += 24 )
          {
            v48 = *(_QWORD *)(i + 8);
            if ( v48 > 1 )
            {
              if ( *(_DWORD *)i == v43 && v35 == v48 && v36 == *(_QWORD *)(i + 16) )
              {
                v31 += 16;
                if ( v31 == v107 )
                  goto LABEL_54;
LABEL_51:
                v29 = v112[1];
                goto LABEL_38;
              }
            }
            else if ( !v48 )
            {
              goto LABEL_45;
            }
          }
        }
        for ( ; v46 != v34; v34 += 24 )
        {
          v58 = *(_QWORD *)(v34 + 8);
          if ( v58 > 1 )
          {
            if ( *(_DWORD *)v34 == v43 && v35 == v58 && v36 == *(_QWORD *)(v34 + 16) )
              goto LABEL_50;
          }
          else if ( !v58 )
          {
            break;
          }
        }
LABEL_45:
        v49 = *((__m128i **)&v123 + 1);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
        {
          if ( *((_QWORD *)&v123 + 1) )
          {
            v50 = *(_DWORD *)(*((_QWORD *)&v123 + 1) - 4LL);
            if ( v50 == *(_DWORD *)(*((_QWORD *)&v123 + 1) - 8LL) )
            {
              v63 = (3 * v50 + 1) >> 1;
              v64 = 16 * v63 + 8;
              if ( 16 * v50 + 8 >= v64 || v50 >= v63 )
              {
                v95 = (char **)__cxa_allocate_exception(0x28u);
                sub_98B3B0(v113.m128i_i64, "Overflow encountered when expanding vector");
                *v95 = (char *)off_1C63128;
                sub_2333C0(v95 + 1, &v113);
                sub_233E40((__int64)&v113);
                __cxa_throw(v95, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v65 = sub_186B270(v64);
              v66 = *((_QWORD *)&v123 + 1);
              v67 = (_DWORD *)v65;
              v49 = (__m128i *)(v65 + 8);
              if ( *((_QWORD *)&v123 + 1) )
              {
                v68 = *(unsigned int *)(*((_QWORD *)&v123 + 1) - 4LL);
                *(_DWORD *)(v65 + 4) = v68;
                v69 = 0;
                v70 = 16 * v68;
                if ( v70 )
                {
                  do
                  {
                    *(__m128i *)&v67[v69 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v66 + v69));
                    v69 += 16LL;
                  }
                  while ( v70 != v69 );
                }
                v99 = v49;
                v101 = v67;
                sub_186B220((void *)(v66 - 8));
                v67 = v101;
                v49 = v99;
                v53 = &v99[v101[1]];
                v52 = v101[1] + 1;
              }
              else
              {
                *(_DWORD *)(v65 + 4) = 0;
                v53 = (__m128i *)(v65 + 8);
                v52 = 1;
              }
              *((_QWORD *)&v123 + 1) = v49;
              *v67 = v63;
            }
            else
            {
              v51 = v50;
              v52 = v50 + 1;
              v53 = (__m128i *)(*((_QWORD *)&v123 + 1) + 16 * v51);
            }
          }
          else
          {
            v90 = (_QWORD *)sub_186B270(0x28u);
            v49 = (__m128i *)(v90 + 1);
            *v90 = 2;
            v53 = v49;
            v52 = 1;
            *((_QWORD *)&v123 + 1) = v49;
          }
          v4 = _mm_loadu_si128(v32);
          *v53 = v4;
          v49[-1].m128i_i32[3] = v52;
        }
        else
        {
          if ( *((_QWORD *)&v123 + 1) )
          {
            v59 = *(_DWORD *)(*((_QWORD *)&v123 + 1) - 4LL);
            if ( v59 == *(_DWORD *)(*((_QWORD *)&v123 + 1) - 8LL) )
            {
              v81 = (3 * v59 + 1) >> 1;
              v82 = 16 * v81 + 8;
              if ( 16 * v59 + 8 >= v82 || v59 >= v81 )
              {
                v93 = (char **)__cxa_allocate_exception(0x28u);
                sub_98B3B0(v113.m128i_i64, "Overflow encountered when expanding vector");
                *v93 = (char *)off_1C63128;
                sub_2333C0(v93 + 1, &v113);
                sub_233E40((__int64)&v113);
                __cxa_throw(v93, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v83 = sub_186B270(v82);
              v84 = *((_QWORD *)&v123 + 1);
              v85 = (_DWORD *)v83;
              v49 = (__m128i *)(v83 + 8);
              if ( *((_QWORD *)&v123 + 1) )
              {
                v86 = *(unsigned int *)(*((_QWORD *)&v123 + 1) - 4LL);
                *(_DWORD *)(v83 + 4) = v86;
                v87 = 0;
                v88 = 16 * v86;
                if ( v88 )
                {
                  do
                  {
                    *(__m128i *)&v85[v87 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v84 + v87));
                    v87 += 16LL;
                  }
                  while ( v88 != v87 );
                }
                v100 = v49;
                v102 = v85;
                sub_186B220((void *)(v84 - 8));
                v85 = v102;
                v49 = v100;
                v62 = &v100[v102[1]];
                v61 = v102[1] + 1;
              }
              else
              {
                *(_DWORD *)(v83 + 4) = 0;
                v62 = (__m128i *)(v83 + 8);
                v61 = 1;
              }
              *((_QWORD *)&v123 + 1) = v49;
              *v85 = v81;
            }
            else
            {
              v60 = v59;
              v61 = v59 + 1;
              v62 = (__m128i *)(*((_QWORD *)&v123 + 1) + 16 * v60);
            }
          }
          else
          {
            v92 = (_QWORD *)sub_186B270(0x28u);
            v49 = (__m128i *)(v92 + 1);
            *v92 = 2;
            v62 = v49;
            v61 = 1;
            *((_QWORD *)&v123 + 1) = v49;
          }
          *v62 = _mm_loadu_si128(v32);
          v4 = _mm_loadu_si128(v32);
          v49[-1].m128i_i32[3] = v61;
          v113 = v4;
          sub_A0D2E0(v103, &v113);
        }
LABEL_50:
        v31 += 16;
        if ( v31 != v107 )
          goto LABEL_51;
LABEL_54:
        ++v105;
        --*(_DWORD *)(v111 + 1320);
      }
      while ( v98 != v105 );
    }
    sub_186B220((void *)(v97 - 8));
  }
  if ( *((_QWORD *)&v123 + 1) )
  {
    v54 = (unsigned int *)v123;
    v55 = *(_DWORD *)(*((_QWORD *)&v123 + 1) - 4LL);
    if ( (_QWORD)v123 )
    {
LABEL_58:
      v56 = *(v54 - 1);
      goto LABEL_59;
    }
  }
  else
  {
    v54 = (unsigned int *)v123;
    v55 = 0;
    if ( (_QWORD)v123 )
      goto LABEL_58;
  }
  v56 = 0;
LABEL_59:
  sub_A1C800(
    a1,
    v56,
    v54,
    v55,
    *((__int64 ****)&v123 + 1),
    (__int64)&v109,
    *(double *)v4.m128i_i64,
    (__int64)"arith_nl");
  v119 = &off_1C56470;
  if ( *((_QWORD *)&v123 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v123 + 1) - 8LL));
  if ( (_QWORD)v123 )
    sub_186B220((void *)(v123 - 8));
  v119 = &off_1C563C8;
  result = sub_2A6060((__int64)v121);
  --*(_DWORD *)(a1 + 1320);
  return result;
}

