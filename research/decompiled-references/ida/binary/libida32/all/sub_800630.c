const char *__fastcall sub_800630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *result; // rax

  switch ( (unsigned int)a1 )
  {
    case 0xFFFFBACE:
      result = "XD3_UNIMPLEMENTED";
      break;
    case 0xFFFFBACF:
      result = "XD3_NOSECOND";
      break;
    case 0xFFFFBAD0:
      result = "XD3_INVALID_INPUT";
      break;
    case 0xFFFFBAD1:
      result = "XD3_INVALID";
      break;
    case 0xFFFFBAD2:
      result = "XD3_INTERNAL";
      break;
    case 0xFFFFBAD3:
      result = "XD3_TOOFARBACK";
      break;
    case 0xFFFFBAD4:
      result = "XD3_WINFINISH";
      break;
    case 0xFFFFBAD5:
      result = "XD3_WINSTART";
      break;
    case 0xFFFFBAD6:
      result = "XD3_GOTHEADER";
      break;
    case 0xFFFFBAD7:
      result = "XD3_GETSRCBLK";
      break;
    case 0xFFFFBAD8:
      result = "XD3_OUTPUT";
      break;
    case 0xFFFFBAD9:
      result = "XD3_INPUT";
      break;
    default:
      result = (const char *)qstrerror(a1, a2, a3, a4);
      break;
  }
  return result;
}

