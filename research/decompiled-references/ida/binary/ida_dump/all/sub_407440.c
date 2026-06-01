__int64 __fastcall sub_407440(__int64 a1, int a2)
{
  char v2; // r12
  int dtype_size; // eax
  int v4; // eax

  v2 = sub_3FA390(a1, a1 + 64);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x1Du, dtype_size, a2, 0x3BEA45E214ADDC55LL, 3, 0);
  v4 = get_dtype_size();
  sub_1D6310(a1, 0x15u, v4, 3, 0, 3, 0);
  sub_1D6F20(a1, v2, a2, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 460LL), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), 1);
  return 1;
}
