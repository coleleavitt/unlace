__int64 __fastcall sub_C85D40(_QWORD *a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+4h] [rbp-14h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-10h] BYREF

  v6 = a3;
  v7[0] = a4;
  switch ( a2 )
  {
    case 0:
      result = sub_C85C10(a1, 0x3FFu, &v6, v7, a5);
      break;
    case 1:
      result = sub_C85C10(a1, 0x400u, &v6, v7, a5);
      break;
    case 2:
      result = sub_C85C10(a1, 0x401u, &v6, v7, a5);
      break;
    case 3:
      result = sub_C85C10(a1, 0x402u, &v6, v7, a5);
      break;
    case 4:
      result = sub_C85C10(a1, 0x403u, &v6, v7, a5);
      break;
    case 5:
      result = sub_C85C10(a1, 0x404u, &v6, v7, a5);
      break;
    case 6:
      result = sub_C85C10(a1, 0x405u, &v6, v7, a5);
      break;
    case 7:
      result = sub_C85C10(a1, 0x406u, &v6, v7, a5);
      break;
    case 8:
      result = sub_C85C10(a1, 0x407u, &v6, v7, a5);
      break;
    case 9:
      result = sub_C85C10(a1, 0x408u, &v6, v7, a5);
      break;
    case 10:
      result = sub_C85C10(a1, 0x409u, &v6, v7, a5);
      break;
    case 11:
      result = sub_C85C10(a1, 0x40Au, &v6, v7, a5);
      break;
    case 12:
      result = sub_C85C10(a1, 0x40Du, &v6, v7, a5);
      break;
    case 13:
      result = sub_C85C10(a1, 0x40Bu, &v6, v7, a5);
      break;
    case 14:
      result = sub_C85C10(a1, 0x40Cu, &v6, v7, a5);
      break;
  }
  return result;
}

