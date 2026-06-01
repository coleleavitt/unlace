void __fastcall sub_2124C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  *(_QWORD *)(a1 + 64) = a2;
  if ( !a4 )
    a4 = a2;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 131) = a5;
}
