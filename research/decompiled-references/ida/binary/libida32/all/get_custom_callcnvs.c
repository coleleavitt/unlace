__int64 __fastcall get_custom_callcnvs(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // r14
  __int64 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r13d
  size_t v16; // r15
  void *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h]

  v20 = qword_2CA1698;
  v6 = *(_QWORD *)(qword_2CA1698 + 1368);
  v7 = *(_QWORD *)(v6 + 48);
  result = *(_QWORD *)(v6 + 56);
  v9 = v7 + 32 * result;
  if ( v9 != v7 )
  {
    v10 = a2;
    do
    {
      v16 = *(_QWORD *)(v7 + 8);
      v17 = nullptr;
      if ( v16 )
      {
        v17 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 8), a2, a3, a4, a5, a6);
        memcpy(v17, *(const void **)v7, v16);
      }
      v11 = a1[1];
      v12 = *a1;
      if ( a1[2] < (unsigned __int64)(v11 + 1) )
      {
        v19 = qvector_reserve(a1, v12, v11 + 1, 24);
        *a1 = v19;
        v11 = a1[1];
        v12 = v19;
      }
      v13 = v12 + 24 * v11;
      *(_QWORD *)v13 = v17;
      *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      ++a1[1];
      v14 = v10[1];
      v15 = *(_DWORD *)(v7 + 24);
      a2 = (__int64 *)*v10;
      a3 = v14 + 1;
      if ( v10[2] < (unsigned __int64)(v14 + 1) )
      {
        v18 = qvector_reserve(v10, a2, a3, 4);
        *v10 = v18;
        a2 = (__int64 *)v18;
        v14 = v10[1];
      }
      v7 += 32;
      *((_DWORD *)a2 + v14) = v15;
      ++v10[1];
    }
    while ( v9 != v7 );
    return *(_QWORD *)(*(_QWORD *)(v20 + 1368) + 56LL);
  }
  return result;
}

