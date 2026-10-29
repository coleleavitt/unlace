void __fastcall sub_20B3390(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  switch ( *(_BYTE *)a1 )
  {
    case 5:
    case 6:
    case 9:
    case 0x1E:
      sub_20B3270(a1);
      break;
    case 7:
      v3 = *(void **)(a1 + 16);
      if ( v3 )
        operator delete(v3);
      break;
    case 8:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
      break;
    case 0xB:
      if ( *(_DWORD *)(a1 + 24) > 0x40u )
      {
        v2 = *(void **)(a1 + 16);
        if ( v2 )
          goto LABEL_4;
      }
      break;
    case 0x25:
      if ( *(_DWORD *)(a1 + 64) > 0x40u )
      {
        v4 = *(void **)(a1 + 56);
        if ( v4 )
          operator delete[](v4);
      }
      if ( *(_DWORD *)(a1 + 48) > 0x40u )
      {
        v2 = *(void **)(a1 + 40);
        if ( v2 )
LABEL_4:
          operator delete[](v2);
      }
      break;
  }
  sub_20925D0((__int64 *)(a1 + 8));
  sub_20A0BF0(a1);
}
