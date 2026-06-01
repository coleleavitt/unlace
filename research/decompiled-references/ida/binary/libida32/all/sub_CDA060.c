void __fastcall sub_CDA060(unsigned __int8 ***a1, _QWORD *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // kr00_4
  __int64 v7; // rax
  __int64 v8; // rdx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  _BYTE v11[80]; // [rsp+18h] [rbp-50h] BYREF

  v3 = *a2;
  v4 = sub_21D53C0(*a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  v5 = (unsigned int)(59 * v4 + 195);
  LODWORD(v5) = (unsigned __int64)(1402438301 * v5) >> 32;
  ptr = v11;
  v6 = 59 * v4 + 195;
  v7 = sub_21D5390(v3, a2, v5);
  v8 = v6 / 0xC4;
  if ( *a2 == v7 )
    sub_21E10C0(a2, &ptr, v8, 3, 1);
  else
    sub_21E0160(a2, &ptr, v8, 3, 1);
  sub_AC84E0(*a1, ptr, si128.m128i_i64[0]);
  if ( ptr != v11 )
    free(ptr);
}

