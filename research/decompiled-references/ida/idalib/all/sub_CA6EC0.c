__int64 __fastcall sub_CA6EC0(_QWORD *a1, int a2, char a3, unsigned int a4, __int64 a5, __int64 *a6)
{
  __int64 result; // rax
  char v7; // [rsp+3h] [rbp-15h] BYREF
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  _QWORD v9[2]; // [rsp+8h] [rbp-10h] BYREF

  v7 = a3;
  v8 = a4;
  v9[0] = a5;
  switch ( a2 )
  {
    case 0:
      result = sub_CA6D10(a1, 0x74u, &v7, &v8, v9, a6);
      break;
    case 1:
      result = sub_CA6D10(a1, 0x73u, &v7, &v8, v9, a6);
      break;
    case 2:
      result = sub_CA6D10(a1, 0x76u, &v7, &v8, v9, a6);
      break;
    case 3:
      result = sub_CA6D10(a1, 0x75u, &v7, &v8, v9, a6);
      break;
    case 4:
      result = sub_CA6D10(a1, 0x78u, &v7, &v8, v9, a6);
      break;
    case 5:
      result = sub_CA6D10(a1, 0x77u, &v7, &v8, v9, a6);
      break;
    case 6:
      result = sub_CA6D10(a1, 0x7Au, &v7, &v8, v9, a6);
      break;
    case 7:
      result = sub_CA6D10(a1, 0x79u, &v7, &v8, v9, a6);
      break;
    case 8:
      result = sub_CA6D10(a1, 0x7Bu, &v7, &v8, v9, a6);
      break;
    case 9:
      result = sub_CA6D10(a1, 0x7Cu, &v7, &v8, v9, a6);
      break;
    case 10:
      result = sub_CA6D10(a1, 0x7Du, &v7, &v8, v9, a6);
      break;
    case 11:
    case 13:
      result = sub_CA6D10(a1, 0x7Fu, &v7, &v8, v9, a6);
      break;
    case 12:
      result = sub_CA6D10(a1, 0x7Eu, &v7, &v8, v9, a6);
      break;
  }
  return result;
}
