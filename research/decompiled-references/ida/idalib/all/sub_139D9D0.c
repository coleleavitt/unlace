__int64 __fastcall sub_139D9D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v10[0] = a2;
  v8 = sub_139D2D0(v7, a2, a3, a4, a5, a6);
  *sub_A25EE0(a1 + 40, (int *)v10) = v8;
  std::_V2::system_category((std::_V2 *)(a1 + 40));
  return 0;
}
