__int64 __fastcall sub_1895420(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 544LL);
  result = 0xFFFFFFFFLL;
  switch ( (*(_BYTE *)(v1 + 8) + 109) & 0x7F )
  {
    case 0:
      result = 1;
      break;
    case 1:
      result = 0;
      break;
    case 2:
      result = 4;
      break;
    case 3:
      result = 5;
      break;
    case 4:
      v3 = *(_QWORD *)(v1 - 8);
      result = 3;
      if ( (v3 & 7) == 0 )
        result = (unsigned int)((v3 & 0xFFFFFFFFFFFFFFF8LL) == 0) + 2;
      break;
    default:
      return result;
  }
  return result;
}
