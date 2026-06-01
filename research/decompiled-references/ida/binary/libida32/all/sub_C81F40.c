__int64 __fastcall sub_C81F40(_QWORD *a1, int a2, __int64 a3, char a4, __int64 *a5)
{
  __int64 result; // rax
  char v6; // [rsp+7h] [rbp-11h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-10h] BYREF

  v7[0] = a3;
  v6 = a4;
  switch ( a2 )
  {
    case 0:
      result = sub_C81DA0(a1, 0x1Au, v7, &v6, a5);
      break;
    case 1:
      result = sub_C81DA0(a1, 0x1Bu, v7, &v6, a5);
      break;
    case 2:
      result = sub_C81DA0(a1, 0x1Cu, v7, &v6, a5);
      break;
    case 3:
      result = sub_C81DA0(a1, 0x1Du, v7, &v6, a5);
      break;
    case 4:
      result = sub_C81DA0(a1, 0x1Eu, v7, &v6, a5);
      break;
    case 5:
      result = sub_C81DA0(a1, 0x1Fu, v7, &v6, a5);
      break;
    case 6:
      result = sub_C81DA0(a1, 0x20u, v7, &v6, a5);
      break;
    case 7:
      result = sub_C81DA0(a1, 0x21u, v7, &v6, a5);
      break;
    case 8:
      result = sub_C81DA0(a1, 0x22u, v7, &v6, a5);
      break;
    case 9:
      result = sub_C81DA0(a1, 0x23u, v7, &v6, a5);
      break;
  }
  return result;
}

