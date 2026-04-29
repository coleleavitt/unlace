__int64 __fastcall sub_3FA4B0(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r9

  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL);
  sub_3FA3B0(a1, a3, a4, *(_BYTE *)(a2 + 45), v6);
  v7 = *(_QWORD *)(a2 + 40LL * a5 + 56) + 16LL * *(_QWORD *)a2;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v7 != v8 )
  {
    v8 &= v7;
    if ( v7 == -1 )
      v8 = -1;
  }
  return sub_3F56D0(a1, 0x2Au, 0, v6, 0x3BEA45E214ADDC55LL, v8, 0);
}
