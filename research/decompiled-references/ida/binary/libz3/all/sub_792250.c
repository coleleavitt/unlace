__int64 __fastcall sub_792250(__int64 a1)
{
  __int64 v1; // r13
  unsigned int ***v2; // rbp
  unsigned int ***v3; // r15
  unsigned int *v4; // r12
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  __m128i *v8; // rbx
  __int64 v9; // r9
  __m128i *v10; // r14
  int v11; // ecx
  __m128i v12; // xmm0
  __int64 v13; // r11
  __m128i *v14; // rdi
  __m128i *v15; // rax
  __m128i *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i *v20; // rax
  int v21; // edx
  __m128i *v22; // r10
  const __m128i *v23; // rcx
  __int64 v24; // rsi
  __m128i *v25; // r11
  unsigned int ***v26; // rax
  __m128i *v27; // rbp
  __int64 v28; // r10
  __m128i *v29; // r13
  const __m128i *v30; // rbx
  __int64 v31; // rdx
  __m128i *v32; // rsi
  __m128i *v33; // rdx
  __m128i v34; // xmm0
  unsigned int v35; // [rsp+8h] [rbp-70h]
  size_t v36; // [rsp+8h] [rbp-70h]
  int v37; // [rsp+10h] [rbp-68h]
  unsigned __int64 v38; // [rsp+10h] [rbp-68h]
  unsigned __int64 v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+18h] [rbp-60h]
  int v41; // [rsp+20h] [rbp-58h]

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8388) )
    return v1 + 8376;
  v2 = *(unsigned int ****)(a1 + 1768);
  if ( !v2 )
    return v1 + 8376;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v2 == v3 )
    return v1 + 8376;
  while ( 2 )
  {
    v4 = (unsigned int *)*v2;
    if ( v4 != *((unsigned int **)v4 + 8) )
      goto LABEL_5;
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 8368) + 8LL * **(unsigned int **)v4);
    if ( !v5 )
      goto LABEL_5;
    v6 = *(unsigned int *)(v1 + 8384);
    if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(v1 + 8388) + *(_DWORD *)(v1 + 8392))) )
    {
      v39 = *(_QWORD *)(*(_QWORD *)(v1 + 8368) + 8LL * **(unsigned int **)v4);
      v37 = 2 * v6;
      v36 = 16LL * (unsigned int)(2 * v6);
      v20 = (__m128i *)sub_186B270(v36);
      v21 = v37;
      v9 = v36;
      v5 = v39;
      v8 = v20;
      v22 = &v20[v36 / 0x10];
      if ( v37 )
      {
        if ( (v36 & 0x10) == 0 || (*v20 = 0, ++v20, v22 != v20) )
        {
          do
          {
            *v20 = 0;
            v20 += 2;
            v20[-1] = 0;
          }
          while ( v22 != v20 );
        }
      }
      v23 = *(const __m128i **)(v1 + 8376);
      v10 = v22;
      v35 = v37 - 1;
      v24 = *(unsigned int *)(v1 + 8384);
      v25 = (__m128i *)&v23[v24];
      if ( v23 != &v23[v24] )
      {
        v26 = v2;
        v27 = v22;
        v28 = v1;
        v29 = v8;
        v30 = v23;
        do
        {
          while ( v30->m128i_i64[0] <= 1uLL )
          {
            if ( v25 == ++v30 )
              goto LABEL_40;
          }
          v31 = 16LL * (*(_DWORD *)(v30->m128i_i64[0] + 12) & v35);
          v32 = &v29[(unsigned __int64)v31 / 0x10];
          if ( v9 == v31 )
          {
LABEL_44:
            if ( v29 == v32 )
            {
LABEL_53:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v33 = v29;
            while ( v33->m128i_i64[0] )
            {
              if ( v32 == ++v33 )
                goto LABEL_53;
            }
          }
          else
          {
            v33 = &v29[(unsigned __int64)v31 / 0x10];
            while ( v33->m128i_i64[0] )
            {
              if ( v27 == ++v33 )
                goto LABEL_44;
            }
          }
          v34 = _mm_loadu_si128(v30++);
          *v33 = v34;
        }
        while ( v25 != v30 );
LABEL_40:
        v21 = v37;
        v25 = *(__m128i **)(v28 + 8376);
        v8 = v29;
        v2 = v26;
        v1 = v28;
      }
      if ( v25 )
      {
        v41 = v21;
        v40 = v9;
        v38 = v5;
        sub_186B220(v25);
        v21 = v41;
        v9 = v40;
        v5 = v38;
      }
      *(_QWORD *)(v1 + 8376) = v8;
      *(_DWORD *)(v1 + 8384) = v21;
      *(_DWORD *)(v1 + 8392) = 0;
    }
    else
    {
      v7 = v6 - 1;
      v8 = *(__m128i **)(v1 + 8376);
      v9 = 16 * v6;
      v35 = v7;
      v10 = (__m128i *)((char *)v8 + v9);
    }
    v11 = *(_DWORD *)(v5 + 12);
    v12 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)v4);
    v13 = 16LL * (v11 & v35);
    v14 = &v8[(unsigned __int64)v13 / 0x10];
    if ( v13 != v9 )
    {
      v15 = &v8[(unsigned __int64)v13 / 0x10];
      v16 = nullptr;
      while ( 1 )
      {
        v17 = v15->m128i_i64[0];
        if ( v15->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v17 + 12) == v11 && v5 == v17 )
          {
            *v15 = v12;
            goto LABEL_5;
          }
        }
        else
        {
          if ( !v17 )
          {
            if ( v16 )
              goto LABEL_50;
            v16 = v15;
            goto LABEL_51;
          }
          v16 = v15;
        }
        if ( ++v15 == v10 )
          goto LABEL_21;
      }
    }
    v16 = nullptr;
    while ( 1 )
    {
LABEL_21:
      if ( v14 == v8 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v18 = v8->m128i_i64[0];
      if ( v8->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v18 + 12) == v11 && v5 == v18 )
      {
        *v8 = v12;
        goto LABEL_5;
      }
LABEL_20:
      ++v8;
    }
    if ( v18 )
    {
      v16 = v8;
      goto LABEL_20;
    }
    if ( v16 )
LABEL_50:
      --*(_DWORD *)(v1 + 8392);
    else
      v16 = v8;
LABEL_51:
    *v16 = v12;
    ++*(_DWORD *)(v1 + 8388);
LABEL_5:
    if ( v3 != ++v2 )
      continue;
    return v1 + 8376;
  }
}

