void __fastcall sub_E31C00(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)a1 = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 112) = 0;
}

