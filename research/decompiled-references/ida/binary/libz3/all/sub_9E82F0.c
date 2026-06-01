_QWORD *__fastcall sub_9E82F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *result; // rax
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // r12
  _QWORD *v7; // rbp
  __int64 v8; // [rsp+0h] [rbp-30h]

  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8) & 3 | *(_BYTE *)(a1 + 8) & 0xFC;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = qword_1C6E7C8;
  v2 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 40) = v2;
  result = *(_QWORD **)(a2 + 48);
  if ( result )
  {
    v4 = _mm_loadl_epi64((const __m128i *)(result - 1));
    v8 = v4.m128i_i64[0];
    result = (_QWORD *)sub_186B270(16LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
    *(_QWORD *)(a1 + 48) = result + 1;
    v5 = *(_QWORD *)(a2 + 48);
    *result = v4.m128i_i64[0];
    if ( v5 )
    {
      v6 = v5 + 16LL * *(unsigned int *)(v5 - 4);
      if ( v5 != v6 )
      {
        v7 = result + 1;
        do
        {
          result = (_QWORD *)sub_15D0E50(v7, v5);
          v5 += 16;
          v7 += 2;
        }
        while ( v6 != v5 );
      }
    }
  }
  return result;
}

