__int64 __fastcall sub_3EF560(__int64 a1, int a2, int a3)
{
  int v4; // r13d
  int dtype_size; // eax
  int v6; // r13d
  int v7; // eax
  int v8; // r13d
  int v9; // eax

  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 688LL);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, 35, dtype_size, a2, a3, v4, -1);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 692LL);
  v7 = get_dtype_size();
  sub_1D3790(a1, 31, v7, a2, a3, v6, -1);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 696LL);
  v9 = get_dtype_size();
  return sub_1D3790(a1, 33, v9, a2, a3, v8, -1);
}
