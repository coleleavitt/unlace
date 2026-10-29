void __fastcall sub_FDC600(__int32 **a1)
{
  __int32 *v1; // rbx
  __int32 *v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rdi
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 != v2 )
  {
    v3 = (__int64)(a1 + 3);
    do
    {
      v4 = *(_QWORD *)v1;
      v5 = 0;
      if ( (unsigned int)sub_22183A0(v4, "address", 7) )
        v5.m128i_i64[0] |= 1uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "pointer-compare", 15) )
        v5.m128i_i64[0] |= 2uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "pointer-subtract", 16) )
        v5.m128i_i64[0] |= 4uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "kernel-address", 14) )
        v5.m128i_i64[0] |= 8uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "hwaddress", 9) )
        v5.m128i_i64[0] |= 0x10uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "kernel-hwaddress", 16) )
        v5.m128i_i64[0] |= 0x20uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "memtag-stack", 12) )
        v5.m128i_i64[0] |= 0x40uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "memtag-heap", 11) )
        v5.m128i_i64[0] |= 0x80uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "memtag-globals", 14) )
        v5.m128i_i64[0] |= 0x100uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "memtag", 6) )
        v5.m128i_i64[0] |= 0x1C0uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "memory", 6) )
        v5.m128i_i64[0] |= 0x400uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "kernel-memory", 13) )
        v5.m128i_i64[0] |= 0x800uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "fuzzer", 6) )
        v5.m128i_i64[0] |= 0x1000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "fuzzer-no-link", 14) )
        v5.m128i_i64[0] |= 0x2000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "type", 4) )
        v5.m128i_i64[0] |= 0x4000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "thread", 6) )
        v5.m128i_i64[0] |= 0x8000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "numerical", 9) )
        v5.m128i_i64[0] |= 0x10000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "realtime", 8) )
        v5.m128i_i64[0] |= 0x20000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "leak", 4) )
        v5.m128i_i64[0] |= 0x40000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "alignment", 9) )
        v5.m128i_i64[0] |= 0x80000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "array-bounds", 12) )
        v5.m128i_i64[0] |= 0x100000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "bool", 4) )
        v5.m128i_i64[0] |= 0x200000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "builtin", 7) )
        v5.m128i_i64[0] |= 0x400000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "enum", 4) )
        v5.m128i_i64[0] |= 0x800000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "float-cast-overflow", 19) )
        v5.m128i_i64[0] |= 0x1000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "float-divide-by-zero", 20) )
        v5.m128i_i64[0] |= 0x2000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "function", 8) )
        v5.m128i_i64[0] |= 0x4000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "integer-divide-by-zero", 22) )
        v5.m128i_i64[0] |= 0x8000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "nonnull-attribute", 17) )
        v5.m128i_i64[0] |= 0x10000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "null", 4) )
        v5.m128i_i64[0] |= 0x20000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "nullability-arg", 15) )
        v5.m128i_i64[0] |= 0x40000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "nullability-assign", 18) )
        v5.m128i_i64[0] |= 0x80000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "nullability-return", 18) )
        v5.m128i_i64[0] |= 0x100000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "nullability", 11) )
        v5.m128i_i64[0] |= 0x1C0000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "object-size", 11) )
        v5.m128i_i64[0] |= 0x400000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "pointer-overflow", 16) )
        v5.m128i_i64[0] |= 0x800000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "return", 6) )
        v5.m128i_i64[0] |= 0x1000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "returns-nonnull-attribute", 25) )
        v5.m128i_i64[0] |= 0x2000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "shift-base", 10) )
        v5.m128i_i64[0] |= 0x4000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "shift-exponent", 14) )
        v5.m128i_i64[0] |= 0x8000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "shift", 5) )
        v5.m128i_i64[0] |= 0xC000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "signed-integer-overflow", 23) )
        v5.m128i_i64[0] |= 0x20000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "unreachable", 11) )
        v5.m128i_i64[0] |= 0x40000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "vla-bound", 9) )
        v5.m128i_i64[0] |= 0x80000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "vptr", 4) )
        v5.m128i_i64[0] |= 0x100000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "unsigned-integer-overflow", 25) )
        v5.m128i_i64[0] |= 0x200000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "unsigned-shift-base", 19) )
        v5.m128i_i64[0] |= 0x400000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "dataflow", 8) )
        v5.m128i_i64[0] |= 0x800000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-cast-strict", 15) )
        v5.m128i_i64[0] |= 0x1000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-derived-cast", 16) )
        v5.m128i_i64[0] |= 0x2000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-icall", 9) )
        v5.m128i_i64[0] |= 0x4000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-mfcall", 10) )
        v5.m128i_i64[0] |= 0x8000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-unrelated-cast", 18) )
        v5.m128i_i64[0] |= 0x10000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-nvcall", 10) )
        v5.m128i_i64[0] |= 0x20000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi-vcall", 9) )
        v5.m128i_i64[0] |= 0x40000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "cfi", 3) )
        v5.m128i_i64[0] |= 0x7E000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "kcfi", 4) )
        v5.m128i_i64[0] |= 0x100000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "safe-stack", 10) )
        v5.m128i_i64[0] |= 0x200000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "shadow-call-stack", 17) )
        v5.m128i_i64[0] |= 0x400000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "undefined", 9) )
        v5.m128i_i64[0] |= 0xEFC3DF80000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "undefined-trap", 14) )
        v5.m128i_i64[0] |= 0xEFC3DF80000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-unsigned-integer-truncation", 36) )
        v5.m128i_i64[0] |= 0x2000000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-signed-integer-truncation", 34) )
        v5.m128i_i64[0] |= 0x4000000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-integer-truncation", 27) )
        v5.m128i_i64[0] |= 0x6000000000000000uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-integer-sign-change", 28) )
        v5.m128i_i64[1] |= 1uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-integer-arithmetic-value-change", 40) )
        v5 = _mm_or_si128(_mm_load_si128((const __m128i *)&xmmword_2385480), v5);
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-integer-conversion", 27) )
        v5 = _mm_or_si128(_mm_load_si128((const __m128i *)&xmmword_2385490), v5);
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-bitfield-conversion", 28) )
        v5.m128i_i64[1] |= 8uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "implicit-conversion", 19) )
        v5 = _mm_or_si128(_mm_load_si128((const __m128i *)&xmmword_23854A0), v5);
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "integer", 7) )
        v5 = _mm_or_si128(_mm_load_si128((const __m128i *)&xmmword_23854B0), v5);
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "objc-cast", 9) )
        v5.m128i_i64[1] |= 0x40uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "local-bounds", 12) )
        v5.m128i_i64[1] |= 0x80uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "bounds", 6) )
        v5 = _mm_or_si128(_mm_load_si128((const __m128i *)&xmmword_23854C0), v5);
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "scudo", 5) )
        v5.m128i_i64[1] |= 0x200uLL;
      if ( (unsigned int)sub_22183A0(*(_QWORD *)v1, "all", 3) )
        v5 = (__m128i)-1LL;
      sub_FDC460(v3, &v5, (__int64)(v1 + 2), v1 + 16);
      v1 += 18;
    }
    while ( v2 != v1 );
  }
}

