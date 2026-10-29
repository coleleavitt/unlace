__int64 __fastcall std::deque<std::vector<double>>::_M_reallocate_map(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  size_t v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  const void *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = ((__int64)(*(_QWORD *)(a1 + 72) - (_QWORD)v4) >> 3) + 1;
  if ( v5 <= 2 * (a2 + v6) )
  {
    v12 = a2;
    if ( v5 >= a2 )
      v12 = *(_QWORD *)(a1 + 8);
    v13 = v5 + v12 + 2;
    if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v14 = operator new(8 * v13);
    v15 = *(const void **)(a1 + 40);
    v16 = 8 * ((v13 - (a2 + v6)) >> 1);
    if ( a3 )
      v16 += 8 * a2;
    v8 = (__int64 *)(v14 + v16);
    v17 = *(_QWORD *)(a1 + 72) + 8LL;
    if ( (const void *)v17 != v15 )
      memmove(v8, v15, v17 - (_QWORD)v15);
    v10 = v6;
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v13;
  }
  else
  {
    v7 = 8 * ((v5 - (a2 + v6)) >> 1);
    if ( a3 )
      v7 += 8 * a2;
    v8 = (__int64 *)(*(_QWORD *)a1 + v7);
    v9 = *(_QWORD *)(a1 + 72) + 8LL;
    v10 = v6;
    v11 = v9 - (_QWORD)v4;
    if ( v4 <= v8 )
    {
      if ( v4 != (__int64 *)v9 )
        memmove((char *)v8 + v10 * 8 - v11, v4, v11);
    }
    else if ( v4 != (__int64 *)v9 )
    {
      memmove(v8, v4, v11);
    }
  }
  v18 = *v8;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 24) = v18;
  *(_QWORD *)(a1 + 32) = v18 + 504;
  v19 = &v8[v10 - 1];
  *(_QWORD *)(a1 + 72) = v19;
  v20 = *v19;
  *(_QWORD *)(a1 + 56) = v20;
  result = v20 + 504;
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

