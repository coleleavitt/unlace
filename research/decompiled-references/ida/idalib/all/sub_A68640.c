__int64 __fastcall sub_A68640(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          + 53)
         & 0x1FF )
  {
    case 0:
      result = a1[2355];
      break;
    case 1:
      result = a1[2356];
      break;
    case 2:
      result = a1[2357];
      break;
    case 3:
    case 4:
    case 5:
    case 9:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x14:
      result = a1[2375];
      break;
    case 6:
      result = a1[2361];
      break;
    case 7:
      result = a1[2362];
      break;
    case 8:
      result = a1[2363];
      break;
    case 0xC:
      result = a1[2367];
      break;
    case 0xD:
      result = a1[2368];
      break;
    case 0xE:
      result = a1[2369];
      break;
    case 0x12:
      result = a1[2373];
      break;
    case 0x13:
      result = a1[2374];
      break;
  }
  return result;
}
