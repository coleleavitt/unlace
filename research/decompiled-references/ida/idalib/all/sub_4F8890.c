unsigned __int64 __fastcall sub_4F8890(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  char v6; // al
  int v8; // r14d
  __int64 v9; // r13
  int v10; // r12d
  bool v11; // zf
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 24);
  v22 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v6 - 12) <= 1u )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 1u )
    {
LABEL_4:
      *(_BYTE *)(a1 + 24) = 4;
      v8 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      v9 = *(_QWORD *)(a3 + 16);
      v10 = *(unsigned __int16 *)(a3 + 24);
      v11 = *(_BYTE *)(a3 + 81) == 5;
      v20.m128i_i64[0] = -1;
      v20.m128i_i64[1] = v9;
      LOWORD(v21) = v10;
      if ( v11 )
        v8 = *(_BYTE *)(a3 + 121) == 0;
      v12 = *(_QWORD *)a1;
      v13 = *(_QWORD *)(a1 + 16);
      WORD1(v21) = v8;
      if ( (unsigned __int64)&v20 < v12 || (unsigned __int64)&v20 >= v12 + 24 * v13 )
      {
        if ( !v13 )
        {
          v16 = qvector_reserve(a1, v12, 1, 24);
          v17 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v16;
          v12 = v16 + 24 * v17;
        }
        v14 = _mm_load_si128(&v20);
        *(_QWORD *)(v12 + 16) = v21;
        *(__m128i *)v12 = v14;
      }
      else
      {
        if ( !v13 )
        {
          v18 = qvector_reserve(a1, v12, 1, 24);
          v19 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v18;
          v12 = v18 + 24 * v19;
        }
        *(_QWORD *)v12 = -1;
        *(_QWORD *)(v12 + 8) = v9;
        *(_DWORD *)(v12 + 16) = v10 | (v8 << 16);
      }
      ++*(_QWORD *)(a1 + 8);
      return v22 - __readfsqword(0x28u);
    }
  }
  else if ( (unsigned __int8)(v6 - 10) > 1u || (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 3u )
  {
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_4F8180((__int64 *)a1, (__int64 *)a2, 0, a3, a4, a5, a6) )
    goto LABEL_4;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 24) - 12) <= 1u || (unsigned __int8)(*(_BYTE *)(a2 + 24) - 12) <= 1u )
    *(_BYTE *)(a1 + 24) = 12;
  return v22 - __readfsqword(0x28u);
}
