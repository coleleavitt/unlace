__int64 __fastcall sub_777FD0(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  do
  {
    switch ( *(_BYTE *)(v1 + 16) )
    {
      case 2:
      case 4:
      case 5:
      case 6:
      case 0x19:
      case 0x1A:
      case 0x27:
        return 1;
      case 0xB:
      case 0x20:
      case 0x25:
      case 0x29:
        goto LABEL_7;
      case 0x2A:
      case 0x2B:
        break;
      default:
        return 0;
    }
    while ( (*(_BYTE *)(v1 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v1 = *(_QWORD *)(*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v1 + 16) - 42 > 1 )
          break;
        if ( (*(_BYTE *)(v1 + 18) & 0x10) == 0 )
          goto LABEL_7;
      }
      v1 = sub_B0D320(v1);
    }
LABEL_7:
    v1 = *(_QWORD *)(*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  while ( *(_BYTE *)(v1 + 16) <= 0x2Bu );
  return 0;
}

