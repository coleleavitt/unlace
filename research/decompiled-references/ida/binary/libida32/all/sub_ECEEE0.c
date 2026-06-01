unsigned __int64 __fastcall sub_ECEEE0(_QWORD *a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  char v15; // al
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 i; // rax
  char v23; // [rsp+7h] [rbp-41h]
  bool v24; // [rsp+7h] [rbp-41h]
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  v9 = a5;
  v10 = (unsigned int)(a5 + 1);
  LOBYTE(a5) = a6 != 0;
  v11 = 8LL * ((unsigned int)v10 + (a6 != 0)) + 16;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v26 = a6;
    v24 = a6 != 0;
    v20 = sub_962430((__int64)(a1 + 294), v11, 8LL * ((unsigned int)v10 + (a6 != 0)) + 16, 3, a5, a6);
    a6 = v26;
    LOBYTE(a5) = v24;
    v13 = v20;
  }
  v14 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v14) = -100;
  *(_WORD *)v13 = v14;
  if ( unk_2CAD564 )
  {
    v25 = a6;
    v23 = a5;
    sub_EC5E10(156);
    a6 = v25;
    LOBYTE(a5) = v23;
  }
  v15 = *(_BYTE *)(v13 + 14);
  *(_DWORD *)(v13 + 8) = a2;
  v16 = v13 + 16;
  *(_WORD *)(v13 + 12) = v9;
  *(_QWORD *)(v13 + 16) = a3;
  *(_BYTE *)(v13 + 14) = a5 | v15 & 0xFE;
  if ( v9 )
  {
    v17 = v9 - 1;
    if ( (a4 >= v13 + 40 || v13 + 24 >= a4 + 16) && v17 > 1 )
    {
      v18 = 0;
      do
      {
        *(__m128i *)(v13 + v18 + 24) = _mm_loadu_si128((const __m128i *)(a4 + v18));
        v18 += 16;
      }
      while ( v18 != 16LL * (v9 >> 1) );
      if ( v9 != (v9 & 0xFFFFFFFE) )
        *(_QWORD *)(v16 + 8LL * ((v9 & 0xFFFFFFFE) + 1)) = *(_QWORD *)(a4 + 8LL * (v9 & 0xFFFFFFFE));
    }
    else
    {
      v21 = v17;
      for ( i = 0; ; ++i )
      {
        *(_QWORD *)(v13 + 8 * i + 24) = *(_QWORD *)(a4 + 8 * i);
        if ( v21 == i )
          break;
      }
    }
  }
  if ( (*(_BYTE *)(v13 + 14) & 1) != 0 )
    *(_QWORD *)(v16 + 8 * v10) = a6;
  return v13;
}

