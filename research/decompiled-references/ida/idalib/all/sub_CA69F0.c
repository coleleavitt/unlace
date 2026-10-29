__int64 __fastcall sub_CA69F0(_QWORD *a1, int a2, int a3, __int64 a4, char a5, __int64 *a6)
{
  __int64 result; // rax
  char v7; // [rsp+3h] [rbp-15h] BYREF
  int v8; // [rsp+4h] [rbp-14h] BYREF
  _QWORD v9[2]; // [rsp+8h] [rbp-10h] BYREF

  v8 = a3;
  v9[0] = a4;
  v7 = a5;
  switch ( a2 )
  {
    case 0:
      result = sub_CA6780(a1, 0x24u, &v8, v9, &v7, a6);
      break;
    case 1:
      result = sub_CA6780(a1, 0x25u, &v8, v9, &v7, a6);
      break;
    case 2:
      result = sub_CA6780(a1, 0x26u, &v8, v9, &v7, a6);
      break;
    case 3:
      result = sub_CA6780(a1, 0x27u, &v8, v9, &v7, a6);
      break;
    case 4:
      result = sub_CA6780(a1, 0x28u, &v8, v9, &v7, a6);
      break;
    case 5:
      result = sub_CA6780(a1, 0x29u, &v8, v9, &v7, a6);
      break;
    case 6:
      result = sub_CA6780(a1, 0x2Au, &v8, v9, &v7, a6);
      break;
    case 7:
      result = sub_CA6780(a1, 0x2Bu, &v8, v9, &v7, a6);
      break;
    case 8:
      result = sub_CA6780(a1, 0x2Cu, &v8, v9, &v7, a6);
      break;
    case 9:
      result = sub_CA6780(a1, 0x2Du, &v8, v9, &v7, a6);
      break;
  }
  return result;
}
