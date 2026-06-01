__int64 __fastcall sub_2051200(__int64 a1)
{
  int v2; // eax
  __int16 v3; // dx
  __int64 v5; // rbp
  void *v6; // rdi
  void *v7; // rdi

  switch ( *(_BYTE *)a1 )
  {
    case 0:
    case 1:
    case 2:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
      break;
    case 3:
    case 4:
      v5 = *(_QWORD *)(a1 + 32);
      if ( v5 )
      {
        sub_20510B0(*(_QWORD *)(a1 + 32));
        sub_20C9BF0(v5);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 32) > 0x40u )
      {
        v6 = *(void **)(a1 + 24);
        if ( v6 )
          operator delete[](v6);
      }
      break;
    case 6:
      sub_9955A0((_QWORD *)(a1 + 24));
      break;
    case 0x12:
      v2 = *(unsigned __int16 *)(a1 + 2);
      v3 = *(_WORD *)(a1 + 2);
      if ( (unsigned int)(v2 - 38) > 0xC && (unsigned int)(v2 - 13) > 0x11 && v3 != 61 && v3 != 62 )
      {
        if ( v3 == 63 )
        {
          v7 = *(void **)(a1 + 24);
          if ( v7 != (void *)(a1 + 40) )
            free(v7);
        }
        else if ( *(_BYTE *)(a1 + 72) )
        {
          sub_200ED00(a1 + 40);
        }
      }
      break;
  }
  sub_20CC0C0(a1);
  return sub_20C9BF0(a1);
}
