__int64 __fastcall sub_3EF420(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbp
  int dtype_size; // eax
  int v5; // eax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(int *)(*(_QWORD *)(a1 + 832) + 388LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, v2, dtype_size, 8, v3, 8, 0);
  v5 = get_dtype_size();
  sub_1D6310(a1, 0x3Du, v5, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v3, 0);
  return 0;
}
