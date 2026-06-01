bool __fastcall sub_A2C050(__int64 a1)
{
  bool result; // al
  void *v2; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v3; // [rsp+18h] [rbp-10h]

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 1:
    case 0xD:
      goto LABEL_7;
    case 2:
    case 5:
      result = *(_DWORD *)(a1 + 16) > 0x40u;
      break;
    case 3:
    case 6:
      if ( *(_QWORD *)(a1 + 8) == sub_21D5390() )
        result = *(_QWORD *)(a1 + 16) != 0;
      else
        result = (unsigned int)sub_21D5B00(a1 + 8) > 1;
      break;
    case 4:
      v3 = *(_DWORD *)(a1 + 16);
      if ( v3 <= 0x40 || (sub_21E17D0(&v2), v3 <= 0x40) )
      {
LABEL_7:
        result = 0;
      }
      else
      {
        result = 1;
        if ( v2 )
        {
          operator delete[](v2);
          result = 1;
        }
      }
      break;
    case 7:
      result = (unsigned int)(*(_DWORD *)(a1 + 32) - 3) <= 0xFFFFFFFB;
      break;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
      result = 1;
      break;
    case 0xC:
      result = *(_DWORD *)(a1 + 16) > 4u;
      break;
  }
  return result;
}

