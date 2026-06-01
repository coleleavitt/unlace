__int64 __fastcall sub_1A864B0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5, __m128i a6)
{
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64); // rax
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  v8 = *a1;
  v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  v10 = (*(_QWORD *)(a2 + 56) & 0x40000LL) == 0 ? 4 : 2;
  if ( v9 == sub_9C4AE0 )
  {
    v11 = sub_BA8020(a2);
    v12 = a4;
    v13 = (v11 << 32) | *(unsigned int *)(a2 + 24);
  }
  else
  {
    v13 = v9(a2);
    v12 = a4;
  }
  sub_16E9510(v8, a2, 0, 0, v12, a5, a6, 0, a3, v13, v10);
  sub_16EFD60(*a1, (__int64 *)a3, a2);
  return 0;
}
