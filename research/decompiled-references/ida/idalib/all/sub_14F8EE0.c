__int64 __fastcall sub_14F8EE0(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rdi
  _BYTE v5[104]; // [rsp+0h] [rbp-68h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v3 = *(__int64 **)(a1 + 2072);
  if ( v3 )
  {
    sub_14F8800(v3, a2);
  }
  else
  {
    sub_1564820(v5, a1, a2, 1632);
    sub_AEA040((__int64)v5);
  }
  return 0;
}
