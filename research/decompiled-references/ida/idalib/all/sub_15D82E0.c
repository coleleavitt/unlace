char __fastcall sub_15D82E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  switch ( a3 )
  {
    case 0:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 8;
      return v3;
    case 1:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 62;
      return v3;
    case 2:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 33;
      return v3;
    case 3:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 49 <= 2;
      return v3;
    case 4:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5;
      return v3;
    case 5:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3;
      return v3;
    case 6:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 24;
      return v3;
    case 7:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 23;
      return v3;
    case 8:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 21 <= 1;
      return v3;
    case 9:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 20;
      return v3;
    case 10:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 18;
      return v3;
    case 11:
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
        goto LABEL_2;
      return (*(_QWORD *)(a2 + 56) >> 17) & 1LL;
    case 12:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 75;
      return v3;
    case 13:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 19;
      return v3;
    case 14:
      LOBYTE(v3) = ((*(_BYTE *)(a2 + 28) + 70) & 0x7Fu) <= 3;
      return v3;
    case 15:
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 58 > 3 )
        goto LABEL_2;
      LOBYTE(v3) = *(_BYTE *)(a2 + 73) >> 5 != 2;
      return v3;
    case 16:
      goto LABEL_2;
    case 17:
      if ( !a2 )
        goto LABEL_2;
      LOBYTE(v3) = sub_B8DC30(a2, 0) != 0;
      break;
    case 18:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 64 <= 2;
      return v3;
    case 19:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6;
      return v3;
    case 20:
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_2;
      LOBYTE(v3) = (unsigned int)sub_B73370(a2) != 0;
      break;
    case 21:
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_2;
      LOBYTE(v3) = !sub_9B48E0(a2);
      break;
    case 22:
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 || !sub_9B48E0(a2) )
        goto LABEL_2;
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) != 43;
      break;
    case 23:
      LOBYTE(v3) = (*(_BYTE *)(a2 + 28) & 0x7F) == 43;
      return v3;
    case 24:
      LODWORD(v3) = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (unsigned int)(v3 - 40) > 6 )
LABEL_2:
        LOBYTE(v3) = 0;
      else
        LOBYTE(v3) = (_DWORD)v3 != 43;
      break;
  }
  return v3;
}
