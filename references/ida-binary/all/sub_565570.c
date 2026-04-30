__m128i *__fastcall sub_565570(__int64 a1, unsigned __int16 a2)
{
  int v2; // ebp
  __m128i *result; // rax
  unsigned int v5; // edx
  bool v6; // cl
  __int16 v7; // si
  _WORD *v8; // rdi
  __int16 *v9; // rdx
  __m128i v10; // xmm1
  __m128i si128; // xmm2
  __m128i v12; // xmm3
  __int64 v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  _WORD *v15; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h] BYREF
  __int128 v17; // [rsp+28h] [rbp-30h]

  v2 = a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 20) )
    return nullptr;
  result = (__m128i *)off_8C52B8(0x38u);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = a2 >= v5;
  if ( a2 >= v5 )
  {
    v9 = (__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 4LL * (a2 - v5)));
    v7 = *v9;
    v8 = v9 + 1;
  }
  else
  {
    v7 = 0;
    v8 = nullptr;
    v9 = (__int16 *)(*(_QWORD *)(a1 + 40) + 2LL * (unsigned int)(*(_DWORD *)(a1 + 4) * v2) - 2);
  }
  v14.m128i_i64[1] = (__int64)v9;
  v16 = 0;
  v14.m128i_i64[0] = a1;
  v10 = _mm_load_si128(&v14);
  v17 = 0;
  v15 = v8;
  WORD3(v16) = v7;
  si128 = _mm_load_si128((const __m128i *)&v15);
  BYTE8(v16) = v6;
  v12 = _mm_load_si128((const __m128i *)((char *)&v16 + 8));
  WORD4(v17) = -1;
  v13 = *((_QWORD *)&v17 + 1);
  *result = v10;
  result[3].m128i_i64[0] = v13;
  result[1] = si128;
  result[2] = v12;
  return result;
}
