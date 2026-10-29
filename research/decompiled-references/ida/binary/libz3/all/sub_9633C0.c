void __fastcall sub_9633C0(unsigned __int64 *a1, unsigned __int64 *a2, char *a3, char *a4, __m128i *a5, __int64 **a6)
{
  __m128i *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // r8
  unsigned __int64 *v9; // rbx
  char *v10; // r11
  unsigned int v11; // r15d
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r12
  int v17; // edi
  int v18; // eax
  int v19; // esi
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 *i; // rax
  __int64 v23; // rdx
  unsigned int v24; // r14d
  int v25; // edi
  int v26; // eax
  int v27; // esi
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 *j; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 *v33; // rax
  unsigned __int64 v34; // rdx
  __int64 *v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+0h] [rbp-50h]

  v6 = a5;
  if ( a1 == a2 )
  {
    v38 = a4 - a3;
    v39 = (a4 - a3) >> 4;
    if ( v38 > 0 )
    {
      v40 = 0;
      v41 = -16 * v39;
      do
      {
        a5[v40 / 0x10 - 1] = _mm_loadu_si128((const __m128i *)&a4[v40 - 16]);
        v40 -= 16LL;
      }
      while ( v40 != v41 );
    }
    return;
  }
  if ( a3 == a4 )
    return;
  v7 = *((unsigned int *)a6 + 2);
  v8 = *a6;
  v9 = a2 - 2;
  v10 = a4 - 16;
  v11 = v7 - 1;
  v42 = 24 * v7;
  v12 = (__int64)&(*a6)[3 * v7];
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = *(_QWORD *)v10;
      v14 = *((_QWORD *)v10 + 1);
      v15 = *v9;
      v16 = v9[1];
      v17 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
      v18 = (*(_DWORD *)(v14 + 12) - v17) ^ (v17 << 8);
      v19 = (v18 - v17 + (v18 ^ ((v17 - v18) << 16))) ^ ((v17 - v18) << 10);
      v20 = 24LL * (v11 & v19);
      v21 = &v8[(unsigned __int64)v20 / 8];
      if ( v20 != v42 )
      {
        for ( i = &v8[(unsigned __int64)v20 / 8]; (__int64 *)v12 != i; i += 3 )
        {
          v23 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *((_DWORD *)i + 5) == v19 && v13 == v23 && v14 == i[1] )
            {
              v24 = *((_DWORD *)i + 4);
              goto LABEL_12;
            }
          }
          else if ( !v23 )
          {
            goto LABEL_11;
          }
        }
      }
      if ( v8 == v21 )
      {
LABEL_11:
        v24 = 0;
        goto LABEL_12;
      }
      v35 = v8;
      while ( 1 )
      {
        v36 = *v35;
        if ( (unsigned __int64)*v35 > 1 )
          break;
        if ( !v36 )
          goto LABEL_11;
LABEL_41:
        v35 += 3;
        if ( v21 == v35 )
          goto LABEL_11;
      }
      if ( *((_DWORD *)v35 + 5) != v19 || v13 != v36 || v14 != v35[1] )
        goto LABEL_41;
      v24 = *((_DWORD *)v35 + 4);
LABEL_12:
      v25 = *(_DWORD *)(v15 + 12);
      v26 = (*(_DWORD *)(v16 + 12) - v25) ^ (v25 << 8);
      v27 = (v26 - v25 + (v26 ^ ((v25 - v26) << 16))) ^ ((v25 - v26) << 10);
      v28 = 24LL * (v27 & v11);
      v29 = &v8[(unsigned __int64)v28 / 8];
      if ( v42 != v28 )
      {
        for ( j = &v8[(unsigned __int64)v28 / 8]; (__int64 *)v12 != j; j += 3 )
        {
          v31 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 5) == v27 && v15 == v31 && v16 == j[1] )
            {
              v32 = *((_DWORD *)j + 4);
              goto LABEL_26;
            }
          }
          else if ( !v31 )
          {
            goto LABEL_19;
          }
        }
      }
      if ( v8 == v29 )
      {
LABEL_19:
        --v6;
        if ( !v24 )
          break;
        goto LABEL_20;
      }
      v33 = v8;
      while ( 1 )
      {
        v34 = *v33;
        if ( (unsigned __int64)*v33 > 1 )
          break;
        if ( !v34 )
          goto LABEL_19;
LABEL_33:
        v33 += 3;
        if ( v29 == v33 )
          goto LABEL_19;
      }
      if ( *((_DWORD *)v33 + 5) != v27 || v15 != v34 || v16 != v33[1] )
        goto LABEL_33;
      v32 = *((_DWORD *)v33 + 4);
LABEL_26:
      --v6;
      if ( v32 < v24 )
      {
LABEL_20:
        *v6 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v16);
        if ( v9 != a1 )
        {
          v9 -= 2;
          continue;
        }
        if ( v10 + 16 - a3 > 0 )
        {
          v37 = 0;
          do
          {
            v6[v37 - 1] = _mm_loadu_si128((const __m128i *)&v10[v37 * 16]);
            --v37;
          }
          while ( -1 * ((v10 + 16 - a3) >> 4) != v37 );
        }
        return;
      }
      break;
    }
    *v6 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v14);
    if ( v10 != a3 )
    {
      v10 -= 16;
      continue;
    }
    break;
  }
}

