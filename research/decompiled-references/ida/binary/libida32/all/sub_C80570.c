__int64 __fastcall sub_C80570(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 result; // rax
  unsigned int v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v5[0] = a3;
  switch ( a2 )
  {
    case 0:
      result = sub_C80030(a1, 0x139u, v5, a4);
      break;
    case 1:
      result = sub_C80030(a1, 0x13Au, v5, a4);
      break;
    case 2:
      result = sub_C80030(a1, 0x13Bu, v5, a4);
      break;
    case 3:
      result = sub_C80030(a1, 0x13Cu, v5, a4);
      break;
    case 4:
      result = sub_C80030(a1, 0x13Du, v5, a4);
      break;
    case 5:
      result = sub_C80030(a1, 0x13Eu, v5, a4);
      break;
    case 6:
      result = sub_C80030(a1, 0x13Fu, v5, a4);
      break;
    case 7:
      result = sub_C80030(a1, 0x140u, v5, a4);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_C80030(a1, 0x141u, v5, a4);
      break;
  }
  return result;
}

