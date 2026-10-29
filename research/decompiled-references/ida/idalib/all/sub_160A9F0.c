__int64 __fastcall sub_160A9F0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rbp
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  const void *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  int v23; // [rsp+Ch] [rbp-3Ch]

  v4 = *(__int64 **)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = ((__int64)(*(_QWORD *)(a1 + 72) - (_QWORD)v4) >> 3) + 1;
  if ( v5 <= 2 * (a2 + v6) )
  {
    v16 = a2;
    if ( v5 >= a2 )
      v16 = *(_QWORD *)(a1 + 8);
    v17 = v5 + v16 + 2;
    if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v23 = a3;
    v22 = a2 + v6;
    v18 = operator new(8 * v17);
    v19 = *(const void **)(a1 + 40);
    v20 = 8 * ((v17 - (a2 + v6)) >> 1);
    if ( (_BYTE)v23 )
      v20 += 8 * a2;
    v21 = *(_QWORD *)(a1 + 72) + 8LL;
    v9 = (__int64 *)(v18 + v20);
    if ( (const void *)v21 != v19 )
      memmove(v9, v19, v21 - (_QWORD)v19);
    v10 = v6;
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = v18;
    *(_QWORD *)(a1 + 8) = v17;
  }
  else
  {
    v7 = 8 * ((v5 - (a2 + v6)) >> 1);
    if ( (_BYTE)a3 )
      v7 += 8 * a2;
    v8 = *(_QWORD *)(a1 + 72) + 8LL;
    v9 = (__int64 *)(*(_QWORD *)a1 + v7);
    v10 = v6;
    v11 = v8 - (_QWORD)v4;
    if ( v4 <= v9 )
    {
      if ( v4 != (__int64 *)v8 )
        memmove((char *)v9 + v10 * 8 - v11, v4, v11);
    }
    else if ( v4 != (__int64 *)v8 )
    {
      memmove(v9, v4, v11);
    }
  }
  v12 = *v9;
  *(_QWORD *)(a1 + 40) = v9;
  v22 = v12 + 512;
  v13 = &v9[v10 - 1];
  *(_QWORD *)(a1 + 72) = v13;
  *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)&v22);
  v14 = *v13;
  *(_QWORD *)(a1 + 56) = v14;
  result = v14 + 512;
  *(_QWORD *)(a1 + 64) = result;
  return result;
}
