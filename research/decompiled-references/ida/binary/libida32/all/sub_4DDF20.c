__int64 __fastcall sub_4DDF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int32 v6; // r13d
  int v7; // r12d
  bool v8; // zf
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v4 = 0;
  v17 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v6 = *(_DWORD *)(a4 + 8);
  v7 = *(unsigned __int16 *)(a4 + 12);
  v8 = *(_BYTE *)(a4 + 49) == 5;
  v16.m128i_i64[0] = 0xFFFFFFFFLL;
  v16.m128i_i32[2] = v6;
  v16.m128i_i16[6] = v7;
  if ( v8 )
    v4 = *(_BYTE *)(a4 + 73) == 0;
  v9 = *(_QWORD *)a2;
  v10 = *(_QWORD *)(a2 + 16);
  v16.m128i_i16[7] = v4;
  if ( (unsigned __int64)&v16 >= v9 && (unsigned __int64)&v16 < v9 + 16 * v10 )
  {
    if ( !v10 )
    {
      v14 = qvector_reserve(a2, v9, 1, 16);
      v15 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v14;
      v9 = v14 + 16 * v15;
    }
    *(_DWORD *)(v9 + 8) = v6;
    *(_QWORD *)v9 = 0xFFFFFFFFLL;
    *(_DWORD *)(v9 + 12) = v7 | (v4 << 16);
  }
  else
  {
    if ( !v10 )
    {
      v12 = qvector_reserve(a2, v9, 1, 16);
      v13 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v12;
      v9 = v12 + 16 * v13;
    }
    *(__m128i *)v9 = _mm_load_si128(&v16);
  }
  ++*(_QWORD *)(a2 + 8);
  return 1;
}

