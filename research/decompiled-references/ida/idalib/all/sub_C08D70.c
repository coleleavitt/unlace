__int64 __fastcall sub_C08D70(_QWORD *a1, int a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  int v8; // r13d
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int8 v19; // al

  v6 = a5;
  v8 = a4;
  v10 = 8 * a4;
  v11 = 8 * a4 + 24;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= (unsigned __int64)(v11 + v13) && v12 )
    a1[294] = v11 + v13;
  else
    v13 = sub_986170((__int64)(a1 + 294), v11, v11, 3, a5, a6);
  v14 = a3;
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x13;
  if ( unk_2CD7484 )
  {
    sub_EE9B50(19);
    v14 = a3;
  }
  *(_WORD *)(v13 + 1) &= 0xF801u;
  v15 = (_QWORD *)(v13 + 24);
  *(_QWORD *)(v13 + 8) = 0;
  v16 = v10 >> 3;
  *(_DWORD *)(v13 + 16) = a2;
  *(_DWORD *)(v13 + 20) = v6;
  *(_DWORD *)(v13 + 4) = v8;
  if ( v10 > 0 )
  {
    if ( v10 <= 8 )
      goto LABEL_11;
    v17 = 0;
    do
    {
      *(__m128i *)(v13 + v17 * 8 + 24) = _mm_loadu_si128((const __m128i *)&a3[v17]);
      v17 += 2;
    }
    while ( 2 * (v16 >> 1) != v17 );
    v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
    v14 = &a3[v18];
    v15 = (_QWORD *)((char *)v15 + v18 * 8);
    if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_11:
      *v15 = *v14;
  }
  v19 = sub_B62F80(v13);
  *(_BYTE *)(v13 + 1) = (v19 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v19 >> 2) & 7;
  return v13;
}
