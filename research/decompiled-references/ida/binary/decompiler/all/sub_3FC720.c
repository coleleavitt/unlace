__int64 __fastcall sub_3FC720(__int64 a1, int a2, unsigned __int8 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // r12d
  int v8; // r15d
  int dtype_size; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // eax

  v6 = a3;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, a2, dtype_size, a4, a5, v8, 0);
  sub_1D40D0(a1, a2 == 28, v6, a4, a5, a4);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
  v11 = get_dtype_size();
  sub_1D3790(a1, 4, v11, v10, 346938453, 0, 0);
  v12 = get_dtype_size();
  return sub_1D3790(a1, 61, v12, 346938453, 346938453, 3, 0);
}
