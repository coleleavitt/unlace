char __fastcall sub_6A0220(__int64 a1)
{
  __int64 v2; // rbp
  void *v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-20h]

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 1:
    case 0xD:
      return 0;
    case 2:
    case 5:
      return *(_DWORD *)(a1 + 16) > 0x40u;
    case 3:
    case 6:
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 == sub_2575D20() )
        return *(_QWORD *)(a1 + 16) != 0;
      else
        return (unsigned int)sub_25769C0(a1 + 8) > 1;
    case 4:
      v4 = *(_DWORD *)(a1 + 16);
      if ( v4 <= 0x40 )
        return 0;
      sub_2585B30(&v3);
      if ( v4 <= 0x40 )
        return 0;
      if ( v3 )
        operator delete[](v3);
      return 1;
    case 7:
      return (unsigned int)(*(_DWORD *)(a1 + 32) - 3) <= 0xFFFFFFFB;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
      return 1;
    case 0xC:
      return *(_DWORD *)(a1 + 16) > 4u;
  }
}

