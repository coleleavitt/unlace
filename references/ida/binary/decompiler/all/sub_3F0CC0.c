unsigned __int64 __fastcall sub_3F0CC0(__int64 a1, int a2, int a3, int a4)
{
  int v6; // r13d
  int dtype_size; // eax
  int v8; // eax

  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, 3, dtype_size, a3, 346938453, v6, 0);
  v8 = get_dtype_size();
  sub_1D3790(a1, 20, v8, v6, a4, v6, 0);
  return sub_3F0BC0(a1, 32, v6, 0, a2);
}
