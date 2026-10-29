__int64 __fastcall sub_EF98D0(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)a1 & 0x7FFFFFFF )
  {
    case 0:
    case 1:
    case 6:
    case 7:
    case 9:
      result = 0;
      break;
    case 2:
    case 3:
      result = *(_QWORD *)(a1 + 8);
      break;
    case 4:
    case 5:
      result = *(_QWORD *)(a1 + 16);
      break;
    case 8:
      result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      break;
  }
  return result;
}

