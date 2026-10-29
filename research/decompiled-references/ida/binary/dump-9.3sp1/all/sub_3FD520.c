__int64 __fastcall sub_3FD520(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned int v3; // r12d
  int dtype_size; // eax
  __int64 v6; // [rsp-10h] [rbp-28h]

  v3 = a3;
  sub_3FB720(a1, 0x21u, a2, a3, 1);
  sub_3FB720(a1, 0x1Fu, a2, v3, 4);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x1Du, dtype_size, a2, 0x3BEA45E214ADDC55LL, 2, 0);
  return v6;
}
