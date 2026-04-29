__int64 __fastcall sub_2FE60(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i v5; // xmm0
  void *v7; // rax
  void *v8; // rsi
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __m128i v10; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_1F250((__int64)&src, a2);
  v3 = v12;
  if ( v12 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v7 = (void *)qalloc_or_throw(16 * v3);
    *(_QWORD *)(a1 + 16) = v3;
    v8 = src;
    *(_QWORD *)a1 = v7;
    memcpy(v7, v8, 16 * v3);
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = -1;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    sub_19A90((__int64)&v9, (__int64)"get_address_ranges(%a)", a3);
    v4 = v9;
    v5 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)a1 = v4;
    *(__m128i *)(a1 + 8) = v5;
  }
  if ( src )
  {
    v12 = 0;
    qfree(src);
  }
  return a1;
}
