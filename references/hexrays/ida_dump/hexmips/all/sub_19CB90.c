unsigned __int64 __fastcall sub_19CB90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        signed int a5,
        unsigned int a6,
        unsigned int a7)
{
  signed int v7; // ebp
  _QWORD *v8; // rax
  __int64 i; // rdx
  int v10; // esi
  __int64 v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v7 = a4;
  v15 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = a3;
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)),
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(a7)));
  if ( a5 != -1 )
  {
    sub_11E920((__int64 *)a1, *(_QWORD *)(a2 + 1440) + a5, (int)(a7 * a6));
    v7 = *(_DWORD *)(a1 + 48);
  }
  if ( v7 != -1 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    for ( i = v7; (unsigned __int64)v7 < v8[1]; i = v7 )
    {
      v10 = *(_DWORD *)(*v8 + 4 * i);
      v12[0] = 0;
      v12[1] = 0;
      sub_5FC80(v12, v10, a7);
      v13 = 0;
      v14 = 0;
      sub_60080((__int64 *)a1, v12);
      sub_311F30(a1 + 16, &v13);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13);
      }
      ++v7;
      qfree(v12[0]);
      v8 = *(_QWORD **)(a1 + 40);
    }
  }
  return v15 - __readfsqword(0x28u);
}
