__int64 __fastcall sub_CA7220(_QWORD *a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+4h] [rbp-14h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-10h] BYREF

  v7[0] = a3;
  v6 = a4;
  switch ( a2 )
  {
    case 0:
      result = sub_CA70F0(a1, 0x14Du, v7, &v6, a5);
      break;
    case 1:
      result = sub_CA70F0(a1, 0x14Eu, v7, &v6, a5);
      break;
    case 2:
      result = sub_CA70F0(a1, 0x14Fu, v7, &v6, a5);
      break;
    case 3:
      result = sub_CA70F0(a1, 0x150u, v7, &v6, a5);
      break;
    case 4:
      result = sub_CA70F0(a1, 0x151u, v7, &v6, a5);
      break;
    case 5:
      result = sub_CA70F0(a1, 0x152u, v7, &v6, a5);
      break;
    case 6:
      result = sub_CA70F0(a1, 0x153u, v7, &v6, a5);
      break;
    case 7:
      result = sub_CA70F0(a1, 0x154u, v7, &v6, a5);
      break;
    case 8:
      result = sub_CA70F0(a1, 0x155u, v7, &v6, a5);
      break;
    case 9:
      result = sub_CA70F0(a1, 0x156u, v7, &v6, a5);
      break;
    case 10:
      result = sub_CA70F0(a1, 0x157u, v7, &v6, a5);
      break;
    case 11:
      result = sub_CA70F0(a1, 0x158u, v7, &v6, a5);
      break;
  }
  return result;
}
