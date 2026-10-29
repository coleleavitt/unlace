void __fastcall sub_1CCEE00(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = *(_QWORD *)(a1 + 248);
  sub_F22AA0(v9, a4);
  v8 = sub_A80CA0(v7, *(_QWORD *)(a2 + 8), a3, v9[0]);
  sub_1CCD5B0(a1, v8, a5);
}
