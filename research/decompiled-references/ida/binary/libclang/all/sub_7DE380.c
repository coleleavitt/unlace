void __fastcall sub_7DE380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int64 a9)
{
  unsigned int v10; // r13d
  int v11; // r14d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // r10d
  int v15; // r13d
  __m128i *v16; // r8
  __int64 v17; // rdx
  __m128i *v18; // r15
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 *v23; // rbp
  __m128i v24; // xmm0
  __int64 v25; // r12
  int v26; // esi
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r15
  const __m128i *v40; // r14
  unsigned __int64 v41; // r13
  int v42; // ebp
  bool v43; // al
  int v44; // ecx
  int v45; // eax
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rdx
  unsigned int i; // edx
  __int64 v49; // r10
  int v50; // eax
  int v51; // edx
  __m128i *v52; // rdx
  int v53; // eax
  unsigned int v54; // esi
  unsigned int v55; // edi
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  __m128i *v59; // rax
  __int64 v60; // r12
  int v61; // esi
  __int64 v62; // rax
  __int64 v63; // rbp
  int v64; // r13d
  int v65; // eax
  bool v66; // al
  int v67; // ecx
  int v68; // r10d
  int v69; // r10d
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  void *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  bool v77; // al
  int v78; // ecx
  int v79; // r10d
  int v80; // r11d
  bool v81; // al
  int v82; // ecx
  int v83; // r10d
  int v84; // r10d
  __int8 *v85; // r14
  bool v86; // al
  int v87; // esi
  __int64 v88; // rcx
  __int64 v89; // rax
  bool v90; // al
  __int64 v91; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v92; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+8h] [rbp-98h]
  int v94; // [rsp+8h] [rbp-98h]
  int v95; // [rsp+8h] [rbp-98h]
  __int64 v96; // [rsp+10h] [rbp-90h]
  __int64 v97; // [rsp+10h] [rbp-90h]
  __m128i *v98; // [rsp+20h] [rbp-80h]
  __int64 v99; // [rsp+28h] [rbp-78h] BYREF
  __int64 v100; // [rsp+30h] [rbp-70h] BYREF
  __m128i v101[6]; // [rsp+38h] [rbp-68h] BYREF

  if ( !*(_DWORD *)(a1 + 16) )
    return;
  v10 = *(_DWORD *)(a2 + 16);
  v11 = a7;
  if ( !v10 )
  {
    v101[0].m128i_i64[0] = 0;
    goto LABEL_23;
  }
  v101[0].m128i_i32[0] = 1045;
  LODWORD(v100) = 73;
  v93 = *((_QWORD *)&a7 + 1);
  v96 = a8;
  v91 = *(_QWORD *)a2;
  if ( sub_7204C0((int *)&v100, a7) )
  {
    v100 = v96;
    v99 = v93;
    v28 = sub_7DB4D0(&v99, &v100);
    v29 = v10 - 1;
    v14 = (v10 - 1) & v28;
    if ( v11 )
    {
      if ( v11 == 1045 )
      {
LABEL_7:
        v15 = 1;
        v16 = nullptr;
        while ( 1 )
        {
          v17 = 48LL * v14;
          v18 = (__m128i *)(v91 + v17);
          v19 = *(_DWORD *)(v91 + v17);
          if ( v19 == 1045 )
            goto LABEL_28;
          if ( !v19 )
            goto LABEL_10;
          v81 = sub_7DAFA0((_DWORD *)(v91 + v17));
          if ( !v16 && v81 )
            v16 = v18;
          v84 = v15 + v83;
          ++v15;
          v14 = v82 & v84;
        }
      }
      goto LABEL_86;
    }
  }
  else
  {
    if ( v11 == 5 )
    {
      v99 = v96;
      v100 = v93;
      v14 = (v10 - 1) & sub_7DB530(&v100, &v99);
LABEL_69:
      v64 = 1;
      v16 = nullptr;
      while ( 1 )
      {
        v18 = (__m128i *)(v91 + 48LL * v14);
        v65 = v18->m128i_i32[0];
        if ( v11 != v18->m128i_i32[0] )
          goto LABEL_71;
        v98 = v16;
        LODWORD(v100) = 73;
        LODWORD(a7) = v11;
        v90 = sub_7204C0((int *)&v100, v11);
        v16 = v98;
        if ( v90 )
          break;
        if ( v11 == 5 )
        {
          if ( v18->m128i_i64[1] == v93 && v18[1].m128i_i64[0] == v96 )
            goto LABEL_28;
LABEL_134:
          v65 = v18->m128i_i32[0];
LABEL_71:
          if ( !v65 )
            goto LABEL_10;
          goto LABEL_72;
        }
        v65 = v18->m128i_i32[0];
        if ( v11 <= 73 )
        {
          if ( v65 <= 73 || !v18->m128i_i64[1] )
            goto LABEL_28;
        }
        else
        {
          if ( v65 <= 73 )
          {
            if ( !v93 )
              goto LABEL_28;
            goto LABEL_71;
          }
          if ( v18->m128i_i64[1] == v93 )
            goto LABEL_28;
        }
LABEL_72:
        v66 = sub_7DAFA0(v18);
        if ( !v16 && v66 )
          v16 = v18;
        v69 = v64 + v68;
        ++v64;
        v14 = v67 & v69;
      }
      if ( v18->m128i_i64[1] == v93 && v96 == v18[1].m128i_i64[0] )
        goto LABEL_28;
      goto LABEL_134;
    }
    if ( v11 > 73 )
    {
      v12 = 0x9DDFEA08EB382D69LL * (HIDWORD(v93) ^ (8LL * (unsigned int)v93 - 0xAE502812AA7333LL));
      v13 = 0x9DDFEA08EB382D69LL * (v12 ^ HIDWORD(v93) ^ (v12 >> 47));
      v14 = (v10 - 1) & (-348639895 * (v13 ^ (HIDWORD(v13) >> 15)));
      if ( v11 == 1045 )
        goto LABEL_7;
      goto LABEL_69;
    }
    v29 = v10 - 1;
    v14 = (v10 - 1) & 0x8DC4164D;
    if ( v11 )
    {
LABEL_86:
      if ( v11 == 6 )
      {
        v16 = nullptr;
        while ( 1 )
        {
          v75 = 48LL * v14;
          v18 = (__m128i *)(v91 + v75);
          v76 = *(_DWORD *)(v91 + v75);
          if ( v76 == 6 )
          {
            if ( v93 == v18->m128i_i64[1] )
              goto LABEL_28;
          }
          else if ( !v76 )
          {
LABEL_10:
            v10 = *(_DWORD *)(a2 + 16);
            if ( !v16 )
              v16 = v18;
            v20 = *(_DWORD *)(a2 + 8);
            v101[0].m128i_i64[0] = (__int64)v16;
            v21 = v20 + 1;
            if ( 4 * v21 < 3 * v10 )
            {
              if ( v10 >> 3 >= v10 - (v21 + *(_DWORD *)(a2 + 12)) )
              {
                sub_7DDEA0(a2, v10);
                LODWORD(a7) = v11;
                goto LABEL_15;
              }
              goto LABEL_16;
            }
LABEL_23:
            sub_7DDEA0(a2, 2 * v10);
            LODWORD(a7) = v11;
LABEL_15:
            sub_7DCEC0((__int64 *)a2, (__int64)&a7, v101);
            v16 = (__m128i *)v101[0].m128i_i64[0];
            v21 = *(_DWORD *)(a2 + 8) + 1;
LABEL_16:
            *(_DWORD *)(a2 + 8) = v21;
            if ( v16->m128i_i32[0] )
              --*(_DWORD *)(a2 + 12);
            LODWORD(a7) = v11;
            v22 = a9;
            v23 = &v16[2].m128i_u64[1];
            v24 = _mm_loadu_si128((const __m128i *)&a7);
            v16[2].m128i_i64[1] = 0;
            v16[2].m128i_i64[0] = v22;
            *v16 = v24;
            v16[1] = _mm_loadu_si128((const __m128i *)&a8);
LABEL_19:
            v25 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40;
            v26 = *(_DWORD *)v25;
            v101[0].m128i_i32[0] = 77;
            if ( sub_7204C0(v101[0].m128i_i32, v26) && (v27 = *(_QWORD *)(v25 + 8)) != 0 )
            {
              *v23 = v27 & 0xFFFFFFFFFFFFFFF9LL;
            }
            else
            {
              v60 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16) - 40;
              v61 = *(_DWORD *)v60;
              v101[0].m128i_i32[0] = 176;
              if ( sub_7204C0(v101[0].m128i_i32, v61) && (v62 = *(_QWORD *)(v60 + 8)) != 0 )
              {
                *v23 = v62 & 0xFFFFFFFFFFFFFFF9LL | 2;
              }
              else
              {
                v71 = operator new(0x28u);
                v72 = *(_QWORD *)(a1 + 8) + 40LL * *(unsigned int *)(a1 + 16);
                *(__m128i *)v71 = _mm_loadu_si128((const __m128i *)(v72 - 40));
                *(__m128i *)(v71 + 16) = _mm_loadu_si128((const __m128i *)(v72 - 24));
                *(_QWORD *)(v71 + 32) = *(_QWORD *)(v72 - 8);
                *v23 = v71 & 0xFFFFFFFFFFFFFFF9LL | 4;
              }
            }
            return;
          }
          v77 = sub_7DAFA0((_DWORD *)(v91 + v75));
          if ( !v16 && v77 )
            v16 = v18;
          v14 = v78 & (v80 + v79);
        }
      }
      goto LABEL_69;
    }
  }
  v18 = (__m128i *)(v91 + 48LL * v14);
  if ( v18->m128i_i32[0] )
  {
    v30 = 1;
    do
    {
      v31 = v30++;
      v32 = v29 & (v14 + v31);
      v14 = v32;
      v18 = (__m128i *)(v91 + 48 * v32);
    }
    while ( v18->m128i_i32[0] );
  }
LABEL_28:
  v33 = v18[2].m128i_u64[1];
  v23 = &v18[2].m128i_u64[1];
  if ( v33 <= 7 )
    goto LABEL_19;
  if ( (~(_BYTE)v33 & 6) != 0 )
  {
    v34 = operator new(0xB8u);
    sub_7DB1A0(v101, v18[2].m128i_i64[1]);
    sub_7DD830(v34, v101);
    v35 = v18[2].m128i_i64[1];
    if ( v35 )
    {
      if ( (v18[2].m128i_i64[1] & 6) == 4 )
      {
        v73 = (void *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v73 )
          operator delete(v73, 0x28u);
      }
    }
    v33 = v34 | 6;
    v18[2].m128i_i64[1] = v34 | 6;
  }
  v36 = *(unsigned int *)(a1 + 16);
  v37 = *(_QWORD *)(a1 + 8);
  v38 = v33 & 0xFFFFFFFFFFFFFFF8LL;
  v39 = v38;
  v40 = (const __m128i *)(v37 + 40 * v36 - 40);
  if ( v40->m128i_i32[0] <= 73 || !v40->m128i_i64[1] )
    goto LABEL_60;
  if ( (*(_BYTE *)(v38 + 96) & 1) != 0 )
  {
    v41 = v38 + 104;
    v42 = 1;
    v92 = v38 + 184;
  }
  else
  {
    v41 = *(_QWORD *)(v38 + 104);
    v63 = *(unsigned int *)(v38 + 112);
    v92 = v41 + 40 * v63;
    if ( !(_DWORD)v63 )
      goto LABEL_50;
    v42 = v63 - 1;
  }
  v101[0].m128i_i32[0] = 0;
  LODWORD(v100) = 73;
  v43 = sub_7204C0((int *)&v100, v40->m128i_i32[0]);
  v44 = v40->m128i_i32[0];
  if ( v43 )
  {
    v74 = v40->m128i_i64[1];
    v95 = v40->m128i_i32[0];
    v100 = v40[1].m128i_i64[0];
    v99 = v74;
    v45 = sub_7DB4D0(&v99, &v100);
    v44 = v95;
  }
  else if ( v44 == 5 )
  {
    v70 = v40->m128i_i64[1];
    v99 = v40[1].m128i_i64[0];
    v100 = v70;
    v45 = sub_7DB530(&v100, &v99);
    v44 = 5;
  }
  else
  {
    v45 = -1916529075;
    if ( v44 > 73 )
    {
      v46 = v40->m128i_u64[1];
      v47 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (HIDWORD(v46) ^ (8LL * (unsigned int)v46 - 0xAE502812AA7333LL)))
           ^ HIDWORD(v46)
           ^ ((0x9DDFEA08EB382D69LL * (HIDWORD(v46) ^ (8LL * (unsigned int)v46 - 0xAE502812AA7333LL))) >> 47));
      v45 = -348639895 * (v47 ^ (v47 >> 47));
    }
  }
  v94 = 1;
  for ( i = v42 & v45; ; i = v42 & (v51 + v94++) )
  {
    v49 = v41 + 40LL * i;
    v50 = *(_DWORD *)v49;
    if ( !v44 )
    {
      if ( !v50 )
        goto LABEL_48;
      goto LABEL_45;
    }
    if ( v44 == 1045 )
    {
      if ( v50 == 1045 )
        goto LABEL_48;
      goto LABEL_45;
    }
    if ( v44 != v50 )
      goto LABEL_45;
    if ( v44 == 6 )
    {
      if ( v40->m128i_i64[1] == *(_QWORD *)(v49 + 8) )
        goto LABEL_48;
      goto LABEL_45;
    }
    LODWORD(v100) = 73;
    v97 = v41 + 40LL * i;
    v86 = sub_7204C0((int *)&v100, v40->m128i_i32[0]);
    v49 = v97;
    if ( !v86 && v40->m128i_i32[0] != 5 )
    {
      v87 = *(_DWORD *)v97;
      if ( v40->m128i_i32[0] <= 73 )
      {
        if ( v87 <= 73 )
          goto LABEL_48;
        v88 = 0;
      }
      else
      {
        v88 = v40->m128i_i64[1];
        v89 = 0;
        if ( v87 <= 73 )
          goto LABEL_113;
      }
      v89 = *(_QWORD *)(v97 + 8);
LABEL_113:
      if ( v88 == v89 )
        goto LABEL_48;
      goto LABEL_45;
    }
    if ( v40->m128i_i64[1] == *(_QWORD *)(v97 + 8) && v40[1].m128i_i64[0] == *(_QWORD *)(v97 + 16) )
      goto LABEL_48;
LABEL_45:
    if ( sub_7DAF90((_DWORD *)v49) )
      break;
    v44 = v40->m128i_i32[0];
  }
  v49 = v39 + 184;
  if ( (*(_BYTE *)(v39 + 96) & 1) == 0 )
    v49 = *(_QWORD *)(v39 + 104) + 40LL * *(unsigned int *)(v39 + 112);
LABEL_48:
  if ( v49 == v92 )
  {
    v36 = *(unsigned int *)(a1 + 16);
    v37 = *(_QWORD *)(a1 + 8);
LABEL_50:
    v40 = (const __m128i *)(v37 + 40 * v36 - 40);
    if ( v40->m128i_i32[0] <= 73 || !v40->m128i_i64[1] )
      goto LABEL_60;
    if ( !(unsigned __int8)sub_7DB920(v39 + 96, (__int64)v40, &v100) )
    {
      v52 = (__m128i *)v100;
      v101[0].m128i_i64[0] = v100;
      v53 = (*(_DWORD *)(v39 + 96) >> 1) + 1;
      if ( (*(_BYTE *)(v39 + 96) & 1) != 0 )
      {
        v55 = 6;
        v54 = 2;
      }
      else
      {
        v54 = *(_DWORD *)(v39 + 112);
        v55 = 3 * v54;
      }
      if ( 4 * v53 >= v55 )
      {
        v54 *= 2;
      }
      else if ( v54 >> 3 < v54 - (v53 + *(_DWORD *)(v39 + 100)) )
      {
        goto LABEL_57;
      }
      sub_7DD180(v39 + 96, v54);
      sub_7DB920(v39 + 96, (__int64)v40, v101);
      v52 = (__m128i *)v101[0].m128i_i64[0];
      v53 = (*(_DWORD *)(v39 + 96) >> 1) + 1;
LABEL_57:
      *(_DWORD *)(v39 + 96) = *(_DWORD *)(v39 + 96) & 1 | (2 * v53);
      if ( v52->m128i_i32[0] )
        --*(_DWORD *)(v39 + 100);
      *v52 = _mm_loadu_si128(v40);
      v52[1] = _mm_loadu_si128(v40 + 1);
      v52[2].m128i_i64[0] = v40[2].m128i_i64[0];
LABEL_60:
      v56 = *(unsigned int *)(v39 + 8);
      v57 = *(_QWORD *)v39;
      v58 = v56 + 1;
      if ( *(unsigned int *)(v39 + 12) < (unsigned __int64)(v56 + 1) )
      {
        if ( (unsigned __int64)v40 < v57 || (unsigned __int64)v40 >= v57 + 40 * v56 )
        {
          sub_25D6060(v39, v39 + 16, v58, 40);
          v57 = *(_QWORD *)v39;
          v56 = *(unsigned int *)(v39 + 8);
        }
        else
        {
          v85 = &v40->m128i_i8[-v57];
          sub_25D6060(v39, v39 + 16, v58, 40);
          v57 = *(_QWORD *)v39;
          v56 = *(unsigned int *)(v39 + 8);
          v40 = (const __m128i *)&v85[*(_QWORD *)v39];
        }
      }
      v59 = (__m128i *)(v57 + 40 * v56);
      *v59 = _mm_loadu_si128(v40);
      v59[1] = _mm_loadu_si128(v40 + 1);
      v59[2].m128i_i64[0] = v40[2].m128i_i64[0];
      ++*(_DWORD *)(v39 + 8);
    }
  }
}

