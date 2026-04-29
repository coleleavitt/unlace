unsigned __int64 __fastcall sub_1CDF20(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 fchunk; // r15
  __m128i *v7; // rdi
  char *v8; // rbp
  __int64 v9; // r10
  __int64 v10; // rax
  signed __int64 v11; // rbx
  char *v12; // r9
  char *v13; // r14
  char *v14; // rax
  char *v15; // r9
  __int64 i; // rax
  char *v17; // rdx
  int v18; // r8d
  char *v19; // r9
  char *v20; // rbx
  char *v21; // rcx
  __int64 v22; // rdx
  __m128i *v23; // rax
  __int64 v24; // rsi
  signed __int64 v25; // r11
  __int64 v26; // r15
  unsigned __int64 v27; // r10
  signed __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 *v33; // r10
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  signed __int64 v40; // [rsp+8h] [rbp-70h]
  __int64 spd; // [rsp+10h] [rbp-68h]
  char *v42; // [rsp+18h] [rbp-60h]
  __m128i v43; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( !a2 || (fchunk = a2, *(char *)(a2 + 17) < 0) && (fchunk = get_fchunk()) == 0 || !*(_DWORD *)(fchunk + 68) )
  {
    spd = 0;
LABEL_6:
    v7 = (__m128i *)a1[149];
    v8 = (char *)sub_1CCFD0(v7, (__int64)v7[a1[150]].m128i_i64, a3);
    goto LABEL_7;
  }
  spd = get_spd();
  v13 = (char *)sub_1CCFD0(
                  *(_QWORD **)(fchunk + 72),
                  *(_QWORD *)(fchunk + 72) + 16LL * *(unsigned int *)(fchunk + 68),
                  a3);
  if ( v12 == v13 )
    goto LABEL_6;
  v14 = v12;
  v15 = v13;
  for ( i = (v14 - v13) >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v17 = &v15[16 * (i >> 1)];
      if ( a4 < *(_QWORD *)v17 )
        break;
      v15 = v17 + 16;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_21;
    }
  }
LABEL_21:
  v7 = (__m128i *)a1[149];
  v8 = (char *)sub_1CCFD0(v7, (__int64)v7[a1[150]].m128i_i64, a3);
  if ( v13 == v19 )
    goto LABEL_7;
  v20 = v13;
  while ( 1 )
  {
    v21 = v20;
    v20 += 16;
    if ( v20 == v19 )
      break;
    if ( *((_QWORD *)v20 - 2) >= *(_QWORD *)v20 )
    {
      v42 = v21;
      sub_3311F0((_DWORD)a1, *(_QWORD *)v20, 41, (_DWORD)v21, v18, (_DWORD)v19);
      v21 = v42;
      v9 = a1[150];
      v7 = (__m128i *)a1[149];
      if ( v20 == v13 )
        goto LABEL_7;
      break;
    }
  }
  v22 = 16 * v9;
  v23 = &v7[v9];
  if ( v23 != (__m128i *)v8 )
  {
    v24 = *(_QWORD *)v8;
    if ( *(char **)(fchunk + 72) != v20 && *((_QWORD *)v20 - 2) == a4 )
    {
      if ( a4 == v24 )
      {
        v20 = v21;
      }
      else if ( v23 != (__m128i *)(v8 + 16) && *((_QWORD *)v8 + 2) == a4 )
      {
        v20 = v21;
      }
    }
    if ( a3 == v24 && *(_QWORD *)v13 >= a3 )
    {
      v8 += 16;
      if ( *(_QWORD *)v13 == a3 )
        v13 += 16;
    }
  }
  v25 = v20 - v13;
  v26 = (v20 - v13) >> 4;
  if ( !v26 )
  {
LABEL_7:
    if ( v9 )
      goto LABEL_8;
LABEL_35:
    v30 = v9 + 1;
    v43.m128i_i64[0] = a3;
    v43.m128i_i64[1] = spd;
    v31 = a1[151];
    if ( &v43 >= v7 && &v43 < &v7[v31] )
    {
      if ( v31 < v30 )
      {
        v38 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v9 + 1, 16);
        v9 = a1[150];
        a1[149] = v38;
        v7 = (__m128i *)v38;
      }
      v33 = (unsigned __int64 *)&v7[v9];
      *v33 = a3;
      v33[1] = spd;
    }
    else
    {
      if ( v31 < v30 )
      {
        v34 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v9 + 1, 16);
        v9 = a1[150];
        a1[149] = v34;
        v7 = (__m128i *)v34;
      }
      v7[v9] = _mm_load_si128(&v43);
    }
    goto LABEL_40;
  }
  v27 = v26 + v9;
  v28 = v8 - (char *)v7;
  if ( a1[151] < v27 )
  {
    v35 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v27, 16);
    v28 = v8 - (char *)v7;
    v25 = v20 - v13;
    v36 = a1[150];
    a1[149] = v35;
    v8 = (char *)(v35 + v8 - (char *)v7);
    v22 = 16 * v36;
  }
  v40 = v28;
  memmove(&v8[v25], v8, v22 - v28);
  v29 = 0;
  if ( v13 != v20 )
  {
    do
    {
      *(__m128i *)&v8[v29] = _mm_loadu_si128((const __m128i *)&v13[v29]);
      v29 += 16;
    }
    while ( v29 != v20 - v13 );
  }
  v7 = (__m128i *)a1[149];
  v9 = a1[150] + v26;
  a1[150] = v9;
  v8 = &v7->m128i_i8[v40];
  if ( !v9 )
    goto LABEL_35;
LABEL_8:
  v10 = v9;
  if ( v8 == (char *)&v7[v9] )
  {
    if ( a3 == v7[v10 - 1].m128i_i64[0] )
      return v44 - __readfsqword(0x28u);
    goto LABEL_35;
  }
  if ( *(_QWORD *)v8 != a3 )
  {
    if ( v8 == (char *)v7 )
    {
      v11 = 0;
      goto LABEL_13;
    }
    if ( *((_QWORD *)v8 - 2) != a3 )
    {
      v11 = v8 - (char *)v7;
LABEL_13:
      if ( a1[151] < (unsigned __int64)(v9 + 1) )
      {
        v37 = qvector_reserve((__int64)(a1 + 149), (__int64)v7, v9 + 1, 16);
        v9 = a1[150];
        a1[149] = v37;
        v8 = (char *)(v37 + v11);
      }
      memmove(v8 + 16, v8, 16 * v9 - v11);
      *(_QWORD *)v8 = a3;
      *((_QWORD *)v8 + 1) = spd;
LABEL_40:
      ++a1[150];
      return v44 - __readfsqword(0x28u);
    }
    if ( spd != *((_QWORD *)v8 - 1) )
    {
      if ( v8 - 16 == (char *)v7 )
      {
        memmove(v7, v8, v10 * 16 - 16);
        --a1[150];
      }
      else
      {
        *((_QWORD *)v8 - 1) = spd;
      }
      v7 = (__m128i *)a1[149];
      if ( v8 - 16 == (char *)v7 )
      {
        v9 = a1[150];
        v8 = (char *)a1[149];
        v11 = 0;
        goto LABEL_13;
      }
    }
  }
  return v44 - __readfsqword(0x28u);
}
