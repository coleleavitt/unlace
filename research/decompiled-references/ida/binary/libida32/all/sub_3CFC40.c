__int64 __fastcall sub_3CFC40(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  unsigned int v7; // ebp

  v6 = sub_3B9AA0((__int64)a1, a2, 4);
  if ( (v6 & 0x600) == 0x400 && (v6 & 0xF0000000) == 0xD0000000LL )
    return 0;
  v7 = sub_3CFA90(a1, a2, a3, a4);
  if ( !(_BYTE)v7 )
    return 0;
  sub_396090(0x11u, a2, a4);
  return v7;
}

