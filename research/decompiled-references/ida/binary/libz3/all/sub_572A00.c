__int64 __fastcall sub_572A00(__int64 a1, const void *a2, const void *a3, __int64 *a4)
{
  unsigned int *v5; // rax
  unsigned int *v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r13
  unsigned int v12; // r14d
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rbx
  unsigned int *v23; // r13
  __int64 v24; // r15
  __int64 v25; // rbp
  int v26; // r12d
  int v27; // eax
  __int64 v28; // r13
  int v30; // eax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // eax
  __m128i *v37; // rax
  __int64 v38; // r9
  __m128i *v39; // r15
  __m128i *v40; // rdx
  const __m128i *v41; // rbx
  __m128i *v42; // rbp
  __int64 v43; // rdx
  __m128i *v44; // rsi
  __m128i *v45; // rdx
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  char *src; // [rsp+0h] [rbp-B8h]
  __int64 v52; // [rsp+8h] [rbp-B0h]
  __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v55; // [rsp+20h] [rbp-98h]
  __int64 v56; // [rsp+28h] [rbp-90h]
  unsigned int v57; // [rsp+34h] [rbp-84h]
  char *v58; // [rsp+38h] [rbp-80h]
  __int64 v59; // [rsp+40h] [rbp-78h]
  __int64 v60; // [rsp+50h] [rbp-68h] BYREF
  __int64 v61; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v62[16]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v63[72]; // [rsp+70h] [rbp-48h] BYREF

  sub_644D80(v62, "union", 11);
  v5 = (unsigned int *)__dynamic_cast(
                         a2,
                         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                         0);
  if ( !v5 )
    __cxa_bad_cast();
  v6 = v5;
  v7 = __dynamic_cast(
         a3,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  if ( !v7 )
    __cxa_bad_cast();
  if ( a4 )
    a4 = (__int64 *)__dynamic_cast(
                      a4,
                      (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                      (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                      0);
  v57 = v6[16];
  src = (char *)v7[11];
  v8 = v7[19];
  if ( v8 == 0xFFFFFFFFLL )
    v8 = v7[10];
  v59 = (__int64)(v6 + 18);
  v58 = &src[v8];
  if ( src >= &src[v8] )
    return sub_644EE0(v62);
  do
  {
    sub_644D80(v63, "add_fact", 10);
    v9 = *((_QWORD *)v6 + 19);
    if ( v9 == 0xFFFFFFFFLL )
    {
      v47 = *((_QWORD *)v6 + 10);
      v48 = v6[18];
      *((_QWORD *)v6 + 19) = v47;
      sub_5716E0(v59, v47 + v48);
      v9 = *((_QWORD *)v6 + 19);
    }
    memcpy((void *)(*((_QWORD *)v6 + 11) + v9), src, v6[18]);
    v10 = v6[34];
    v11 = *((_QWORD *)v6 + 19);
    v12 = 2 * v10;
    if ( 3 * v10 < 4 * (v6[35] + v6[36]) )
    {
      v37 = (__m128i *)sub_186B270(16LL * v12);
      v38 = 16LL * v12;
      v39 = v37;
      if ( v12 )
      {
        v40 = &v37[2 * (v10 & 0x7FFFFFFF)];
        do
        {
          v37->m128i_i64[0] = 0;
          v37 += 2;
          v37[-1].m128i_i64[0] = 0;
        }
        while ( v40 != v37 );
      }
      v41 = *((const __m128i **)v6 + 16);
      v42 = (__m128i *)&v41[v6[34]];
      if ( v41 != v42 )
      {
        do
        {
          while ( v41->m128i_i32[1] != 2 )
          {
            if ( v42 == ++v41 )
              goto LABEL_55;
          }
          v43 = 16LL * (v41->m128i_i32[0] & (v12 - 1));
          v44 = &v39[(unsigned __int64)v43 / 0x10];
          if ( v38 == v43 )
          {
LABEL_59:
            if ( v39 == v44 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v45 = v39;
            while ( v45->m128i_i32[1] )
            {
              if ( v44 == ++v45 )
                goto LABEL_66;
            }
          }
          else
          {
            v45 = &v39[(unsigned __int64)v43 / 0x10];
            while ( v45->m128i_i32[1] )
            {
              if ( &v39[(unsigned __int64)v38 / 0x10] == ++v45 )
                goto LABEL_59;
            }
          }
          v46 = _mm_loadu_si128(v41++);
          *v45 = v46;
        }
        while ( v42 != v41 );
LABEL_55:
        v42 = *((__m128i **)v6 + 16);
      }
      if ( v42 )
        sub_186B220(v42);
      *((_QWORD *)v6 + 16) = v39;
      v6[34] = v12;
      v6[36] = 0;
    }
    v13 = sub_17E8B20(v11 + **((_QWORD **)v6 + 12), v6[26], 0);
    v14 = v6[34];
    v15 = *((_QWORD *)v6 + 16);
    v16 = v14 - 1;
    v14 *= 16;
    v17 = v15 + v14;
    v18 = 16LL * (v13 & v16);
    v19 = v15 + v18;
    if ( v18 == v14 )
    {
      v24 = 0;
LABEL_25:
      if ( v15 == v19 )
      {
LABEL_34:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v53 = v11;
      v31 = v19;
      while ( 1 )
      {
        while ( 1 )
        {
          v32 = *(_DWORD *)(v15 + 4);
          if ( v32 == 2 )
            break;
          if ( !v32 )
          {
            v28 = v53;
            if ( !v24 )
            {
              v24 = v15;
              goto LABEL_42;
            }
LABEL_41:
            --v6[36];
            goto LABEL_42;
          }
          v24 = v15;
LABEL_29:
          v15 += 16;
          if ( v31 == v15 )
            goto LABEL_34;
        }
        if ( v13 != *(_DWORD *)v15 )
          goto LABEL_29;
        v28 = *(_QWORD *)(v15 + 8);
        if ( !memcmp((const void *)(v28 + **((_QWORD **)v6 + 14)), (const void *)(**((_QWORD **)v6 + 14) + v53), v6[30]) )
          goto LABEL_20;
        v15 += 16;
        if ( v31 == v15 )
          goto LABEL_34;
      }
    }
    v20 = v13;
    v55 = *((_QWORD *)v6 + 16);
    v21 = v11;
    v22 = v15 + v18;
    v23 = v6;
    v56 = v15 + v18;
    v24 = 0;
    v25 = v17;
    v26 = v20;
    while ( 1 )
    {
      v27 = *(_DWORD *)(v22 + 4);
      if ( v27 == 2 )
      {
        if ( v26 == *(_DWORD *)v22 )
        {
          v52 = *(_QWORD *)(v22 + 8);
          if ( !memcmp(
                  (const void *)(v52 + **((_QWORD **)v23 + 14)),
                  (const void *)(**((_QWORD **)v23 + 14) + v21),
                  v23[30]) )
          {
            v6 = v23;
            v28 = v52;
            goto LABEL_20;
          }
        }
        goto LABEL_15;
      }
      if ( !v27 )
        break;
      v24 = v22;
LABEL_15:
      v22 += 16;
      if ( v25 == v22 )
      {
        v30 = v26;
        v15 = v55;
        v19 = v56;
        v6 = v23;
        v11 = v21;
        v13 = v30;
        goto LABEL_25;
      }
    }
    v35 = v26;
    v6 = v23;
    v28 = v21;
    v13 = v35;
    if ( v24 )
      goto LABEL_41;
    v24 = v22;
LABEL_42:
    *(_DWORD *)v24 = v13;
    v36 = v6[35];
    *(_QWORD *)(v24 + 8) = v28;
    *(_DWORD *)(v24 + 4) = 2;
    v6[35] = v36 + 1;
LABEL_20:
    if ( *((_QWORD *)v6 + 19) == v28 )
    {
      *((_QWORD *)v6 + 19) = 0xFFFFFFFFLL;
      sub_644EE0(v63);
      if ( a4 )
      {
        sub_644D80(v63, "add_fact", 10);
        v33 = a4[19];
        if ( v33 == 0xFFFFFFFFLL )
        {
          v49 = a4[10];
          v50 = *((unsigned int *)a4 + 18);
          a4[19] = v49;
          sub_5716E0((__int64)(a4 + 9), v49 + v50);
          v33 = a4[19];
        }
        memcpy((void *)(a4[11] + v33), src, *((unsigned int *)a4 + 18));
        v34 = a4[19];
        v60 = 0;
        v61 = v34;
        sub_568330((__int64)(a4 + 12), &v61, &v60);
        if ( *(_QWORD *)(v60 + 8) == a4[19] )
          a4[19] = 0xFFFFFFFFLL;
        goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      sub_644EE0(v63);
    }
    src += v57;
  }
  while ( src < v58 );
  return sub_644EE0(v62);
}

