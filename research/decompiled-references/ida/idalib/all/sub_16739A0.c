__m128i *__fastcall sub_16739A0(int **a1)
{
  _BOOL4 v1; // ebp
  int v2; // eax
  __m128i *v3; // r12
  __m128i v5[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+20h] [rbp-28h]

  v1 = 1;
  v2 = **a1;
  if ( v2 != 1 )
    v1 = v2 != 2;
  memset(v5, 0, sizeof(v5));
  v6 = v6 & 0xFF000000 | 0x101A4;
  HIBYTE(v6) &= 0xFCu;
  v3 = (__m128i *)sub_1673960((__int64 *)(*((_QWORD *)a1[1] + 31) + 2352LL), 48, 3u);
  sub_B12590(v3, *((_QWORD *)a1[1] + 31), v5, v1);
  return v3;
}
