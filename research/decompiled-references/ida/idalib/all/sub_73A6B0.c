__int64 __fastcall sub_73A6B0(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned int v3; // ebp

  v3 = *(unsigned __int8 *)(a1 + 5804);
  if ( !(_BYTE)v3 )
    return v3;
  *(_BYTE *)(a1 + 5804) = 0;
  if ( (*(_BYTE *)(a1 + 1620) & 2) != 0 )
  {
    dword_2CCC638 = 19;
    sub_743100(19, 0, a3);
  }
  if ( *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 24) )
  {
    if ( dword_2CCC638 == 21 )
      sub_743100(21, 0, a3);
    if ( *a2 > 0x204u )
    {
      dword_2CCC638 = 18;
      sub_743100(18, 0, a3);
    }
    *(_QWORD *)(a1 + 48) = a3;
    *(_DWORD *)(a1 + 1612) = 0;
    *(_WORD *)(a1 + 64) = 0;
    if ( a3 )
      *(_QWORD *)(a3 + 8) = 0;
    byte_2CCC5CA = 0;
    v3 = sub_743770(a1, a2, 1);
    if ( (_BYTE)v3 )
      sub_73A490(a1, (__int64)a2);
    if ( byte_2CCC5CA )
    {
      sub_744F90(a1, 1);
      byte_2CCC5CA = 0;
      *(_WORD *)(a1 + 1634) = 0;
    }
    *(_BYTE *)(a1 + 4220) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 1612) = 0;
    *(_WORD *)(a1 + 64) = 0;
    *(_BYTE *)(a1 + 5804) = 1;
    return v3;
  }
  *(_BYTE *)(a1 + 5804) = 1;
  return 0;
}
