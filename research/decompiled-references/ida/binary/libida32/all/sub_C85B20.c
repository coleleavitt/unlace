__int64 __fastcall sub_C85B20(_QWORD *a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+4h] [rbp-14h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-10h] BYREF

  v7[0] = a3;
  v6 = a4;
  switch ( a2 )
  {
    case 0:
      result = sub_C859F0(a1, 0x41Fu, v7, &v6, a5);
      break;
    case 1:
      result = sub_C859F0(a1, 0x420u, v7, &v6, a5);
      break;
    case 2:
      result = sub_C859F0(a1, 0x421u, v7, &v6, a5);
      break;
    case 3:
      result = sub_C859F0(a1, 0x422u, v7, &v6, a5);
      break;
    case 4:
      result = sub_C859F0(a1, 0x423u, v7, &v6, a5);
      break;
    case 5:
      result = sub_C859F0(a1, 0x424u, v7, &v6, a5);
      break;
    case 6:
      result = sub_C859F0(a1, 0x425u, v7, &v6, a5);
      break;
    case 7:
      result = sub_C859F0(a1, 0x426u, v7, &v6, a5);
      break;
    case 8:
      result = sub_C859F0(a1, 0x427u, v7, &v6, a5);
      break;
    case 9:
      result = sub_C859F0(a1, 0x428u, v7, &v6, a5);
      break;
    case 10:
      result = sub_C859F0(a1, 0x429u, v7, &v6, a5);
      break;
    case 11:
      result = sub_C859F0(a1, 0x42Au, v7, &v6, a5);
      break;
  }
  return result;
}

