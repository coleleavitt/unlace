__int64 __fastcall sub_C90520(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
  v5[0] = a2 | 4;
  switch ( v3 )
  {
    case 0:
      result = sub_CDCB50(a1, (unsigned int)(char)v2, v5);
      break;
    case 1:
      result = sub_CDCC60(a1, (unsigned __int8)v2, v5);
      break;
    case 2:
      result = sub_CDCB90(a1, (unsigned int)(__int16)v2, v5);
      break;
    case 3:
      result = sub_CDCCA0(a1, (unsigned __int16)v2, v5);
      break;
    case 4:
      result = sub_CDCBD0(a1, v2, v5);
      break;
    case 5:
      result = sub_CDCCE0(a1, v2, v5);
      break;
    case 6:
      result = sub_CDCC10(a1, v2, v5);
      break;
    case 7:
      result = sub_CDCD20(a1, v2, v5);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_CDCB10(a1, v2 != 0, v5);
      break;
  }
  return result;
}

