void __fastcall sub_B74930(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 128) = a2;
  *(_BYTE *)(a1 + 83) &= ~8u;
  if ( a2 )
    *(_DWORD *)(a1 + 140) = sub_EEC140(a2);
}
