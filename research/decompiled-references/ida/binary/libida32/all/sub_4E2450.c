unsigned __int64 __fastcall sub_4E2450(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  char v6; // al
  int v8; // r12d
  __int32 v9; // r14d
  unsigned __int16 v10; // r13
  bool v11; // zf
  __m128i *v12; // rsi
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 24);
  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v6 - 12) <= 1u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 1u )
    {
LABEL_4:
      *(_BYTE *)(a1 + 24) = 4;
      v8 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v9 = *(_DWORD *)(a3 + 8);
      v10 = *(_WORD *)(a3 + 12);
      v11 = *(_BYTE *)(a3 + 49) == 5;
      v19.m128i_i64[0] = 0xFFFFFFFFLL;
      v19.m128i_i32[2] = v9;
      v19.m128i_i16[6] = v10;
      if ( v11 )
        v8 = *(_BYTE *)(a3 + 73) == 0;
      v12 = *(__m128i **)a1;
      v13 = *(_QWORD *)(a1 + 16);
      v19.m128i_i16[7] = v8;
      if ( &v19 < v12 || &v19 >= &v12[v13] )
      {
        if ( !v13 )
        {
          v15 = qvector_reserve(a1, v12, 1, 16);
          v16 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v15;
          v12 = (__m128i *)(v15 + 16 * v16);
        }
        *v12 = _mm_load_si128(&v19);
      }
      else
      {
        if ( !v13 )
        {
          v17 = qvector_reserve(a1, v12, 1, 16);
          v18 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v17;
          v12 = (__m128i *)(v17 + 16 * v18);
        }
        v12->m128i_i32[2] = v9;
        v12->m128i_i64[0] = 0xFFFFFFFFLL;
        v12->m128i_i32[3] = v10 | (v8 << 16);
      }
      ++*(_QWORD *)(a1 + 8);
      return v20 - __readfsqword(0x28u);
    }
  }
  else if ( (unsigned __int8)(v6 - 10) > 1u || (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 3u )
  {
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_4E1D40((__int64 *)a1, (__int64 *)a2, 0, a3, a4, a5, a6) )
    goto LABEL_4;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 24) - 12) <= 1u || (unsigned __int8)(*(_BYTE *)(a2 + 24) - 12) <= 1u )
    *(_BYTE *)(a1 + 24) = 12;
  return v20 - __readfsqword(0x28u);
}

