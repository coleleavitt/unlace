__int64 __fastcall sub_47270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // r13
  int v7; // r12d
  bool v8; // zf
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+10h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v4 = 0;
  v19 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v6 = *(_QWORD *)(a4 + 16);
  v7 = *(unsigned __int16 *)(a4 + 24);
  v8 = *(_BYTE *)(a4 + 81) == 5;
  v17.m128i_i64[0] = -1;
  v17.m128i_i64[1] = v6;
  LOWORD(v18) = v7;
  if ( v8 )
    v4 = *(_BYTE *)(a4 + 121) == 0;
  v9 = *(_QWORD *)a2;
  v10 = *(_QWORD *)(a2 + 16);
  WORD1(v18) = v4;
  if ( (unsigned __int64)&v17 >= v9 && (unsigned __int64)&v17 < v9 + 24 * v10 )
  {
    if ( !v10 )
    {
      v15 = qvector_reserve(a2, v9, 1, 24);
      v16 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v15;
      v9 = v15 + 24 * v16;
    }
    *(_QWORD *)v9 = -1;
    *(_QWORD *)(v9 + 8) = v6;
    *(_DWORD *)(v9 + 16) = v7 | (v4 << 16);
  }
  else
  {
    if ( !v10 )
    {
      v13 = qvector_reserve(a2, v9, 1, 24);
      v14 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v13;
      v9 = v13 + 24 * v14;
    }
    v11 = _mm_load_si128(&v17);
    *(_QWORD *)(v9 + 16) = v18;
    *(__m128i *)v9 = v11;
  }
  ++*(_QWORD *)(a2 + 8);
  return 1;
}
