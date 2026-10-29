__int64 __fastcall sub_7EA020(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 (*v6)(void); // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 8 * *(_DWORD *)(*(_QWORD *)(a2 + 16) + 20LL);
  v6 = *(__int64 (**)(void))(*(_QWORD *)v4 + 432LL);
  if ( (char *)v6 == (char *)sub_79EFF0 )
    v7 = v4 + 2144;
  else
    v7 = v6();
  v8 = sub_180C100(v7, v5);
  v9 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 20LL);
  if ( !(_DWORD)v9 )
    return v8;
  if ( (unsigned int)(v9 - 1) > 2 && v8 != a3 + 8 )
  {
    v10 = 0;
    do
    {
      *(__m128i *)(v8 + v10) = _mm_loadu_si128((const __m128i *)(a3 + v10));
      v10 += 16;
    }
    while ( v10 != 16LL * ((unsigned int)v9 >> 1) );
    if ( (v9 & 1) != 0 )
      *(_QWORD *)(v8 + 8LL * ((unsigned int)v9 & 0xFFFFFFFE)) = *(_QWORD *)(a3 + 8LL * ((unsigned int)v9 & 0xFFFFFFFE));
    return v8;
  }
  v12 = 8 * v9;
  v13 = 0;
  do
  {
    *(_QWORD *)(v8 + v13) = *(_QWORD *)(a3 + v13);
    v13 += 8;
  }
  while ( v12 != v13 );
  return v8;
}

