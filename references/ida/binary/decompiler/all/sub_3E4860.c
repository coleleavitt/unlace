__int64 __fastcall sub_3E4860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  int v7; // r14d
  int dtype_size; // eax
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  int v11; // [rsp+8h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 832);
  v12 = __readfsqword(0x28u);
  v10 = 0x800000001LL;
  v11 = *(_DWORD *)(v6 + 464);
  sub_1D38D0(a1, 60, 0, 0, (unsigned int)&v10, a6);
  LODWORD(v6) = *(_DWORD *)(v6 + 464);
  v7 = *(_DWORD *)(a2 + 8);
  dtype_size = get_dtype_size();
  sub_1D3790(a1, v7, dtype_size, 8, v6, 8, 0);
  sub_11A960((__int64)&v10);
  return 0;
}
