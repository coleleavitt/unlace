__int64 __fastcall sub_CA81D0(_QWORD *a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v5[0] = a3;
  switch ( a2 )
  {
    case 0:
      result = sub_CA80B0(a1, 0x169u, v5, a4);
      break;
    case 1:
      result = sub_CA80B0(a1, 0x16Au, v5, a4);
      break;
    case 2:
      result = sub_CA80B0(a1, 0x16Bu, v5, a4);
      break;
    case 3:
      result = sub_CA80B0(a1, 0x16Cu, v5, a4);
      break;
    case 4:
      result = sub_CA80B0(a1, 0x16Du, v5, a4);
      break;
    case 5:
      result = sub_CA80B0(a1, 0x16Eu, v5, a4);
      break;
    case 6:
      result = sub_CA80B0(a1, 0x16Fu, v5, a4);
      break;
    case 7:
      result = sub_CA80B0(a1, 0x170u, v5, a4);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_CA80B0(a1, 0x171u, v5, a4);
      break;
  }
  return result;
}
