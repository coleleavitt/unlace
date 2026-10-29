__int64 __fastcall sub_5768C0(_QWORD *a1, const void *a2, const void *a3, const void *a4)
{
  void *v6; // rax
  __int64 v7; // r13
  void *v8; // r14
  void *v9; // rdx
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r14
  int v23; // r13d
  int v24; // eax
  _QWORD *v25; // rax
  const void *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r14
  int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // esi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r10
  __int64 v41; // r12
  __int64 v42; // r15
  int v43; // ebx
  __int64 v44; // r14
  int v45; // eax
  _QWORD *v46; // rax
  const void *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  unsigned int v51; // eax
  int v53; // eax
  __int64 v54; // r15
  int v55; // r13d
  __int64 v56; // r12
  int v57; // eax
  _QWORD *v58; // rax
  __int64 v59; // r12
  __int64 v60; // r13
  int v61; // ebx
  __int64 v62; // r14
  int v63; // eax
  _QWORD *v64; // rax
  int v65; // ecx
  __int64 v66; // r14
  __m128i *v67; // rax
  __m128i *v68; // r15
  __m128i *v69; // rdx
  __m128i *v70; // rax
  __int64 v71; // rdx
  const __m128i *v72; // rax
  __m128i *v73; // r14
  __m128i *v74; // r12
  __int64 v75; // rdx
  __m128i *v76; // rsi
  __m128i *v77; // rdx
  int v78; // ecx
  __int64 v79; // r15
  __m128i *v80; // rax
  __m128i *v81; // rcx
  __m128i *v82; // rdx
  __m128i *v83; // rax
  __int64 v84; // rdx
  __m128i *v85; // rdi
  const __m128i *v86; // r15
  __int64 v87; // r12
  __int64 v88; // rdx
  __m128i *v89; // rsi
  __m128i *v90; // rdx
  __int64 v91; // [rsp+0h] [rbp-88h]
  __int64 v92; // [rsp+8h] [rbp-80h]
  __int64 v93; // [rsp+8h] [rbp-80h]
  __int64 v94; // [rsp+8h] [rbp-80h]
  __int64 v95; // [rsp+8h] [rbp-80h]
  unsigned int v96; // [rsp+8h] [rbp-80h]
  unsigned int v97; // [rsp+8h] [rbp-80h]
  __m128i *v98; // [rsp+8h] [rbp-80h]
  __int64 v99; // [rsp+10h] [rbp-78h]
  __int64 v100; // [rsp+10h] [rbp-78h]
  __int64 v101; // [rsp+10h] [rbp-78h]
  __int64 v102; // [rsp+10h] [rbp-78h]
  __int64 v103; // [rsp+10h] [rbp-78h]
  const __m128i *v104; // [rsp+10h] [rbp-78h]
  __int64 v105; // [rsp+18h] [rbp-70h]
  __int64 v106; // [rsp+18h] [rbp-70h]
  __m128i *v107; // [rsp+18h] [rbp-70h]
  __int64 v108; // [rsp+30h] [rbp-58h] BYREF
  __int64 v109; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v110[72]; // [rsp+40h] [rbp-48h] BYREF

  sub_644D80(v110, "negated_join", 11);
  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  if ( !v6 )
    __cxa_bad_cast();
  v7 = (__int64)v6;
  v8 = __dynamic_cast(
         a4,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  if ( !v8 )
    __cxa_bad_cast();
  v9 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  if ( !v9 )
    __cxa_bad_cast();
  v108 = 0;
  sub_574140(a1, v7, (__int64)v9, (__int64)v8, &v108);
  v10 = 0;
  v91 = v108;
  if ( !v108 )
  {
    sub_5692F0(v7);
    return sub_644EE0(v110);
  }
  v11 = v108;
  if ( !*(_DWORD *)(v108 - 4) )
    goto LABEL_36;
  do
  {
    v12 = *(_QWORD *)(v11 + 8LL * v10);
    v13 = sub_17E8B20(v12 + **(_QWORD **)(v7 + 96), *(unsigned int *)(v7 + 104), 0);
    v14 = *(unsigned int *)(v7 + 136);
    v15 = *(_QWORD *)(v7 + 128);
    v16 = v14 - 1;
    v14 *= 16;
    v17 = v15 + v14;
    v18 = 16LL * (v13 & v16);
    v19 = v15 + v18;
    if ( v18 == v14 )
    {
LABEL_39:
      if ( v15 != v19 )
      {
        v101 = v17;
        v22 = v15;
        v54 = v7;
        v55 = v13;
        v94 = v15;
        v56 = v19;
        do
        {
          v57 = *(_DWORD *)(v22 + 4);
          if ( v57 == 2 )
          {
            if ( v55 == *(_DWORD *)v22 )
            {
              v58 = *(_QWORD **)(v54 + 112);
              v26 = (const void *)(*(_QWORD *)(v22 + 8) + *v58);
              if ( !memcmp(v26, (const void *)(*v58 + v12), *(unsigned int *)(v54 + 120)) )
              {
                v7 = v54;
                v27 = v94;
                v17 = v101;
                goto LABEL_14;
              }
            }
          }
          else if ( !v57 )
          {
            break;
          }
          v22 += 16;
        }
        while ( v56 != v22 );
        v7 = v54;
      }
      goto LABEL_18;
    }
    v20 = v13;
    v92 = *(_QWORD *)(v7 + 128);
    v21 = v7;
    v22 = v15 + v18;
    v99 = v15 + v18;
    v23 = v20;
    while ( 1 )
    {
      v24 = *(_DWORD *)(v22 + 4);
      if ( v24 == 2 )
        break;
      if ( !v24 )
      {
        v7 = v21;
        goto LABEL_18;
      }
LABEL_9:
      v22 += 16;
      if ( v17 == v22 )
      {
        v53 = v23;
        v15 = v92;
        v19 = v99;
        v7 = v21;
        v13 = v53;
        goto LABEL_39;
      }
    }
    if ( v23 != *(_DWORD *)v22 )
      goto LABEL_9;
    v25 = *(_QWORD **)(v21 + 112);
    v26 = (const void *)(*(_QWORD *)(v22 + 8) + *v25);
    if ( memcmp(v26, (const void *)(*v25 + v12), *(unsigned int *)(v21 + 120)) )
      goto LABEL_9;
    v27 = v92;
    v7 = v21;
LABEL_14:
    v28 = v22 + 16;
    if ( v17 == v22 + 16 )
      v28 = v27;
    v29 = *(_DWORD *)(v7 + 140) - 1;
    if ( !*(_DWORD *)(v28 + 4) )
    {
      *(_DWORD *)(v22 + 4) = 0;
      *(_DWORD *)(v7 + 140) = v29;
      goto LABEL_18;
    }
    v65 = *(_DWORD *)(v7 + 144);
    *(_DWORD *)(v22 + 4) = 1;
    *(_DWORD *)(v7 + 140) = v29;
    *(_DWORD *)(v7 + 144) = v65 + 1;
    if ( v29 < 0x40 )
      v29 = 64;
    if ( v29 < v65 + 1 && !(unsigned __int8)sub_186AF10(v26) )
    {
      v66 = *(unsigned int *)(v7 + 136);
      v67 = (__m128i *)sub_186B270(16 * v66);
      v68 = v67;
      if ( (_DWORD)v66 )
      {
        if ( (_DWORD)v66 == 1 )
          goto LABEL_72;
        v69 = v67;
        v70 = &v67[2 * ((unsigned int)v66 >> 1)];
        do
        {
          v69->m128i_i64[0] = 0;
          v69 += 2;
          v69[-1].m128i_i64[0] = 0;
        }
        while ( v69 != v70 );
        if ( (v66 & 1) != 0 )
        {
          v67 = &v68[(unsigned int)v66 & 0xFFFFFFFE];
LABEL_72:
          v67->m128i_i64[0] = 0;
        }
      }
      v71 = *(unsigned int *)(v7 + 136);
      v72 = *(const __m128i **)(v7 + 128);
      v96 = v71 - 1;
      v73 = (__m128i *)&v72[v71];
      v103 = 16 * v71;
      v74 = &v68[v71];
      if ( v72 != v73 )
      {
        do
        {
          if ( v72->m128i_i32[1] == 2 )
          {
            v75 = 16LL * (v72->m128i_i32[0] & v96);
            v76 = &v68[(unsigned __int64)v75 / 0x10];
            if ( v103 == v75 )
            {
LABEL_107:
              if ( v68 == v76 )
              {
LABEL_112:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v77 = v68;
              while ( v77->m128i_i32[1] )
              {
                if ( v76 == ++v77 )
                  goto LABEL_112;
              }
            }
            else
            {
              v77 = &v68[(unsigned __int64)v75 / 0x10];
              while ( v77->m128i_i32[1] )
              {
                if ( v74 == ++v77 )
                  goto LABEL_107;
              }
            }
            *v77 = _mm_loadu_si128(v72);
          }
          ++v72;
        }
        while ( v73 != v72 );
        v73 = *(__m128i **)(v7 + 128);
      }
      if ( v73 )
        sub_186B220(v73);
      *(_QWORD *)(v7 + 128) = v68;
      *(_DWORD *)(v7 + 144) = 0;
    }
LABEL_18:
    v30 = *(_QWORD *)(v7 + 152);
    v31 = *(unsigned int *)(v7 + 72);
    if ( v30 == 0xFFFFFFFFLL )
    {
      v32 = *(_QWORD *)(v7 + 80) - v31;
      if ( v12 == v32 )
        goto LABEL_35;
    }
    else
    {
      v32 = v30 - v31;
      if ( v12 == v32 )
        goto LABEL_34;
    }
    v33 = sub_17E8B20(v32 + **(_QWORD **)(v7 + 96), *(unsigned int *)(v7 + 104), 0);
    v34 = *(unsigned int *)(v7 + 136);
    v35 = *(_QWORD *)(v7 + 128);
    v36 = v34 - 1;
    v37 = 16 * v34;
    v38 = v35 + v37;
    v39 = 16LL * (v33 & v36);
    v40 = v35 + v39;
    if ( v39 == v37 )
    {
LABEL_52:
      if ( v35 != v40 )
      {
        v95 = v12;
        v59 = v7;
        v42 = v35;
        v60 = v32;
        v102 = v35;
        v61 = v33;
        v62 = v40;
        v106 = v38;
        do
        {
          v63 = *(_DWORD *)(v42 + 4);
          if ( v63 == 2 )
          {
            if ( v61 == *(_DWORD *)v42 )
            {
              v64 = *(_QWORD **)(v59 + 112);
              v47 = (const void *)(*(_QWORD *)(v42 + 8) + *v64);
              if ( !memcmp(v47, (const void *)(*v64 + v60), *(unsigned int *)(v59 + 120)) )
              {
                v32 = v60;
                v12 = v95;
                v48 = v102;
                v7 = v59;
                v49 = v106;
                goto LABEL_28;
              }
            }
          }
          else if ( !v63 )
          {
            break;
          }
          v42 += 16;
        }
        while ( v62 != v42 );
        v32 = v60;
        v12 = v95;
        v7 = v59;
      }
      goto LABEL_32;
    }
    v93 = v12;
    v41 = v32;
    v42 = v35 + v39;
    v43 = v33;
    v100 = *(_QWORD *)(v7 + 128);
    v44 = v35 + v37;
    v105 = v35 + v39;
    while ( 2 )
    {
      v45 = *(_DWORD *)(v42 + 4);
      if ( v45 != 2 )
      {
        if ( !v45 )
        {
          v12 = v93;
          v32 = v41;
          goto LABEL_32;
        }
LABEL_23:
        v42 += 16;
        if ( v44 == v42 )
        {
          v33 = v43;
          v35 = v100;
          v12 = v93;
          v38 = v44;
          v40 = v105;
          v32 = v41;
          goto LABEL_52;
        }
        continue;
      }
      break;
    }
    if ( v43 != *(_DWORD *)v42 )
      goto LABEL_23;
    v46 = *(_QWORD **)(v7 + 112);
    v47 = (const void *)(*(_QWORD *)(v42 + 8) + *v46);
    if ( memcmp(v47, (const void *)(*v46 + v41), *(unsigned int *)(v7 + 120)) )
      goto LABEL_23;
    v12 = v93;
    v48 = v100;
    v49 = v44;
    v32 = v41;
LABEL_28:
    v50 = v42 + 16;
    if ( v49 == v42 + 16 )
      v50 = v48;
    v51 = *(_DWORD *)(v7 + 140) - 1;
    if ( !*(_DWORD *)(v50 + 4) )
    {
      *(_DWORD *)(v42 + 4) = 0;
      *(_DWORD *)(v7 + 140) = v51;
      goto LABEL_32;
    }
    v78 = *(_DWORD *)(v7 + 144);
    *(_DWORD *)(v42 + 4) = 1;
    *(_DWORD *)(v7 + 140) = v51;
    *(_DWORD *)(v7 + 144) = v78 + 1;
    if ( v51 < 0x40 )
      v51 = 64;
    if ( v51 < v78 + 1 && !(unsigned __int8)sub_186AF10(v47) )
    {
      v79 = *(unsigned int *)(v7 + 136);
      v80 = (__m128i *)sub_186B270(16 * v79);
      v81 = v80;
      if ( (_DWORD)v79 )
      {
        if ( (_DWORD)v79 == 1 )
          goto LABEL_93;
        v82 = v80;
        v83 = &v80[2 * ((unsigned int)v79 >> 1)];
        do
        {
          v82->m128i_i64[0] = 0;
          v82 += 2;
          v82[-1].m128i_i64[0] = 0;
        }
        while ( v83 != v82 );
        if ( (v79 & 1) != 0 )
        {
          v80 = &v81[(unsigned int)v79 & 0xFFFFFFFE];
LABEL_93:
          v80->m128i_i64[0] = 0;
        }
      }
      v84 = *(unsigned int *)(v7 + 136);
      v85 = *(__m128i **)(v7 + 128);
      v86 = v85;
      v97 = v84 - 1;
      v87 = 16 * v84;
      v104 = &v85[v84];
      v107 = &v81[v84];
      if ( v85 != v104 )
      {
        do
        {
          if ( v86->m128i_i32[1] == 2 )
          {
            v88 = 16LL * (v86->m128i_i32[0] & v97);
            v89 = &v81[(unsigned __int64)v88 / 0x10];
            if ( v87 == v88 )
            {
LABEL_113:
              if ( v81 == v89 )
              {
LABEL_122:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v90 = v81;
              while ( v90->m128i_i32[1] )
              {
                if ( v89 == ++v90 )
                  goto LABEL_122;
              }
            }
            else
            {
              v90 = &v81[(unsigned __int64)v88 / 0x10];
              while ( v90->m128i_i32[1] )
              {
                if ( v107 == ++v90 )
                  goto LABEL_113;
              }
            }
            *v90 = _mm_loadu_si128(v86);
          }
          ++v86;
        }
        while ( v104 != v86 );
        v85 = *(__m128i **)(v7 + 128);
      }
      if ( v85 )
      {
        v98 = v81;
        sub_186B220(v85);
        v81 = v98;
      }
      *(_QWORD *)(v7 + 128) = v81;
      *(_DWORD *)(v7 + 144) = 0;
    }
LABEL_32:
    memcpy((void *)(*(_QWORD *)(v7 + 88) + v12), (const void *)(v32 + *(_QWORD *)(v7 + 88)), *(unsigned int *)(v7 + 72));
    v109 = v12;
    sub_576060(v7 + 96, &v109);
    if ( *(_QWORD *)(v7 + 152) != 0xFFFFFFFFLL )
    {
      v31 = *(unsigned int *)(v7 + 72);
LABEL_34:
      sub_5716E0(v7 + 72, *(_QWORD *)(v7 + 80) - v31);
    }
LABEL_35:
    v11 = v91;
    *(_QWORD *)(v7 + 152) = v32;
    ++v10;
  }
  while ( v10 < *(_DWORD *)(v91 - 4) );
LABEL_36:
  sub_5692F0(v7);
  sub_186B220((void *)(v91 - 8));
  return sub_644EE0(v110);
}

