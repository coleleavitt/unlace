void __fastcall sub_A34B60(__int64 a1, __int64 a2)
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
  unsigned __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdi
  int v60; // eax
  __m128i *v61; // rdi
  unsigned int v62; // r15d
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rdi
  _DWORD *v66; // rcx
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  __int64 v69; // r9
  unsigned int v70; // edx
  size_t v71; // rsi
  unsigned int v72; // r14d
  unsigned int *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // edx
  size_t v76; // rsi
  unsigned int v77; // r14d
  unsigned int *v78; // rax
  __int64 v79; // rax
  unsigned int v80; // r15d
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rdi
  _DWORD *v84; // rcx
  __int64 v85; // r9
  unsigned __int64 v86; // rax
  __int64 v87; // r9
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  char **v92; // r13
  char **exception; // r13
  char **v94; // r13
  char **v95; // r13
  __int64 v96; // [rsp+8h] [rbp-118h]
  __int64 *v97; // [rsp+18h] [rbp-108h]
  __m128i *v98; // [rsp+20h] [rbp-100h]
  __m128i *v99; // [rsp+20h] [rbp-100h]
  _DWORD *v100; // [rsp+28h] [rbp-F8h]
  _DWORD *v101; // [rsp+28h] [rbp-F8h]
  __int64 v102; // [rsp+30h] [rbp-F0h]
  __int64 v103; // [rsp+38h] [rbp-E8h]
  __int64 *v104; // [rsp+40h] [rbp-E0h]
  __int32 v105; // [rsp+48h] [rbp-D8h]
  __int64 v106; // [rsp+48h] [rbp-D8h]
  __int64 v107; // [rsp+58h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v109; // [rsp+68h] [rbp-B8h]
  __int64 v110; // [rsp+70h] [rbp-B0h] BYREF
  __int64 *v111; // [rsp+78h] [rbp-A8h]
  __m128i v112; // [rsp+80h] [rbp-A0h] BYREF
  _QWORD v113[2]; // [rsp+90h] [rbp-90h] BYREF
  __int64 (__fastcall **v114)(); // [rsp+A0h] [rbp-80h]
  int v115; // [rsp+A8h] [rbp-78h]
  _QWORD v116[4]; // [rsp+B0h] [rbp-70h] BYREF
  char v117; // [rsp+D0h] [rbp-50h]
  __int128 v118; // [rsp+D8h] [rbp-48h]

  v3 = *(unsigned int *)(a1 + 1128);
  v108 = a1;
  v109 = a1 + 48 * v3 + 984;
  sub_99F980(v109);
  ++*(_DWORD *)(a1 + 1128);
  v112 = 0u;
  v113[0] = 1;
  v113[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v113);
  BYTE4(v113[0]) &= ~1u;
  v114 = &off_1C56290;
  v115 = -1;
  LODWORD(v113[0]) = 1;
  v116[0] = 0;
  v116[1] = 0;
  v116[2] = 1;
  v116[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v116, v112.m128i_i32);
  v4.m128i_i64[0] = 0;
  v117 &= 0xFCu;
  v114 = &off_1C56338;
  v118 = 0;
  sub_25A130(v112.m128i_i8);
  v107 = 0;
  sub_A30ED0(a1 + 760, a2, &v107);
  v5 = v107;
  v103 = a1 + 144;
  v96 = v107;
  sub_9E4980(a1 + 144);
  v102 = a1 + 168;
  sub_9E7500(a1 + 168);
  if ( v5 )
  {
    v97 = (__int64 *)(v5 + 8LL * *(unsigned int *)(v5 - 4));
    if ( (__int64 *)v5 != v97 )
    {
      v104 = (__int64 *)v5;
      do
      {
        v6 = *v104;
        v7 = *(unsigned int *)(a1 + 1128);
        v110 = a1;
        v111 = (__int64 *)(a1 + 48 * v7 + 984);
        sub_99F980((__int64)v111);
        v8 = *(_QWORD *)(a1 + 24);
        ++*(_DWORD *)(a1 + 1128);
        (*(void (__fastcall **)(__int64, __int64 *, int *, bool))(*(_QWORD *)v6 + 24LL))(
          v6,
          &v110,
          &qword_1C7F2A0,
          *(_DWORD *)(v8 + 712) != 0);
        v9 = v111;
        v10 = *v111;
        if ( *v111 )
        {
          v11 = *(unsigned int *)(v10 - 4);
          if ( (_DWORD)v11 )
          {
            v12 = 4 * v11;
            v13 = 0;
            while ( 1 )
            {
              v14 = *(unsigned int *)(a1 + 152);
              v15 = *(_DWORD *)(v10 + v13);
              v16 = *(_DWORD **)(a1 + 144);
              v17 = v14 - 1;
              v14 *= 8;
              v105 = v15;
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
                    v105 = v15;
                    goto LABEL_15;
                  }
                  v21 += 2;
                }
                while ( v18 != v21 );
                v105 = v15;
              }
              for ( ; v20 != v16; v16 += 2 )
              {
                v26 = v16[1];
                if ( v26 + 0x80000000 > 1 )
                {
                  if ( *v16 == v105 && v105 == v26 )
                    goto LABEL_20;
                }
                else if ( v26 == 0x80000000 )
                {
                  break;
                }
              }
LABEL_15:
              v23 = (__int32 *)v118;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
              {
                if ( (_QWORD)v118 )
                {
                  v24 = *(unsigned int *)(v118 - 4);
                  if ( (_DWORD)v24 == *(_DWORD *)(v118 - 8) )
                  {
                    v70 = (unsigned int)(3 * v24 + 1) >> 1;
                    v71 = 4 * v70 + 8;
                    v72 = v70;
                    if ( 4 * (int)v24 + 8 >= (unsigned int)v71 || (unsigned int)v24 >= v70 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_98B3B0(v112.m128i_i64, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v112);
                      sub_233E40((__int64)&v112);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v73 = (unsigned int *)sub_186B300((void *)(v118 - 8), v71);
                    v23 = (__int32 *)(v73 + 2);
                    *v73 = v72;
                    v74 = v73[1];
                    *(_QWORD *)&v118 = v23;
                    v9 = v111;
                    v25 = &v23[v74];
                  }
                  else
                  {
                    v25 = (__int32 *)(v118 + 4 * v24);
                  }
                }
                else
                {
                  v90 = (_QWORD *)sub_186B270(0x10u);
                  v9 = v111;
                  v23 = (__int32 *)(v90 + 1);
                  *v90 = 2;
                  v25 = v23;
                  *(_QWORD *)&v118 = v23;
                }
                *v25 = v105;
                ++*(v23 - 1);
LABEL_20:
                v13 += 4;
                if ( v13 == v12 )
                  break;
              }
              else
              {
                if ( (_QWORD)v118 )
                {
                  v27 = *(unsigned int *)(v118 - 4);
                  if ( (_DWORD)v27 == *(_DWORD *)(v118 - 8) )
                  {
                    v75 = (unsigned int)(3 * v27 + 1) >> 1;
                    v76 = 4 * v75 + 8;
                    v77 = v75;
                    if ( 4 * (int)v27 + 8 >= (unsigned int)v76 || (unsigned int)v27 >= v75 )
                    {
                      v95 = (char **)__cxa_allocate_exception(0x28u);
                      sub_98B3B0(v112.m128i_i64, "Overflow encountered when expanding vector");
                      *v95 = (char *)off_1C63128;
                      sub_2333C0(v95 + 1, &v112);
                      sub_233E40((__int64)&v112);
                      __cxa_throw(
                        v95,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v78 = (unsigned int *)sub_186B300((void *)(v118 - 8), v76);
                    v23 = (__int32 *)(v78 + 2);
                    *v78 = v77;
                    v79 = v78[1];
                    *(_QWORD *)&v118 = v23;
                    v28 = &v23[v79];
                  }
                  else
                  {
                    v28 = (__int32 *)(v118 + 4 * v27);
                  }
                }
                else
                {
                  v88 = (_QWORD *)sub_186B270(0x10u);
                  v23 = (__int32 *)(v88 + 1);
                  *v88 = 2;
                  v28 = v23;
                  *(_QWORD *)&v118 = v23;
                }
                *v28 = v105;
                ++*(v23 - 1);
                v112.m128i_i32[0] = v105;
                sub_9E1E20(v103, v112.m128i_i32);
                v13 += 4;
                v9 = v111;
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
        v106 = 16 * v30;
LABEL_38:
        v32 = (const __m128i *)(v29 + v31);
        v33 = *(unsigned int *)(a1 + 176);
        v34 = *(_QWORD *)(a1 + 168);
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
                if ( v31 == v106 )
                  goto LABEL_54;
LABEL_51:
                v29 = v111[1];
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
          v57 = *(_QWORD *)(v34 + 8);
          if ( v57 > 1 )
          {
            if ( *(_DWORD *)v34 == v43 && v35 == v57 && v36 == *(_QWORD *)(v34 + 16) )
              goto LABEL_50;
          }
          else if ( !v57 )
          {
            break;
          }
        }
LABEL_45:
        v49 = *((__m128i **)&v118 + 1);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
        {
          if ( *((_QWORD *)&v118 + 1) )
          {
            v50 = *(_DWORD *)(*((_QWORD *)&v118 + 1) - 4LL);
            if ( v50 == *(_DWORD *)(*((_QWORD *)&v118 + 1) - 8LL) )
            {
              v62 = (3 * v50 + 1) >> 1;
              v63 = 16 * v62 + 8;
              if ( 16 * v50 + 8 >= v63 || v50 >= v62 )
              {
                v94 = (char **)__cxa_allocate_exception(0x28u);
                sub_98B3B0(v112.m128i_i64, "Overflow encountered when expanding vector");
                *v94 = (char *)off_1C63128;
                sub_2333C0(v94 + 1, &v112);
                sub_233E40((__int64)&v112);
                __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v64 = sub_186B270(v63);
              v65 = *((_QWORD *)&v118 + 1);
              v66 = (_DWORD *)v64;
              v49 = (__m128i *)(v64 + 8);
              if ( *((_QWORD *)&v118 + 1) )
              {
                v67 = *(unsigned int *)(*((_QWORD *)&v118 + 1) - 4LL);
                *(_DWORD *)(v64 + 4) = v67;
                v68 = 0;
                v69 = 16 * v67;
                if ( v69 )
                {
                  do
                  {
                    *(__m128i *)&v66[v68 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v65 + v68));
                    v68 += 16LL;
                  }
                  while ( v69 != v68 );
                }
                v98 = v49;
                v100 = v66;
                sub_186B220((void *)(v65 - 8));
                v66 = v100;
                v49 = v98;
                v53 = &v98[v100[1]];
                v52 = v100[1] + 1;
              }
              else
              {
                *(_DWORD *)(v64 + 4) = 0;
                v53 = (__m128i *)(v64 + 8);
                v52 = 1;
              }
              *((_QWORD *)&v118 + 1) = v49;
              *v66 = v62;
            }
            else
            {
              v51 = v50;
              v52 = v50 + 1;
              v53 = (__m128i *)(*((_QWORD *)&v118 + 1) + 16 * v51);
            }
          }
          else
          {
            v89 = (_QWORD *)sub_186B270(0x28u);
            v49 = (__m128i *)(v89 + 1);
            *v89 = 2;
            v53 = v49;
            v52 = 1;
            *((_QWORD *)&v118 + 1) = v49;
          }
          v4 = _mm_loadu_si128(v32);
          *v53 = v4;
          v49[-1].m128i_i32[3] = v52;
        }
        else
        {
          if ( *((_QWORD *)&v118 + 1) )
          {
            v58 = *(_DWORD *)(*((_QWORD *)&v118 + 1) - 4LL);
            if ( v58 == *(_DWORD *)(*((_QWORD *)&v118 + 1) - 8LL) )
            {
              v80 = (3 * v58 + 1) >> 1;
              v81 = 16 * v80 + 8;
              if ( 16 * v58 + 8 >= v81 || v58 >= v80 )
              {
                v92 = (char **)__cxa_allocate_exception(0x28u);
                sub_98B3B0(v112.m128i_i64, "Overflow encountered when expanding vector");
                *v92 = (char *)off_1C63128;
                sub_2333C0(v92 + 1, &v112);
                sub_233E40((__int64)&v112);
                __cxa_throw(v92, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v82 = sub_186B270(v81);
              v83 = *((_QWORD *)&v118 + 1);
              v84 = (_DWORD *)v82;
              v49 = (__m128i *)(v82 + 8);
              if ( *((_QWORD *)&v118 + 1) )
              {
                v85 = *(unsigned int *)(*((_QWORD *)&v118 + 1) - 4LL);
                *(_DWORD *)(v82 + 4) = v85;
                v86 = 0;
                v87 = 16 * v85;
                if ( v87 )
                {
                  do
                  {
                    *(__m128i *)&v84[v86 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v83 + v86));
                    v86 += 16LL;
                  }
                  while ( v87 != v86 );
                }
                v99 = v49;
                v101 = v84;
                sub_186B220((void *)(v83 - 8));
                v84 = v101;
                v49 = v99;
                v61 = &v99[v101[1]];
                v60 = v101[1] + 1;
              }
              else
              {
                *(_DWORD *)(v82 + 4) = 0;
                v61 = (__m128i *)(v82 + 8);
                v60 = 1;
              }
              *((_QWORD *)&v118 + 1) = v49;
              *v84 = v80;
            }
            else
            {
              v59 = v58;
              v60 = v58 + 1;
              v61 = (__m128i *)(*((_QWORD *)&v118 + 1) + 16 * v59);
            }
          }
          else
          {
            v91 = (_QWORD *)sub_186B270(0x28u);
            v49 = (__m128i *)(v91 + 1);
            *v91 = 2;
            v61 = v49;
            v60 = 1;
            *((_QWORD *)&v118 + 1) = v49;
          }
          *v61 = _mm_loadu_si128(v32);
          v4 = _mm_loadu_si128(v32);
          v49[-1].m128i_i32[3] = v60;
          v112 = v4;
          sub_A0D2E0(v102, &v112);
        }
LABEL_50:
        v31 += 16;
        if ( v31 != v106 )
          goto LABEL_51;
LABEL_54:
        ++v104;
        --*(_DWORD *)(v110 + 1128);
      }
      while ( v97 != v104 );
    }
    sub_186B220((void *)(v96 - 8));
  }
  if ( *((_QWORD *)&v118 + 1) )
  {
    v54 = (unsigned int *)v118;
    v55 = *(_DWORD *)(*((_QWORD *)&v118 + 1) - 4LL);
    if ( (_QWORD)v118 )
    {
LABEL_58:
      v56 = *(v54 - 1);
      goto LABEL_59;
    }
  }
  else
  {
    v54 = (unsigned int *)v118;
    v55 = 0;
    if ( (_QWORD)v118 )
      goto LABEL_58;
  }
  v56 = 0;
LABEL_59:
  sub_A1B200(
    a1,
    v56,
    v54,
    v55,
    *((__int64 ****)&v118 + 1),
    (__int64)&v108,
    *(double *)v4.m128i_i64,
    (__int64)"arith_nl");
  v114 = &off_1C56338;
  if ( *((_QWORD *)&v118 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v118 + 1) - 8LL));
  if ( (_QWORD)v118 )
    sub_186B220((void *)(v118 - 8));
  v114 = &off_1C56290;
  sub_25A130((char *)v116);
  --*(_DWORD *)(a1 + 1128);
}

