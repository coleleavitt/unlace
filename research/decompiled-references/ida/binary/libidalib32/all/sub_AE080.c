__int64 __fastcall sub_AE080(__int64 a1, unsigned __int64 a2, char a3)
{
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rbx
  signed __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-48h]

  v4 = *(_QWORD **)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 72) - (_QWORD)v4;
  v7 = a2 + (v6 >> 3) + 1;
  if ( 2 * v7 >= v5 )
  {
    v14 = a2;
    if ( v5 >= a2 )
      v14 = *(_QWORD *)(a1 + 8);
    v15 = v5 + v14 + 2;
    if ( v15 >> 60 )
    {
      if ( v15 >> 61 )
        std::__throw_bad_array_new_length();
      std::__throw_bad_alloc();
    }
    v21 = a2 + ((__int64)(*(_QWORD *)(a1 + 72) - (_QWORD)v4) >> 3) + 1;
    v16 = operator new(8 * v15);
    v17 = v16;
    v18 = *(_QWORD **)(a1 + 40);
    v19 = 8 * ((v15 - v21) >> 1);
    if ( a3 )
      v19 += 8 * a2;
    v9 = (_QWORD *)(v16 + v19);
    v20 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v18;
    if ( v20 <= 8 )
    {
      if ( v20 == 8 )
        *v9 = *v18;
    }
    else
    {
      memmove(v9, v18, v20);
    }
    operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = v15;
  }
  else
  {
    v8 = 8 * ((v5 - v7) >> 1);
    if ( a3 )
      v8 += 8 * a2;
    v9 = (_QWORD *)(*(_QWORD *)a1 + v8);
    v10 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v4;
    if ( v9 < v4 )
    {
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
          *v9 = *v4;
      }
      else
      {
        memmove(v9, v4, v10);
      }
    }
    else if ( v10 <= 8 )
    {
      if ( v10 == 8 )
        *(_QWORD *)((char *)v9 + v6) = *v4;
    }
    else
    {
      memmove(v9, v4, *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v4);
    }
  }
  *(_QWORD *)(a1 + 40) = v9;
  v11 = *v9;
  v12 = (_QWORD *)((char *)v9 + v6);
  *(_QWORD *)(a1 + 72) = v12;
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(v11 + 512));
  result = *v12;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64((__m128i)*v12, (__m128i)(*v12 + 512));
  return result;
}

