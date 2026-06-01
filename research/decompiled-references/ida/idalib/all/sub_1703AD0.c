void __fastcall sub_1703AD0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 32) = a4;
    *(_QWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = a2;
  }
}
