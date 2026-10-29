__int64 __fastcall sub_10FD780(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v2 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    sub_9CAA80((_QWORD *)a1, "address");
    v2 = *a2;
  }
  if ( (v2 & 2) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "pointer-compare");
    v2 = *a2;
  }
  if ( (v2 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "pointer-subtract");
    v2 = *a2;
  }
  if ( (v2 & 8) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "kernel-address");
    v2 = *a2;
  }
  if ( (v2 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "hwaddress");
    v2 = *a2;
  }
  if ( (v2 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "kernel-hwaddress");
    v2 = *a2;
  }
  if ( (v2 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "memtag-stack");
    v2 = *a2;
  }
  if ( (v2 & 0x80u) != 0LL )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "memtag-heap");
    v2 = *a2;
  }
  if ( (v2 & 0x100) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "memtag-globals");
    v2 = *a2;
  }
  if ( (v2 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "memory");
    v2 = *a2;
  }
  if ( (v2 & 0x800) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "kernel-memory");
    v2 = *a2;
  }
  if ( (v2 & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "fuzzer");
    v2 = *a2;
  }
  if ( (v2 & 0x2000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "fuzzer-no-link");
    v2 = *a2;
  }
  if ( (v2 & 0x4000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, (char *)"type");
    v2 = *a2;
  }
  if ( (v2 & 0x8000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, (char *)"thread");
    v2 = *a2;
  }
  if ( (v2 & 0x10000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "numerical");
    v2 = *a2;
  }
  if ( (v2 & 0x20000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, (char *)"realtime");
    v2 = *a2;
  }
  if ( (v2 & 0x40000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "leak");
    v2 = *a2;
  }
  if ( (v2 & 0x80000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "alignment");
    v2 = *a2;
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "array-bounds");
    v2 = *a2;
  }
  if ( (v2 & 0x200000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "bool");
    v2 = *a2;
  }
  if ( (v2 & 0x400000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "builtin");
    v2 = *a2;
  }
  if ( (v2 & 0x800000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "enum");
    v2 = *a2;
  }
  if ( (v2 & 0x1000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "float-cast-overflow");
    v2 = *a2;
  }
  if ( (v2 & 0x2000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "float-divide-by-zero");
    v2 = *a2;
  }
  if ( (v2 & 0x4000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "function");
    v2 = *a2;
  }
  if ( (v2 & 0x8000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "integer-divide-by-zero");
    v2 = *a2;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "nonnull-attribute");
    v2 = *a2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "null");
    v2 = *a2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "nullability-arg");
    v2 = *a2;
  }
  if ( (int)v2 < 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "nullability-assign");
    v2 = *a2;
  }
  if ( (v2 & 0x100000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "nullability-return");
    v2 = *a2;
  }
  if ( (v2 & 0x400000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "object-size");
    v2 = *a2;
  }
  if ( (v2 & 0x800000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "pointer-overflow");
    v2 = *a2;
  }
  if ( (v2 & 0x1000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "return");
    v2 = *a2;
  }
  if ( (v2 & 0x2000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "returns-nonnull-attribute");
    v2 = *a2;
  }
  if ( (v2 & 0x4000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "shift-base");
    v2 = *a2;
  }
  if ( (v2 & 0x8000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "shift-exponent");
    v2 = *a2;
  }
  if ( (v2 & 0x20000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "signed-integer-overflow");
    v2 = *a2;
  }
  if ( (v2 & 0x40000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "unreachable");
    v2 = *a2;
  }
  if ( (v2 & 0x80000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "vla-bound");
    v2 = *a2;
  }
  if ( (v2 & 0x100000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "vptr");
    v2 = *a2;
  }
  if ( (v2 & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "unsigned-integer-overflow");
    v2 = *a2;
  }
  if ( (v2 & 0x400000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "unsigned-shift-base");
    v2 = *a2;
  }
  if ( (v2 & 0x800000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "dataflow");
    v2 = *a2;
  }
  if ( (v2 & 0x1000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-cast-strict");
    v2 = *a2;
  }
  if ( (v2 & 0x2000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-derived-cast");
    v2 = *a2;
  }
  if ( (v2 & 0x4000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-icall");
    v2 = *a2;
  }
  if ( (v2 & 0x8000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-mfcall");
    v2 = *a2;
  }
  if ( (v2 & 0x10000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-unrelated-cast");
    v2 = *a2;
  }
  if ( (v2 & 0x20000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-nvcall");
    v2 = *a2;
  }
  if ( (v2 & 0x40000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "cfi-vcall");
    v2 = *a2;
  }
  if ( (v2 & 0x100000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "kcfi");
    v2 = *a2;
  }
  if ( (v2 & 0x200000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "safe-stack");
    v2 = *a2;
  }
  if ( (v2 & 0x400000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "shadow-call-stack");
    v2 = *a2;
  }
  if ( (v2 & 0x2000000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "implicit-unsigned-integer-truncation");
    v2 = *a2;
  }
  if ( (v2 & 0x4000000000000000LL) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "implicit-signed-integer-truncation");
  }
  v3 = a2[1];
  if ( (v3 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "implicit-integer-sign-change");
    v3 = a2[1];
  }
  if ( (v3 & 8) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "implicit-bitfield-conversion");
    v3 = a2[1];
  }
  if ( (v3 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "objc-cast");
    v3 = a2[1];
  }
  if ( (v3 & 0x80u) != 0LL )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "local-bounds");
    v3 = a2[1];
  }
  if ( (v3 & 0x200) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      sub_9CAA80((_QWORD *)a1, ",");
    sub_9CAA80((_QWORD *)a1, "scudo");
  }
  return a1;
}

