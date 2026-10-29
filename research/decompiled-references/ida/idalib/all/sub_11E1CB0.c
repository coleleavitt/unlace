_BYTE *__fastcall sub_11E1CB0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rdi
  _BYTE *result; // rax
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __m128i *v20; // rax
  __m128i *v21; // rdx
  _BYTE *v22; // rdi
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rdi
  void *v27[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v28[56]; // [rsp+10h] [rbp-38h] BYREF

  sub_1134980(a1, (__int64)a2, a3, a5);
  *(_QWORD *)a1 = off_2C38758;
  sub_11DDAD0((_QWORD *)(a1 + 2384), a2, a4, a5);
  if ( !*(_BYTE *)(a1 + 2392) )
    goto LABEL_2;
  v15 = *(_BYTE **)(a1 + 2432);
  v16 = (__int64)&v15[*(_QWORD *)(a1 + 2440)];
  v27[0] = v28;
  sub_11D7980(v27, v15, v16);
  v17 = *(unsigned int *)(a1 + 1160);
  v18 = v17 + 1;
  if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v25 = *(_QWORD *)(a1 + 1152);
    if ( v25 > (unsigned __int64)v27 )
    {
      sub_A8C1F0(a1 + 1152, v18);
      v19 = *(_QWORD *)(a1 + 1152);
      v17 = *(unsigned int *)(a1 + 1160);
      v20 = (__m128i *)v27;
    }
    else
    {
      v26 = a1 + 1152;
      if ( (unsigned __int64)v27 < v25 + 32 * v17 )
      {
        sub_A8C1F0(v26, v18);
        v19 = *(_QWORD *)(a1 + 1152);
        v17 = *(unsigned int *)(a1 + 1160);
        v20 = (__m128i *)((char *)v27 + v19 - v25);
      }
      else
      {
        sub_A8C1F0(v26, v18);
        v19 = *(_QWORD *)(a1 + 1152);
        v17 = *(unsigned int *)(a1 + 1160);
        v20 = (__m128i *)v27;
      }
    }
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 1152);
    v20 = (__m128i *)v27;
  }
  v21 = (__m128i *)(v19 + 32 * v17);
  v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
  if ( (__m128i *)v20->m128i_i64[0] == &v20[1] )
  {
    v21[1] = _mm_loadu_si128(v20 + 1);
  }
  else
  {
    v21->m128i_i64[0] = v20->m128i_i64[0];
    v21[1].m128i_i64[0] = v20[1].m128i_i64[0];
  }
  v21->m128i_i64[1] = v20->m128i_i64[1];
  v20->m128i_i64[0] = (__int64)v20[1].m128i_i64;
  v22 = v27[0];
  v20->m128i_i64[1] = 0;
  v20[1].m128i_i8[0] = 0;
  v8 = *(_DWORD *)(a1 + 1160) + 1;
  *(_DWORD *)(a1 + 1160) = v8;
  if ( v22 != v28 )
  {
    operator delete(v22);
LABEL_2:
    v8 = *(_DWORD *)(a1 + 1160);
  }
  v9 = v8;
  v10 = *(_QWORD *)(a1 + 1152);
  v11 = v9 + 1;
  v12 = *(_QWORD *)(a1 + 8) + 104LL;
  v13 = (_QWORD *)(v10 + 32 * v9);
  if ( v11 > *(unsigned int *)(a1 + 1164) )
  {
    if ( v10 > v12 || (unsigned __int64)v13 <= v12 )
    {
      sub_A8C1F0(a1 + 1152, v11);
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 1152) + 32LL * *(unsigned int *)(a1 + 1160));
    }
    else
    {
      v23 = v12 - v10;
      sub_A8C1F0(a1 + 1152, v11);
      v24 = *(_QWORD *)(a1 + 1152);
      v12 = v24 + v23;
      v13 = (_QWORD *)(v24 + 32LL * *(unsigned int *)(a1 + 1160));
    }
  }
  *v13 = v13 + 2;
  result = sub_11D7A40(v13, *(_BYTE **)v12, *(_QWORD *)v12 + *(_QWORD *)(v12 + 8));
  ++*(_DWORD *)(a1 + 1160);
  return result;
}
