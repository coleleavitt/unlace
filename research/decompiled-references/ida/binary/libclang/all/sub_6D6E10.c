__int64 __fastcall sub_6D6E10(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          + 54)
         & 0x1FF )
  {
    case 0:
      result = a1[2335];
      break;
    case 1:
      result = a1[2336];
      break;
    case 2:
      result = a1[2337];
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
      result = a1[2355];
      break;
    case 6:
      result = a1[2341];
      break;
    case 7:
      result = a1[2342];
      break;
    case 8:
      result = a1[2343];
      break;
    case 0xC:
      result = a1[2347];
      break;
    case 0xD:
      result = a1[2348];
      break;
    case 0xE:
      result = a1[2349];
      break;
    case 0x12:
      result = a1[2353];
      break;
    case 0x13:
      result = a1[2354];
      break;
  }
  return result;
}

