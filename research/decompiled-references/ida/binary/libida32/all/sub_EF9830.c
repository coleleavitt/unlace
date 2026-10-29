bool __fastcall sub_EF9830(__int64 a1)
{
  bool result; // al

  switch ( *(_DWORD *)a1 & 0x7FFFFFFF )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
      result = 0;
      break;
    case 1:
      result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38;
      break;
    case 7:
      result = 1;
      break;
    case 8:
      result = (**(_WORD **)(a1 + 8) & 0x1FF) == 22;
      break;
  }
  return result;
}

