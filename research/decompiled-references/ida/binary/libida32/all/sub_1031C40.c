char *__fastcall sub_1031C40(__int64 a1, const __m128i *a2, __int64 a3)
{
  char *result; // rax

  sub_10316E0(a1, a2, a3);
  *(_QWORD *)a1 = &off_2BEF200;
  result = (char *)a2[2].m128i_u32[0];
  switch ( a2[2].m128i_i32[0] )
  {
    case 1:
      *(_QWORD *)(a1 + 328) = "__mcount";
      result = "__mcount";
      break;
    case 0xE:
    case 0x1C:
      return result;
    case 0x10:
    case 0x11:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      *(_QWORD *)(a1 + 328) = "_mcount";
      result = "_mcount";
      break;
    case 0x25:
    case 0x26:
      *(_BYTE *)(a1 + 278) = 1;
      goto LABEL_3;
    default:
LABEL_3:
      *(_QWORD *)(a1 + 328) = ".mcount";
      result = ".mcount";
      break;
  }
  return result;
}

