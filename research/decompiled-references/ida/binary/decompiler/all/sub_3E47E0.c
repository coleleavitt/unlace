__int64 __fastcall sub_3E47E0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // ebp
  int dtype_size; // eax
  int v5; // eax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, v2, dtype_size, 8, v3, 8, 0);
  v5 = get_dtype_size();
  sub_1D3790(a1, 61, v5, 346938453, 346938453, v3, 0);
  return 0;
}
