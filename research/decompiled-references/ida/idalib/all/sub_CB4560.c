__int64 __fastcall sub_CB4560(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  __int64 result; // rax
  _QWORD v5[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 16);
  v3 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
  v5[0] = a2 | 4;
  switch ( v3 )
  {
    case 0:
      result = sub_D00890(a1, v2, v5);
      break;
    case 1:
      result = sub_D009A0(a1, v2, v5);
      break;
    case 2:
      result = sub_D008D0(a1, v2, v5);
      break;
    case 3:
      result = sub_D009E0(a1, v2, v5);
      break;
    case 4:
      result = sub_D00910(a1, v2, v5);
      break;
    case 5:
      result = sub_D00A20(a1, v2, v5);
      break;
    case 6:
      result = sub_D00950(a1, (unsigned __int8)v2, v5);
      break;
    case 7:
      result = sub_D00A60(a1, (unsigned __int8)v2, v5);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_D00850(a1, v2, v5);
      break;
  }
  return result;
}
