unsigned __int64 __fastcall sub_A55700(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rdx
  __m128i v12; // xmm0
  unsigned __int64 result; // rax
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __m128i v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]

  v11 = a1[294];
  a1[304] += 72LL;
  v12 = _mm_loadu_si128((const __m128i *)&a7);
  v20 = a8;
  result = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v12;
  if ( a1[295] >= result + 72 && v11 )
  {
    a1[294] = result + 72;
    v14 = v12;
  }
  else
  {
    v18 = a6;
    v17 = a5;
    result = sub_986170((__int64)(a1 + 294), 72, 72, 3, a5, a6);
    a6 = v18;
    a5 = v17;
    v14 = _mm_load_si128(&v19);
  }
  v15 = v20;
  *(_QWORD *)result = a2;
  *(_QWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 40) = v15;
  v16 = a9;
  *(_DWORD *)(result + 16) = a4;
  *(__m128i *)(result + 24) = v14;
  *(_QWORD *)(result + 48) = a5;
  *(_QWORD *)(result + 56) = a6;
  *(_QWORD *)(result + 64) = v16;
  return result;
}
