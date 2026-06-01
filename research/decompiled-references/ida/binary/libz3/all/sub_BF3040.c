__int64 __fastcall sub_BF3040(__int64 a1)
{
  int v2; // ecx
  const __m128i *v3; // r15
  __m128 v4; // xmm1
  __int64 v5; // rbp
  __m128 v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r14
  size_t v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 i; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // r14
  __int64 *v20; // r15
  __int64 *v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 *v25; // r15
  __int64 *v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 *v32; // r13
  __int64 *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v36; // r15
  __int64 *v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int v40; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v41; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+8h] [rbp-A0h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+10h] [rbp-98h] BYREF
  __int64 v45; // [rsp+18h] [rbp-90h] BYREF
  int v46[2]; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v49[2]; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+50h] [rbp-58h] BYREF
  __int64 v51; // [rsp+58h] [rbp-50h]
  __int64 v52; // [rsp+60h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 304);
  *(_QWORD *)v46 = v48;
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = (const __m128i *)(*(_QWORD *)(a1 + 320) + 56LL * **(unsigned int **)(a1 + 336));
    v4 = (__m128)_mm_loadu_si128(v3);
    v5 = v4.m128_u64[0];
    if ( v4.m128_u64[0] )
      ++*(_DWORD *)(v4.m128_u64[0] + 8);
    v6 = (__m128)_mm_loadu_si128(v3 + 1);
    v7 = v6.m128_u64[0];
    if ( v6.m128_u64[0] )
      ++*(_DWORD *)(v6.m128_u64[0] + 8);
    v8 = v3[2].m128i_i64[0];
    if ( v8 )
    {
      v50 = 0;
      v51 = 0;
      *(__m128 *)v48 = v4;
      *(__m128 *)v49 = v6;
      sub_BF3E00(&v50, &v3[2]);
      v5 = v48[0];
      v7 = v49[0];
      v8 = v50;
      v44 = v48[1];
      v45 = v49[1];
    }
    else
    {
      _mm_storeh_ps((double *)&v44, v4);
      _mm_storeh_ps((double *)&v45, v6);
    }
    v9 = v3[2].m128i_i64[1];
    if ( v9 )
    {
      v10 = 4LL * *(unsigned int *)(v9 - 8) + 8;
      v40 = *(_DWORD *)(v9 - 8);
      LODWORD(v47) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(_DWORD *)(v9 - 4)));
      v11 = (_QWORD *)sub_186B270(v10);
      v12 = v3[2].m128i_i64[1];
      v6.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v47)).m128i_u64[0];
      *v11 = v6.m128_u64[0];
      if ( v12 )
      {
        v13 = 4LL * *(unsigned int *)(v12 - 4);
        if ( v13 )
        {
          for ( i = 0; i != v13; i += 4 )
            *(_DWORD *)((char *)v11 + i + 8) = *(_DWORD *)(v12 + i);
        }
      }
      v9 = (__int64)(v11 + 1);
    }
    v15 = v3[3].m128i_i64[0];
    v48[0] = v5;
    v49[0] = v7;
    v52 = v15;
    v50 = v8;
    v48[1] = v44;
    v51 = v9;
    v49[1] = v45;
    v16 = sub_BF0840((_QWORD *)a1, *(_DWORD ***)v46, *(double *)v6.m128_u64);
    if ( !v16 )
      break;
    v17 = a1 + 304;
    if ( v16 != 1 )
    {
      sub_BF41E0(v17, 0);
      break;
    }
    sub_BF41E0(v17, 0);
    if ( v9 )
      sub_186B220((void *)(v9 - 8));
    if ( v8 )
    {
      v18 = *(unsigned int *)(v8 - 4);
      if ( (_DWORD)v18 )
      {
        v19 = (__int64 *)v8;
        v47 = v8 + 32 * v18;
        do
        {
          v20 = (__int64 *)v19[3];
          if ( v20 )
          {
            v21 = &v20[*((unsigned int *)v20 - 1)];
            if ( v20 >= v21 )
              goto LABEL_29;
            do
            {
              while ( 1 )
              {
                v22 = *v20;
                if ( *v20 )
                {
                  v23 = v19[2];
                  v24 = (*(_DWORD *)(v22 + 8))-- == 1;
                  if ( v24 )
                    break;
                }
                if ( ++v20 >= v21 )
                  goto LABEL_28;
              }
              v41 = (unsigned __int64)v21;
              ++v20;
              sub_15D7BC0(v23, v22);
              v21 = (__int64 *)v41;
            }
            while ( (unsigned __int64)v20 < v41 );
LABEL_28:
            v20 = (__int64 *)v19[3];
            if ( v20 )
LABEL_29:
              sub_186B220(v20 - 1);
          }
          v25 = (__int64 *)v19[1];
          if ( v25 )
          {
            v26 = &v25[*((unsigned int *)v25 - 1)];
            if ( v25 >= v26 )
              goto LABEL_38;
            do
            {
              while ( 1 )
              {
                v27 = *v25;
                if ( *v25 )
                {
                  v28 = *v19;
                  v24 = (*(_DWORD *)(v27 + 8))-- == 1;
                  if ( v24 )
                    break;
                }
                if ( ++v25 >= v26 )
                  goto LABEL_37;
              }
              v42 = (unsigned __int64)v26;
              ++v25;
              sub_15D7BC0(v28, v27);
              v26 = (__int64 *)v42;
            }
            while ( (unsigned __int64)v25 < v42 );
LABEL_37:
            v25 = (__int64 *)v19[1];
            if ( v25 )
LABEL_38:
              sub_186B220(v25 - 1);
          }
          v19 += 4;
        }
        while ( v19 != (__int64 *)v47 );
      }
      sub_186B220((void *)(v8 - 8));
    }
    if ( v7 )
    {
      v24 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v45, v7);
    }
    if ( v5 )
    {
      v24 = (*(_DWORD *)(v5 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v44, v5);
    }
    if ( !*(_DWORD *)(a1 + 304) )
      return 0;
  }
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  if ( v8 )
  {
    v30 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v30 )
    {
      v31 = (__int64 *)v8;
      v43 = v8 + 32 * v30;
      do
      {
        v32 = (__int64 *)v31[3];
        if ( v32 )
        {
          v33 = &v32[*((unsigned int *)v32 - 1)];
          if ( v32 >= v33 )
            goto LABEL_63;
          do
          {
            while ( 1 )
            {
              v34 = *v32;
              if ( *v32 )
              {
                v35 = v31[2];
                v24 = (*(_DWORD *)(v34 + 8))-- == 1;
                if ( v24 )
                  break;
              }
              if ( ++v32 >= v33 )
                goto LABEL_62;
            }
            sub_15D7BC0(v35, v34);
            ++v32;
          }
          while ( v32 < v33 );
LABEL_62:
          v32 = (__int64 *)v31[3];
          if ( v32 )
LABEL_63:
            sub_186B220(v32 - 1);
        }
        v36 = (__int64 *)v31[1];
        if ( v36 )
        {
          v37 = &v36[*((unsigned int *)v36 - 1)];
          if ( v36 >= v37 )
            goto LABEL_72;
          do
          {
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 )
              {
                v39 = *v31;
                v24 = (*(_DWORD *)(v38 + 8))-- == 1;
                if ( v24 )
                  break;
              }
              if ( ++v36 >= v37 )
                goto LABEL_71;
            }
            sub_15D7BC0(v39, v38);
            ++v36;
          }
          while ( v36 < v37 );
LABEL_71:
          v36 = (__int64 *)v31[1];
          if ( v36 )
LABEL_72:
            sub_186B220(v36 - 1);
        }
        v31 += 4;
      }
      while ( (__int64 *)v43 != v31 );
    }
    sub_186B220((void *)(v8 - 8));
  }
  if ( v7 )
  {
    v24 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v45, v7);
  }
  if ( v5 )
  {
    v24 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v44, v5);
  }
  return 1;
}

