__int64 __fastcall sub_C07FE0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rbx
  void *v20; // rdi
  const __m128i *v21; // rbp
  __int64 v22; // rax
  __m128i v23; // xmm0
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rdx
  __m128i *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // [rsp+0h] [rbp-78h]
  unsigned int v32; // [rsp+Ch] [rbp-6Ch]
  __m128i v33; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __m128i v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+38h] [rbp-40h]

  v10 = a1 + 80;
  v33.m128i_i64[1] = a3;
  v33.m128i_i64[0] = a2;
  v11 = sub_A2B7A0((__int64)&v33);
  v12 = *(_QWORD *)(a1 + 88);
  if ( !v12 )
    goto LABEL_12;
  do
  {
    while ( a4 <= *(_QWORD *)(v12 + 32) && (a4 != *(_QWORD *)(v12 + 32) || v11 <= *(_DWORD *)(v12 + 40)) )
    {
      v10 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_8;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v12 );
LABEL_8:
  if ( a1 + 80 == v10 || a4 < *(_QWORD *)(v10 + 32) || a4 == *(_QWORD *)(v10 + 32) && v11 < *(_DWORD *)(v10 + 40) )
  {
LABEL_12:
    v32 = v11;
    v31 = v10;
    v13 = operator new(0x68u);
    *(_BYTE *)(v13 + 52) &= ~1u;
    v10 = v13;
    *(_QWORD *)(v13 + 32) = a4;
    *(_DWORD *)(v13 + 40) = v32;
    *(_DWORD *)(v13 + 48) = 0;
    v14 = sub_C07E90((_QWORD *)(a1 + 72), v31, v13 + 32);
    v15 = v14;
    if ( v16 )
    {
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 112);
    }
    else
    {
      if ( *(_DWORD *)(v10 + 48) > 1u )
        sub_A2BBA0((int *)(v10 + 48));
      v20 = (void *)v10;
      v10 = v15;
      operator delete(v20);
    }
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = v10 + 48;
  if ( *(_DWORD *)(a1 + 128) > *(_DWORD *)(v17 + 900) )
  {
    v36 = a5;
    v21 = (const __m128i *)&v34;
    v22 = *(unsigned int *)(v17 + 272);
    v23 = _mm_load_si128(&v33);
    v24 = *(unsigned int *)(v17 + 276);
    v34 = v18 & 0xFFFFFFFFFFFFFFF9LL | (2LL * a6);
    v25 = *(_QWORD *)(v17 + 264);
    v26 = v22 + 1;
    v35 = v23;
    v27 = (__m128i *)(v25 + 32 * v22);
    if ( v26 > v24 )
    {
      v28 = v17 + 264;
      v29 = v17 + 280;
      if ( v25 > (unsigned __int64)&v34 || v27 <= (__m128i *)&v34 )
      {
        sub_22134E0(v28, v29, v26, 32);
        v27 = (__m128i *)(*(_QWORD *)(v17 + 264) + 32LL * *(unsigned int *)(v17 + 272));
      }
      else
      {
        sub_22134E0(v28, v29, v26, 32);
        v30 = *(_QWORD *)(v17 + 264);
        v21 = (const __m128i *)((char *)&v34 + v30 - v25);
        v27 = (__m128i *)(v30 + 32LL * *(unsigned int *)(v17 + 272));
      }
    }
    *v27 = _mm_loadu_si128(v21);
    v27[1] = _mm_loadu_si128(v21 + 1);
    ++*(_DWORD *)(v17 + 272);
  }
  else if ( (unsigned int)sub_F41CF0(a5) )
  {
    **(_BYTE **)(*(_QWORD *)(a1 + 8) + 24LL) = 1;
  }
  return v18;
}

