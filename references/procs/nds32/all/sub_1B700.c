unsigned __int64 __fastcall sub_1B700(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r13
  int v4; // r12d
  bool v5; // zf
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v16 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 24) = 4;
  *(_QWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_BYTE *)(a2 + 81) == 5;
  v14.m128i_i64[0] = -1;
  v14.m128i_i64[1] = v3;
  LOWORD(v15) = v4;
  if ( v5 )
    v2 = *(_BYTE *)(a2 + 121) == 0;
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 16);
  WORD1(v15) = v2;
  if ( (unsigned __int64)&v14 >= v6 && (unsigned __int64)&v14 < v6 + 24 * v7 )
  {
    if ( !v7 )
    {
      v12 = qvector_reserve(a1, v6, 1, 24);
      v13 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v12;
      v6 = v12 + 24 * v13;
    }
    *(_QWORD *)v6 = -1;
    *(_QWORD *)(v6 + 8) = v3;
    *(_DWORD *)(v6 + 16) = v4 | (v2 << 16);
  }
  else
  {
    if ( !v7 )
    {
      v10 = qvector_reserve(a1, v6, 1, 24);
      v11 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v10;
      v6 = v10 + 24 * v11;
    }
    v8 = _mm_load_si128(&v14);
    *(_QWORD *)(v6 + 16) = v15;
    *(__m128i *)v6 = v8;
  }
  ++*(_QWORD *)(a1 + 8);
  return v16 - __readfsqword(0x28u);
}
