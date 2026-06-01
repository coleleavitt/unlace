__int64 __fastcall sub_15F1800(__int64 a1, int *a2, const void *a3, __int64 a4, double a5, double a6)
{
  unsigned int v6; // r14d
  int v9; // r15d
  __int64 v10; // rax
  const void *v11; // rax
  size_t v12; // rdx
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __m128i si128; // [rsp+18h] [rbp-60h]
  _BYTE v16[80]; // [rsp+28h] [rbp-50h] BYREF

  v6 = 0;
  if ( *a2 < 0 )
  {
    v9 = sub_10212A0(*(_QWORD *)(a1 + 272), *a2);
    ptr = v16;
    v10 = *(_QWORD *)(a1 + 240);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
    v11 = (const void *)sub_13DB940(
                          v9,
                          (__int64 *)&ptr,
                          *(__int64 **)(v10 + 88),
                          *(_QWORD *)(v10 + 56),
                          nullptr,
                          si128,
                          a6);
    if ( v12 == a4 && (!v12 || !memcmp(v11, a3, v12)) )
    {
      *a2 = v9;
      v6 = 1;
    }
    if ( ptr != v16 )
      free(ptr);
  }
  return v6;
}
