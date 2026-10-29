unsigned __int64 __fastcall sub_C5E0F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // r13
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned __int64 result; // rax
  unsigned __int16 *v12; // rsi
  __int64 v13[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+18h] [rbp-60h]
  __int64 v16; // [rsp+20h] [rbp-58h]
  _BYTE v17[80]; // [rsp+28h] [rbp-50h] BYREF

  v6 = a4;
  if ( (unsigned __int8)sub_C5DF90(a1, *(__m128i **)(a2 + 16), a3, a4, a5, a6) )
    return sub_C39320(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL), a3, *(unsigned __int16 **)(a2 + 24), v6, v10);
  result = 0;
  if ( *(_DWORD *)(a1 + 48) && (*(_BYTE *)(a1 + 914) || *(_BYTE *)(a1 + 915)) )
  {
    **(_BYTE **)(a1 + 24) = 1;
    v12 = *(unsigned __int16 **)(a2 + 24);
    v14 = 0;
    ptr = v17;
    v16 = 0x400000000LL;
    v13[0] = a1;
    v13[1] = (__int64)&v14;
    sub_C37DE0(v13, v12, 0x400000000LL, v8, v9, v10);
    if ( ptr != v17 )
      free(ptr);
    return 0;
  }
  return result;
}
