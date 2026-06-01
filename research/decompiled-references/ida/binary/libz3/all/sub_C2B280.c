__int64 __fastcall sub_C2B280(__int64 **a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _DWORD *v4; // r15
  __int64 **v5; // r13
  _DWORD *v8; // rax
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *k; // rax
  _DWORD *v18; // rdx
  __int64 v19; // r12
  int v20; // r14d
  int v21; // eax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r12
  int v25; // r14d
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r14
  _DWORD *v31; // rcx
  __m128 *v32; // r12
  unsigned int v33; // r11d
  __int64 v34; // rdx
  __m128 *v35; // r14
  int v36; // esi
  __int64 v37; // rax
  __m128 *v38; // rdi
  __m128 *v39; // rax
  unsigned __int64 *v40; // r8
  _DWORD *v41; // rdx
  __int64 *v42; // rcx
  __int64 v43; // rdx
  char i; // al
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  int v50; // esi
  __int64 *v51; // rdx
  int *v52; // rdi
  __int64 v53; // rax
  int *v54; // rcx
  int *j; // rax
  __int64 v56; // rdx
  _DWORD *v57; // rcx
  _DWORD *v58; // rax
  _DWORD *v59; // rax
  __m128 *v60; // rax
  int v61; // r9d
  __m128 *v62; // rsi
  char *v63; // r8
  char *v64; // r10
  _QWORD *v65; // rdi
  _QWORD *v66; // rsi
  _DWORD *v67; // rax
  char *v68; // rbx
  char *v69; // rbp
  __int64 **v70; // r15
  _QWORD *v71; // r8
  __int64 v72; // rdx
  __m128 *v73; // rdi
  size_t v74; // r13
  __m128 *v75; // rdx
  int v76; // [rsp-8h] [rbp-130h]
  int v77; // [rsp-8h] [rbp-130h]
  int v78; // [rsp+0h] [rbp-128h]
  int v79[2]; // [rsp+0h] [rbp-128h]
  int v80; // [rsp+0h] [rbp-128h]
  _QWORD *v81; // [rsp+0h] [rbp-128h]
  __int64 ***v82; // [rsp+8h] [rbp-120h]
  int v83; // [rsp+8h] [rbp-120h]
  int v84; // [rsp+8h] [rbp-120h]
  int v85; // [rsp+8h] [rbp-120h]
  _DWORD *v86; // [rsp+8h] [rbp-120h]
  int *v87; // [rsp+10h] [rbp-118h]
  int v88; // [rsp+10h] [rbp-118h]
  int v89; // [rsp+10h] [rbp-118h]
  int v90; // [rsp+10h] [rbp-118h]
  _DWORD *v91; // [rsp+10h] [rbp-118h]
  size_t v92; // [rsp+10h] [rbp-118h]
  _DWORD *v93; // [rsp+10h] [rbp-118h]
  __int64 *v94; // [rsp+18h] [rbp-110h]
  int v95; // [rsp+18h] [rbp-110h]
  int v96; // [rsp+18h] [rbp-110h]
  int v97; // [rsp+18h] [rbp-110h]
  size_t v98; // [rsp+18h] [rbp-110h]
  unsigned int v99; // [rsp+18h] [rbp-110h]
  int v100; // [rsp+20h] [rbp-108h]
  int v101; // [rsp+20h] [rbp-108h]
  int v102; // [rsp+20h] [rbp-108h]
  int v103; // [rsp+20h] [rbp-108h]
  __int64 v104; // [rsp+20h] [rbp-108h]
  int v105; // [rsp+28h] [rbp-100h]
  char v106; // [rsp+28h] [rbp-100h]
  int v107; // [rsp+28h] [rbp-100h]
  char v108; // [rsp+28h] [rbp-100h]
  __int64 v109; // [rsp+28h] [rbp-100h]
  int v110; // [rsp+28h] [rbp-100h]
  char v111; // [rsp+30h] [rbp-F8h]
  int v112; // [rsp+30h] [rbp-F8h]
  char v113; // [rsp+30h] [rbp-F8h]
  int v114; // [rsp+30h] [rbp-F8h]
  int v115; // [rsp+38h] [rbp-F0h]
  int v116; // [rsp+38h] [rbp-F0h]
  int v117; // [rsp+38h] [rbp-F0h]
  int v118; // [rsp+38h] [rbp-F0h]
  int v119; // [rsp+40h] [rbp-E8h]
  int v120; // [rsp+40h] [rbp-E8h]
  int v121; // [rsp+40h] [rbp-E8h]
  int v122; // [rsp+40h] [rbp-E8h]
  int v123; // [rsp+48h] [rbp-E0h]
  void *v124; // [rsp+48h] [rbp-E0h]
  int v125; // [rsp+48h] [rbp-E0h]
  void *v126; // [rsp+48h] [rbp-E0h]
  int v127; // [rsp+50h] [rbp-D8h]
  int v128; // [rsp+50h] [rbp-D8h]
  __int64 **v129; // [rsp+58h] [rbp-D0h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v131; // [rsp+68h] [rbp-C0h]
  int v132; // [rsp+70h] [rbp-B8h] BYREF
  int v133; // [rsp+78h] [rbp-B0h]
  int v134; // [rsp+80h] [rbp-A8h]
  int v135; // [rsp+88h] [rbp-A0h]
  int v136; // [rsp+90h] [rbp-98h]
  int v137; // [rsp+98h] [rbp-90h]
  int v138; // [rsp+A0h] [rbp-88h]
  void *v139; // [rsp+A8h] [rbp-80h]
  int v140; // [rsp+B0h] [rbp-78h]
  __int64 v141; // [rsp+B8h] [rbp-70h]

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = (_DWORD *)a2;
  if ( *(_DWORD *)(a2 + 24) )
    return 0;
  v5 = a1;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v8 )
  {
    if ( *v8 != -1 )
      return 0;
  }
  if ( !*((_BYTE *)a1 + 80) )
  {
    v42 = a1[1];
    v129 = a1;
    v87 = &v132;
    ptr = &v132;
    v43 = v42[9];
    v131 = 0x1000000000LL;
    if ( !v43 )
      goto LABEL_73;
    for ( i = *(_BYTE *)(v43 + 3) >> 6; !i; i = *(_BYTE *)(v43 + 3) >> 6 )
      v43 = *(_QWORD *)(v43 + 16);
    if ( i == 1 )
      v45 = (unsigned int)(*(_DWORD *)(v43 + 4) + 1);
    else
      v45 = i == 2 ? (unsigned int)(*(_DWORD *)(v43 + 4) - 1) : *(unsigned int *)(v43 + 4);
    if ( (_DWORD)v45 )
    {
      v46 = 0;
      v82 = &v129;
      while ( 1 )
      {
        v48 = *v42;
        if ( (*((_BYTE *)v42 + 123) & 0x20) != 0 )
        {
          v47 = *(_QWORD *)(v48 + 864);
        }
        else
        {
          v49 = v42[9];
          v50 = 18;
          while ( --v50 )
          {
            if ( *(char *)(v49 + 3) >= 0 )
            {
              if ( *(_DWORD *)(v49 + 4) == (_DWORD)v46 )
              {
                v51 = (__int64 *)(v49 + 8);
                goto LABEL_42;
              }
            }
            else if ( *(_BYTE *)(v49 + 3) >> 6 != 2 )
            {
              v51 = (__int64 *)(*(_QWORD *)(v49 + 16) + 8 * v46);
              goto LABEL_42;
            }
            v49 = *(_QWORD *)(v49 + 16);
          }
          v94 = v42;
          sub_233F80((__int64 *)(v48 + 616), (_DWORD *)v42 + 18);
          v51 = (__int64 *)(*(_QWORD *)(v94[9] + 16) + 8 * v46);
LABEL_42:
          v47 = *v51;
        }
        sub_C29960(&v129, (__int64)&ptr, v47);
        if ( v45 == ++v46 )
          break;
        v42 = a1[1];
      }
      v52 = (int *)ptr;
      v53 = (unsigned int)v131;
      *((_BYTE *)v5 + 80) = 1;
      v54 = &v52[2 * v53];
      for ( j = v52; v54 != j; *(_BYTE *)(v56 + 6) &= ~1u )
      {
        v56 = *(_QWORD *)j;
        j += 2;
      }
      LODWORD(v131) = 0;
      if ( v52 != nullptr && v52 != &v132 )
        sub_186B220(v52);
    }
    else
    {
LABEL_73:
      *((_BYTE *)a1 + 80) = 1;
    }
  }
  if ( (unsigned __int8)sub_15D37A0(v5 + 3, v4) )
    return 0;
  v10 = *((unsigned int *)v5 + 24);
  v11 = v4[3];
  v12 = v5[11];
  v13 = v10 - 1;
  v10 *= 24;
  v14 = (__int64 *)((char *)v12 + v10);
  v15 = 24LL * (v11 & v13);
  v16 = &v12[(unsigned __int64)v15 / 8];
  if ( v15 != v10 )
  {
    for ( k = &v12[(unsigned __int64)v15 / 8]; v14 != k; k += 3 )
    {
      v18 = (_DWORD *)*k;
      if ( (unsigned __int64)*k > 1 )
      {
        if ( v18[3] == v11 && v4 == v18 )
          goto LABEL_50;
      }
      else if ( !v18 )
      {
        goto LABEL_16;
      }
    }
  }
  for ( ; v16 != v12; v12 += 3 )
  {
    v58 = (_DWORD *)*v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( v58[3] == v11 && v4 == v58 )
      {
        k = v12;
LABEL_50:
        v57 = (_DWORD *)k[2];
        v86 = (_DWORD *)k[1];
        goto LABEL_51;
      }
    }
    else if ( !v58 )
    {
      break;
    }
  }
LABEL_16:
  v19 = **v5;
  v20 = sub_15D2CD0(v19, 5, 0, 0, 0);
  sub_180C5A0(&ptr, 0);
  v21 = sub_15E3D10(
          v19,
          (int)&ptr,
          (int)&qword_18D6CD0,
          0,
          0,
          v20,
          1,
          v76,
          (int)&ptr,
          (int)v82,
          (int)v87,
          (int)v94,
          v100,
          v105,
          v111,
          v115,
          v119,
          v123,
          v127,
          (int)v129,
          (int)ptr,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140,
          v141);
  v84 = sub_15DC610(v19, v21, 0, 0, v22, v23, v78, v83, v88, v95, v101, v106, v112, v116, v120, v124);
  v24 = **v5;
  v25 = sub_15D2CD0(v24, 5, 0, 0, 0);
  sub_180C5A0(*(_QWORD *)v79, 0);
  v26 = sub_15E3D10(
          v24,
          v79[0],
          (int)&qword_18D6CD0,
          0,
          0,
          v25,
          1,
          v77,
          v79[0],
          v84,
          v89,
          v96,
          v102,
          v107,
          v113,
          v117,
          v121,
          v125,
          v128,
          (int)v129,
          (int)ptr,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140,
          v141);
  v29 = sub_15DC610(v24, v26, 0, 0, v27, v28, v80, v85, v90, v97, v103, v108, v114, v118, v122, v126);
  v30 = *((unsigned int *)v5 + 24);
  v31 = (_DWORD *)v29;
  if ( 3 * (int)v30 < (unsigned int)(4 * (*((_DWORD *)v5 + 25) + *((_DWORD *)v5 + 26))) )
  {
    v109 = v29;
    v98 = 24LL * (unsigned int)(2 * v30);
    v92 = v98;
    v60 = (__m128 *)sub_186B270(v98);
    v61 = 2 * v30;
    v34 = v98;
    v31 = (_DWORD *)v109;
    v32 = v60;
    if ( 2 * (_DWORD)v30 )
    {
      v62 = &v60[3 * (v30 & 0x7FFFFFFF)];
      do
      {
        *v60 = 0;
        v60 += 3;
        v60[-2] = 0;
        v60[-1] = 0;
      }
      while ( v62 != v60 );
    }
    v63 = (char *)v5[11];
    v33 = v61 - 1;
    v64 = &v63[24 * *((unsigned int *)v5 + 24)];
    v35 = (__m128 *)((char *)v32 + v98);
    if ( v63 != v64 )
    {
      v65 = a3;
      v66 = a4;
      v67 = v4;
      v68 = (char *)v5[11];
      v69 = &v63[24 * *((unsigned int *)v5 + 24)];
      v70 = v5;
      v71 = v65;
      do
      {
        if ( *(_QWORD *)v68 > 1u )
        {
          v72 = 24LL * (*(_DWORD *)(*(_QWORD *)v68 + 12LL) & v33);
          v73 = (__m128 *)((char *)v32 + v72);
          if ( v72 == v98 )
          {
LABEL_92:
            if ( v73 == v32 )
            {
LABEL_104:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v74 = v92;
            v75 = v32;
            while ( v75->m128_u64[0] )
            {
              v75 = (__m128 *)((char *)v75 + 24);
              if ( v73 == v75 )
                goto LABEL_104;
            }
          }
          else
          {
            v74 = v92;
            v75 = (__m128 *)((char *)v32 + v72);
            while ( v75->m128_u64[0] )
            {
              v75 = (__m128 *)((char *)v75 + 24);
              if ( v35 == v75 )
                goto LABEL_92;
            }
          }
          v92 = v74;
          *v75 = _mm_loadh_ps((const double *)v68 + 1);
          v75[1].m128_u64[0] = *((_QWORD *)v68 + 2);
        }
        v68 += 24;
      }
      while ( v69 != v68 );
      v5 = v70;
      a4 = v66;
      v34 = v92;
      v4 = v67;
      v64 = (char *)v5[11];
      a3 = v71;
    }
    if ( v64 )
    {
      v110 = v61;
      v104 = v34;
      v99 = v61 - 1;
      v93 = v31;
      sub_186B220(v64);
      v61 = v110;
      v34 = v104;
      v33 = v99;
      v31 = v93;
    }
    v5[11] = (__int64 *)v32;
    *((_DWORD *)v5 + 24) = v61;
    *((_DWORD *)v5 + 26) = 0;
  }
  else
  {
    v32 = (__m128 *)v5[11];
    v33 = v30 - 1;
    v34 = 24 * v30;
    v35 = (__m128 *)((char *)v32 + 24 * v30);
  }
  v36 = v4[3];
  v37 = 24LL * (v36 & v33);
  v38 = (__m128 *)((char *)v32 + v37);
  if ( v37 != v34 )
  {
    v39 = (__m128 *)((char *)v32 + v37);
    v40 = nullptr;
    while ( 1 )
    {
      v41 = (_DWORD *)v39->m128_u64[0];
      if ( v39->m128_u64[0] > 1 )
      {
        if ( v41[3] == v36 && v4 == v41 )
        {
          v39->m128_u64[0] = (unsigned __int64)v4;
          v39[1].m128_u64[0] = (unsigned __int64)v31;
          v39->m128_u64[1] = (unsigned __int64)v86;
          goto LABEL_75;
        }
      }
      else
      {
        if ( !v41 )
        {
          if ( v40 )
            goto LABEL_102;
          v40 = (unsigned __int64 *)v39;
          goto LABEL_103;
        }
        v40 = (unsigned __int64 *)v39;
      }
      v39 = (__m128 *)((char *)v39 + 24);
      if ( v39 == v35 )
        goto LABEL_63;
    }
  }
  v40 = nullptr;
  while ( 1 )
  {
LABEL_63:
    if ( v38 == v32 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v59 = (_DWORD *)v32->m128_u64[0];
    if ( v32->m128_u64[0] <= 1 )
      break;
    if ( v59[3] == v36 && v4 == v59 )
    {
      v32->m128_u64[0] = (unsigned __int64)v4;
      v32[1].m128_u64[0] = (unsigned __int64)v31;
      v32->m128_u64[1] = (unsigned __int64)v86;
      goto LABEL_75;
    }
LABEL_62:
    v32 = (__m128 *)((char *)v32 + 24);
  }
  if ( v59 )
  {
    v40 = (unsigned __int64 *)v32;
    goto LABEL_62;
  }
  if ( v40 )
LABEL_102:
    --*((_DWORD *)v5 + 26);
  else
    v40 = (unsigned __int64 *)v32;
LABEL_103:
  *v40 = (unsigned __int64)v4;
  v40[2] = (unsigned __int64)v31;
  v40[1] = (unsigned __int64)v86;
  ++*((_DWORD *)v5 + 25);
LABEL_75:
  ptr = v86;
  if ( v86 )
    ++v86[2];
  v91 = v31;
  sub_C28530(v5 + 15, v81);
  ptr = v91;
  if ( v91 )
    ++v91[2];
  sub_C28530(v5 + 15, v81);
  ++v4[2];
  ptr = v4;
  sub_C28530(v5 + 15, v81);
  v57 = v91;
LABEL_51:
  *a3 = v86;
  *a4 = v57;
  return 1;
}

