__int64 __fastcall sub_C96C70(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  _QWORD v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v6[0] = a4 | 4;
  switch ( (unsigned __int64)&v5 )
  {
    case 0xFFFFFFFFFFFFFFF8LL:
      result = sub_CDCB50(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFF9LL:
      result = sub_CDCC60(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFALL:
      result = sub_CDCB90(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFBLL:
      result = sub_CDCCA0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFCLL:
      result = sub_CDCBD0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFDLL:
      result = sub_CDCCE0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFELL:
      result = sub_CDCC10(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFFLL:
      result = sub_CDCD20(a1, a2, v6);
      break;
    case 0uLL:
    case 1uLL:
    case 2uLL:
      result = sub_CDCB10(a1, a2, v6);
      break;
  }
  return result;
}

