__int64 __fastcall sub_CB89A0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = a3 | 4;
  v4 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a3 + 8));
  v6[0] = v3;
  switch ( v4 )
  {
    case 0:
      result = sub_D00890(a1, (unsigned int)(char)a2, v6);
      break;
    case 1:
      result = sub_D009A0(a1, (unsigned __int8)a2, v6);
      break;
    case 2:
      result = sub_D008D0(a1, (unsigned int)(__int16)a2, v6);
      break;
    case 3:
      result = sub_D009E0(a1, (unsigned __int16)a2, v6);
      break;
    case 4:
      result = sub_D00910(a1, a2, v6);
      break;
    case 5:
      result = sub_D00A20(a1, a2, v6);
      break;
    case 6:
      result = sub_D00950(a1, a2, v6);
      break;
    case 7:
      result = sub_D00A60(a1, a2, v6);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_D00850(a1, a2 != 0, v6);
      break;
  }
  return result;
}
