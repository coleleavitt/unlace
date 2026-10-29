__int64 __fastcall sub_1289DC0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v7; // r12
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int32 v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rbp
  _QWORD *v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rbp
  _QWORD *v24; // r15
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rbp
  _QWORD *v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rbp
  _QWORD *v32; // r15
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rbp
  _QWORD *v36; // r13
  int v37; // eax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 result; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  const char *v44; // rbp
  size_t v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // al
  const char *v49; // rdi
  size_t v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  char v53; // al
  const char *v54; // rdi
  size_t v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  char v58; // al
  const char *v59; // rbp
  size_t v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  char v63; // al
  const char *v64; // rbp
  size_t v65; // rax
  size_t v66; // rax
  size_t v67; // rax
  size_t v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  unsigned __int64 v76; // rbp
  __int64 v77; // [rsp+8h] [rbp-90h]
  __int64 v78; // [rsp+8h] [rbp-90h]
  __int64 v79; // [rsp+8h] [rbp-90h]
  __int64 v80; // [rsp+8h] [rbp-90h]
  int v81; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v82[2]; // [rsp+20h] [rbp-78h]
  char v83[16]; // [rsp+30h] [rbp-68h]
  __int64 v84[2]; // [rsp+40h] [rbp-58h]
  char v85[72]; // [rsp+50h] [rbp-48h]

  v7 = a1 + 2456;
  sub_1134980(a1, a2, (__int64)a3, a4);
  *(_BYTE *)(a1 + 2400) = 0;
  *(_QWORD *)a1 = off_2C3E170;
  *(_QWORD *)(a1 + 2456) = a1 + 2472;
  *(_QWORD *)(a1 + 2504) = a1 + 2520;
  *(_BYTE *)(a1 + 2424) = 0;
  *(_BYTE *)(a1 + 2448) = 0;
  *(_QWORD *)(a1 + 2464) = 0;
  *(_BYTE *)(a1 + 2472) = 0;
  *(_DWORD *)(a1 + 2488) = 0;
  *(_QWORD *)(a1 + 2496) = a2;
  sub_1286F90((_QWORD *)(a1 + 2504), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 2536) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 2552) = a3[3].m128i_i32[0];
  v8 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 2560) = a4;
  *(_DWORD *)(a1 + 2556) = v8;
  *(_QWORD *)(a1 + 2768) = a1 + 2784;
  *(_BYTE *)(a1 + 2752) = 0;
  *(_QWORD *)(a1 + 2760) = a2;
  sub_1286F90((_QWORD *)(a1 + 2768), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 2800) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 2816) = a3[3].m128i_i32[0];
  v9 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 2824) = a4;
  *(_DWORD *)(a1 + 2820) = v9;
  *(_QWORD *)(a1 + 3920) = a1 + 3936;
  *(_BYTE *)(a1 + 3904) = 0;
  *(_QWORD *)(a1 + 3912) = a2;
  sub_1286F90((_QWORD *)(a1 + 3920), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  v10 = *(unsigned int *)(a1 + 1160);
  *(__m128i *)(a1 + 3952) = _mm_loadu_si128(a3 + 2);
  v11 = v10 + 1;
  *(_DWORD *)(a1 + 3968) = a3[3].m128i_i32[0];
  v12 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 3976) = a4;
  *(_DWORD *)(a1 + 3972) = v12;
  v13 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 3985) = 0;
  v14 = v13 + 104;
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v74 = *(_QWORD *)(a1 + 1152);
    v75 = a1 + 1152;
    if ( v74 > v14 || v14 >= v74 + 32 * v10 )
    {
      sub_A8C1F0(v75, v11);
      v15 = *(_QWORD *)(a1 + 1152);
      v10 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v76 = v14 - v74;
      sub_A8C1F0(v75, v11);
      v15 = *(_QWORD *)(a1 + 1152);
      v10 = *(unsigned int *)(a1 + 1160);
      v14 = v15 + v76;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 1152);
  }
  v16 = (_QWORD *)(v15 + 32 * v10);
  *v16 = v16 + 2;
  sub_1286F90(v16, *(_BYTE **)v14, *(_QWORD *)v14 + *(_QWORD *)(v14 + 8));
  ++*(_DWORD *)(a1 + 1160);
  *(_OWORD *)v82 = 0;
  *(_QWORD *)v83 = 0;
  *(_OWORD *)v84 = 0;
  *(_QWORD *)v85 = 0;
  v81 = 3370;
  v17 = sub_21B6DA0(a4, &v81, 1);
  v18 = *(_QWORD *)(a4 + 8);
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  if ( v19 != v20 )
  {
    while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3370) )
    {
      if ( v20 == ++v19 )
        goto LABEL_7;
    }
    if ( v20 != v19 )
    {
      do
      {
        v46 = *v19;
        v47 = *(_QWORD *)(*v19 + 16LL);
        if ( !v47 )
          v47 = *v19;
        ++v19;
        *(_BYTE *)(v47 + 44) |= 1u;
        if ( v19 == v20 )
          break;
        while ( 1 )
        {
          if ( *v19 )
          {
            v77 = v46;
            v48 = sub_21B9810(*v19, 3370);
            v46 = v77;
            if ( v48 )
              break;
          }
          if ( v20 == ++v19 )
            goto LABEL_45;
        }
      }
      while ( v20 != v19 );
LABEL_45:
      v49 = **(const char ***)(v46 + 48);
      v50 = 0;
      v82[0] = (__int64)v49;
      if ( v49 )
        v50 = strlen(v49);
      v82[1] = v50;
      v83[0] = 1;
    }
  }
LABEL_7:
  v81 = 3371;
  v21 = sub_21B6DA0(a4, &v81, 1);
  v22 = *(_QWORD *)(a4 + 8);
  v23 = (_QWORD *)(v22 + 8LL * (unsigned int)v21);
  v24 = (_QWORD *)(v22 + 8 * HIDWORD(v21));
  if ( v23 != v24 )
  {
    while ( !*v23 || !(unsigned __int8)sub_21B9810(*v23, 3371) )
    {
      if ( v24 == ++v23 )
        goto LABEL_11;
    }
    if ( v23 != v24 )
    {
      do
      {
        v51 = *v23;
        v52 = *(_QWORD *)(*v23 + 16LL);
        if ( !v52 )
          v52 = *v23;
        ++v23;
        *(_BYTE *)(v52 + 44) |= 1u;
        if ( v23 == v24 )
          break;
        while ( 1 )
        {
          if ( *v23 )
          {
            v78 = v51;
            v53 = sub_21B9810(*v23, 3371);
            v51 = v78;
            if ( v53 )
              break;
          }
          if ( v24 == ++v23 )
            goto LABEL_57;
        }
      }
      while ( v24 != v23 );
LABEL_57:
      v54 = **(const char ***)(v51 + 48);
      v55 = 0;
      v84[0] = (__int64)v54;
      if ( v54 )
        v55 = strlen(v54);
      v84[1] = v55;
      v85[0] = 1;
    }
  }
LABEL_11:
  v81 = 3434;
  v25 = sub_21B6DA0(a4, &v81, 1);
  v26 = *(_QWORD *)(a4 + 8);
  v27 = (_QWORD *)(v26 + 8LL * (unsigned int)v25);
  v28 = (_QWORD *)(v26 + 8 * HIDWORD(v25));
  if ( v27 != v28 )
  {
    while ( !*v27 || !(unsigned __int8)sub_21B9810(*v27, 3434) )
    {
      if ( v28 == ++v27 )
        goto LABEL_15;
    }
    if ( v28 != v27 )
    {
      do
      {
        v56 = *v27;
        v57 = *(_QWORD *)(*v27 + 16LL);
        if ( !v57 )
          v57 = *v27;
        ++v27;
        *(_BYTE *)(v57 + 44) |= 1u;
        if ( v27 == v28 )
          break;
        while ( 1 )
        {
          if ( *v27 )
          {
            v79 = v56;
            v58 = sub_21B9810(*v27, 3434);
            v56 = v79;
            if ( v58 )
              break;
          }
          if ( v28 == ++v27 )
            goto LABEL_69;
        }
      }
      while ( v28 != v27 );
LABEL_69:
      v59 = **(const char ***)(v56 + 48);
      if ( *(_BYTE *)(a1 + 2400) )
      {
        v60 = 0;
        if ( v59 )
          v60 = strlen(v59);
        *(_QWORD *)(a1 + 2384) = v59;
        *(_QWORD *)(a1 + 2392) = v60;
      }
      else
      {
        *(_QWORD *)(a1 + 2384) = v59;
        v68 = 0;
        if ( v59 )
          v68 = strlen(v59);
        *(_QWORD *)(a1 + 2392) = v68;
        *(_BYTE *)(a1 + 2400) = 1;
      }
    }
  }
LABEL_15:
  v81 = 3435;
  v29 = sub_21B6DA0(a4, &v81, 1);
  v30 = *(_QWORD *)(a4 + 8);
  v31 = (_QWORD *)(v30 + 8LL * (unsigned int)v29);
  v32 = (_QWORD *)(v30 + 8 * HIDWORD(v29));
  if ( v31 != v32 )
  {
    while ( !*v31 || !(unsigned __int8)sub_21B9810(*v31, 3435) )
    {
      if ( v32 == ++v31 )
        goto LABEL_19;
    }
    if ( v31 != v32 )
    {
      do
      {
        v61 = *v31;
        v62 = *(_QWORD *)(*v31 + 16LL);
        if ( !v62 )
          v62 = *v31;
        ++v31;
        *(_BYTE *)(v62 + 44) |= 1u;
        if ( v31 == v32 )
          break;
        while ( 1 )
        {
          if ( *v31 )
          {
            v80 = v61;
            v63 = sub_21B9810(*v31, 3435);
            v61 = v80;
            if ( v63 )
              break;
          }
          if ( v32 == ++v31 )
            goto LABEL_82;
        }
      }
      while ( v32 != v31 );
LABEL_82:
      v64 = **(const char ***)(v61 + 48);
      if ( *(_BYTE *)(a1 + 2424) )
      {
        v65 = 0;
        if ( v64 )
          v65 = strlen(v64);
        *(_QWORD *)(a1 + 2408) = v64;
        *(_QWORD *)(a1 + 2416) = v65;
      }
      else
      {
        *(_QWORD *)(a1 + 2408) = v64;
        v67 = 0;
        if ( v64 )
          v67 = strlen(v64);
        *(_QWORD *)(a1 + 2416) = v67;
        *(_BYTE *)(a1 + 2424) = 1;
      }
    }
  }
LABEL_19:
  v81 = 3436;
  v33 = sub_21B6DA0(a4, &v81, 1);
  v34 = *(_QWORD *)(a4 + 8);
  v35 = (_QWORD *)(v34 + 8LL * (unsigned int)v33);
  v36 = (_QWORD *)(v34 + 8 * HIDWORD(v33));
  if ( v35 != v36 )
  {
    while ( !*v35 || !(unsigned __int8)sub_21B9810(*v35, 3436) )
    {
      if ( v36 == ++v35 )
        goto LABEL_23;
    }
    if ( v35 != v36 )
    {
      do
      {
        v42 = *v35;
        v43 = *(_QWORD *)(*v35 + 16LL);
        if ( !v43 )
          v43 = *v35;
        ++v35;
        *(_BYTE *)(v43 + 44) |= 1u;
        if ( v35 == v36 )
          break;
        while ( !*v35 || !(unsigned __int8)sub_21B9810(*v35, 3436) )
        {
          if ( v36 == ++v35 )
            goto LABEL_32;
        }
      }
      while ( v36 != v35 );
LABEL_32:
      v44 = **(const char ***)(v42 + 48);
      if ( *(_BYTE *)(a1 + 2448) )
      {
        v45 = 0;
        if ( v44 )
          v45 = strlen(v44);
        *(_QWORD *)(a1 + 2432) = v44;
        *(_QWORD *)(a1 + 2440) = v45;
      }
      else
      {
        *(_QWORD *)(a1 + 2432) = v44;
        v66 = 0;
        if ( v44 )
          v66 = strlen(v44);
        *(_QWORD *)(a1 + 2440) = v66;
        *(_BYTE *)(a1 + 2448) = 1;
      }
    }
  }
LABEL_23:
  v37 = sub_112C5D0(a1);
  result = sub_22CAE30(
             v37,
             v7,
             (int)a1 + 2488,
             v38,
             v39,
             v40,
             v82[0],
             v82[1],
             v83[0],
             v84[0],
             v84[1],
             v85[0],
             *(void **)(a1 + 2432),
             *(_QWORD *)(a1 + 2440),
             *(_QWORD *)(a1 + 2448));
  if ( !(_BYTE)result )
  {
    v69 = sub_112C5D0(a1);
    result = sub_22CB4C0(v69, v7, a1 + 2488);
    if ( !(_BYTE)result )
    {
      v70 = sub_112C5D0(a1);
      result = sub_22CC380(v70, v7, a1 + 2488, v71, v72, v73, v84[0], v84[1], *(_QWORD *)v85);
      if ( !(_BYTE)result )
        return sub_22CC390(v7, a1 + 2488);
    }
  }
  return result;
}
