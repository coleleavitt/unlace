void __fastcall sub_CC4F0(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  if ( a3 )
    sub_CC450(a1, a3);
}
