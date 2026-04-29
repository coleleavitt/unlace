__int64 __fastcall sub_3FC8C0(__int64 a1, int a2)
{
  int v2; // r12d
  int dtype_size; // eax
  int v4; // eax

  v2 = (unsigned __int8)sub_3EF830(a1, a1 + 64);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, 29, dtype_size, a2, 346938453, 3, 0);
  v4 = get_dtype_size();
  sub_1D3790(a1, 21, v4, 3, 0, 3, 0);
  sub_1D43A0(a1, v2, a2, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 460LL), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), 1);
  return 1;
}
