_QWORD *__fastcall sub_9DF1C0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdi
  __int64 v7; // rdx
  _QWORD *result; // rax
  __int64 v9; // r8
  __int64 v10; // r8

  switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
  {
    case 2:
      return (_QWORD *)sub_9DFCA0(a1, 2, a2, a3, 0);
    case 3:
      return (_QWORD *)sub_9DFCA0(a1, 3, a2, a3, 0);
    case 4:
      return (_QWORD *)sub_9DFCA0(a1, 4, a2, a3, 0);
    case 5:
      return (_QWORD *)sub_9DFCA0(a1, 0, a2, a3, 0);
    case 6:
      return (_QWORD *)sub_9DFCA0(a1, 1, a2, a3, 0);
    case 7:
      return (_QWORD *)sub_9DFCA0(a1, 5, a2, a3, 0);
    case 8:
      return (_QWORD *)sub_9DFCA0(a1, 6, a2, a3, 0);
    case 9:
      return (_QWORD *)sub_9DFCA0(a1, 14, a2, a3, 0);
    case 0xA:
      v10 = 0;
      return (_QWORD *)sub_9DFCA0(a1, 12, a2, a3, v10);
    case 0xB:
      v10 = 1;
      return (_QWORD *)sub_9DFCA0(a1, 12, a2, a3, v10);
    case 0xC:
      v9 = 0;
      goto LABEL_25;
    case 0xD:
      v9 = 1;
LABEL_25:
      result = (_QWORD *)sub_9DFCA0(a1, 13, a2, a3, v9);
      break;
    case 0xE:
      result = (_QWORD *)sub_9DFCA0(a1, 10, a2, a3, 0);
      break;
    case 0xF:
      result = (_QWORD *)sub_9DFCA0(a1, 11, a2, a3, 0);
      break;
    case 0x10:
      result = (_QWORD *)sub_9DFCA0(a1, 7, a2, a3, 0);
      break;
    case 0x11:
      result = (_QWORD *)sub_9DFCA0(a1, 8, a2, a3, 0);
      break;
    case 0x12:
      result = (_QWORD *)sub_9DFCA0(a1, 9, a2, a3, 0);
      break;
    case 0x13:
      result = (_QWORD *)sub_9DFCA0(a1, 15, a2, a3, 0);
      break;
    case 0x14:
      result = (_QWORD *)sub_9DFCA0(a1, 16, a2, a3, 0);
      break;
    case 0x15:
      result = sub_9DEF80(a1, 0xAu, a2, a3, 1);
      break;
    case 0x16:
      result = sub_9DEF80(a1, 2u, a2, a3, 0);
      break;
    case 0x17:
      result = sub_9DEF80(a1, 3u, a2, a3, 0);
      break;
    case 0x18:
      result = sub_9DEF80(a1, 4u, a2, a3, 0);
      break;
    case 0x19:
      result = sub_9DEF80(a1, 0, a2, a3, 0);
      break;
    case 0x1A:
      result = sub_9DEF80(a1, 1u, a2, a3, 0);
      break;
    case 0x1B:
      result = sub_9DEF80(a1, 5u, a2, a3, 0);
      break;
    case 0x1C:
      result = sub_9DEF80(a1, 6u, a2, a3, 0);
      break;
    case 0x1D:
      result = sub_9DEF80(a1, 7u, a2, a3, 0);
      break;
    case 0x1E:
      result = sub_9DEF80(a1, 8u, a2, a3, 0);
      break;
    case 0x1F:
      result = sub_9DEF80(a1, 9u, a2, a3, 0);
      break;
    case 0x20:
      result = (_QWORD *)sub_9DF520(a1, *(_QWORD *)(a2 + 24), a3);
      break;
    default:
      v6 = *a1;
      v7 = *v6;
      v6[10] += 24;
      result = (_QWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v6[1] >= (unsigned __int64)(result + 3) && v7 )
        *v6 = (__int64)(result + 3);
      else
        result = (_QWORD *)sub_986170((__int64)v6, 24, 24, 4, a5, a6);
      *result = 1;
      result[1] = 0;
      result[2] = a2;
      break;
  }
  return result;
}
