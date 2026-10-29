__int64 __fastcall sub_3D57A0(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  unsigned int v7; // ebp

  v6 = sub_3BE900(a1, a2, 4);
  if ( (v6 & 0x600) == 0x400 && (v6 & 0xF0000000) == 0xD0000000LL )
    return 0;
  v7 = sub_3D55E0(a1, a2, a3, a4);
  if ( !(_BYTE)v7 )
    return 0;
  sub_39ADA0(0x11u, a2, a4);
  return v7;
}
