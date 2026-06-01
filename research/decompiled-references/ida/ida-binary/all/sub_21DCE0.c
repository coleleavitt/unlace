__int64 __fastcall sub_21DCE0(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *v14; // rbx
  signed __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  __int64 result; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rsi
  __int64 v24; // rbx
  signed __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-48h]
  char v27; // [rsp+Ch] [rbp-3Ch]

  v6 = a3;
  v8 = *(_QWORD *)(a1 + 72);
  v9 = *(_QWORD **)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v8 - (_QWORD)v9;
  v12 = a2 + ((v8 - (__int64)v9) >> 3) + 1;
  if ( 2 * v12 >= v10 )
  {
    v19 = a2;
    if ( v10 >= a2 )
      v19 = *(_QWORD *)(a1 + 8);
    v20 = v10 + v19 + 2;
    if ( v20 >> 60 )
    {
      if ( v20 >> 61 )
        sub_162118(a1, v9, v8, v6, v12, a6);
      std::__throw_bad_alloc();
    }
    v27 = v6;
    v26 = a2 + ((__int64)(*(_QWORD *)(a1 + 72) - (_QWORD)v9) >> 3) + 1;
    v21 = operator new(8 * v20);
    v22 = v21;
    v23 = *(_QWORD **)(a1 + 40);
    v24 = 8 * ((v20 - v26) >> 1);
    if ( v27 )
      v24 += 8 * a2;
    v14 = (_QWORD *)(v21 + v24);
    v25 = *(_QWORD *)(a1 + 72) + 8LL - (_QWORD)v23;
    if ( v25 <= 8 )
    {
      if ( v25 == 8 )
        *v14 = *v23;
    }
    else
    {
      memmove(v14, v23, v25);
    }
    operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
    *(_QWORD *)a1 = v22;
    *(_QWORD *)(a1 + 8) = v20;
  }
  else
  {
    v13 = 8 * ((v10 - v12) >> 1);
    if ( (_BYTE)v6 )
      v13 += 8 * a2;
    v14 = (_QWORD *)(*(_QWORD *)a1 + v13);
    v15 = v8 + 8 - (_QWORD)v9;
    if ( v14 < v9 )
    {
      if ( v15 <= 8 )
      {
        if ( v15 == 8 )
          *v14 = *v9;
      }
      else
      {
        memmove(v14, v9, v15);
      }
    }
    else if ( v15 <= 8 )
    {
      if ( v15 == 8 )
        *(_QWORD *)((char *)v14 + v11) = *v9;
    }
    else
    {
      memmove((char *)v14 + v11 - v15 + 8, v9, v15);
    }
  }
  *(_QWORD *)(a1 + 40) = v14;
  v16 = *v14;
  v17 = (_QWORD *)((char *)v14 + v11);
  *(_QWORD *)(a1 + 72) = v17;
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)(v16 + 512));
  result = *v17;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64((__m128i)*v17, (__m128i)(*v17 + 512));
  return result;
}
