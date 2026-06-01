__int64 __fastcall sub_80FCB0(_QWORD *a1)
{
  __m128i *v2; // rax
  __m128i *v3; // rbp
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rsi
  _BOOL8 v11; // r8
  __int64 v12; // rax
  double v13; // xmm0_8
  __m128i *v14; // rcx
  __m128i *v15; // rdi
  __m128i *v16; // rax
  double *v17; // rdx
  __int32 v18; // esi
  __int64 v19; // rsi
  __int64 *v20; // rdi
  __int64 *v21; // rsi
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int32 v27; // ecx
  __int64 v28; // rcx
  __int64 *v29; // r10
  __int64 *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // r11
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // rsi
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  __m128i *v42; // rax
  int v43; // ecx
  __m128i *v44; // r8
  __m128i *v45; // rdx
  int v46; // r10d
  __m128i *v47; // r11
  const __m128i *v48; // rax
  const __m128i *v49; // r14
  __int64 v50; // rdx
  __m128i *v51; // rsi
  __m128i *v52; // rdx
  __m128i v53; // xmm0
  int v54; // [rsp+0h] [rbp-68h]
  size_t v55; // [rsp+0h] [rbp-68h]
  __m128i *v56; // [rsp+0h] [rbp-68h]
  int v57; // [rsp+8h] [rbp-60h]
  int v58; // [rsp+28h] [rbp-40h]

  v2 = (__m128i *)sub_186B270(0x80u);
  v2->m128i_i64[0] = 0;
  v3 = v2;
  v2[1].m128i_i64[0] = 0;
  v2[2].m128i_i64[0] = 0;
  v2[3].m128i_i64[0] = 0;
  v2[4].m128i_i64[0] = 0;
  v2[5].m128i_i64[0] = 0;
  v2[6].m128i_i64[0] = 0;
  v2[7].m128i_i64[0] = 0;
  result = a1[11];
  if ( !result )
    return sub_186B220(v3);
  v54 = 0;
  v5 = 0;
  v6 = 8;
  v58 = 0;
  do
  {
    if ( *(_DWORD *)(result - 4) <= (int)v5 )
      break;
    v7 = 8 * v5;
    v8 = *(_QWORD *)(a1[75] + 8 * v5);
    if ( !v8 )
      goto LABEL_46;
    v9 = *(_DWORD *)(v8 - 4);
    if ( !v9 )
      goto LABEL_46;
    if ( 3 * v6 >= 4 * (v54 + v58) )
      goto LABEL_7;
    v55 = 32LL * v6;
    v42 = (__m128i *)sub_186B270(v55);
    v43 = 2 * v6;
    v44 = v42;
    if ( 2 * v6 )
    {
      v45 = &v42[2 * (v6 & 0x7FFFFFFE)];
      do
      {
        v42->m128i_i64[0] = 0;
        v42 += 2;
        v42[-1].m128i_i64[0] = 0;
      }
      while ( v42 != v45 );
      v46 = v43 - 1;
      v47 = &v44[v55 / 0x10];
      v48 = &v3[v6];
    }
    else
    {
      v47 = v42;
      v46 = -1;
      v48 = &v3[v6];
      if ( v3 == v48 )
        goto LABEL_71;
    }
    v49 = v3;
    do
    {
      while ( v49->m128i_i32[1] != 2 )
      {
        if ( ++v49 == v48 )
          goto LABEL_71;
      }
      v50 = 16LL * (v49->m128i_i32[0] & (unsigned int)v46);
      v51 = &v44[(unsigned __int64)v50 / 0x10];
      if ( v55 == v50 )
      {
LABEL_75:
        if ( v44 == v51 )
        {
LABEL_89:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v52 = v44;
        while ( v52->m128i_i32[1] )
        {
          if ( v51 == ++v52 )
            goto LABEL_89;
        }
      }
      else
      {
        v52 = &v44[(unsigned __int64)v50 / 0x10];
        while ( v52->m128i_i32[1] )
        {
          if ( ++v52 == v47 )
            goto LABEL_75;
        }
      }
      v53 = _mm_loadu_si128(v49++);
      *v52 = v53;
    }
    while ( v49 != v48 );
LABEL_71:
    if ( v3 )
    {
      v57 = v43;
      v56 = v44;
      sub_186B220(v3);
      v43 = v57;
      v44 = v56;
    }
    v8 = *(_QWORD *)(a1[75] + 8 * v5);
    if ( v8 )
    {
      v54 = 0;
      v9 = *(_DWORD *)(v8 - 4);
      v6 = v43;
      v3 = v44;
LABEL_7:
      v10 = (unsigned int)(4 * v9);
      goto LABEL_8;
    }
    v54 = 0;
    v6 = v43;
    v3 = v44;
    v10 = 0;
LABEL_8:
    v11 = (unsigned int)sub_17E8B20(v8, v10, 3) != 0;
    v12 = v6;
    *(_QWORD *)&v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 224).m128i_u64[0];
    v14 = &v3[v12];
    v15 = &v3[v11];
    if ( v11 == v12 )
    {
      v17 = nullptr;
LABEL_25:
      if ( v15 == v3 )
      {
LABEL_41:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v16 = v3;
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = v16->m128i_i32[1];
          if ( v27 != 2 )
          {
            if ( !v27 )
              goto LABEL_50;
            v17 = (double *)v16;
            goto LABEL_29;
          }
          if ( v11 == v16->m128i_i32[0] )
            break;
LABEL_29:
          if ( v15 == ++v16 )
            goto LABEL_41;
        }
        v28 = a1[75];
        v29 = (__int64 *)(v28 + v7);
        v30 = (__int64 *)(v28 + 8LL * v16->m128i_u32[2]);
        if ( v29 == v30 )
          goto LABEL_44;
        v31 = *v30;
        v32 = *v29;
        if ( !*v30 )
        {
          if ( !v32 || !*(_DWORD *)(v32 - 4) )
            goto LABEL_44;
          goto LABEL_29;
        }
        v33 = *(unsigned int *)(v31 - 4);
        if ( !v32 )
        {
          if ( !(_DWORD)v33 )
            goto LABEL_44;
          goto LABEL_29;
        }
        if ( (_DWORD)v33 != *(_DWORD *)(v32 - 4) )
          goto LABEL_29;
        if ( !(_DWORD)v33 )
          goto LABEL_44;
        v34 = 4 * v33;
        v35 = 0;
        while ( *(_DWORD *)(v31 + v35) == *(_DWORD *)(v32 + v35) )
        {
          v35 += 4;
          if ( v34 == v35 )
            goto LABEL_44;
        }
        if ( v15 == ++v16 )
          goto LABEL_41;
      }
    }
    v16 = &v3[v11];
    v17 = nullptr;
    while ( 1 )
    {
      v18 = v16->m128i_i32[1];
      if ( v18 != 2 )
        break;
      if ( v11 != v16->m128i_i32[0] )
        goto LABEL_12;
      v19 = a1[75];
      v20 = (__int64 *)(v19 + v7);
      v21 = (__int64 *)(v19 + 8LL * v16->m128i_u32[2]);
      if ( v20 == v21 )
        goto LABEL_44;
      v22 = *v21;
      v23 = *v20;
      if ( *v21 )
      {
        v24 = *(unsigned int *)(v22 - 4);
        if ( !v23 )
        {
          if ( !(_DWORD)v24 )
            goto LABEL_44;
          goto LABEL_12;
        }
        if ( (_DWORD)v24 != *(_DWORD *)(v23 - 4) )
          goto LABEL_12;
        if ( !(_DWORD)v24 )
          goto LABEL_44;
        v25 = 4 * v24;
        v26 = 0;
        while ( *(_DWORD *)(v22 + v26) == *(_DWORD *)(v23 + v26) )
        {
          v26 += 4;
          if ( v26 == v25 )
            goto LABEL_44;
        }
        if ( v14 == ++v16 )
        {
LABEL_24:
          v15 = &v3[v11];
          goto LABEL_25;
        }
      }
      else
      {
        if ( !v23 || !*(_DWORD *)(v23 - 4) )
        {
LABEL_44:
          v36 = v16->m128i_u32[3];
          if ( v36 != (_DWORD)v5 )
          {
            v37 = a1[70];
            v38 = v5;
            do
            {
              v39 = v38;
              v38 = *(_DWORD *)(v37 + 4LL * v38);
            }
            while ( v39 != v38 );
            v40 = v36;
            do
            {
              v41 = v40;
              v40 = *(_DWORD *)(v37 + 4LL * v40);
            }
            while ( v41 != v40 );
            if ( v40 != v39 )
              sub_86CF90(a1, (unsigned int)v5, v36, v13);
          }
          goto LABEL_45;
        }
LABEL_12:
        if ( v14 == ++v16 )
          goto LABEL_24;
      }
    }
    if ( v18 )
    {
      v17 = (double *)v16;
      goto LABEL_12;
    }
LABEL_50:
    if ( v17 )
      --v54;
    else
      v17 = (double *)v16;
    *((_DWORD *)v17 + 1) = 2;
    *(_DWORD *)v17 = v11;
    v17[1] = v13;
    ++v58;
LABEL_45:
    result = a1[11];
LABEL_46:
    ++v5;
  }
  while ( result );
  if ( v3 )
    return sub_186B220(v3);
  return result;
}

