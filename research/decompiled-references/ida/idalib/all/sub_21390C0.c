__int64 __fastcall sub_21390C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  unsigned int v4; // ebp
  void (__fastcall *v5)(__int64, unsigned __int64, __int64); // rax
  __m128 v7[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  if ( !*(_BYTE *)(v2 + 861) )
  {
    if ( (unsigned __int8)sub_2129170(v2) )
      return 1;
    v2 = *a1;
  }
  if ( (unsigned __int8)sub_2138EC0(v2, v7, (void **)&v7[0].m128_u64[1]) )
    return 1;
  v3 = *(_QWORD *)(*a1 + 24);
  v4 = *(unsigned __int8 *)(*(_QWORD *)(*a1 + 40) + 16LL);
  v5 = *(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v3 + 536LL);
  if ( (_BYTE)v4 )
  {
    v5(v3, v7[0].m128_u64[1], 8);
    (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(*a1 + 24) + 536LL))(
      *(_QWORD *)(*a1 + 24),
      v7[0].m128_u64[0],
      8);
    return 0;
  }
  else
  {
    v5(v3, v7[0].m128_u64[0], 8);
    (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(*a1 + 24) + 536LL))(
      *(_QWORD *)(*a1 + 24),
      v7[0].m128_u64[1],
      8);
    return v4;
  }
}
