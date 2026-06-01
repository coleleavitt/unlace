__int64 __fastcall sub_56D9F0(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r12
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r15d
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // rax
  const void *v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r14
  __int64 result; // rax
  __int64 v20; // r14
  int v21; // eax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r13d
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  int v32; // eax
  _QWORD *v33; // rax
  const void *v34; // rdi
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  int v38; // eax
  _QWORD *v39; // rax
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rbx
  __m128i *v43; // rax
  __m128i *v44; // r13
  __m128i *v45; // rdx
  __m128i *v46; // rax
  __int64 v47; // rax
  __m128i *v48; // rdi
  unsigned int v49; // r15d
  const __m128i *v50; // rbx
  const __m128i *v51; // rcx
  __int64 v52; // r14
  __m128i *v53; // r8
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i *v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rbx
  __m128i *v59; // rax
  __m128i *v60; // r13
  __m128i *v61; // rdx
  __m128i *v62; // rax
  __int64 v63; // rax
  __m128i *v64; // rdi
  unsigned int v65; // r8d
  const __m128i *v66; // rcx
  __int64 v67; // r15
  const __m128i *v68; // rbx
  __int64 v69; // rax
  __m128i *v70; // rdx
  __m128i *v71; // rax
  __int64 v72; // [rsp+8h] [rbp-60h]
  __int64 v73; // [rsp+8h] [rbp-60h]
  __int64 v74; // [rsp+8h] [rbp-60h]
  __m128i *v75; // [rsp+8h] [rbp-60h]
  __int64 v76; // [rsp+10h] [rbp-58h]
  __int64 v77[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  v4 = sub_17E8B20(a2 + **((_QWORD **)a1 + 3), a1[8], 0);
  v5 = *((_QWORD *)a1 + 7);
  v6 = v4;
  v7 = a1[16];
  v72 = v5;
  v8 = v7 - 1;
  v7 *= 16;
  v9 = v5 + v7;
  v10 = 16LL * (v6 & v8);
  v11 = v5 + v10;
  if ( v10 == v7 )
  {
LABEL_16:
    if ( v72 != v11 )
    {
      v12 = v72;
      while ( 1 )
      {
        v21 = *(_DWORD *)(v12 + 4);
        if ( v21 == 2 )
        {
          if ( v6 == *(_DWORD *)v12 )
          {
            v22 = *((_QWORD **)a1 + 5);
            v15 = (const void *)(*(_QWORD *)(v12 + 8) + *v22);
            if ( !memcmp(v15, (const void *)(*v22 + a2), a1[12]) )
              goto LABEL_8;
          }
        }
        else if ( !v21 )
        {
          goto LABEL_12;
        }
        v12 += 16;
        if ( v11 == v12 )
          goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  v12 = v5 + v10;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 + 4);
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_12;
      goto LABEL_4;
    }
    if ( v6 == *(_DWORD *)v12 )
    {
      v14 = *((_QWORD **)a1 + 5);
      v15 = (const void *)(*(_QWORD *)(v12 + 8) + *v14);
      if ( !memcmp(v15, (const void *)(*v14 + a2), a1[12]) )
        break;
    }
LABEL_4:
    v12 += 16;
    if ( v9 == v12 )
      goto LABEL_16;
  }
LABEL_8:
  v16 = v12 + 16;
  if ( v9 == v12 + 16 )
    v16 = v72;
  v17 = a1[17] - 1;
  if ( !*(_DWORD *)(v16 + 4) )
  {
    *(_DWORD *)(v12 + 4) = 0;
    a1[17] = v17;
    goto LABEL_12;
  }
  v41 = a1[18];
  *(_DWORD *)(v12 + 4) = 1;
  a1[17] = v17;
  a1[18] = v41 + 1;
  if ( v17 < 0x40 )
    v17 = 64;
  if ( v17 < v41 + 1 && !(unsigned __int8)sub_186AF10(v15) )
  {
    v42 = a1[16];
    v43 = (__m128i *)sub_186B270(16 * v42);
    v44 = v43;
    if ( (_DWORD)v42 )
    {
      if ( (_DWORD)v42 == 1 )
        goto LABEL_56;
      v45 = v43;
      v46 = &v43[2 * ((unsigned int)v42 >> 1)];
      do
      {
        v45->m128i_i64[0] = 0;
        v45 += 2;
        v45[-1].m128i_i64[0] = 0;
      }
      while ( v45 != v46 );
      if ( (v42 & 1) != 0 )
      {
        v43 = &v44[(unsigned int)v42 & 0xFFFFFFFE];
LABEL_56:
        v43->m128i_i64[0] = 0;
      }
    }
    v47 = a1[16];
    v48 = *((__m128i **)a1 + 7);
    v49 = v47 - 1;
    v47 *= 16;
    v50 = v48;
    v51 = (__m128i *)((char *)v48 + v47);
    v52 = v47;
    v53 = (__m128i *)((char *)v44 + v47);
    if ( v48 != (__m128i *)&v48->m128i_i8[v47] )
    {
      do
      {
        if ( v50->m128i_i32[1] == 2 )
        {
          v54 = 16LL * (v50->m128i_i32[0] & v49);
          v55 = &v44[(unsigned __int64)v54 / 0x10];
          if ( v52 == v54 )
          {
LABEL_90:
            if ( v44 == v55 )
            {
LABEL_100:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v56 = v44;
            while ( v56->m128i_i32[1] )
            {
              if ( v55 == ++v56 )
                goto LABEL_100;
            }
          }
          else
          {
            v56 = &v44[(unsigned __int64)v54 / 0x10];
            while ( v56->m128i_i32[1] )
            {
              if ( v53 == ++v56 )
                goto LABEL_90;
            }
          }
          *v56 = _mm_loadu_si128(v50);
        }
        ++v50;
      }
      while ( v51 != v50 );
      v48 = *((__m128i **)a1 + 7);
    }
    if ( v48 )
      sub_186B220(v48);
    *((_QWORD *)a1 + 7) = v44;
    a1[18] = 0;
  }
LABEL_12:
  v18 = *((_QWORD *)a1 + 10);
  result = *a1;
  if ( v18 == 0xFFFFFFFFLL )
  {
    v20 = *((_QWORD *)a1 + 1) - result;
    if ( a2 == v20 )
      goto LABEL_15;
  }
  else
  {
    v20 = v18 - result;
    if ( v20 == a2 )
      goto LABEL_14;
  }
  v23 = sub_17E8B20(v20 + **((_QWORD **)a1 + 3), a1[8], 0);
  v24 = *((_QWORD *)a1 + 7);
  v25 = v23;
  v26 = a1[16];
  v76 = v24;
  v27 = v26 - 1;
  v26 *= 16;
  v28 = v24 + v26;
  v29 = 16LL * (v25 & v27);
  v30 = v24 + v29;
  if ( v29 == v26 )
  {
LABEL_38:
    if ( v76 != v30 )
    {
      v31 = v76;
      while ( 1 )
      {
        v38 = *(_DWORD *)(v31 + 4);
        if ( v38 == 2 )
        {
          if ( v25 == *(_DWORD *)v31 )
          {
            v39 = *((_QWORD **)a1 + 5);
            v74 = v30;
            v34 = (const void *)(*(_QWORD *)(v31 + 8) + *v39);
            v40 = memcmp(v34, (const void *)(*v39 + v20), a1[12]);
            v30 = v74;
            if ( !v40 )
              goto LABEL_32;
          }
        }
        else if ( !v38 )
        {
          goto LABEL_36;
        }
        v31 += 16;
        if ( v30 == v31 )
          goto LABEL_36;
      }
    }
    goto LABEL_36;
  }
  v31 = v24 + v29;
  while ( 2 )
  {
    v32 = *(_DWORD *)(v31 + 4);
    if ( v32 != 2 )
    {
      if ( !v32 )
        goto LABEL_36;
LABEL_28:
      v31 += 16;
      if ( v28 == v31 )
        goto LABEL_38;
      continue;
    }
    break;
  }
  if ( v25 != *(_DWORD *)v31 )
    goto LABEL_28;
  v33 = *((_QWORD **)a1 + 5);
  v73 = v30;
  v34 = (const void *)(*(_QWORD *)(v31 + 8) + *v33);
  v35 = memcmp(v34, (const void *)(*v33 + v20), a1[12]);
  v30 = v73;
  if ( v35 )
    goto LABEL_28;
LABEL_32:
  v36 = v31 + 16;
  if ( v28 == v31 + 16 )
    v36 = v76;
  v37 = a1[17] - 1;
  if ( !*(_DWORD *)(v36 + 4) )
  {
    *(_DWORD *)(v31 + 4) = 0;
    a1[17] = v37;
    goto LABEL_36;
  }
  v57 = a1[18];
  *(_DWORD *)(v31 + 4) = 1;
  a1[17] = v37;
  a1[18] = v57 + 1;
  if ( v37 < 0x40 )
    v37 = 64;
  if ( v37 < v57 + 1 && !(unsigned __int8)sub_186AF10(v34) )
  {
    v58 = a1[16];
    v59 = (__m128i *)sub_186B270(16 * v58);
    v60 = v59;
    if ( (_DWORD)v58 )
    {
      if ( (_DWORD)v58 == 1 )
        goto LABEL_76;
      v61 = v59;
      v62 = &v59[2 * ((unsigned int)v58 >> 1)];
      do
      {
        v61->m128i_i64[0] = 0;
        v61 += 2;
        v61[-1].m128i_i64[0] = 0;
      }
      while ( v62 != v61 );
      if ( (v58 & 1) != 0 )
      {
        v59 = &v60[(unsigned int)v58 & 0xFFFFFFFE];
LABEL_76:
        v59->m128i_i64[0] = 0;
      }
    }
    v63 = a1[16];
    v64 = *((__m128i **)a1 + 7);
    v65 = v63 - 1;
    v66 = v64;
    v67 = 16 * v63;
    v68 = &v64[v63];
    v75 = &v60[v63];
    if ( v64 != v68 )
    {
      do
      {
        if ( v66->m128i_i32[1] == 2 )
        {
          v69 = 16LL * (v66->m128i_i32[0] & v65);
          v70 = &v60[(unsigned __int64)v69 / 0x10];
          if ( v67 == v69 )
          {
LABEL_95:
            if ( v60 == v70 )
            {
LABEL_105:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v71 = v60;
            while ( v71->m128i_i32[1] )
            {
              if ( v70 == ++v71 )
                goto LABEL_105;
            }
          }
          else
          {
            v71 = &v60[(unsigned __int64)v69 / 0x10];
            while ( v71->m128i_i32[1] )
            {
              if ( v75 == ++v71 )
                goto LABEL_95;
            }
          }
          *v71 = _mm_loadu_si128(v66);
        }
        ++v66;
      }
      while ( v68 != v66 );
      v64 = *((__m128i **)a1 + 7);
    }
    if ( v64 )
      sub_186B220(v64);
    *((_QWORD *)a1 + 7) = v60;
    a1[18] = 0;
  }
LABEL_36:
  memcpy((void *)(*((_QWORD *)a1 + 2) + a2), (const void *)(v20 + *((_QWORD *)a1 + 2)), *a1);
  v77[0] = a2;
  sub_576060(a1 + 6, v77);
  result = 0xFFFFFFFFLL;
  if ( *((_QWORD *)a1 + 10) != 0xFFFFFFFFLL )
  {
    result = *a1;
    v2 = v20;
LABEL_14:
    v20 = v2;
    result = sub_5716E0(a1, *((_QWORD *)a1 + 1) - result);
  }
LABEL_15:
  *((_QWORD *)a1 + 10) = v20;
  return result;
}

