__int64 __fastcall sub_4072A0(__int64 a1, unsigned int a2, unsigned __int8 a3, signed int a4, signed int a5)
{
  __int64 v8; // r15
  int dtype_size; // eax
  __int64 v10; // rbp
  int v11; // eax
  int v12; // eax

  v8 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  dtype_size = get_dtype_size(a3);
  sub_1D6310(a1, a2, dtype_size, a4, a5, v8, 0);
  sub_1D6C50(a1, a2 == 28, a3, a4, a5, a4);
  v10 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
  v11 = get_dtype_size(0);
  sub_1D6310(a1, 4u, v11, v10, 0x3BEA45E214ADDC55LL, 0, 0);
  v12 = get_dtype_size(0);
  return sub_1D6310(a1, 0x3Du, v12, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 3, 0);
}
