void __fastcall sub_1825870(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  unsigned __int32 v5; // r14d
  void *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i *v11; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  _BYTE v14[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( ((*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B || sub_18255F0(a1, a2, (__int64)a3, a4))
    && (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) )
  {
    ptr = v14;
    v13 = 0x100000000LL;
    sub_18134D0(a1, (__int64 *)a2, (__int64)a3, (unsigned __int64)&ptr, 0, 0);
    v5 = v13;
    if ( (_DWORD)v13 )
    {
      v6 = ptr;
      v11 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 72, 3u);
      sub_B2FDF0(v11, *(_QWORD *)(a1 + 248), a3, v6, v5);
      sub_B8CC60(a2, (__int64)v11, v7, v8, v9, v10);
    }
    if ( ptr != v14 )
      free(ptr);
  }
}
