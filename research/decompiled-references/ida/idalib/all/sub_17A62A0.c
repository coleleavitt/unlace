__int64 __fastcall sub_17A62A0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // cl
  __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  switch ( v3 )
  {
    case '@':
      return 4;
    case 'A':
      return 5;
    case 'H':
      return 6;
    case 'F':
      return 7;
    case 'D':
      return 8;
  }
  switch ( a3 )
  {
    case 0u:
    case 1u:
    case 3u:
      result = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0;
      break;
    case 2u:
      result = a3;
      break;
    case 4u:
      result = 3;
      break;
  }
  return result;
}
