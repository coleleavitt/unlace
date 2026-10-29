_QWORD *__fastcall sub_56A710(__int64 a1, _QWORD *a2)
{
  const void *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  char *v6; // rdi
  int v7; // esi
  __int64 v8; // r8
  char *v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i *v13; // rax
  _BYTE *v14; // rsi
  signed __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  int v18; // ebx
  unsigned int v19; // r13d
  int v20; // eax
  __int64 v21; // rbp
  int v22; // r13d
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r11
  __int64 v28; // rbx
  __int64 v29; // r15
  int v30; // eax
  _QWORD *v31; // rax
  size_t v32; // rdx
  int v33; // eax
  int v35; // eax
  _QWORD *v36; // rax
  size_t v37; // rdx
  int v38; // eax
  __m128i *v39; // rax
  __int64 v40; // r10
  __m128i *v41; // r15
  __m128i *v42; // rdx
  const __m128i *v43; // rbx
  __m128i *v44; // rbp
  __int64 v45; // rdx
  __m128i *v46; // rsi
  __m128i *v47; // rdx
  __m128i v48; // xmm0
  unsigned int v49; // ebp
  unsigned int v50; // ebp
  _QWORD *v51; // rax
  __int64 v52; // rsi
  _QWORD *v53; // rax
  unsigned int v54; // r8d
  __m128i v55; // [rsp+0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+18h] [rbp-50h]
  unsigned __int64 v57; // [rsp+20h] [rbp-48h]
  __int8 *v58; // [rsp+28h] [rbp-40h]

  v3 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 40LL))(a1, a2 + 2);
  if ( !v3 )
    BUG();
  v4 = __dynamic_cast(
         v3,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  v5 = v4;
  if ( *((_DWORD *)v4 + 35) || *((_DWORD *)v4 + 36) )
  {
    v6 = (char *)v4[16];
    v7 = 0;
    v8 = *((unsigned int *)v4 + 34);
    v9 = v6;
    v10 = &v6[16 * v8];
    if ( v6 == v10 )
      goto LABEL_9;
    do
    {
      while ( *((_DWORD *)v9 + 1) )
      {
        *((_DWORD *)v9 + 1) = 0;
        v9 += 16;
        if ( v10 == v9 )
          goto LABEL_8;
      }
      v9 += 16;
      ++v7;
    }
    while ( v10 != v9 );
LABEL_8:
    if ( (unsigned int)v8 <= 0x10 || 3 * (int)v8 >= (unsigned int)(4 * v7) )
      goto LABEL_9;
    if ( v6 )
    {
      sub_186B220(v6);
      v49 = *((_DWORD *)v5 + 34);
      v5[16] = 0;
      v50 = v49 >> 1;
      *((_DWORD *)v5 + 34) = v50;
      v51 = (_QWORD *)sub_186B270(16LL * v50);
      v52 = (__int64)v51;
      if ( !v50 )
      {
LABEL_83:
        v5[16] = v52;
LABEL_9:
        *(_QWORD *)((char *)v5 + 140) = 0;
        goto LABEL_10;
      }
      if ( v50 == 1 )
      {
LABEL_82:
        *v51 = 0;
        goto LABEL_83;
      }
    }
    else
    {
      v5[16] = 0;
      v54 = (unsigned int)v8 >> 1;
      *((_DWORD *)v5 + 34) = v54;
      v50 = v54;
      v52 = sub_186B270(16LL * v54);
    }
    v53 = (_QWORD *)v52;
    do
    {
      *v53 = 0;
      v53 += 4;
      *(v53 - 2) = 0;
    }
    while ( (_QWORD *)(v52 + 32LL * (v50 >> 1)) != v53 );
    if ( (v50 & 1) == 0 )
      goto LABEL_83;
    v51 = (_QWORD *)(v52 + 16LL * (v50 & 0x7FFFFFFE));
    goto LABEL_82;
  }
LABEL_10:
  v5[9] = a2[9];
  v5[10] = a2[10];
  if ( v5 + 11 != a2 + 11 )
  {
    v11 = v5[11];
    if ( v11 )
      sub_186B220((void *)(v11 - 16));
    v12 = a2[11];
    if ( v12 )
    {
      v55 = _mm_loadu_si128((const __m128i *)(v12 - 16));
      v13 = (__m128i *)sub_186B270(v55.m128i_i64[0] + 16);
      *v13 = _mm_load_si128(&v55);
      v5[11] = v13 + 1;
      v14 = (_BYTE *)a2[11];
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 - 1);
        if ( v15 <= 1 )
        {
          if ( v15 == 1 )
            v13[1].m128i_i8[0] = *v14;
        }
        else
        {
          memmove(&v13[1], v14, v15);
        }
      }
    }
    else
    {
      v5[11] = 0;
    }
  }
  v16 = a2[19];
  v57 = v16;
  v5[19] = v16;
  if ( v16 == 0xFFFFFFFF )
    v57 = v5[10];
  v17 = 0;
  if ( !v57 )
    return v5;
  do
  {
    v18 = *((_DWORD *)v5 + 34);
    v19 = 2 * v18;
    if ( 3 * v18 < (unsigned int)(4 * (*((_DWORD *)v5 + 35) + *((_DWORD *)v5 + 36))) )
    {
      v55.m128i_i64[0] = 16LL * v19;
      v39 = (__m128i *)sub_186B270(v55.m128i_u64[0]);
      v40 = v55.m128i_i64[0];
      v41 = v39;
      if ( v19 )
      {
        v42 = &v39[2 * (v18 & 0x7FFFFFFF)];
        do
        {
          v39->m128i_i64[0] = 0;
          v39 += 2;
          v39[-1].m128i_i64[0] = 0;
        }
        while ( v42 != v39 );
      }
      v43 = (const __m128i *)v5[16];
      v44 = (__m128i *)&v43[*((unsigned int *)v5 + 34)];
      if ( v43 != v44 )
      {
        do
        {
          while ( v43->m128i_i32[1] != 2 )
          {
            if ( v44 == ++v43 )
              goto LABEL_57;
          }
          v45 = 16LL * (v43->m128i_i32[0] & (v19 - 1));
          v46 = &v41[(unsigned __int64)v45 / 0x10];
          if ( v40 == v45 )
          {
LABEL_62:
            if ( v41 == v46 )
            {
LABEL_69:
              v58 = &v41->m128i_i8[v40];
              LODWORD(v56) = v19 - 1;
              v55.m128i_i64[0] = v40;
              sub_1872CE0("");
              sub_1873130((char *)&qword_70 + 2, 213);
            }
            v47 = v41;
            while ( v47->m128i_i32[1] )
            {
              if ( v46 == ++v47 )
                goto LABEL_69;
            }
          }
          else
          {
            v47 = &v41[(unsigned __int64)v45 / 0x10];
            while ( v47->m128i_i32[1] )
            {
              if ( &v41->m128i_i8[v40] == (__int8 *)++v47 )
                goto LABEL_62;
            }
          }
          v48 = _mm_loadu_si128(v43++);
          *v47 = v48;
        }
        while ( v44 != v43 );
LABEL_57:
        v44 = (__m128i *)v5[16];
      }
      if ( v44 )
        sub_186B220(v44);
      v5[16] = v41;
      *((_DWORD *)v5 + 34) = v19;
      *((_DWORD *)v5 + 36) = 0;
    }
    v20 = sub_17E8B20(v17 + *(_QWORD *)v5[12], *((unsigned int *)v5 + 26), 0);
    v21 = v5[16];
    v22 = v20;
    v23 = *((unsigned int *)v5 + 34);
    v24 = v23 - 1;
    v23 *= 16;
    v25 = v21 + v23;
    v26 = 16LL * (v22 & v24);
    v27 = v21 + v26;
    if ( v26 == v23 )
    {
      v29 = 0;
LABEL_33:
      if ( v21 == v27 )
      {
LABEL_61:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v35 = *(_DWORD *)(v21 + 4);
        if ( v35 == 2 )
        {
          if ( v22 == *(_DWORD *)v21 )
          {
            v36 = (_QWORD *)v5[14];
            v37 = *((unsigned int *)v5 + 30);
            v55.m128i_i64[0] = v27;
            v38 = memcmp((const void *)(*(_QWORD *)(v21 + 8) + *v36), (const void *)(*v36 + v17), v37);
            v27 = v55.m128i_i64[0];
            if ( !v38 )
            {
              *(_QWORD *)(v21 + 8) = v17;
              *(_DWORD *)(v21 + 4) = 2;
              goto LABEL_30;
            }
          }
        }
        else
        {
          if ( !v35 )
          {
            if ( !v29 )
            {
              v29 = v21;
              goto LABEL_44;
            }
LABEL_43:
            --*((_DWORD *)v5 + 36);
            goto LABEL_44;
          }
          v29 = v21;
        }
        v21 += 16;
        if ( v27 == v21 )
          goto LABEL_61;
      }
    }
    v28 = v21 + v26;
    v29 = 0;
    while ( 1 )
    {
      v30 = *(_DWORD *)(v28 + 4);
      if ( v30 != 2 )
        break;
      if ( v22 == *(_DWORD *)v28 )
      {
        v31 = (_QWORD *)v5[14];
        v32 = *((unsigned int *)v5 + 30);
        v56 = v25;
        v55.m128i_i64[0] = v27;
        v33 = memcmp((const void *)(*(_QWORD *)(v28 + 8) + *v31), (const void *)(*v31 + v17), v32);
        v27 = v55.m128i_i64[0];
        v25 = v56;
        if ( !v33 )
        {
          *(_QWORD *)(v28 + 8) = v17;
          *(_DWORD *)(v28 + 4) = 2;
          goto LABEL_30;
        }
      }
LABEL_25:
      v28 += 16;
      if ( v25 == v28 )
        goto LABEL_33;
    }
    if ( v30 )
    {
      v29 = v28;
      goto LABEL_25;
    }
    if ( v29 )
      goto LABEL_43;
    v29 = v28;
LABEL_44:
    *(_QWORD *)(v29 + 8) = v17;
    *(_DWORD *)(v29 + 4) = 2;
    *(_DWORD *)v29 = v22;
    ++*((_DWORD *)v5 + 35);
LABEL_30:
    v17 += *((unsigned int *)v5 + 18);
  }
  while ( v17 < v57 );
  return v5;
}

