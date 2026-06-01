__int64 __fastcall sub_B4CD90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi

LABEL_1:
  v4 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    switch ( *(_BYTE *)(v4 + 16) )
    {
      case 2:
      case 4:
      case 5:
      case 6:
      case 0x19:
      case 0x1A:
      case 0x28:
        return 1;
      case 0xB:
      case 0x21:
      case 0x26:
      case 0x2A:
        v7 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v4 = *(_QWORD *)v7;
        if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) <= 0x2Cu )
          continue;
        return 0;
      case 0x2B:
      case 0x2C:
        while ( 1 )
        {
          a1 = *(_QWORD *)(v4 + 32);
          if ( (*(_BYTE *)(v4 + 18) & 0x10) == 0 )
            break;
          v5 = a1 & 0xFFFFFFFFFFFFFFF0LL;
          v4 = *(_QWORD *)v5;
          v6 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 43;
          if ( (unsigned int)v6 > 1 )
            v4 = sub_F3F310(v4, a2, v6, a4);
        }
        goto LABEL_1;
      default:
        return 0;
    }
  }
}

