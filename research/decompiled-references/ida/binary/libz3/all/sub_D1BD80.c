__int64 __fastcall sub_D1BD80(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm5
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  _DWORD *v22; // rdx
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edi
  int v33; // eax
  unsigned int v34; // r10d
  __int64 v35; // rax
  __int64 *v36; // rcx
  int v37; // r8d
  __int64 v38; // r10
  __int64 v39; // r9
  __int64 *v40; // rdx
  _QWORD *v41; // r10
  __int64 v42; // rsi
  __int64 v43; // rdx
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // rdi
  unsigned int v53; // ecx
  size_t v54; // rsi
  __int64 v55; // rax
  int v56; // ecx
  __m128i *v57; // rdx
  __m128i *v58; // r9
  const __m128i *v59; // r8
  __m128i *v60; // r11
  __int64 v61; // rdx
  __m128i *v62; // rsi
  __m128i *v63; // rdx
  unsigned int v64; // edi
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdi
  char **exception; // rbp
  __int64 v70; // rdx
  __int64 *v71; // rbx
  __int64 *v72; // rsi
  __m128i v73; // [rsp+0h] [rbp-218h] BYREF
  __m128i v74; // [rsp+10h] [rbp-208h] BYREF
  __m128i v75; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v76; // [rsp+30h] [rbp-1E8h]
  size_t v77; // [rsp+38h] [rbp-1E0h]
  __int64 v78; // [rsp+40h] [rbp-1D8h]
  int v79[2]; // [rsp+48h] [rbp-1D0h]
  __int64 v80; // [rsp+50h] [rbp-1C8h]
  __int64 v81; // [rsp+58h] [rbp-1C0h]
  __int64 v82; // [rsp+60h] [rbp-1B8h]
  __int64 *v83; // [rsp+68h] [rbp-1B0h]
  __int64 v84; // [rsp+70h] [rbp-1A8h]
  __int64 *v85; // [rsp+78h] [rbp-1A0h]
  unsigned int v86; // [rsp+80h] [rbp-198h]
  unsigned int v87; // [rsp+84h] [rbp-194h]
  __m128i *v88; // [rsp+88h] [rbp-190h]
  const __m128i *v89; // [rsp+90h] [rbp-188h]
  __m128i *v90; // [rsp+98h] [rbp-180h]
  __int64 v91; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-160h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-150h]
  __int64 v96; // [rsp+D0h] [rbp-148h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-140h]
  unsigned __int64 v98; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v99; // [rsp+E8h] [rbp-130h]
  __m128i v100; // [rsp+F0h] [rbp-128h] BYREF
  __m128i v101; // [rsp+100h] [rbp-118h] BYREF
  __m128i v102; // [rsp+110h] [rbp-108h] BYREF
  __m128i v103; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v104; // [rsp+130h] [rbp-E8h]
  __m128i v105; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v106; // [rsp+150h] [rbp-C8h]
  __m128i v107; // [rsp+160h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+170h] [rbp-A8h]
  _QWORD v109[4]; // [rsp+180h] [rbp-98h] BYREF
  _QWORD v110[4]; // [rsp+1A0h] [rbp-78h] BYREF
  _QWORD v111[11]; // [rsp+1C0h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 378) )
    return 0;
  if ( !(unsigned __int8)sub_D16D00(a1, a2, &v91, &v92, &v93) )
    return 0;
  v9 = v91;
  if ( !a3
    || (LOBYTE(v111[0]) = 1,
        sub_D18670(a1, v91, v111, 0),
        sub_D18670(a1, v92, v111, 0),
        sub_D18670(a1, v93, v111, 0),
        result = 1,
        LOBYTE(v111[0])) )
  {
    v10 = *(_QWORD *)a1;
    v94 = 0;
    v76 = v10;
    v95 = v10;
    sub_D16A30(a1, v9, 1, &v94);
    v97 = v10;
    v11 = v94;
    v81 = v95;
    v96 = 0;
    sub_D16A30(a1, v92, 1, &v96);
    v12 = v96;
    v98 = 0;
    v80 = v97;
    v99 = v76;
    sub_D16A30(a1, v93, 1, (__int64 *)&v98);
    v13 = v98;
    v76 = v99;
    if ( a4 )
    {
      v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)v98);
      v74 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)v98);
      v100 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v12);
      sub_D175A0(a1, 2, &v100);
      v101 = _mm_load_si128(&v74);
      sub_D175A0(a1, 2, &v101);
      v102 = _mm_load_si128(&v73);
      sub_D175A0(a1, 2, &v102);
      goto LABEL_23;
    }
    v82 = *(_QWORD *)a1;
    v14 = sub_D17130(a1);
    v73.m128i_i64[0] = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = sub_15E1A70(*(_QWORD *)a1);
    v78 = v15;
    v74 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v12);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v11);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v104 = v12;
    v103 = v16;
    v75 = v16;
    sub_D175A0(a1, 3, &v103);
    v17 = _mm_load_si128(&v75);
    v106 = v13;
    v105 = v17;
    sub_D175A0(a1, 3, &v105);
    v18 = _mm_load_si128(&v74);
    v108 = v13;
    v107 = v18;
    sub_D175A0(a1, 3, &v107);
    v19 = *(_QWORD *)a1;
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
    *(_QWORD *)v79 = v19;
    v21 = *(_QWORD *)(v19 + 864);
    if ( v20 != v11 )
    {
      if ( v21 != v11 )
      {
        if ( *(_WORD *)(v11 + 4) || (v22 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr || *v22 || v22[1] != 8 )
        {
          v25 = sub_15E1A70(v79[0]);
          v75.m128i_i64[0] = v25;
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          v19 = *(_QWORD *)a1;
          v20 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
          v21 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
        }
        else
        {
          v23 = *(_QWORD *)(v11 + 32);
          v75.m128i_i64[0] = v23;
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          LODWORD(v19) = v79[0];
        }
        if ( v20 != v12 )
        {
          if ( v21 != v12 )
          {
LABEL_38:
            if ( *(_WORD *)(v12 + 4)
              || (v26 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr
              || *v26
              || v26[1] != 8 )
            {
              v28 = sub_15E1A70(v19);
              v21 = v28;
              if ( v28 )
                ++*(_DWORD *)(v28 + 8);
              v19 = *(_QWORD *)a1;
              v20 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
              v74.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
            }
            else
            {
              v27 = *(_QWORD *)(v12 + 32);
              if ( v27 )
                ++*(_DWORD *)(v27 + 8);
              v74.m128i_i64[0] = v21;
              v21 = v27;
            }
            if ( v13 != v20 )
              goto LABEL_49;
            goto LABEL_143;
          }
          if ( v20 )
            goto LABEL_78;
          if ( !v13 )
          {
            v74.m128i_i64[0] = v21;
            v21 = 0;
LABEL_143:
            if ( !v74.m128i_i64[0] )
              goto LABEL_58;
            goto LABEL_144;
          }
LABEL_134:
          if ( v13 == v12 )
          {
            v21 = 0;
            v74.m128i_i64[0] = 0;
            goto LABEL_58;
          }
          v21 = 0;
          goto LABEL_50;
        }
        if ( !v21 )
        {
          v74.m128i_i64[0] = 0;
          if ( v13 == v20 )
            goto LABEL_58;
          goto LABEL_49;
        }
LABEL_148:
        ++*(_DWORD *)(v21 + 8);
        v74.m128i_i64[0] = v21;
        if ( v20 == v13 )
          goto LABEL_144;
LABEL_49:
        if ( v13 != v74.m128i_i64[0] )
        {
LABEL_50:
          if ( *(_WORD *)(v13 + 4)
            || (v29 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) == nullptr
            || *v29
            || v29[1] != 8 )
          {
            v30 = sub_15E1A70(v19);
          }
          else
          {
            v30 = *(_QWORD *)(v13 + 32);
          }
          v74.m128i_i64[0] = v30;
          if ( v30 )
            ++*(_DWORD *)(v30 + 8);
LABEL_58:
          v109[2] = v21;
          v109[0] = v73.m128i_i64[0];
          v109[1] = v75.m128i_i64[0];
          sub_D175A0(a1, 3, v109);
          v110[2] = v74.m128i_i64[0];
          v110[0] = v73.m128i_i64[0];
          v110[1] = v75.m128i_i64[0];
          sub_D175A0(a1, 3, v110);
          v111[1] = v21;
          v111[0] = v73.m128i_i64[0];
          v111[2] = v74.m128i_i64[0];
          v83 = v111;
          sub_D175A0(a1, 3, v111);
          v31 = *(unsigned int *)(a1 + 24);
          v32 = *(_DWORD *)(a1 + 32);
          v33 = v32 + *(_DWORD *)(a1 + 28);
          v86 = 2 * v31;
          if ( 3 * (int)v31 < (unsigned int)(4 * v33) )
          {
            v77 = 16LL * v86;
            v35 = sub_186B270(v77);
            v57 = (__m128i *)v35;
            v58 = (__m128i *)(v35 + v77);
            if ( v86 )
            {
              if ( (v77 & 0x10) == 0 || (v57 = (__m128i *)(v35 + 16), *(_OWORD *)v35 = 0, (__m128i *)(v35 + 16) != v58) )
              {
                do
                {
                  *v57 = 0;
                  v57 += 2;
                  v57[-1] = 0;
                }
                while ( v57 != v58 );
              }
            }
            v59 = *(const __m128i **)(a1 + 16);
            v36 = (__int64 *)v58;
            v60 = (__m128i *)&v59[*(unsigned int *)(a1 + 24)];
            v34 = v86 - 1;
            if ( v59 != v60 )
            {
              do
              {
                if ( v59->m128i_i64[0] > 1uLL )
                {
                  v61 = 16LL * (*(_DWORD *)(v59->m128i_i64[0] + 12) & v34);
                  v62 = (__m128i *)(v35 + v61);
                  if ( v77 == v61 )
                  {
LABEL_116:
                    if ( (__m128i *)v35 == v62 )
                    {
LABEL_128:
                      v90 = v58;
                      v89 = v59;
                      v88 = v60;
                      v87 = v34;
                      v85 = (__int64 *)v58;
                      v84 = v35;
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v63 = (__m128i *)v35;
                    while ( v63->m128i_i64[0] )
                    {
                      if ( v62 == ++v63 )
                        goto LABEL_128;
                    }
                  }
                  else
                  {
                    v63 = (__m128i *)(v35 + v61);
                    while ( v63->m128i_i64[0] )
                    {
                      if ( v58 == ++v63 )
                        goto LABEL_116;
                    }
                  }
                  *v63 = _mm_loadu_si128(v59);
                }
                ++v59;
              }
              while ( v60 != v59 );
              v60 = *(__m128i **)(a1 + 16);
            }
            if ( v60 )
            {
              v87 = v34;
              v85 = (__int64 *)v58;
              v84 = v35;
              sub_186B220(v60);
              v34 = v87;
              v36 = v85;
              v35 = v84;
            }
            v64 = v86;
            *(_QWORD *)(a1 + 16) = v35;
            *(_DWORD *)(a1 + 32) = 0;
            *(_DWORD *)(a1 + 24) = v64;
            v32 = 0;
          }
          else
          {
            v34 = v31 - 1;
            v35 = *(_QWORD *)(a1 + 16);
            v77 = 16 * v31;
            v36 = (__int64 *)(v35 + 16 * v31);
          }
          v37 = *(_DWORD *)(a2 + 12);
          v38 = 16LL * (v37 & v34);
          v39 = v35 + v38;
          if ( v77 == v38 )
          {
            v41 = nullptr;
LABEL_69:
            if ( v35 == v39 )
            {
LABEL_81:
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            while ( 1 )
            {
              v43 = *(_QWORD *)v35;
              if ( *(_QWORD *)v35 > 1u )
              {
                if ( *(_DWORD *)(v43 + 12) == v37 && a2 == v43 )
                {
                  v68 = v73.m128i_i64[0];
                  *(_QWORD *)v35 = a2;
                  *(_QWORD *)(v35 + 8) = v68;
                  goto LABEL_82;
                }
              }
              else
              {
                if ( !v43 )
                {
                  if ( v41 )
                    goto LABEL_126;
                  v41 = (_QWORD *)v35;
                  goto LABEL_127;
                }
                v41 = (_QWORD *)v35;
              }
              v35 += 16;
              if ( v39 == v35 )
                goto LABEL_81;
            }
          }
          v40 = (__int64 *)(v35 + v38);
          v41 = nullptr;
          while ( 1 )
          {
            v42 = *v40;
            if ( (unsigned __int64)*v40 > 1 )
            {
              if ( *(_DWORD *)(v42 + 12) == v37 && a2 == v42 )
              {
                v66 = v73.m128i_i64[0];
                *v40 = a2;
                v40[1] = v66;
                goto LABEL_82;
              }
            }
            else
            {
              if ( !v42 )
              {
                if ( v41 )
LABEL_126:
                  *(_DWORD *)(a1 + 32) = v32 - 1;
                else
                  v41 = v40;
LABEL_127:
                v65 = v73.m128i_i64[0];
                *v41 = a2;
                v41[1] = v65;
                ++*(_DWORD *)(a1 + 28);
LABEL_82:
                v44 = *(_QWORD **)(a1 + 48);
                ++*(_DWORD *)(a2 + 8);
                if ( v44 )
                {
                  v45 = *((_DWORD *)v44 - 1);
                  if ( v45 == *((_DWORD *)v44 - 2) )
                  {
                    v53 = (3 * v45 + 1) >> 1;
                    v54 = 8 * v53 + 8;
                    if ( 8 * v45 + 8 >= (unsigned int)v54 || v45 >= v53 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_166874(v83, "Overflow encountered when expanding vector", v70);
                      v71 = v83;
                      v72 = v83;
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v72);
                      sub_233E40((__int64)v71);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    LODWORD(v77) = (3 * v45 + 1) >> 1;
                    v55 = sub_186B300(v44 - 1, v54);
                    v56 = v77;
                    v44 = (_QWORD *)(v55 + 8);
                    *(_QWORD *)(a1 + 48) = v55 + 8;
                    *(_DWORD *)v55 = v56;
                    LODWORD(v55) = *(_DWORD *)(v55 + 4);
                    v48 = &v44[(unsigned int)v55];
                    v47 = v55 + 1;
                  }
                  else
                  {
                    v46 = v45;
                    v47 = v45 + 1;
                    v48 = &v44[v46];
                  }
                }
                else
                {
                  v67 = (_QWORD *)sub_186B270(0x18u);
                  v44 = v67 + 1;
                  *v67 = 2;
                  v47 = 1;
                  *(_QWORD *)(a1 + 48) = v44;
                  v48 = v44;
                }
                v49 = v74.m128i_i64[0];
                *v48 = a2;
                *((_DWORD *)v44 - 1) = v47;
                if ( v49 )
                {
                  LODWORD(v77) = *(_DWORD *)(v49 + 8);
                  v24 = (_DWORD)v77 == 1;
                  *(_DWORD *)(v49 + 8) = v77 - 1;
                  if ( v24 )
                    sub_15D7BC0(*(_QWORD *)v79, v49);
                }
                if ( v21 )
                {
                  v24 = (*(_DWORD *)(v21 + 8))-- == 1;
                  if ( v24 )
                    sub_15D7BC0(*(_QWORD *)v79, v21);
                }
                v50 = v75.m128i_i64[0];
                if ( v75.m128i_i64[0] )
                {
                  v74.m128i_i32[0] = *(_DWORD *)(v75.m128i_i64[0] + 8);
                  v24 = v74.m128i_i32[0] == 1;
                  *(_DWORD *)(v75.m128i_i64[0] + 8) = v74.m128i_i32[0] - 1;
                  if ( v24 )
                    sub_15D7BC0(*(_QWORD *)v79, v50);
                }
                v51 = v78;
                if ( v78 )
                {
                  v74.m128i_i32[0] = *(_DWORD *)(v78 + 8);
                  v24 = v74.m128i_i32[0] == 1;
                  *(_DWORD *)(v78 + 8) = v74.m128i_i32[0] - 1;
                  if ( v24 )
                    sub_15D7BC0(v82, v51);
                }
                v52 = v73.m128i_i64[0];
                if ( v73.m128i_i64[0] )
                {
                  v74.m128i_i32[0] = *(_DWORD *)(v73.m128i_i64[0] + 8);
                  v24 = v74.m128i_i32[0] == 1;
                  *(_DWORD *)(v73.m128i_i64[0] + 8) = v74.m128i_i32[0] - 1;
                  if ( v24 )
                    sub_15D7BC0(v82, v52);
                }
LABEL_23:
                if ( v13 )
                {
                  v24 = (*(_DWORD *)(v13 + 8))-- == 1;
                  if ( v24 )
                    sub_15D7BC0(v76, v13);
                }
                if ( v12 )
                {
                  v24 = (*(_DWORD *)(v12 + 8))-- == 1;
                  if ( v24 )
                    sub_15D7BC0(v80, v12);
                }
                if ( v11 )
                {
                  v24 = (*(_DWORD *)(v11 + 8))-- == 1;
                  if ( v24 )
                    sub_15D7BC0(v81, v11);
                }
                return 2;
              }
              v41 = v40;
            }
            v40 += 2;
            if ( v36 == v40 )
              goto LABEL_69;
          }
        }
        v74.m128i_i64[0] = 0;
        if ( !v20 )
          goto LABEL_58;
LABEL_80:
        ++*(_DWORD *)(v20 + 8);
        v74.m128i_i64[0] = v20;
        goto LABEL_58;
      }
      if ( v20 )
      {
        ++*(_DWORD *)(v20 + 8);
        if ( v20 != v12 )
        {
          v75.m128i_i64[0] = v20;
          if ( v11 != v12 )
            goto LABEL_38;
          goto LABEL_78;
        }
        v75.m128i_i64[0] = v12;
        if ( v11 )
          goto LABEL_148;
        if ( v13 != v12 )
        {
          if ( v13 )
            goto LABEL_50;
          goto LABEL_80;
        }
LABEL_158:
        v74.m128i_i64[0] = 0;
        goto LABEL_58;
      }
      if ( v12 )
      {
        if ( v11 != v12 )
        {
          v75.m128i_i64[0] = 0;
          goto LABEL_38;
        }
        if ( v13 )
        {
          LODWORD(v19) = v79[0];
          v75.m128i_i64[0] = 0;
          goto LABEL_134;
        }
        v74.m128i_i64[0] = v11;
        v21 = 0;
        v75.m128i_i64[0] = 0;
        goto LABEL_144;
      }
      if ( v11 )
      {
        LODWORD(v19) = v79[0];
        v75.m128i_i64[0] = 0;
        goto LABEL_148;
      }
      if ( v13 )
      {
        LODWORD(v19) = v79[0];
        v75.m128i_i64[0] = 0;
        goto LABEL_50;
      }
LABEL_178:
      v74.m128i_i64[0] = 0;
      v75.m128i_i64[0] = 0;
      goto LABEL_58;
    }
    if ( v21 )
    {
      ++*(_DWORD *)(v21 + 8);
      if ( v11 == v12 )
      {
        v75.m128i_i64[0] = v21;
        goto LABEL_148;
      }
      v75.m128i_i64[0] = v21;
      if ( v21 != v12 )
        goto LABEL_38;
      if ( !v11 )
      {
        if ( v13 )
          goto LABEL_134;
        v74.m128i_i64[0] = v12;
        v21 = 0;
LABEL_144:
        ++*(_DWORD *)(v74.m128i_i64[0] + 8);
        goto LABEL_58;
      }
    }
    else
    {
      if ( v11 == v12 )
      {
        if ( v11 != v13 )
        {
          LODWORD(v19) = v79[0];
          v74.m128i_i64[0] = 0;
          v75.m128i_i64[0] = 0;
          goto LABEL_49;
        }
        goto LABEL_178;
      }
      v75.m128i_i64[0] = 0;
      if ( v12 )
        goto LABEL_38;
      if ( !v11 )
      {
        if ( v13 )
          goto LABEL_50;
        goto LABEL_158;
      }
    }
LABEL_78:
    ++*(_DWORD *)(v20 + 8);
    if ( v20 != v13 )
    {
      v21 = v20;
      if ( v13 != v12 )
        goto LABEL_50;
      goto LABEL_80;
    }
    v74.m128i_i64[0] = v12;
    v21 = v13;
    goto LABEL_143;
  }
  return result;
}

