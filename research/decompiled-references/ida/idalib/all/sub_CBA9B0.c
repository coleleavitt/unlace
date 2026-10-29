__int64 __fastcall sub_CBA9B0(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  _QWORD v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v6[0] = a4 | 4;
  switch ( (unsigned __int64)&v5 )
  {
    case 0xFFFFFFFFFFFFFFF8LL:
      result = sub_D00890(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFF9LL:
      result = sub_D009A0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFALL:
      result = sub_D008D0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFBLL:
      result = sub_D009E0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFCLL:
      result = sub_D00910(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFDLL:
      result = sub_D00A20(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFELL:
      result = sub_D00950(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFFLL:
      result = sub_D00A60(a1, a2, v6);
      break;
    case 0uLL:
    case 1uLL:
    case 2uLL:
      result = sub_D00850(a1, a2, v6);
      break;
  }
  return result;
}
