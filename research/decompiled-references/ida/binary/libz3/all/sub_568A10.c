__int64 __fastcall sub_568A10(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r13
  unsigned int v3; // ebp
  int v4; // eax
  __int64 v5; // rbp
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  size_t v21; // r14
  __m128i *v22; // rax
  __m128i *v23; // r15
  __m128i *v24; // rdx
  const __m128i *v25; // rbx
  __m128i *v26; // rcx
  __int64 v27; // rax
  __m128i *v28; // rdx
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // [rsp+8h] [rbp-50h]
  int v32; // [rsp+8h] [rbp-50h]
  int v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 80);
  v3 = 2 * v1;
  if ( 3 * v1 < (unsigned int)(4 * (*(_DWORD *)(a1 + 68) + *(_DWORD *)(a1 + 72))) )
  {
    v21 = 16LL * v3;
    v22 = (__m128i *)sub_186B270(v21);
    v23 = v22;
    if ( v3 )
    {
      v24 = &v22[2 * (v1 & 0x7FFFFFFF)];
      do
      {
        v22->m128i_i64[0] = 0;
        v22 += 2;
        v22[-1].m128i_i64[0] = 0;
      }
      while ( v24 != v22 );
    }
    v25 = *(const __m128i **)(a1 + 56);
    v26 = (__m128i *)&v25[*(unsigned int *)(a1 + 64)];
    if ( v25 != v26 )
    {
      do
      {
        while ( v25->m128i_i32[1] != 2 )
        {
          if ( v26 == ++v25 )
            goto LABEL_39;
        }
        v27 = 16LL * (v25->m128i_i32[0] & (v3 - 1));
        v28 = &v23[(unsigned __int64)v27 / 0x10];
        if ( v21 == v27 )
        {
LABEL_43:
          if ( v23 == v28 )
          {
LABEL_50:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v29 = v23;
          while ( v29->m128i_i32[1] )
          {
            if ( v28 == ++v29 )
              goto LABEL_50;
          }
        }
        else
        {
          v29 = &v23[(unsigned __int64)v27 / 0x10];
          while ( v29->m128i_i32[1] )
          {
            if ( &v23[v21 / 0x10] == ++v29 )
              goto LABEL_43;
          }
        }
        v30 = _mm_loadu_si128(v25++);
        *v29 = v30;
      }
      while ( v26 != v25 );
LABEL_39:
      v26 = *(__m128i **)(a1 + 56);
    }
    if ( v26 )
      sub_186B220(v26);
    *(_QWORD *)(a1 + 56) = v23;
    *(_DWORD *)(a1 + 64) = v3;
    *(_DWORD *)(a1 + 72) = 0;
  }
  v4 = sub_17E8B20(v2 + **(_QWORD **)(a1 + 24), *(unsigned int *)(a1 + 32), 0);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = v4;
  v7 = *(unsigned int *)(a1 + 64);
  v8 = v7 - 1;
  v7 *= 16;
  v9 = v5 + v7;
  v10 = 16LL * (v6 & v8);
  v11 = v5 + v10;
  if ( v10 == v7 )
  {
    v13 = 0;
LABEL_12:
    if ( v5 == v11 )
    {
LABEL_52:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v16 = *(_DWORD *)(v5 + 4);
      if ( v16 == 2 )
      {
        if ( v6 == *(_DWORD *)v5 )
        {
          v17 = *(_QWORD *)(v5 + 8);
          v34 = v11;
          v32 = v6;
          v18 = memcmp(
                  (const void *)(v17 + **(_QWORD **)(a1 + 40)),
                  (const void *)(**(_QWORD **)(a1 + 40) + v2),
                  *(unsigned int *)(a1 + 48));
          v6 = v32;
          v11 = v34;
          if ( !v18 )
          {
            v2 = v17;
            goto LABEL_24;
          }
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( !v13 )
          {
            v13 = v5;
            goto LABEL_23;
          }
LABEL_22:
          --*(_DWORD *)(a1 + 72);
          goto LABEL_23;
        }
        v13 = v5;
      }
      v5 += 16;
      if ( v11 == v5 )
        goto LABEL_52;
    }
  }
  v12 = v5 + v10;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_DWORD *)(v12 + 4);
    if ( v14 != 2 )
      break;
    if ( v6 == *(_DWORD *)v12 )
    {
      v35 = v11;
      v33 = v6;
      v31 = *(_QWORD *)(v12 + 8);
      v15 = memcmp(
              (const void *)(v31 + **(_QWORD **)(a1 + 40)),
              (const void *)(**(_QWORD **)(a1 + 40) + v2),
              *(unsigned int *)(a1 + 48));
      v6 = v33;
      v11 = v35;
      if ( !v15 )
      {
        v2 = v31;
        goto LABEL_24;
      }
    }
LABEL_6:
    v12 += 16;
    if ( v9 == v12 )
      goto LABEL_12;
  }
  if ( v14 )
  {
    v13 = v12;
    goto LABEL_6;
  }
  if ( v13 )
    goto LABEL_22;
  v13 = v12;
LABEL_23:
  *(_DWORD *)v13 = v6;
  v19 = *(_DWORD *)(a1 + 68);
  *(_QWORD *)(v13 + 8) = v2;
  *(_DWORD *)(v13 + 4) = 2;
  *(_DWORD *)(a1 + 68) = v19 + 1;
LABEL_24:
  if ( *(_QWORD *)(a1 + 80) == v2 )
    *(_QWORD *)(a1 + 80) = 0xFFFFFFFFLL;
  return v2;
}

