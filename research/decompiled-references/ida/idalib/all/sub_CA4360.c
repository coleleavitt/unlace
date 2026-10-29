__int64 __fastcall sub_CA4360(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 result; // rax
  unsigned int v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v5[0] = a3;
  switch ( a2 )
  {
    case 0:
      result = sub_CA3D70(a1, 0x144u, v5, a4);
      break;
    case 1:
      result = sub_CA3D70(a1, 0x145u, v5, a4);
      break;
    case 2:
      result = sub_CA3D70(a1, 0x146u, v5, a4);
      break;
    case 3:
      result = sub_CA3D70(a1, 0x147u, v5, a4);
      break;
    case 4:
      result = sub_CA3D70(a1, 0x148u, v5, a4);
      break;
    case 5:
      result = sub_CA3D70(a1, 0x149u, v5, a4);
      break;
    case 6:
      result = sub_CA3D70(a1, 0x14Au, v5, a4);
      break;
    case 7:
      result = sub_CA3D70(a1, 0x14Bu, v5, a4);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_CA3D70(a1, 0x14Cu, v5, a4);
      break;
  }
  return result;
}
