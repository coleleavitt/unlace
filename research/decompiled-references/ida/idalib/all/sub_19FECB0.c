unsigned __int64 __fastcall sub_19FECB0(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  char *v4; // rdx
  unsigned __int8 *v5; // r13
  unsigned __int8 *v6; // r15
  __m128i v7; // xmm2
  unsigned __int8 **v8; // rbx
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  unsigned __int8 *v18; // rdi
  unsigned __int8 **v19; // rbx
  unsigned __int8 *v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  __m128 *v23; // r13
  int v24; // eax
  __int64 v25; // rbp
  void **v26; // r8
  unsigned __int64 v27; // rax
  __m128 *v28; // rbp
  __m128 *v29; // r8
  __m128 *v30; // r10
  __m128 *v31; // rax
  unsigned int v32; // r9d
  unsigned __int64 v33; // rcx
  unsigned int v34; // ebp
  __m128i *v35; // rcx
  _QWORD *v36; // r13
  __int64 v37; // r14
  __int64 v38; // r9
  __int64 *v39; // r9
  __int64 v40; // r12
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 *v48; // rcx
  __int64 *v49; // rax
  __int64 **v50; // rax
  __int64 *v51; // rdx
  unsigned __int64 v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // rcx
  int v55; // edx
  __m128i v56; // xmm0
  __int64 **v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 **v62; // rax
  __int64 *v63; // rdx
  unsigned __int64 v64; // rax
  __int64 *v65; // rcx
  int v66; // r12d
  __int64 v67; // r15
  int v68; // ebp
  size_t v69; // r13
  size_t v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // rbp
  int v93; // eax
  __int64 *v94; // rax
  __int64 *v95; // rax
  __int64 v96; // rcx
  __int64 *v97; // rax
  __int64 v98; // rcx
  __m128 *v99; // [rsp+8h] [rbp-190h] BYREF
  _QWORD *v100; // [rsp+10h] [rbp-188h]
  __int64 v101; // [rsp+18h] [rbp-180h]
  __m128i v102; // [rsp+20h] [rbp-178h] BYREF
  __int64 v103; // [rsp+30h] [rbp-168h]
  void **p_ptr; // [rsp+38h] [rbp-160h]
  __int64 v105; // [rsp+40h] [rbp-158h]
  __int64 v106; // [rsp+48h] [rbp-150h]
  __m128i v107; // [rsp+50h] [rbp-148h] BYREF
  __m128i v108; // [rsp+60h] [rbp-138h]
  unsigned __int8 *v109; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v110; // [rsp+78h] [rbp-120h]
  unsigned __int8 *v111; // [rsp+80h] [rbp-118h]
  _QWORD *v112; // [rsp+88h] [rbp-110h]
  void *ptr; // [rsp+90h] [rbp-108h] BYREF
  __int64 v114; // [rsp+98h] [rbp-100h]
  char v115; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v116; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v117; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int8 *v118[11]; // [rsp+F0h] [rbp-A8h] BYREF
  char v119; // [rsp+148h] [rbp-50h]
  unsigned int v120; // [rsp+150h] [rbp-48h]
  char v121; // [rsp+154h] [rbp-44h]

  v3 = a1;
  *(_DWORD *)(a2 + 84) = a3;
  v103 = *a1;
  p_ptr = &ptr;
  ptr = &v115;
  v114 = 0x300000000LL;
  sub_B7ADF0(&v109, a2);
  sub_B7ADA0((__m128 *)&v107, a2);
  v5 = v109;
  LOBYTE(v101) = 0;
  v6 = v111;
  v102.m128i_i8[0] = 0;
  v116 = v107;
  v118[0] = v109;
  v117 = v108;
  v118[2] = v111;
  v99 = (__m128 *)v110;
  v105 = a2;
  v100 = v112;
  v7 = _mm_load_si128(&v117);
  v107 = _mm_load_si128(&v116);
  v108 = v7;
LABEL_2:
  if ( *(_OWORD *)&v107 != __PAIR128__((unsigned __int64)v99, (unsigned __int64)v5)
    || __PAIR128__((unsigned __int64)v100, (unsigned __int64)v6) != *(_OWORD *)&v108 )
  {
    v8 = &v109;
    v9 = nullptr;
    v110 = nullptr;
    v109 = (unsigned __int8 *)sub_19F51C0;
    v111 = (unsigned __int8 *)sub_19F51E0;
    v112 = nullptr;
    while ( 1 )
    {
      v10 = *v8;
      v11 = (__int64 *)((char *)v107.m128i_i64 + (_QWORD)v9);
      if ( ((unsigned __int8)*v8 & 1) != 0 )
        v10 = *(unsigned __int8 **)&v10[*v11 - 1];
      v12 = ((__int64 (__fastcall *)(_QWORD *))v10)(v11);
      if ( v12 )
        break;
      v8 += 2;
      v9 = v8[1];
    }
    v17 = *(_QWORD *)v12;
    if ( (*(_BYTE *)(*(_QWORD *)v12 + 28LL) & 0x7Fu) - 40 > 6 )
      goto LABEL_11;
    if ( (*(_BYTE *)(v17 + 29) & 1) == 0 )
      goto LABEL_10;
    v106 = *(_QWORD *)v12;
    v44 = sub_B8C3D0(v17, v17, v13, v14, v15, v16);
    v47 = *v44;
    v48 = (__int64 *)(*v44 + 8LL * *((unsigned int *)v44 + 2));
    if ( *v44 >= (unsigned __int64)v48 )
    {
      if ( (__int64 *)v47 != v48 )
      {
        if ( *(_WORD *)(*v48 + 36) == 105 )
          goto LABEL_42;
        v57 = (__int64 **)(v48 + 1);
        while ( (__int64 **)v47 != v57 )
        {
          v48 = *v57++;
          if ( *((_WORD *)v48 + 18) == 105 )
            goto LABEL_42;
        }
      }
    }
    else
    {
      v49 = (__int64 *)*v44;
      while ( 1 )
      {
        v47 = *v49;
        if ( *(_WORD *)(*v49 + 36) == 105 )
          break;
        if ( v48 == ++v49 )
          goto LABEL_10;
      }
      if ( v48 != v49 )
      {
LABEL_42:
        if ( (*(_BYTE *)(v106 + 29) & 1) != 0 )
        {
          v102.m128i_i64[0] = v106;
          v50 = (__int64 **)sub_B8C3D0(v106, v106, v47, (__int64)v48, v45, v46);
          v51 = *v50;
          v52 = (unsigned __int64)&(*v50)[*((unsigned int *)v50 + 2)];
          if ( (unsigned __int64)v51 >= v52 )
          {
            if ( v51 != (__int64 *)v52 )
            {
              if ( *(_WORD *)(*(_QWORD *)v52 + 36LL) == 105 )
              {
LABEL_85:
                v54 = *v51;
                if ( *(_WORD *)(*v51 + 36) != 105 )
                {
                  v94 = v51 + 1;
                  do
                    v54 = *v94++;
                  while ( *(_WORD *)(v54 + 36) != 105 );
                }
                goto LABEL_48;
              }
              v97 = (__int64 *)(v52 + 8);
              while ( v51 != v97 )
              {
                v98 = *v97++;
                if ( *(_WORD *)(v98 + 36) == 105 )
                  goto LABEL_85;
              }
            }
          }
          else
          {
            v53 = v51;
            while ( *(_WORD *)(*v53 + 36) != 105 )
            {
              if ( (__int64 *)v52 == ++v53 )
                goto LABEL_47;
            }
            if ( (__int64 *)v52 != v53 )
              goto LABEL_85;
          }
        }
LABEL_47:
        v54 = 0;
LABEL_48:
        v102.m128i_i64[0] = v54;
        v55 = v114;
        v56 = (__m128i)_mm_loadh_ps((const double *)v102.m128i_i64);
        if ( (unsigned int)v114 >= (unsigned __int64)HIDWORD(v114) )
        {
          if ( HIDWORD(v114) < (unsigned __int64)(unsigned int)v114 + 1 )
          {
            v102 = v56;
            sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v114 + 1LL, 16);
            v56 = _mm_load_si128(&v102);
          }
          v102.m128i_i8[0] = 1;
          *((__m128i *)ptr + (unsigned int)v114) = v56;
          LODWORD(v114) = v114 + 1;
        }
        else
        {
          v102.m128i_i8[0] = 1;
          *((__m128i *)ptr + (unsigned int)v114) = v56;
          LODWORD(v114) = v55 + 1;
        }
        goto LABEL_11;
      }
    }
LABEL_10:
    LOBYTE(v101) = 1;
LABEL_11:
    v18 = nullptr;
    v19 = &v109;
    v110 = nullptr;
    v109 = (unsigned __int8 *)sub_19F5160;
    v111 = (unsigned __int8 *)sub_19F5190;
    v112 = nullptr;
    while ( 1 )
    {
      v20 = *v19;
      v21 = (__int64 *)((char *)v107.m128i_i64 + (_QWORD)v18);
      if ( ((unsigned __int8)*v19 & 1) != 0 )
      {
        if ( (*(unsigned __int8 (**)(void))&v20[*v21 - 1])() )
          goto LABEL_2;
      }
      else if ( ((unsigned __int8 (__fastcall *)(_QWORD *))v20)(v21) )
      {
        goto LABEL_2;
      }
      v19 += 2;
      v18 = v19[1];
    }
  }
  v22 = v105;
  if ( v102.m128i_i8[0] )
  {
    if ( (_BYTE)v101 )
    {
      sub_168B9F0((__int64)&v116, (__int64 *)(v103 + 8), *(_DWORD *)(v105 + 24), 0x1B3Eu, 0);
      sub_15F7200(&v116);
    }
    v23 = (__m128 *)ptr;
    v100 = *(_QWORD **)(v103 + 248);
    v24 = v114;
    v25 = 16LL * (unsigned int)v114;
    v26 = (void **)((char *)ptr + v25);
    if ( ptr != (char *)ptr + v25 )
    {
      v99 = (__m128 *)((char *)ptr + v25);
      _BitScanReverse64(&v27, v25 >> 4);
      sub_19F5A40((char *)ptr, (__int64 *)((char *)ptr + v25), 2LL * (int)(63 - (v27 ^ 0x3F)));
      if ( (unsigned __int64)v25 <= 0x100 )
      {
        sub_19F6300(v23, v99);
      }
      else
      {
        v28 = v23 + 16;
        sub_19F6300(v23, v23 + 16);
        v29 = v99;
        if ( v99 != &v23[16] )
        {
          do
          {
            v30 = (__m128 *)v28->m128_u64[1];
            v4 = (char *)v28[-1].m128_u64[1];
            v31 = v28 - 1;
            v32 = 4 * (v30[2].m128_i32[3] + 4 * v30[2].m128_i32[2]);
            if ( 4 * (*((_DWORD *)v4 + 11) + 4 * *((_DWORD *)v4 + 10)) > v32 )
            {
              while ( 1 )
              {
                v33 = v31->m128_u64[0];
                v31[1].m128_u64[1] = (unsigned __int64)v4;
                v4 = (char *)v31[-1].m128_u64[1];
                v31[1].m128_u64[0] = v33;
                if ( 4 * (*((_DWORD *)v4 + 11) + 4 * *((_DWORD *)v4 + 10)) <= v32 )
                  break;
                --v31;
              }
            }
            else
            {
              v31 = v28;
            }
            v99 = v30;
            ++v28;
            *v31 = _mm_loadh_ps((const double *)&v99);
          }
          while ( v29 != v28 );
        }
      }
      v24 = v114;
      v26 = (void **)ptr;
    }
    v34 = 0;
    v35 = &v116;
    if ( v24 != 1 )
    {
      v36 = v100;
      v101 = v22;
      v100 = v3;
      v37 = 0;
      v99 = (__m128 *)&v109;
      while ( 1 )
      {
        v38 = v37;
        v37 = ++v34;
        v39 = (__int64 *)&v26[2 * v38];
        v40 = *v39;
        v41 = v39[1];
        v42 = sub_19F5770(v36, *(_QWORD *)(*v39 + 48), (__int64)v4, (__int64)v35, (__int64)v26, (__int64)v39);
        v26 = (void **)ptr;
        v4 = (char *)ptr + 16 * v34;
        v35 = *((__m128i **)v4 + 1);
        if ( v42 + 4 * (*(_DWORD *)(v41 + 44) + 4 * *(_DWORD *)(v41 + 40)) > (unsigned int)(4
                                                                                          * (v35[2].m128i_i32[3]
                                                                                           + 4 * v35[2].m128i_i32[2])) )
          break;
LABEL_32:
        if ( (unsigned __int64)(unsigned int)v114 - 1 <= v34 )
        {
          v3 = v100;
          v22 = v101;
          goto LABEL_57;
        }
      }
      v43 = *(_QWORD *)v4;
      sub_168B9F0((__int64)&v116, (__int64 *)(v103 + 8), *(_DWORD *)(*(_QWORD *)v4 + 24LL), 0xF46u, 0);
      if ( v119 )
      {
        sub_AE9DF0(v118, v43, 0xAu);
      }
      else
      {
        if ( !v121 )
        {
LABEL_36:
          sub_15F7200(&v116);
          v26 = (void **)ptr;
          v102.m128i_i8[0] = 0;
          goto LABEL_32;
        }
        v78 = sub_168B9E0(&v116);
        v82 = v117.m128i_i64[0];
        if ( v117.m128i_i64[0] )
        {
          v83 = *(_QWORD *)v117.m128i_i64[0];
          v102.m128i_i64[0] = v78;
          v82 = (*(__int64 (__fastcall **)(__int64))(v83 + 32))(v117.m128i_i64[0]);
          v78 = v102.m128i_i64[0];
        }
        v109 = (unsigned __int8 *)v82;
        v84 = sub_1587BC0(v78, (__int64 *)v99, v78, v79, v80, v81);
        sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * v120 + 8), v43, 0xAu);
      }
      if ( v119 )
      {
        sub_AE9DF0(v118, v40, 0xAu);
      }
      else if ( v121 )
      {
        v85 = sub_168B9E0(&v116);
        v89 = v117.m128i_i64[0];
        if ( v117.m128i_i64[0] )
        {
          v90 = *(_QWORD *)v117.m128i_i64[0];
          v102.m128i_i64[0] = v85;
          v89 = (*(__int64 (__fastcall **)(__int64))(v90 + 32))(v117.m128i_i64[0]);
          v85 = v102.m128i_i64[0];
        }
        v109 = (unsigned __int8 *)v89;
        v91 = sub_1587BC0(v85, (__int64 *)v99, v85, v86, v87, v88);
        sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v120 + 8), v40, 0xAu);
      }
      goto LABEL_36;
    }
LABEL_57:
    *(_BYTE *)(v22 + 93) = v102.m128i_i8[0];
    if ( v26 != p_ptr + 2 )
      free(v26);
  }
  else if ( ptr != p_ptr + 2 )
  {
    free(ptr);
  }
  sub_19FA760(*v3, v22);
  if ( (*(_BYTE *)(v22 + 29) & 1) == 0 )
    goto LABEL_64;
  v62 = (__int64 **)sub_B8C3D0(v22, v22, v58, v59, v60, v61);
  v63 = *v62;
  v64 = (unsigned __int64)&(*v62)[*((unsigned int *)v62 + 2)];
  if ( (unsigned __int64)v63 >= v64 )
  {
    if ( v63 == (__int64 *)v64 )
    {
LABEL_64:
      sub_168B9F0((__int64)&v116, (__int64 *)(*v3 + 8LL), *(_DWORD *)(v22 + 24), 0x1B3Du, 0);
      sub_15F7200(&v116);
      v66 = *((_DWORD *)v3 + 58);
      v67 = *v3;
      *((_DWORD *)v3 + 58) = v66 + 1;
      v68 = 2 * (*(_BYTE *)(v22 + 92) != 0);
      v69 = j__strlen("0");
      v70 = j__strlen(&byte_22F0C30);
      v71 = sub_B30D50(*(_QWORD *)(v67 + 248), &byte_22F0C30, v70, "0", v69, 0);
      *(_DWORD *)(v71 + 72) = v68;
      *(_QWORD *)(v71 + 76) = 0;
      *(_DWORD *)(v71 + 84) = 0;
      *(_DWORD *)(v71 + 88) = v66;
      *(_BYTE *)(v71 + 92) = 1;
      sub_B8CC60(v22, v71, v72, v73, v74, v75);
      v76 = *v3;
      return sub_17A2E10(v76);
    }
    if ( *(_WORD *)(*(_QWORD *)v64 + 36LL) != 226 )
    {
      v95 = (__int64 *)(v64 + 8);
      while ( v63 != v95 )
      {
        v96 = *v95++;
        if ( *(_WORD *)(v96 + 36) == 226 )
          goto LABEL_81;
      }
      goto LABEL_64;
    }
  }
  else
  {
    v65 = v63;
    while ( *(_WORD *)(*v65 + 36) != 226 )
    {
      if ( (__int64 *)v64 == ++v65 )
        goto LABEL_64;
    }
    if ( (__int64 *)v64 == v65 )
      goto LABEL_64;
  }
LABEL_81:
  while ( 1 )
  {
    v92 = *v63;
    if ( *(_WORD *)(*v63 + 36) == 226 )
      break;
    ++v63;
  }
  v76 = *v3;
  if ( !*(_BYTE *)(v92 + 80) )
  {
    sub_168B9F0((__int64)&v116, (__int64 *)(v76 + 8), *(_DWORD *)(v22 + 24), 0x1B3Du, 0);
    sub_15F7200(&v116);
    v93 = *((_DWORD *)v3 + 58);
    *((_DWORD *)v3 + 58) = v93 + 1;
    *(_DWORD *)(v92 + 88) = v93;
    *(_BYTE *)(v92 + 92) = 1;
    v76 = *v3;
  }
  return sub_17A2E10(v76);
}
