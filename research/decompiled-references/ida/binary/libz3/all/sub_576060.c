int __fastcall sub_576060(__int64 a1, __int64 *a2)
{
  int v2; // ebx
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
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  size_t v18; // r14
  __m128i *v19; // rax
  __m128i *v20; // r15
  __m128i *v21; // rdx
  const __m128i *v22; // rbx
  __m128i *v23; // rcx
  __int64 v24; // rax
  __m128i *v25; // rdx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+10h] [rbp-48h]
  int v32; // [rsp+10h] [rbp-48h]
  int v33; // [rsp+18h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 40);
  v3 = 2 * v2;
  if ( 3 * v2 < (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48))) )
  {
    v18 = 16LL * v3;
    v19 = (__m128i *)sub_186B270(v18);
    v20 = v19;
    if ( v3 )
    {
      v21 = &v19[2 * (v2 & 0x7FFFFFFF)];
      do
      {
        v19->m128i_i64[0] = 0;
        v19 += 2;
        v19[-1].m128i_i64[0] = 0;
      }
      while ( v21 != v19 );
    }
    v22 = *(const __m128i **)(a1 + 32);
    v23 = (__m128i *)&v22[*(unsigned int *)(a1 + 40)];
    if ( v22 != v23 )
    {
      do
      {
        while ( v22->m128i_i32[1] != 2 )
        {
          if ( v23 == ++v22 )
            goto LABEL_36;
        }
        v24 = 16LL * (v22->m128i_i32[0] & (v3 - 1));
        v25 = &v20[(unsigned __int64)v24 / 0x10];
        if ( v18 == v24 )
        {
LABEL_41:
          if ( v20 == v25 )
          {
LABEL_48:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v26 = v20;
          while ( v26->m128i_i32[1] )
          {
            if ( v25 == ++v26 )
              goto LABEL_48;
          }
        }
        else
        {
          v26 = &v20[(unsigned __int64)v24 / 0x10];
          while ( v26->m128i_i32[1] )
          {
            if ( &v20[v18 / 0x10] == ++v26 )
              goto LABEL_41;
          }
        }
        v27 = _mm_loadu_si128(v22++);
        *v26 = v27;
      }
      while ( v23 != v22 );
LABEL_36:
      v23 = *(__m128i **)(a1 + 32);
    }
    if ( v23 )
      sub_186B220(v23);
    *(_QWORD *)(a1 + 32) = v20;
    *(_DWORD *)(a1 + 40) = v3;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v4 = sub_17E8B20(**(_QWORD **)a1 + *a2, *(unsigned int *)(a1 + 8), 0);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = v4;
  v7 = *(unsigned int *)(a1 + 40);
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
LABEL_40:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v16 = *(_DWORD *)(v5 + 4);
      if ( v16 == 2 )
      {
        if ( v6 == *(_DWORD *)v5 )
        {
          v17 = *a2;
          v32 = v6;
          v30 = v11;
          LODWORD(v15) = memcmp(
                           (const void *)(*(_QWORD *)(v5 + 8) + **(_QWORD **)(a1 + 16)),
                           (const void *)(**(_QWORD **)(a1 + 16) + *a2),
                           *(unsigned int *)(a1 + 24));
          v11 = v30;
          v6 = v32;
          if ( !(_DWORD)v15 )
          {
            *(_QWORD *)(v5 + 8) = v17;
            *(_DWORD *)(v5 + 4) = 2;
            return v15;
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
          --*(_DWORD *)(a1 + 48);
          goto LABEL_23;
        }
        v13 = v5;
      }
      v5 += 16;
      if ( v11 == v5 )
        goto LABEL_40;
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
      v33 = v6;
      v31 = v11;
      v29 = *a2;
      LODWORD(v15) = memcmp(
                       (const void *)(*(_QWORD *)(v12 + 8) + **(_QWORD **)(a1 + 16)),
                       (const void *)(**(_QWORD **)(a1 + 16) + *a2),
                       *(unsigned int *)(a1 + 24));
      v11 = v31;
      v6 = v33;
      if ( !(_DWORD)v15 )
      {
        *(_QWORD *)(v12 + 8) = v29;
        *(_DWORD *)(v12 + 4) = 2;
        return v15;
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
  v15 = *a2;
  *(_DWORD *)(v13 + 4) = 2;
  *(_DWORD *)v13 = v6;
  *(_QWORD *)(v13 + 8) = v15;
  ++*(_DWORD *)(a1 + 44);
  return v15;
}

