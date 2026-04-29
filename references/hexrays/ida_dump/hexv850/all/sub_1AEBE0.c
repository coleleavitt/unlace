__int64 *__fastcall sub_1AEBE0(unsigned __int64 *a1, __int64 *a2, double a3, double a4)
{
  __m128i si128; // xmm0
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rax
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  v14 = __readfsqword(0x28u);
  v13 = si128;
  if ( (unsigned int)sub_311680(a1, &v13) )
    return sub_1AE710(a1, a2, *(double *)si128.m128i_i64, a4);
  v7 = a2[1];
  if ( v7 )
  {
    v10 = v7 + 5;
    v9 = v7 + 6;
    v8 = *a2;
    --v7;
    if ( a2[2] >= v9 )
      goto LABEL_5;
LABEL_7:
    v12 = qvector_reserve(a2, v8, v9, 1);
    *a2 = v12;
    v8 = v12;
    goto LABEL_5;
  }
  v8 = *a2;
  v9 = 7;
  v10 = 6;
  if ( (unsigned __int64)a2[2] < 7 )
    goto LABEL_7;
LABEL_5:
  a2[1] = v9;
  *(_BYTE *)(v8 + v10) = 0;
  v11 = *a2 + v7;
  *(_DWORD *)v11 = 1296845889;
  *(_WORD *)(v11 + 4) = 19781;
  return (__int64 *)(v14 - __readfsqword(0x28u));
}
