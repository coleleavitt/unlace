__int64 __fastcall sub_7EE9D0(_QWORD *a1, unsigned int *a2)
{
  char **exception; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int *v14; // rdi
  bool v15; // zf
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned __int64 *v20; // r12
  __int64 v21; // rdx
  int v22; // eax
  __m128 *v23; // rdx
  __m128 v24; // xmm0
  __m128 *v25; // r15
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // r13d
  size_t v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34; // rsi
  _QWORD *i; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 *v40; // rax
  _DWORD *v41; // r14
  __int64 *v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 (__fastcall *v53)(__int64); // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 *v60; // rbp
  unsigned __int64 *v61; // r12
  unsigned __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v65; // rax
  unsigned __int64 v66; // r12
  __int64 v67; // rax
  _QWORD *v68; // r14
  _QWORD *v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rdi
  _QWORD *v72; // r15
  _QWORD *v73; // r14
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 *v77; // rcx
  __m128 v78; // kr00_16
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // [rsp+0h] [rbp-108h] BYREF
  __m128 v89; // [rsp+8h] [rbp-100h] BYREF
  __int64 v90; // [rsp+18h] [rbp-F0h]
  __m128i *v91; // [rsp+20h] [rbp-E8h]
  unsigned __int64 *v92; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v93; // [rsp+30h] [rbp-D8h]
  unsigned int *v94; // [rsp+38h] [rbp-D0h]
  _DWORD *v95; // [rsp+40h] [rbp-C8h]
  __int64 v96; // [rsp+48h] [rbp-C0h]
  __int64 v97; // [rsp+50h] [rbp-B8h]
  __int64 *v98; // [rsp+58h] [rbp-B0h]
  __int64 v99; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 *v100; // [rsp+78h] [rbp-90h]
  __int64 v101[4]; // [rsp+80h] [rbp-88h] BYREF
  __m128 v102; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v103; // [rsp+B0h] [rbp-58h]
  __int64 v104; // [rsp+B8h] [rbp-50h]
  __int8 v105; // [rsp+C0h] [rbp-48h]

  v3 = (__int64)a1;
  v94 = a2;
  v4 = sub_186B270(0x38u);
  v5 = a1[289];
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  v7 = a1[3];
  v8 = (__int64)v94;
  *(_DWORD *)v4 = v6;
  v9 = a1[1];
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 24) = v7;
  *(_OWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFE00000000LL;
  *(_DWORD *)(v4 + 36) = sub_79C480(v9, v8);
  v10 = *(_QWORD *)(v3 + 16);
  v97 = *(_QWORD *)(v3 + 24);
  if ( v8 )
  {
    v11 = (__int64)v94;
    ++v94[2];
    v12 = sub_7D5350(v10, v11);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v14 = v94;
    LODWORD(v88) = v94[2];
    v15 = (_DWORD)v88 == 1;
    v94[2] = v88 - 1;
    if ( v15 )
    {
      sub_15D7BC0(v97, v14);
      if ( *(_WORD *)(v13 + 4) != 2 )
        goto LABEL_8;
      goto LABEL_63;
    }
  }
  else
  {
    v82 = sub_7D5350(v10, 0);
    v13 = v82;
    if ( !v82 )
      BUG();
    ++*(_DWORD *)(v82 + 8);
  }
  if ( *(_WORD *)(v13 + 4) != 2 )
  {
LABEL_8:
    v91 = (__m128i *)&v102;
    sub_7E9960(&v102, v3, v13);
    v16 = v102.m128_u64[1];
    v93 = v102.m128_u64[0];
    goto LABEL_9;
  }
LABEL_63:
  if ( *(_DWORD *)(v13 + 16) != 1 )
  {
    v91 = (__m128i *)&v102;
    sub_7E9960(&v102, v3, v13);
    v93 = v102.m128_u64[0];
LABEL_65:
    v16 = v102.m128_u64[1];
LABEL_9:
    v15 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v16, v13);
    goto LABEL_11;
  }
  *(_DWORD *)(v4 + 36) ^= 1u;
  v83 = *(_QWORD *)(v3 + 24);
  v84 = sub_15EC2C0(v83, *(_QWORD *)(v13 + 24));
  v85 = v84;
  if ( v84 )
    ++*(_DWORD *)(v84 + 8);
  v86 = sub_15DBC40(*(_QWORD *)(v3 + 24), v13, 0, v84);
  v87 = v86;
  if ( v86 )
    ++*(_DWORD *)(v86 + 8);
  v15 = (*(_DWORD *)(v13 + 8))-- == 1;
  if ( v15 )
    sub_15D7BC0(v97, v13);
  if ( v85 )
  {
    v15 = (*(_DWORD *)(v85 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v83, v85);
  }
  v91 = (__m128i *)&v102;
  sub_7E9960(&v102, v3, v87);
  v93 = v102.m128_u64[0];
  if ( v87 )
  {
    v13 = v87;
    goto LABEL_65;
  }
LABEL_11:
  v17 = *(_QWORD *)(v3 + 24);
  v100 = nullptr;
  v98 = &v99;
  v99 = v17;
  sub_15EE230(*(_QWORD *)(v93 + 24));
  if ( v100 )
  {
    v92 = &v100[*((unsigned int *)v100 - 1)];
    if ( v92 != v100 )
    {
      v20 = v100;
      do
      {
        sub_7EA210(v91, v3, *v20);
        v25 = *(__m128 **)(v4 + 8);
        v89 = v102;
        v90 = v103;
        v88 = v104;
        if ( v25 )
        {
          v26 = v25[-1].m128_u32[3];
          if ( v26 == v25[-1].m128_i32[2] )
          {
            v27 = (3 * v26 + 1) >> 1;
            v28 = v27;
            v29 = 40 * v27 + 8;
            if ( 40 * v26 + 8 >= (unsigned int)v29 || v26 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v101, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v101);
              sub_233E40((__int64)v101);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = sub_186B270(v29);
            v31 = *(_QWORD **)(v4 + 8);
            v19 = (_DWORD *)v30;
            v25 = (__m128 *)(v30 + 8);
            if ( v31 )
            {
              v32 = *((unsigned int *)v31 - 1);
              v33 = v30 + 8;
              *(_DWORD *)(v30 + 4) = v32;
              v34 = &v31[5 * v32];
              for ( i = v31; v34 != i; *(_BYTE *)(v33 - 8) = *((_BYTE *)i - 8) )
              {
                v36 = i[1];
                i += 5;
                v33 += 40;
                *(_QWORD *)(v33 - 32) = v36;
                v37 = *(i - 5);
                *(i - 5) = 0;
                *(_QWORD *)(v33 - 40) = v37;
                *(_QWORD *)(v33 - 16) = *(i - 2);
                v38 = *(i - 3);
                *(i - 3) = 0;
                *(_QWORD *)(v33 - 24) = v38;
              }
              if ( (_DWORD)v32 )
              {
                v95 = (_DWORD *)v4;
                v39 = v31;
                v40 = &v31[5 * v32];
                v96 = v3;
                v41 = v19;
                v42 = v40;
                do
                {
                  while ( 1 )
                  {
                    v45 = v39[2];
                    if ( v45 )
                    {
                      v46 = v39[3];
                      v15 = (*(_DWORD *)(v45 + 8))-- == 1;
                      if ( v15 )
                        sub_15D7BC0(v46, v45);
                    }
                    v43 = *v39;
                    if ( *v39 )
                    {
                      v44 = v39[1];
                      v15 = (*(_DWORD *)(v43 + 8))-- == 1;
                      if ( v15 )
                        break;
                    }
                    v39 += 5;
                    if ( v39 == v42 )
                      goto LABEL_32;
                  }
                  sub_15D7BC0(v44, v43);
                  v39 += 5;
                }
                while ( v39 != v42 );
LABEL_32:
                v4 = (__int64)v95;
                v19 = v41;
                v3 = v96;
                v31 = *((_QWORD **)v95 + 1);
              }
              v95 = v19;
              sub_186B220(v31 - 1);
              v19 = v95;
              v23 = (__m128 *)((char *)v25 + 40 * (unsigned int)v95[1]);
              v22 = v95[1] + 1;
            }
            else
            {
              *(_DWORD *)(v30 + 4) = 0;
              v23 = (__m128 *)(v30 + 8);
              v22 = 1;
            }
            *(_QWORD *)(v4 + 8) = v25;
            *v19 = v28;
          }
          else
          {
            v21 = v26;
            v22 = v26 + 1;
            v23 = (__m128 *)((char *)v25 + 40 * v21);
          }
        }
        else
        {
          v65 = (_QWORD *)sub_186B270(0x58u);
          v25 = (__m128 *)(v65 + 1);
          *v65 = 2;
          v22 = 1;
          *(_QWORD *)(v4 + 8) = v25;
          v23 = v25;
        }
        ++v20;
        v24 = _mm_loadh_ps((const double *)&v89.m128_u64[1]);
        v23[2].m128_i8[0] = v105;
        *v23 = v24;
        v23[1] = _mm_loadh_ps((const double *)&v88);
        v25[-1].m128_i32[3] = v22;
      }
      while ( v92 != v20 );
    }
  }
  v47 = v93;
  v48 = *(unsigned int *)(v93 + 72);
  if ( !(_DWORD)v48 )
  {
    v66 = *(_QWORD *)(v3 + 24);
    v88 = v3 + 1256;
    v67 = *(_QWORD *)(v3 + 1296);
    if ( v67 )
    {
      if ( !*(_DWORD *)(v67 - 4) && *(_QWORD *)(v3 + 1288) == **(_QWORD **)(v3 + 1280) )
        goto LABEL_90;
      *(_DWORD *)(v67 - 4) = 0;
    }
    else if ( **(_QWORD **)(v3 + 1280) == *(_QWORD *)(v3 + 1288) )
    {
      goto LABEL_90;
    }
    v68 = *(_QWORD **)(v3 + 1312);
    if ( v68 )
    {
      v69 = &v68[*((unsigned int *)v68 - 1)];
      if ( v68 >= v69 )
        goto LABEL_77;
      do
      {
        while ( 1 )
        {
          v70 = *v68;
          if ( *v68 )
          {
            v71 = *(_QWORD *)(v3 + 1304);
            v15 = (*(_DWORD *)(v70 + 8))-- == 1;
            if ( v15 )
              break;
          }
          if ( ++v68 >= v69 )
            goto LABEL_76;
        }
        sub_15D7BC0(v71, v70);
        ++v68;
      }
      while ( v68 < v69 );
LABEL_76:
      v68 = *(_QWORD **)(v3 + 1312);
      if ( v68 )
LABEL_77:
        *((_DWORD *)v68 - 1) = 0;
    }
    v72 = *(_QWORD **)(v3 + 1344);
    if ( v72 )
    {
      v73 = &v72[*((unsigned int *)v72 - 1)];
      if ( v72 >= v73 )
        goto LABEL_86;
      do
      {
        while ( 1 )
        {
          v74 = *v72;
          if ( *v72 )
          {
            v75 = *(_QWORD *)(v3 + 1336);
            v15 = (*(_DWORD *)(v74 + 8))-- == 1;
            if ( v15 )
              break;
          }
          if ( ++v72 >= v73 )
            goto LABEL_85;
        }
        sub_15D7BC0(v75, v74);
        ++v72;
      }
      while ( v72 < v73 );
LABEL_85:
      v72 = *(_QWORD **)(v3 + 1344);
      if ( v72 )
LABEL_86:
        *((_DWORD *)v72 - 1) = 0;
    }
    v76 = *(_QWORD *)(v3 + 1392);
    if ( v76 )
      *(_DWORD *)(v76 - 4) = 0;
    sub_15843E0(v88);
LABEL_90:
    v15 = *(_BYTE *)(v3 + 1272) == 0;
    v102.m128_u64[1] = v66;
    v77 = (__int64 *)(v3 + 1752);
    v102.m128_u64[0] = 0;
    v49 = v93;
    if ( v15 )
      sub_5F7D40(v88, v93, v91->m128i_i64, v77);
    else
      sub_7F0860(v88, v93, v91, v77);
    v78 = v102;
    if ( v102.m128_u64[0] )
    {
      v79 = v93;
      ++*(_DWORD *)(v102.m128_u64[0] + 8);
      LODWORD(v88) = *(_DWORD *)(v79 + 8);
      v15 = (_DWORD)v88 == 1;
      *(_DWORD *)(v79 + 8) = v88 - 1;
      if ( v15 )
      {
        v49 = v79;
        sub_15D7BC0(v97, v79);
      }
      v15 = (*(_DWORD *)(v78.m128_u64[0] + 8))-- == 1;
      if ( !v15 )
      {
        v80 = *(_QWORD *)(v4 + 16);
        v93 = v80;
        if ( v78.m128_u64[0] == v80 )
          goto LABEL_41;
        if ( v80 )
        {
          v49 = v80;
          v81 = *(_QWORD *)(v4 + 24);
          LODWORD(v88) = *(_DWORD *)(v80 + 8);
          v15 = (_DWORD)v88 == 1;
          *(_DWORD *)(v80 + 8) = v88 - 1;
          if ( v15 )
            sub_15D7BC0(v81, v80);
        }
        goto LABEL_100;
      }
      sub_15D7BC0(v78.m128_u64[1], v78.m128_u64[0]);
      v49 = *(_QWORD *)(v4 + 16);
      if ( v49 == v78.m128_u64[0] )
      {
        v93 = v78.m128_u64[0];
        goto LABEL_41;
      }
      if ( !v49 || (v50 = *(_QWORD *)(v4 + 24), v15 = *(_DWORD *)(v49 + 8) == 1, --*(_DWORD *)(v49 + 8), !v15) )
      {
LABEL_100:
        *(_QWORD *)(v4 + 16) = v78.m128_u64[0];
        v51 = v78.m128_u64[0];
        v93 = v78.m128_u64[0];
        goto LABEL_40;
      }
      v93 = v78.m128_u64[0];
    }
    else
    {
      LODWORD(v88) = *(_DWORD *)(v93 + 8);
      v15 = (_DWORD)v88 == 1;
      *(_DWORD *)(v93 + 8) = v88 - 1;
      if ( v15 )
        sub_15D7BC0(v97, v93);
      v49 = *(_QWORD *)(v4 + 16);
      if ( !v49 )
        goto LABEL_109;
      v50 = *(_QWORD *)(v4 + 24);
      v15 = (*(_DWORD *)(v49 + 8))-- == 1;
      if ( !v15 )
      {
        *(_QWORD *)(v4 + 16) = 0;
        goto LABEL_109;
      }
      v93 = 0;
    }
LABEL_108:
    sub_15D7BC0(v50, v49);
    v51 = v93;
    *(_QWORD *)(v4 + 16) = v93;
    if ( v51 )
      goto LABEL_40;
LABEL_109:
    v93 = 0;
    goto LABEL_41;
  }
  v49 = *(_QWORD *)(v4 + 16);
  if ( v93 != v49 )
  {
    if ( !v49 )
    {
      *(_QWORD *)(v4 + 16) = v93;
      v51 = v47;
      goto LABEL_40;
    }
    v50 = *(_QWORD *)(v4 + 24);
    v15 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( !v15 )
    {
      *(_QWORD *)(v4 + 16) = v47;
      v51 = v47;
LABEL_40:
      ++*(_DWORD *)(v51 + 8);
      goto LABEL_41;
    }
    goto LABEL_108;
  }
LABEL_41:
  v52 = *(_QWORD *)(v3 + 8);
  v53 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 440LL);
  if ( v53 == sub_79F010 )
    v54 = v52 + 1592;
  else
    v54 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64), __int64))v53)(
            v52,
            v49,
            sub_79F010,
            v48);
  v55 = *(_QWORD *)(v54 + 128);
  if ( v55 && (v56 = *v94, (unsigned int)v56 < *(_DWORD *)(v55 - 4)) && (v57 = *(_QWORD *)(v55 + 8 * v56)) != 0 )
    v58 = *(unsigned int *)(v57 + 40);
  else
    v58 = *(unsigned int *)(*(_QWORD *)(v3 + 8) + 2280LL);
  v59 = sub_15CDA70(v3 + 240, v94, v58, v48, v18, v19, v88, v89.m128_u64[0], v89.m128_u64[1], v90);
  v60 = v100;
  *(_QWORD *)(v4 + 40) = v59;
  if ( v60 )
  {
    v61 = &v60[*((unsigned int *)v60 - 1)];
    if ( v60 >= v61 )
      goto LABEL_55;
    do
    {
      while ( 1 )
      {
        v62 = *v60;
        if ( *v60 )
        {
          v15 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v60 >= v61 )
          goto LABEL_54;
      }
      sub_15D7BC0(v99, v62);
      ++v60;
    }
    while ( v60 < v61 );
LABEL_54:
    v60 = v100;
    if ( v100 )
LABEL_55:
      sub_186B220(v60 - 1);
  }
  v63 = v93;
  if ( v93 )
  {
    LODWORD(v88) = *(_DWORD *)(v93 + 8);
    v15 = (_DWORD)v88 == 1;
    *(_DWORD *)(v93 + 8) = v88 - 1;
    if ( v15 )
      sub_15D7BC0(v97, v63);
  }
  return v4;
}

