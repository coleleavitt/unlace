__int64 __fastcall sub_CAE480(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 && (*(_BYTE *)(a2 + 504) & 0x10) != 0 )
    return sub_D8A3F0(a2, a3);
  else
    return *(_QWORD *)(a1 + 1240);
}
