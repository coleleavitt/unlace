__int64 __fastcall sub_3EF4A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r13
  unsigned int v4; // r14d
  int dtype_size; // eax
  __int64 v7; // [rsp+0h] [rbp-40h] BYREF
  int v8; // [rsp+8h] [rbp-38h]
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 832);
  v9 = __readfsqword(0x28u);
  v7 = 0x800000001LL;
  v8 = *(_DWORD *)(v2 + 464);
  sub_1D6450(a1, 60, nullptr, nullptr, (unsigned __int8 *)&v7);
  v3 = *(int *)(v2 + 464);
  v4 = *(_DWORD *)(a2 + 8);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, v4, dtype_size, 8, v3, 8, 0);
  sub_11CDA0((__int64)&v7);
  return 0;
}
