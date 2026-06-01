__int64 __fastcall sub_2258D80(__int64 a1, __m128i *a2, __int64 a3)
{
  bool v4; // zf
  unsigned int v5; // r12d
  _OWORD v7[2]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v8; // [rsp+20h] [rbp-148h]
  void *ptr; // [rsp+30h] [rbp-138h] BYREF
  __m128i si128; // [rsp+38h] [rbp-130h]
  _BYTE v11[288]; // [rsp+48h] [rbp-120h] BYREF

  v4 = *(_BYTE *)(a1 + 328) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v11;
  if ( v4 || (*(_BYTE *)(a1 + 320) & 1) != 0 )
  {
    v8 = a2[2].m128i_i64[0];
    v7[0] = _mm_loadu_si128(a2);
    v7[1] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    sub_22538C0((const char **)a2, (__int64)&ptr);
    LOWORD(v8) = 261;
    v7[0] = *(_OWORD *)(a1 + 168);
    sub_228E8C0(v7, &ptr);
    LOWORD(v8) = 261;
    v7[0] = __PAIR128__(si128.m128i_u64[0], (unsigned __int64)ptr);
  }
  v5 = sub_228E700(v7, a3, 0);
  if ( ptr != v11 )
    free(ptr);
  return v5;
}
