_QWORD *__fastcall sub_568330(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v6; // rbp
  int v7; // r13d
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  size_t v21; // r15
  __m128i *v22; // rax
  __m128i *v23; // r13
  __m128i *v24; // rdx
  const __m128i *v25; // rbx
  __m128i *v26; // r8
  __int64 v27; // rax
  __m128i *v28; // rdx
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+8h] [rbp-50h]

  v3 = *(_DWORD *)(a1 + 40);
  v4 = 2 * v3;
  if ( 3 * v3 < (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48))) )
  {
    v21 = 16LL * v4;
    v22 = (__m128i *)sub_186B270(v21);
    v23 = v22;
    if ( v4 )
    {
      v24 = &v22[2 * (v3 & 0x7FFFFFFF)];
      do
      {
        v22->m128i_i64[0] = 0;
        v22 += 2;
        v22[-1].m128i_i64[0] = 0;
      }
      while ( v24 != v22 );
    }
    v25 = *(const __m128i **)(a1 + 32);
    v26 = (__m128i *)&v25[*(unsigned int *)(a1 + 40)];
    if ( v25 != v26 )
    {
      do
      {
        while ( v25->m128i_i32[1] != 2 )
        {
          if ( v26 == ++v25 )
            goto LABEL_36;
        }
        v27 = 16LL * (v25->m128i_i32[0] & (v4 - 1));
        v28 = &v23[(unsigned __int64)v27 / 0x10];
        if ( v21 == v27 )
        {
LABEL_41:
          if ( v23 == v28 )
          {
LABEL_48:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v29 = v23;
          while ( v29->m128i_i32[1] )
          {
            if ( v28 == ++v29 )
              goto LABEL_48;
          }
        }
        else
        {
          v29 = &v23[(unsigned __int64)v27 / 0x10];
          while ( v29->m128i_i32[1] )
          {
            if ( &v23[v21 / 0x10] == ++v29 )
              goto LABEL_41;
          }
        }
        v30 = _mm_loadu_si128(v25++);
        *v29 = v30;
      }
      while ( v26 != v25 );
LABEL_36:
      v26 = *(__m128i **)(a1 + 32);
    }
    if ( v26 )
      sub_186B220(v26);
    *(_QWORD *)(a1 + 32) = v23;
    *(_DWORD *)(a1 + 40) = v4;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v5 = sub_17E8B20(**(_QWORD **)a1 + *a2, *(unsigned int *)(a1 + 8), 0);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = v5;
  v8 = *(unsigned int *)(a1 + 40);
  v9 = v8 - 1;
  v8 *= 16;
  v10 = v6 + v8;
  v11 = 16LL * (v7 & v9);
  v12 = v6 + v11;
  if ( v11 == v8 )
  {
    v14 = 0;
LABEL_12:
    if ( v6 == v12 )
    {
LABEL_40:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v18 = *(_DWORD *)(v6 + 4);
      if ( v18 == 2 )
      {
        if ( v7 == *(_DWORD *)v6 )
        {
          v32 = v12;
          v19 = memcmp(
                  (const void *)(*(_QWORD *)(v6 + 8) + **(_QWORD **)(a1 + 16)),
                  (const void *)(**(_QWORD **)(a1 + 16) + *a2),
                  *(unsigned int *)(a1 + 24));
          v12 = v32;
          if ( !v19 )
          {
            *a3 = v6;
            return a3;
          }
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( !v14 )
          {
            v14 = v6;
            goto LABEL_23;
          }
LABEL_22:
          --*(_DWORD *)(a1 + 48);
          goto LABEL_23;
        }
        v14 = v6;
      }
      v6 += 16;
      if ( v12 == v6 )
        goto LABEL_40;
    }
  }
  v13 = v6 + v11;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_DWORD *)(v13 + 4);
    if ( v15 != 2 )
      break;
    if ( v7 == *(_DWORD *)v13 )
    {
      v33 = v10;
      v31 = v12;
      v16 = memcmp(
              (const void *)(*(_QWORD *)(v13 + 8) + **(_QWORD **)(a1 + 16)),
              (const void *)(**(_QWORD **)(a1 + 16) + *a2),
              *(unsigned int *)(a1 + 24));
      v12 = v31;
      v10 = v33;
      if ( !v16 )
      {
        *a3 = v13;
        return a3;
      }
    }
LABEL_6:
    v13 += 16;
    if ( v10 == v13 )
      goto LABEL_12;
  }
  if ( v15 )
  {
    v14 = v13;
    goto LABEL_6;
  }
  if ( v14 )
    goto LABEL_22;
  v14 = v13;
LABEL_23:
  v20 = *a2;
  *(_DWORD *)(v14 + 4) = 2;
  *(_DWORD *)v14 = v7;
  *(_QWORD *)(v14 + 8) = v20;
  ++*(_DWORD *)(a1 + 44);
  *a3 = v14;
  return a3;
}

