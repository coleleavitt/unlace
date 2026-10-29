__int64 __fastcall sub_84B100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  char **exception; // rbx
  __int64 *v6; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // r15d
  __int64 *v27; // rbx
  unsigned __int64 v28; // rbp
  __int64 v29; // rsi
  __m128i v30; // kr00_16
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __m128 *v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __m128 *v47; // r9
  int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  __m128 *v53; // rdx
  __int64 v54; // r15
  size_t v55; // rdi
  __int64 v56; // rax
  _QWORD *v57; // r8
  _DWORD *v58; // r10
  __int64 v59; // rdi
  __int64 v60; // rdx
  int v61; // r11d
  _QWORD *v62; // rax
  _QWORD *v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 *v68; // rbx
  __int64 *v69; // rbp
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  int v74; // edi
  _QWORD *v75; // rax
  int v76[2]; // [rsp+0h] [rbp-348h]
  __int64 v77; // [rsp+8h] [rbp-340h]
  int v78[2]; // [rsp+10h] [rbp-338h]
  __int64 v79; // [rsp+18h] [rbp-330h] BYREF
  int v80[2]; // [rsp+20h] [rbp-328h]
  int v81[2]; // [rsp+28h] [rbp-320h]
  __int64 v82; // [rsp+30h] [rbp-318h]
  void *ptr; // [rsp+38h] [rbp-310h]
  __int64 v84; // [rsp+40h] [rbp-308h]
  __int64 *v85; // [rsp+48h] [rbp-300h]
  __m128 *v86; // [rsp+50h] [rbp-2F8h]
  __m128 *v87; // [rsp+58h] [rbp-2F0h]
  __m128 *v88; // [rsp+60h] [rbp-2E8h]
  _DWORD *v89; // [rsp+68h] [rbp-2E0h]
  _QWORD *v90; // [rsp+70h] [rbp-2D8h]
  __int64 v91; // [rsp+78h] [rbp-2D0h]
  _QWORD *v92; // [rsp+80h] [rbp-2C8h]
  _QWORD *v93; // [rsp+88h] [rbp-2C0h]
  __int64 v94; // [rsp+98h] [rbp-2B0h] BYREF
  __m128i v95; // [rsp+A0h] [rbp-2A8h] BYREF
  int v96[2]; // [rsp+B0h] [rbp-298h] BYREF
  int v97[2]; // [rsp+B8h] [rbp-290h]
  int v98[2]; // [rsp+C0h] [rbp-288h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-280h]
  _QWORD v100[19]; // [rsp+E0h] [rbp-268h] BYREF
  int v101; // [rsp+178h] [rbp-1D0h]
  __int64 v102; // [rsp+180h] [rbp-1C8h]
  _QWORD v103[19]; // [rsp+188h] [rbp-1C0h] BYREF
  int v104; // [rsp+220h] [rbp-128h]
  _QWORD v105[18]; // [rsp+228h] [rbp-120h] BYREF
  int v106; // [rsp+2B8h] [rbp-90h]
  __int64 v107; // [rsp+2C0h] [rbp-88h]
  __int64 v108; // [rsp+2C8h] [rbp-80h]
  __int64 v109; // [rsp+2D0h] [rbp-78h]
  __int64 v110; // [rsp+2D8h] [rbp-70h]
  __int64 v111; // [rsp+2E0h] [rbp-68h]
  __int64 v112; // [rsp+2E8h] [rbp-60h]
  __int64 v113; // [rsp+2F0h] [rbp-58h]
  _BYTE v114[80]; // [rsp+2F8h] [rbp-50h] BYREF

  v8 = a4;
  v9 = (_QWORD *)a1;
  *(_QWORD *)v80 = a2;
  v84 = a3;
  v94 = 0;
  v10 = sub_8487A0((_QWORD *)a1, &v94, a4);
  v11 = v94;
  LODWORD(v12) = v10;
  if ( !(_BYTE)v10 )
    goto LABEL_2;
  v12 = *(_QWORD *)(a1 + 16);
  ptr = v100;
  sub_1584DD0(v100, v12, 0);
  v101 = 0;
  v100[0] = &off_1C4CA60;
  v100[18] = v114;
  v92 = v103;
  v102 = 0;
  sub_1584DD0(v103, v12, 0);
  v103[18] = 0;
  v104 = 0;
  v103[0] = &off_1C61DB8;
  v93 = v105;
  sub_1584DD0(v105, v12, 0);
  v108 = v12;
  v110 = v12;
  v112 = v12;
  LODWORD(v12) = 0;
  v105[0] = &off_1C61DE0;
  v100[0] = &off_1C4CA80;
  v14 = *(_QWORD *)(a1 + 16);
  v106 = 0;
  *(_QWORD *)v78 = v14;
  v95.m128i_i64[1] = v14;
  LODWORD(v14) = *(_DWORD *)(a1 + 244);
  v107 = 0;
  v109 = 0;
  v111 = 0;
  v113 = 0;
  v114[8] = 1;
  v95.m128i_i64[0] = 0;
  HIDWORD(v82) = v14;
  *(_QWORD *)v76 = 0;
  HIDWORD(v77) = 0;
  LODWORD(v82) = 0;
  *(_QWORD *)v81 = v96;
  if ( !(_DWORD)v14 )
    goto LABEL_36;
  while ( 1 )
  {
    if ( (unsigned int)v82 >= *((_DWORD *)v9 + 60) )
      goto LABEL_25;
    v94 = v11;
    *(_QWORD *)v96 = *(_QWORD *)v78;
    *(_QWORD *)v97 = *(_QWORD *)v76;
    sub_84A880(v9, &v94, v8, *(__int64 **)v81);
    v12 = *(_QWORD *)v97;
    *(_QWORD *)v78 = *(_QWORD *)v96;
    *(_QWORD *)v76 = *(_QWORD *)v97;
    if ( (unsigned __int8)sub_1374330(v9[22], v8 + 40) )
    {
      v16 = *(_QWORD *)(v84 + 24);
      if ( v12 )
        v17 = *(_DWORD *)(v12 - 4);
      else
        v17 = 0;
      v85 = (__int64 *)v98;
      sub_157BE40((int)v98, (int)ptr, v16, v17, v76[0], v15, v76[0], v77, v78[0], v79, v80[0], v81[0], v82, ptr);
      v18 = v95.m128i_i64[0];
      v19 = *(_QWORD *)v98;
      *(_QWORD *)v98 = v95.m128i_i64[0];
      v95.m128i_i64[0] = v19;
      if ( *(_QWORD *)v98 )
      {
        v20 = v99;
        v21 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v20, v18);
      }
      if ( *(_WORD *)(*(_QWORD *)v80 + 4LL) == 2 && !*(_DWORD *)(*(_QWORD *)v80 + 16LL) )
      {
        v37 = sub_15EC2C0(v9[2], v95.m128i_i64[0]);
        v12 = v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v38 = v95.m128i_i64[0];
        if ( v95.m128i_i64[0] )
        {
          v39 = v95.m128i_i64[1];
          v21 = (*(_DWORD *)(v95.m128i_i64[0] + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v39, v38);
        }
        v95.m128i_i64[0] = v12;
      }
      v22 = *(_QWORD *)(*v9 + 24LL);
      if ( v22 && *(_BYTE *)(v22 + 352) )
      {
        sub_7A4170(*v9);
        v40 = (__m128 *)v9[35];
        if ( v40 )
        {
          v41 = v40[-1].m128_u32[3];
          if ( (_DWORD)v41 )
          {
            v42 = (__int64 *)v9[35];
            v12 = (__int64)&v40[2 * v41];
            do
            {
              v45 = v42[2];
              if ( v45 )
              {
                v46 = v42[3];
                v21 = (*(_DWORD *)(v45 + 8))-- == 1;
                if ( v21 )
                  sub_15D7BC0(v46, v45);
              }
              v43 = *v42;
              if ( *v42 )
              {
                v44 = v42[1];
                v21 = (*(_DWORD *)(v43 + 8))-- == 1;
                if ( v21 )
                  sub_15D7BC0(v44, v43);
              }
              v42 += 4;
            }
            while ( (__int64 *)v12 != v42 );
            v40 = (__m128 *)v9[35];
          }
          v40[-1].m128_i32[3] = 0;
        }
        if ( *(_QWORD *)v76 && *(_DWORD *)(*(_QWORD *)v76 - 4LL) )
        {
          v47 = nullptr;
          while ( 1 )
          {
            v79 = v9[2];
            v12 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL * (_QWORD)v47);
            v54 = *(_QWORD *)(*(_QWORD *)v76 + 8LL * (_QWORD)v47);
            if ( v12 )
            {
              v48 = *(_DWORD *)(v12 + 8);
              *(_DWORD *)(v12 + 8) = v48 + 1;
              if ( v54 )
              {
                ++*(_DWORD *)(v54 + 8);
                ++*(_DWORD *)(v12 + 8);
                v49 = *(_DWORD *)(v54 + 8);
                goto LABEL_76;
              }
              *(_DWORD *)(v12 + 8) = v48 + 2;
            }
            else if ( v54 )
            {
              v49 = *(_DWORD *)(v54 + 8) + 1;
LABEL_76:
              *(_DWORD *)(v54 + 8) = v49 + 1;
              if ( !v40 )
                goto LABEL_112;
              goto LABEL_77;
            }
            v54 = 0;
            if ( !v40 )
            {
LABEL_112:
              v86 = v47;
              v75 = (_QWORD *)sub_186B270(0x48u);
              v47 = v86;
              v40 = (__m128 *)(v75 + 1);
              *v75 = 2;
              v53 = v40;
              v52 = 1;
              v9[35] = v40;
              goto LABEL_79;
            }
LABEL_77:
            v50 = v40[-1].m128_u32[3];
            if ( v50 == v40[-1].m128_i32[2] )
            {
              LODWORD(v86) = (3 * v50 + 1) >> 1;
              v55 = (unsigned int)(32 * (_DWORD)v86 + 8);
              if ( 32 * v50 + 8 >= (unsigned int)v55 || v50 >= (3 * v50 + 1) >> 1 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v85, "Overflow encountered when expanding vector");
                v6 = v85;
                v7 = v85;
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v7);
                sub_233E40((__int64)v6);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v87 = v47;
              v56 = sub_186B270(v55);
              v57 = (_QWORD *)v9[35];
              v47 = v87;
              v58 = (_DWORD *)v56;
              v40 = (__m128 *)(v56 + 8);
              if ( v57 )
              {
                v59 = *((unsigned int *)v57 - 1);
                v60 = v56 + 8;
                *(_DWORD *)(v56 + 4) = v59;
                v61 = v59;
                v62 = v57;
                v63 = &v57[4 * v59];
                if ( v57 != v63 )
                {
                  v87 = v40;
                  do
                  {
                    v64 = v62[1];
                    v62 += 4;
                    v60 += 32;
                    *(_QWORD *)(v60 - 24) = v64;
                    v65 = *(v62 - 4);
                    *(v62 - 4) = 0;
                    *(_QWORD *)(v60 - 32) = v65;
                    *(_QWORD *)(v60 - 8) = *(v62 - 1);
                    v66 = *(v62 - 2);
                    *(v62 - 2) = 0;
                    *(_QWORD *)(v60 - 16) = v66;
                  }
                  while ( v63 != v62 );
                  v40 = v87;
                }
                v67 = 4 * v59;
                if ( v61 )
                {
                  v90 = v9;
                  v68 = v57;
                  v91 = v8;
                  v69 = &v57[v67];
                  v87 = v40;
                  v88 = v47;
                  v89 = v58;
                  do
                  {
                    while ( 1 )
                    {
                      v72 = v68[2];
                      if ( v72 )
                      {
                        v73 = v68[3];
                        v21 = (*(_DWORD *)(v72 + 8))-- == 1;
                        if ( v21 )
                          sub_15D7BC0(v73, v72);
                      }
                      v70 = *v68;
                      if ( *v68 )
                      {
                        v71 = v68[1];
                        v21 = (*(_DWORD *)(v70 + 8))-- == 1;
                        if ( v21 )
                          break;
                      }
                      v68 += 4;
                      if ( v69 == v68 )
                        goto LABEL_107;
                    }
                    sub_15D7BC0(v71, v70);
                    v68 += 4;
                  }
                  while ( v69 != v68 );
LABEL_107:
                  v9 = v90;
                  v40 = v87;
                  v47 = v88;
                  v58 = v89;
                  v8 = v91;
                  v57 = (_QWORD *)v90[35];
                }
                v89 = v58;
                v88 = v47;
                v87 = v40;
                sub_186B220(v57 - 1);
                v58 = v89;
                v40 = v87;
                v47 = v88;
                v53 = &v87[2 * (unsigned int)v89[1]];
                v52 = v89[1] + 1;
              }
              else
              {
                *(_DWORD *)(v56 + 4) = 0;
                v53 = (__m128 *)(v56 + 8);
                v52 = 1;
              }
              v74 = (int)v86;
              v9[35] = v40;
              *v58 = v74;
            }
            else
            {
              v51 = v50;
              v52 = v50 + 1;
              v53 = &v40[2 * v51];
            }
LABEL_79:
            *v53 = _mm_loadh_ps((const double *)&v79);
            a5 = _mm_loadh_ps((const double *)&v79);
            v53[1] = a5;
            v40[-1].m128_i32[3] = v52;
            if ( v54 )
            {
              v21 = (*(_DWORD *)(v54 + 8))-- == 1;
              if ( v21 )
              {
                v86 = v47;
                sub_15D7BC0(v79, v54);
                v47 = v86;
              }
            }
            if ( v12 )
            {
              v21 = (*(_DWORD *)(v12 + 8))-- == 1;
              if ( v21 )
              {
                v86 = v47;
                sub_15D7BC0(v79, v12);
                v47 = v86;
              }
            }
            v47 = (__m128 *)((char *)v47 + 1);
            if ( (unsigned int)v47 >= *(_DWORD *)(*(_QWORD *)v76 - 4LL) )
              break;
            v40 = (__m128 *)v9[35];
          }
        }
      }
      sub_84AB10(v9, *(unsigned int **)v80, &v95, *(double *)a5.m128_u64);
      LODWORD(v82) = v82 + 1;
    }
    v23 = *(_QWORD *)(v8 + 8);
    if ( !v23 )
      goto LABEL_25;
    LODWORD(v12) = 1;
LABEL_19:
    v24 = v12 - 1;
    if ( (unsigned int)(v12 - 1) >= *(_DWORD *)(v23 - 4) )
      goto LABEL_25;
    v25 = *(_DWORD *)(v11 + 4LL * v24);
    v94 = v11;
    if ( !(unsigned __int8)sub_8480B0(v9, &v94, v8, v24, v25 + 1) )
      break;
    if ( HIDWORD(v82) == ++HIDWORD(v77) )
      goto LABEL_25;
  }
  v26 = 0;
  while ( 1 )
  {
    v94 = v11;
    if ( !(unsigned __int8)sub_8480B0(v9, &v94, v8, v26, 0) )
      break;
    if ( ++v26 == (_DWORD)v12 )
    {
      v23 = *(_QWORD *)(v8 + 8);
      LODWORD(v12) = v12 + 1;
      if ( v23 )
        goto LABEL_19;
      break;
    }
  }
LABEL_25:
  LOBYTE(v12) = (_DWORD)v82 != 0;
  if ( *(_QWORD *)v76 )
  {
    v27 = *(__int64 **)v76;
    v28 = *(_QWORD *)v76 + 8LL * *(unsigned int *)(*(_QWORD *)v76 - 4LL);
    if ( *(_QWORD *)v76 < v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v21 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            goto LABEL_32;
        }
        ++v27;
        sub_15D7BC0(*(_QWORD *)v78, v29);
      }
      while ( (unsigned __int64)v27 < v28 );
    }
LABEL_32:
    sub_186B220((void *)(*(_QWORD *)v76 - 8LL));
  }
  v30 = v95;
  if ( v95.m128i_i64[0] )
  {
    v21 = (*(_DWORD *)(v95.m128i_i64[0] + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v30.m128i_i64[1], v30.m128i_i64[0]);
  }
LABEL_36:
  v100[0] = &off_1C4CA60;
  if ( v113 )
    sub_186B220((void *)(v113 - 8));
  v31 = v111;
  if ( v111 )
  {
    v32 = v112;
    v21 = (*(_DWORD *)(v111 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v32, v31);
  }
  v33 = v109;
  if ( v109 )
  {
    v34 = v110;
    v21 = (*(_DWORD *)(v109 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v34, v33);
  }
  v35 = v107;
  if ( v107 )
  {
    v36 = v108;
    v21 = (*(_DWORD *)(v107 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v36, v35);
  }
  v105[0] = &qword_1C637E8;
  sub_15841B0(v93);
  v103[0] = &qword_1C637E8;
  sub_15841B0(v92);
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  sub_15841B0(ptr);
LABEL_2:
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  return (unsigned int)v12;
}

