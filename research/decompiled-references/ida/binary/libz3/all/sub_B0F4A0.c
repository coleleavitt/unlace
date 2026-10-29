__int64 __fastcall sub_B0F4A0(unsigned int *a1, __int64 a2, char a3)
{
  __int64 v6; // r13
  __int64 result; // rax
  unsigned int *v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int *v14; // rdi
  unsigned int *v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // r8d
  __int64 v18; // r9
  unsigned int *v19; // rcx
  unsigned __int64 v20; // r10
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned int v23; // esi
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // r14
  unsigned int v29; // edx
  __int64 v30; // r12
  __int64 v31; // r14
  unsigned int v32; // edx

  v6 = *(_QWORD *)(a2 + 16);
  sub_B05780(a2, (__int64)a1);
  result = *a1;
  v8 = *((unsigned int **)a1 + 1);
  if ( a3 != (*(_BYTE *)a1 & 1) )
  {
    v9 = a1[4];
    if ( v8 )
      goto LABEL_3;
LABEL_41:
    if ( !(_DWORD)v9 )
      return result;
    goto LABEL_42;
  }
  result = (unsigned int)result ^ 1;
  *a1 = result;
  if ( !v8 )
  {
    LODWORD(v9) = 1 - a1[4];
    a1[4] = v9;
    goto LABEL_41;
  }
  v23 = *(v8 - 1);
  if ( !v23 )
  {
    v9 = 1 - a1[4];
    a1[4] = v9;
LABEL_3:
    v10 = *(v8 - 1);
    if ( (_DWORD)v9 != v10 )
      goto LABEL_4;
LABEL_34:
    if ( (_DWORD)v9 )
    {
      v27 = 4 * v9;
      v28 = 0;
      do
      {
        result = *(_QWORD *)(v6 + 8984);
        if ( qword_1C7ED18 != result )
          break;
        if ( *(_BYTE *)(v6 + 2416) )
          break;
        v29 = *(_DWORD *)(*((_QWORD *)a1 + 1) + v28);
        v28 += 4;
        result = sub_B056B0(a2, (__int64)a1, v29);
      }
      while ( v28 != v27 );
    }
    return result;
  }
  if ( v23 - 1 <= 2 )
  {
    result = 0;
  }
  else
  {
    result = (__int64)v8;
    v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
    do
    {
      v25 = _mm_loadu_si128((const __m128i *)result);
      result += 16;
      *(__m128i *)(result - 16) = _mm_xor_si128(v25, v24);
    }
    while ( &v8[4 * (v23 >> 2)] != (unsigned int *)result );
    if ( (v23 & 3) == 0 )
      goto LABEL_33;
    result = v23 & 0xFFFFFFFC;
  }
  v8[(unsigned int)result] ^= 1u;
  v26 = (unsigned int)(result + 1);
  if ( (unsigned int)v26 < v23 )
  {
    result = (unsigned int)(result + 2);
    v8[v26] ^= 1u;
    if ( (unsigned int)result < v23 )
      v8[result] ^= 1u;
  }
LABEL_33:
  v9 = v23 - a1[4] + 1;
  a1[4] = v9;
  v10 = *(v8 - 1);
  if ( (_DWORD)v9 == v10 )
    goto LABEL_34;
LABEL_4:
  if ( !v10 )
  {
    if ( !(_DWORD)v9 )
      return result;
LABEL_42:
    v17 = *v8;
    return sub_B0F1A0((__int64)a1, a2, v17);
  }
  v11 = *(_QWORD *)(v6 + 8848);
  result = 0;
  v12 = 0;
  do
  {
    v13 = v8[result];
    if ( *(_BYTE *)(v11 + v13) != 0xFF )
    {
      if ( (_DWORD)v12 != (_DWORD)result )
      {
        v14 = &v8[(unsigned int)v12];
        v8[result] = *v14;
        *v14 = v13;
      }
      v12 = (unsigned int)(v12 + 1);
    }
    ++result;
  }
  while ( v10 != result );
  if ( (unsigned int)v12 < (unsigned int)v9 )
  {
    v15 = &v8[v12];
    v16 = *v15;
    v17 = *v15;
    if ( (unsigned int)v9 < v10 )
    {
      v18 = *(_QWORD *)(v6 + 8872);
      v19 = &v8[(unsigned int)v9];
      v20 = (unsigned __int64)&v8[v10 - 1 - (unsigned int)v9 + 1 + (unsigned __int64)(unsigned int)v9];
      do
      {
        if ( (*(_DWORD *)(v18 + 16LL * (v16 >> 1) + 8) & 0xFFFFFFu) < (*(_DWORD *)(v18 + 16LL * (*v19 >> 1) + 8)
                                                                     & 0xFFFFFFu) )
        {
          *v15 = *v19;
          *v19 = v16;
          v16 = *v15;
          v17 = *v15;
        }
        ++v19;
      }
      while ( (unsigned int *)v20 != v19 );
    }
    return sub_B0F1A0((__int64)a1, a2, v17);
  }
  v21 = 0;
  if ( (_DWORD)v12 == (_DWORD)v9 )
  {
    if ( (_DWORD)v12 )
    {
      v30 = 4 * v12;
      v31 = 0;
      do
      {
        result = qword_1C7ED18;
        if ( *(_QWORD *)(v6 + 8984) != qword_1C7ED18 )
          break;
        if ( *(_BYTE *)(v6 + 2416) )
          break;
        v32 = *(_DWORD *)(*((_QWORD *)a1 + 1) + v31);
        v31 += 4;
        result = sub_B056B0(a2, (__int64)a1, v32);
      }
      while ( v30 != v31 );
    }
  }
  else
  {
    while ( 1 )
    {
      v22 = v21++;
      result = sub_B099C0(a2, v8[v22], (__int64)a1);
      if ( (unsigned int)v9 < v21 )
        break;
      v8 = *((unsigned int **)a1 + 1);
    }
  }
  return result;
}

