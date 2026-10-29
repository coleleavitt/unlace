__int64 __fastcall sub_C95D00(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v6[0] = a4 | 4;
  switch ( (unsigned __int64)&v5 )
  {
    case 0xFFFFFFFFFFFFFFF8LL:
      result = sub_C850C0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFF9LL:
      result = sub_C853C0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFALL:
      result = sub_C851C0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFBLL:
      result = sub_C854C0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFCLL:
      result = sub_C86FA0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFDLL:
      result = sub_C80730(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFELL:
      result = sub_C852C0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFFLL:
      result = sub_C86740(a1, a2, v6);
      break;
    case 0uLL:
    case 1uLL:
    case 2uLL:
      result = sub_C82120(a1, a2 != 0, v6);
      break;
  }
  return result;
}

