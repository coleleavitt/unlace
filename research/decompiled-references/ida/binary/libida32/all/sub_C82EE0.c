__int64 __fastcall sub_C82EE0(_QWORD *a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v5[0] = a3;
  switch ( a2 )
  {
    case 0:
      result = sub_C82D90(a1, 0x174u, v5, a4);
      break;
    case 1:
      result = sub_C82D90(a1, 0x175u, v5, a4);
      break;
    case 2:
      result = sub_C82D90(a1, 0x176u, v5, a4);
      break;
    case 3:
      result = sub_C82D90(a1, 0x177u, v5, a4);
      break;
    case 4:
      result = sub_C82D90(a1, 0x178u, v5, a4);
      break;
    case 5:
      result = sub_C82D90(a1, 0x179u, v5, a4);
      break;
    case 6:
      result = sub_C82D90(a1, 0x17Au, v5, a4);
      break;
    case 7:
      result = sub_C82D90(a1, 0x17Bu, v5, a4);
      break;
    case 8:
      result = sub_C82D90(a1, 0x17Cu, v5, a4);
      break;
    case 9:
      result = sub_C82D90(a1, 0x17Du, v5, a4);
      break;
  }
  return result;
}

