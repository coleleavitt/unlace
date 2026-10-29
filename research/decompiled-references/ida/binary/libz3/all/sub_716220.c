__m128i *__fastcall sub_716220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 *v10; // rbp
  int v11; // esi
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v19; // rax
  int v20; // r10d
  __m128i *v21; // r8
  const __m128i *v22; // r15
  __m128i *v23; // r11
  __int64 v24; // rax
  __m128i *v25; // rdx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  size_t v28; // [rsp+8h] [rbp-70h]
  unsigned int v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+10h] [rbp-68h]
  size_t v31; // [rsp+10h] [rbp-68h]
  int v32; // [rsp+18h] [rbp-60h]
  __m128i v33; // [rsp+30h] [rbp-48h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v6 = *(unsigned int *)(a1 + 96);
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 104))) )
  {
    v30 = 2 * v6;
    v28 = 16LL * (unsigned int)(2 * v6);
    v19 = (__m128i *)sub_186B270(v28);
    v9 = v28;
    v20 = v30;
    v7 = (__int64 *)v19;
    v21 = &v19[v28 / 0x10];
    if ( v30 )
    {
      if ( (v28 & 0x10) == 0 || (*v19 = 0, ++v19, v21 != v19) )
      {
        do
        {
          *v19 = 0;
          v19 += 2;
          v19[-1] = 0;
        }
        while ( v21 != v19 );
      }
    }
    v22 = *(const __m128i **)(a1 + 88);
    v8 = v30 - 1;
    v10 = (__int64 *)v21;
    v23 = (__m128i *)&v22[*(unsigned int *)(a1 + 96)];
    if ( v22 != v23 )
    {
      do
      {
        while ( v22->m128i_i64[0] <= 1uLL )
        {
          if ( v23 == ++v22 )
            goto LABEL_37;
        }
        v24 = 16LL * (*(_DWORD *)(v22->m128i_i64[0] + 12) & v8);
        v25 = (__m128i *)&v7[(unsigned __int64)v24 / 8];
        if ( v28 == v24 )
        {
LABEL_41:
          if ( v7 == (__int64 *)v25 )
          {
LABEL_49:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v26 = (__m128i *)v7;
          while ( v26->m128i_i64[0] )
          {
            if ( v25 == ++v26 )
              goto LABEL_49;
          }
        }
        else
        {
          v26 = (__m128i *)&v7[(unsigned __int64)v24 / 8];
          while ( v26->m128i_i64[0] )
          {
            if ( v21 == ++v26 )
              goto LABEL_41;
          }
        }
        v27 = _mm_loadu_si128(v22++);
        *v26 = v27;
      }
      while ( v23 != v22 );
LABEL_37:
      v23 = *(__m128i **)(a1 + 88);
    }
    if ( v23 )
    {
      v32 = v30;
      v31 = v28;
      v29 = v20 - 1;
      sub_186B220(v23);
      v20 = v32;
      v9 = v31;
      v8 = v29;
    }
    *(_QWORD *)(a1 + 88) = v7;
    *(_DWORD *)(a1 + 96) = v20;
    *(_DWORD *)(a1 + 104) = 0;
  }
  else
  {
    v7 = *(__int64 **)(a1 + 88);
    v8 = v6 - 1;
    v9 = 16 * v6;
    v10 = (__int64 *)((char *)v7 + v9);
  }
  v11 = *(_DWORD *)(a3 + 12);
  v12 = 16LL * (v11 & v8);
  v13 = &v7[(unsigned __int64)v12 / 8];
  if ( v12 != v9 )
  {
    v14 = &v7[(unsigned __int64)v12 / 8];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v11 && a3 == v16 )
        {
          *v14 = a3;
          v14[1] = a2;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_47;
          v15 = v14;
          goto LABEL_48;
        }
        v15 = v14;
      }
      v14 += 2;
      if ( v14 == v10 )
        goto LABEL_18;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_18:
    if ( v13 == v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = *v7;
    if ( (unsigned __int64)*v7 <= 1 )
      break;
    if ( *(_DWORD *)(v17 + 12) == v11 && a3 == v17 )
    {
      *v7 = a3;
      v7[1] = a2;
      goto LABEL_23;
    }
LABEL_17:
    v7 += 2;
  }
  if ( v17 )
  {
    v15 = v7;
    goto LABEL_17;
  }
  if ( v15 )
LABEL_47:
    --*(_DWORD *)(a1 + 104);
  else
    v15 = v7;
LABEL_48:
  *v15 = a3;
  v15[1] = a2;
  ++*(_DWORD *)(a1 + 100);
LABEL_23:
  v33.m128i_i64[0] = a2;
  v33.m128i_i64[1] = a3;
  return sub_686B20(a1 + 112, &v33);
}

