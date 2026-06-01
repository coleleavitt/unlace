_DWORD *__fastcall sub_10EAA10(__int64 a1, unsigned __int64 a2, __int64 a3, const char *a4, __m128i a5)
{
  _BYTE *v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  _WORD *v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  _BYTE *v18; // rdx
  _BYTE *v19; // rax
  __int64 v20; // rdi
  _BYTE *v21; // rax
  __int64 v22; // rbp
  _WORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rax
  _BYTE *v26; // rdx
  _DWORD *result; // rax
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v29[72]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_BYTE **)a1;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !*v8 )
  {
    sub_995540(v9, ", ");
    v9 = *(_QWORD *)(a1 + 8);
  }
  v10 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
  {
    sub_227BA10(v9, 34);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v10 + 1;
    *v10 = 34;
  }
  v11 = *(_QWORD *)(a1 + 8);
  sub_10D3F00(&v28, a2);
  sub_227BF10(v11, v28.m128i_i64[0], v28.m128i_i64[1]);
  if ( (_BYTE *)v28.m128i_i64[0] != v29 )
    operator delete((void *)v28.m128i_i64[0]);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_WORD **)(v12 + 32);
  if ( *(_QWORD *)(v12 + 24) - (_QWORD)v13 > 1u )
  {
    *v13 = 10272;
    *(_QWORD *)(v12 + 32) += 2LL;
  }
  else
  {
    sub_227BF10(v12, " (", 2);
  }
  v14 = *(_QWORD *)(a1 + 8);
  sub_22BC1E0(&v28, *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 24), 0);
  sub_227BF10(v14, v28.m128i_i64[0], v28.m128i_i64[1]);
  if ( (_BYTE *)v28.m128i_i64[0] != v29 )
    operator delete((void *)v28.m128i_i64[0]);
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_BYTE **)(v17 + 24);
  v19 = *(_BYTE **)(v17 + 32);
  if ( a4 )
  {
    if ( v18 == v19 )
    {
      v17 = sub_227BF10(v17, ":", 1);
    }
    else
    {
      *v19 = 58;
      ++*(_QWORD *)(v17 + 32);
    }
    sub_995540(v17, a4);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_BYTE **)(v17 + 24);
    v19 = *(_BYTE **)(v17 + 32);
  }
  if ( v19 == v18 )
  {
    sub_227BF10(v17, ")", 1);
  }
  else
  {
    *v19 = 41;
    ++*(_QWORD *)(v17 + 32);
  }
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
  {
    sub_227BA10(v20, 34);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = v21 + 1;
    *v21 = 34;
  }
  v22 = *(_QWORD *)(a1 + 8);
  v23 = *(_WORD **)(v22 + 32);
  if ( *(_QWORD *)(v22 + 24) - (_QWORD)v23 > 1u )
  {
    *v23 = 31520;
    *(_QWORD *)(v22 + 32) += 2LL;
  }
  else
  {
    v22 = sub_227BF10(*(_QWORD *)(a1 + 8), " {", 2);
  }
  v24 = sub_10EA220(*(__m128i **)(a1 + 16), a2, *(__m128i **)(a1 + 24), **(_DWORD **)(a1 + 40), v15, v16, a5);
  v25 = sub_227B910(v22, v24);
  v26 = *(_BYTE **)(v25 + 32);
  if ( *(_BYTE **)(v25 + 24) == v26 )
  {
    sub_227BF10(v25, "}", 1);
  }
  else
  {
    *v26 = 125;
    ++*(_QWORD *)(v25 + 32);
  }
  **(_BYTE **)a1 = 0;
  result = *(_DWORD **)(a1 + 40);
  *result = 2;
  return result;
}
