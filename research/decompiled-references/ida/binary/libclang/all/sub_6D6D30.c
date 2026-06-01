char __fastcall sub_6D6D30(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdx
  char result; // al

  v2 = *(_BYTE **)(a1 + 17288);
  switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          + 57)
         & 0x1FF )
  {
    case 0:
    case 0xC:
      result = v2[57];
      break;
    case 1:
    case 0xD:
      result = v2[58];
      break;
    case 2:
    case 0xE:
      result = v2[59];
      break;
    case 3:
    case 0xF:
      result = (v2[56] == 0) + v2[57];
      break;
    case 4:
    case 0x10:
      result = (v2[56] == 0) + v2[58];
      break;
    case 5:
    case 0x11:
      result = (v2[56] == 0) + v2[59];
      break;
    case 6:
    case 0x12:
      result = v2[50] - 1;
      break;
    case 7:
    case 0x13:
      result = v2[52] - 1;
      break;
    case 8:
    case 0x14:
      result = v2[54] - 1;
      break;
    case 9:
    case 0x15:
      result = v2[50] - v2[56];
      break;
    case 0xA:
    case 0x16:
      result = v2[52] - v2[56];
      break;
    case 0xB:
    case 0x17:
      result = v2[54] - v2[56];
      break;
  }
  return result;
}

