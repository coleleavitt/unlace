__int64 __fastcall sub_C2BD20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  _BOOL8 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rbx
  void *v22; // rdi
  const __m128i *v23; // rbp
  __int64 v24; // rax
  __m128i v25; // xmm0
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rdx
  __m128i *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // [rsp+0h] [rbp-78h]
  unsigned int v35; // [rsp+Ch] [rbp-6Ch]
  __m128i v36; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  __m128i v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+38h] [rbp-40h]

  v10 = a1 + 80;
  v11 = a1 + 80;
  v36.m128i_i64[1] = a3;
  v36.m128i_i64[0] = a2;
  v12 = sub_A4F4E0((__int64)&v36);
  v13 = *(_QWORD *)(a1 + 88);
  if ( !v13 )
    goto LABEL_12;
  do
  {
    while ( a4 <= *(_QWORD *)(v13 + 32) && (a4 != *(_QWORD *)(v13 + 32) || v12 <= *(_DWORD *)(v13 + 40)) )
    {
      v11 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
        goto LABEL_8;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v13 );
LABEL_8:
  if ( v10 == v11 || a4 < *(_QWORD *)(v11 + 32) || a4 == *(_QWORD *)(v11 + 32) && v12 < *(_DWORD *)(v11 + 40) )
  {
LABEL_12:
    v35 = v12;
    v34 = v11;
    v14 = operator new(0x68u);
    *(_BYTE *)(v14 + 52) &= ~1u;
    v11 = v14;
    *(_QWORD *)(v14 + 32) = a4;
    *(_DWORD *)(v14 + 40) = v35;
    *(_DWORD *)(v14 + 48) = 0;
    v15 = sub_C2BBD0((_QWORD *)(a1 + 72), v34, v14 + 32);
    v17 = v15;
    if ( v16 )
    {
      v18 = 1;
      if ( v10 != v16 && !v15 )
      {
        v30 = *(_QWORD *)(v16 + 32);
        if ( *(_QWORD *)(v11 + 32) >= v30 )
        {
          v18 = 0;
          if ( *(_QWORD *)(v11 + 32) == v30 )
            v18 = *(_DWORD *)(v11 + 40) < *(_DWORD *)(v16 + 40);
        }
      }
      std::_Rb_tree_insert_and_rebalance(v18, v11, v16, v10);
      ++*(_QWORD *)(a1 + 112);
    }
    else
    {
      if ( *(_DWORD *)(v11 + 48) > 1u )
        sub_A4F8E0((int *)(v11 + 48));
      v22 = (void *)v11;
      v11 = v17;
      operator delete(v22);
    }
  }
  v19 = *(_QWORD *)(a1 + 8);
  v20 = v11 + 48;
  if ( *(_DWORD *)(a1 + 128) > *(_DWORD *)(v19 + 900) )
  {
    v39 = a5;
    v23 = (const __m128i *)&v37;
    v24 = *(unsigned int *)(v19 + 272);
    v25 = _mm_load_si128(&v36);
    v26 = *(unsigned int *)(v19 + 276);
    v37 = v20 & 0xFFFFFFFFFFFFFFF9LL | (2LL * a6);
    v27 = *(_QWORD *)(v19 + 264);
    v28 = v24 + 1;
    v38 = v25;
    v29 = (__m128i *)(v27 + 32 * v24);
    if ( v28 > v26 )
    {
      v31 = v19 + 264;
      v32 = v19 + 280;
      if ( v27 > (unsigned __int64)&v37 || v29 <= (__m128i *)&v37 )
      {
        sub_2237220(v31, v32, v28, 32);
        v29 = (__m128i *)(*(_QWORD *)(v19 + 264) + 32LL * *(unsigned int *)(v19 + 272));
      }
      else
      {
        sub_2237220(v31, v32, v28, 32);
        v33 = *(_QWORD *)(v19 + 264);
        v23 = (const __m128i *)((char *)&v37 + v33 - v27);
        v29 = (__m128i *)(v33 + 32LL * *(unsigned int *)(v19 + 272));
      }
    }
    *v29 = _mm_loadu_si128(v23);
    v29[1] = _mm_loadu_si128(v23 + 1);
    ++*(_DWORD *)(v19 + 272);
  }
  else if ( (unsigned int)sub_F65A30(a5) )
  {
    **(_BYTE **)(*(_QWORD *)(a1 + 8) + 24LL) = 1;
  }
  return v20;
}
