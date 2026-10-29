void __fastcall sub_1505F80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  _BYTE v3[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL);
  if ( *(_DWORD *)(v2 + 440) )
  {
    sub_1AF3B50(v2);
  }
  else
  {
    sub_1564820(v3, a1, a2, 1601);
    sub_AEA040((__int64)v3);
  }
}
