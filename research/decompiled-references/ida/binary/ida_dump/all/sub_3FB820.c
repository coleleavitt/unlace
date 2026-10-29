unsigned __int64 __fastcall sub_3FB820(__int64 a1, int a2, int a3, int a4)
{
  __int64 v6; // r13
  int dtype_size; // eax
  int v8; // eax

  v6 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 3u, dtype_size, a3, 0x3BEA45E214ADDC55LL, v6, 0);
  v8 = get_dtype_size();
  sub_1D6310(a1, 0x14u, v8, v6, a4, v6, 0);
  return sub_3FB720(a1, 32, v6, 0, a2);
}
