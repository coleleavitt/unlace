_QWORD *__fastcall sub_7DDEA0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rbx
  const __m128i *v5; // r13
  unsigned int v6; // eax
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  const __m128i *v11; // r12
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  const __m128i *v17; // rbx
  int v18; // r14d
  const __m128i *v19; // rax
  int v20; // esi
  bool v21; // al
  int v22; // r10d
  int v23; // r9d
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __m128i *v26; // rcx
  unsigned int v27; // r9d
  __m128i *v28; // r8
  __int32 v29; // eax
  bool v30; // al
  int v31; // edx
  int v32; // r9d
  int v33; // r11d
  __int64 v34; // rcx
  int v35; // edi
  unsigned int v36; // esi
  __int64 i; // rax
  int v38; // eax
  __int64 v39; // r10
  __int64 v40; // r11
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rsi
  __int64 v44; // rax
  int v45; // eax
  bool v46; // al
  __int64 v47; // rax
  int v48; // eax
  bool v49; // al
  int v50; // edi
  __int64 v51; // rsi
  __int64 v52; // rax
  bool v53; // al
  int v54; // edx
  __m128i *v55; // rcx
  __m128i *v56; // r8
  int v57; // r9d
  int v58; // r11d
  const __m128i *v59; // rsi
  __int64 v60; // rcx
  _DWORD *v61; // rdi
  const __m128i *v62; // [rsp+0h] [rbp-A8h]
  int v63; // [rsp+10h] [rbp-98h]
  __m128i *v64; // [rsp+10h] [rbp-98h]
  __m128i *v65; // [rsp+20h] [rbp-88h]
  __int64 v66; // [rsp+30h] [rbp-78h] BYREF
  __int64 v67; // [rsp+38h] [rbp-70h] BYREF
  __int64 v68; // [rsp+40h] [rbp-68h]
  __int64 v69; // [rsp+48h] [rbp-60h]
  __int64 v70; // [rsp+50h] [rbp-58h]
  __int64 v71; // [rsp+58h] [rbp-50h]
  __int64 v72; // [rsp+60h] [rbp-48h]

  v2 = (unsigned int)(a2 - 1);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(const __m128i **)a1;
  v6 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v6 < 0x40 )
    v6 = 64;
  *(_DWORD *)(a1 + 16) = v6;
  result = (_QWORD *)sub_25CC9C0(48LL * v6, 8);
  v8 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v9 = 48 * v8;
  v10 = &result[6 * v8];
  if ( !v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    LODWORD(v68) = 0;
    if ( result != v10 )
    {
      v39 = v68;
      v40 = v69;
      v41 = v70;
      v42 = v71;
      v43 = v72;
      do
      {
        *result = v39;
        result += 6;
        *(result - 5) = v40;
        *(result - 4) = v41;
        *(result - 3) = v42;
        *(result - 2) = v43;
      }
      while ( result != v10 );
    }
    return result;
  }
  *(_QWORD *)(a1 + 8) = 0;
  LODWORD(v68) = 0;
  v11 = &v5[3 * v4];
  if ( v9 )
  {
    v12 = v68;
    v13 = v69;
    v14 = v70;
    v15 = v71;
    v16 = v72;
    do
    {
      *result = v12;
      result += 6;
      *(result - 5) = v13;
      *(result - 4) = v14;
      *(result - 3) = v15;
      *(result - 2) = v16;
    }
    while ( result != v10 );
  }
  v17 = v5;
  if ( v11 == v5 )
    return (_QWORD *)operator delete();
  while ( 2 )
  {
    if ( !v17->m128i_i32[0] || v17->m128i_i32[0] == 1045 )
      goto LABEL_9;
    v18 = *(_DWORD *)(a1 + 16);
    if ( !v18 )
    {
      v59 = v17;
      v60 = 10;
      v61 = nullptr;
      while ( v60 )
      {
        *v61 = v59->m128i_i32[0];
        v59 = (const __m128i *)((char *)v59 + 4);
        ++v61;
        --v60;
      }
      BUG();
    }
    v19 = *(const __m128i **)a1;
    LODWORD(v67) = 73;
    v20 = v17->m128i_i32[0];
    LODWORD(v68) = 1045;
    v62 = v19;
    v21 = sub_7204C0((int *)&v67, v20);
    v22 = v17->m128i_i32[0];
    if ( v21 )
    {
      v44 = v17->m128i_i64[1];
      v63 = v17->m128i_i32[0];
      v67 = v17[1].m128i_i64[0];
      v66 = v44;
      v45 = sub_7DB4D0(&v66, &v67);
      v22 = v63;
      v23 = v45;
    }
    else if ( v22 == 5 )
    {
      v47 = v17->m128i_i64[1];
      v66 = v17[1].m128i_i64[0];
      v67 = v47;
      v48 = sub_7DB530(&v67, &v66);
      v22 = 5;
      v23 = v48;
    }
    else
    {
      v23 = -1916529075;
      if ( v22 > 73 )
      {
        v24 = v17->m128i_u64[1];
        v25 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (HIDWORD(v24) ^ (8LL * (unsigned int)v24 - 0xAE502812AA7333LL))) >> 47)
             ^ HIDWORD(v24)
             ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v24) ^ (8LL * (unsigned int)v24 - 0xAE502812AA7333LL))));
        v23 = -348639895 * (v25 ^ (v25 >> 47));
      }
    }
    v26 = nullptr;
    v27 = (v18 - 1) & v23;
    while ( 1 )
    {
      v28 = (__m128i *)&v62[3 * v27];
      v29 = v28->m128i_i32[0];
      if ( !v22 )
      {
        if ( v29 )
        {
          v30 = sub_7DAFA0((const __m128i *)v62[3 * v27].m128i_i32);
          if ( v34 || (v35 = v33 + 1, v36 = v31 & (v32 + v33), !v30) )
          {
            v35 = v33 + 1;
            v36 = v31 & (v32 + v33);
          }
          for ( i = v36; ; v36 = i )
          {
            v28 = (__m128i *)&v62[3 * i];
            if ( !v28->m128i_i32[0] )
              break;
            v38 = v35++;
            i = v31 & (v36 + v38);
          }
        }
        goto LABEL_35;
      }
      if ( v22 != 1045 )
      {
        if ( v29 != v22 )
          goto LABEL_32;
        if ( v22 == 6 )
        {
          v46 = v17->m128i_i64[1] == v28->m128i_i64[1];
          goto LABEL_40;
        }
        LODWORD(v67) = 73;
        v65 = v26;
        v64 = (__m128i *)&v62[3 * v27];
        v49 = sub_7204C0((int *)&v67, v17->m128i_i32[0]);
        v28 = v64;
        v26 = v65;
        if ( v49 || v17->m128i_i32[0] == 5 )
        {
          if ( v17->m128i_i64[1] == v64->m128i_i64[1] && v17[1].m128i_i64[0] == v64[1].m128i_i64[0] )
            goto LABEL_35;
          goto LABEL_41;
        }
        v50 = v64->m128i_i32[0];
        if ( v17->m128i_i32[0] <= 73 )
        {
          if ( v50 <= 73 )
            goto LABEL_35;
          v51 = 0;
        }
        else
        {
          v51 = v17->m128i_i64[1];
          v52 = 0;
          if ( v50 <= 73 )
          {
LABEL_49:
            v46 = v51 == v52;
LABEL_40:
            if ( v46 )
              goto LABEL_35;
LABEL_41:
            v29 = v28->m128i_i32[0];
            goto LABEL_32;
          }
        }
        v52 = v64->m128i_i64[1];
        goto LABEL_49;
      }
      if ( v29 == 1045 )
        goto LABEL_35;
LABEL_32:
      if ( !v29 )
        break;
      v53 = sub_7DAFA0(v28);
      if ( !v55 && v53 )
      {
        v27 = v54 & (v57 + v58);
      }
      else
      {
        v56 = v55;
        v27 = v54 & (v57 + v58);
      }
      v26 = v56;
    }
    if ( v26 )
      v28 = v26;
LABEL_35:
    *v28 = _mm_loadu_si128(v17);
    v28[1] = _mm_loadu_si128(v17 + 1);
    v28[2].m128i_i64[0] = v17[2].m128i_i64[0];
    v28[2].m128i_i64[1] = v17[2].m128i_i64[1];
    ++*(_DWORD *)(a1 + 8);
LABEL_9:
    v17 += 3;
    if ( v11 != v17 )
      continue;
    return (_QWORD *)operator delete();
  }
}

