char *__fastcall sub_FFDD70(int a1, __int64 a2)
{
  char *result; // rax

  switch ( a1 )
  {
    case 3:
      if ( (_DWORD)a2 == 1 )
      {
        result = "need_device_ptr";
      }
      else
      {
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 == 2 )
            return "need_device_addr";
          if ( (_DWORD)a2 == 3 )
            return "unknown";
LABEL_186:
          JUMPOUT(0xFFE560);
        }
        result = "nothing";
      }
      break;
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 23:
    case 24:
    case 25:
    case 30:
    case 31:
    case 32:
    case 34:
    case 35:
    case 36:
    case 37:
    case 39:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 54:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 71:
    case 73:
    case 74:
    case 75:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 84:
    case 86:
    case 87:
    case 88:
    case 89:
    case 91:
    case 92:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
      switch ( a2 )
      {
        case 0LL:
          return "in";
        case 1LL:
          return "out";
        case 2LL:
          return "inout";
        case 3LL:
          return "mutexinoutset";
        case 4LL:
          return "depobj";
        case 5LL:
          return "source";
        case 6LL:
          return "sink";
        case 7LL:
          return "inoutset";
        case 8LL:
          return "outallmemory";
        case 9LL:
          return "inoutallmemory";
        case 10LL:
          return "unknown";
        default:
          goto LABEL_186;
      }
    case 7:
      if ( (_DWORD)a2 == 1 )
        return "align";
      if ( !(_DWORD)a2 )
        return (char *)"allocator";
      if ( (_DWORD)a2 != 2 )
        goto LABEL_186;
      return "unknown";
    case 10:
      if ( (_DWORD)a2 != 1 )
      {
        if ( !(_DWORD)a2 )
          return "compilation";
        if ( (_DWORD)a2 == 2 )
          return "unknown";
        goto LABEL_186;
      }
      result = "execution";
      break;
    case 11:
      if ( (_DWORD)a2 == 1 )
        return "acq_rel";
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 == 2 )
          return (char *)"relaxed";
        if ( (_DWORD)a2 == 3 )
          return "unknown";
        goto LABEL_186;
      }
      return "seq_cst";
    case 12:
      switch ( (_DWORD)a2 )
      {
        case 1:
          return "parallel";
        case 0:
          return "teams";
        case 2:
          return (char *)"thread";
      }
      if ( (_DWORD)a2 != 3 )
        goto LABEL_186;
      return "unknown";
    case 20:
      switch ( (int)a2 )
      {
        case 0:
          result = "none";
          break;
        case 1:
          result = "shared";
          break;
        case 2:
          result = "private";
          break;
        case 3:
          result = "firstprivate";
          break;
        case 4:
          result = "unknown";
          break;
      }
      return result;
    case 21:
      switch ( a2 )
      {
        case 0LL:
          return "scalar";
        case 1LL:
          return "aggregate";
        case 2LL:
          return "pointer";
        case 3LL:
          return "all";
        case 4LL:
        case 13LL:
          return "unknown";
        case 5LL:
          return "alloc";
        case 6LL:
          return (char *)"to";
        case 7LL:
          return (char *)"from";
        case 8LL:
          return "tofrom";
        case 9LL:
          return "firstprivate";
        case 10LL:
          return "none";
        case 11LL:
          return "default";
        case 12LL:
          return "present";
        default:
          goto LABEL_186;
      }
    case 22:
      switch ( a2 )
      {
        case 0LL:
          return "in";
        case 1LL:
          return "out";
        case 2LL:
          return "inout";
        case 3LL:
          return "mutexinoutset";
        case 4LL:
          return "depobj";
        case 5LL:
          return "source";
        case 6LL:
          return "sink";
        case 7LL:
          return "inoutset";
        case 8LL:
          return "outallmemory";
        case 9LL:
          return "inoutallmemory";
        case 10LL:
          return "unknown";
        default:
          goto LABEL_186;
      }
    case 26:
      if ( (_DWORD)a2 == 1 )
        return "device_num";
      if ( !(_DWORD)a2 )
        return "ancestor";
      if ( (_DWORD)a2 != 2 )
        goto LABEL_186;
      return "unknown";
    case 27:
      if ( (_DWORD)a2 == 1 )
        return "nohost";
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 == 2 )
          return (char *)"any";
        if ( (_DWORD)a2 == 3 )
          return "unknown";
        goto LABEL_186;
      }
      return "host";
    case 28:
      if ( !(_DWORD)a2 )
        return "static";
      if ( (_DWORD)a2 != 1 )
        goto LABEL_186;
      return "unknown";
    case 29:
      switch ( a2 )
      {
        case 0LL:
          return "source";
        case 1LL:
          return "sink";
        case 2LL:
          return "sink_omp_cur_iteration";
        case 3LL:
          return "source_omp_cur_iteration";
        case 4LL:
          return "unknown";
        default:
          goto LABEL_186;
      }
    case 33:
      return (char *)sub_20EB760((unsigned int)a2, 0);
    case 38:
    case 102:
      if ( (_DWORD)a2 == 1 )
        return "present";
      if ( !(_DWORD)a2 )
        return "mapper";
      if ( (_DWORD)a2 != 2 )
        goto LABEL_186;
      return "unknown";
    case 40:
      if ( !(_DWORD)a2 )
        return "strict";
      if ( (_DWORD)a2 != 1 )
        goto LABEL_186;
      return "unknown";
    case 52:
      if ( !(_DWORD)a2 )
        return (char *)"conditional";
      if ( (_DWORD)a2 != 1 )
        goto LABEL_186;
      return "unknown";
    case 53:
      switch ( a2 )
      {
        case 0LL:
          return "val";
        case 1LL:
          return "ref";
        case 2LL:
          return "uval";
        case 3LL:
          return (char *)"step";
        case 4LL:
          return "unknown";
        default:
          goto LABEL_186;
      }
    case 55:
      switch ( a2 )
      {
        case 0LL:
          return "alloc";
        case 1LL:
          return (char *)"to";
        case 2LL:
          return (char *)"from";
        case 3LL:
          return "tofrom";
        case 4LL:
          return "delete";
        case 5LL:
          return "release";
        case 6LL:
        case 14LL:
          return "unknown";
        case 7LL:
          return "always";
        case 8LL:
          return "close";
        case 9LL:
          return "mapper";
        case 10LL:
          return "iterator";
        case 11LL:
          return "present";
        case 12LL:
          return "self";
        case 13LL:
          return "ompx_hold";
        default:
          goto LABEL_186;
      }
    case 70:
      if ( !(_DWORD)a2 )
        return "strict";
      if ( (_DWORD)a2 != 1 )
        goto LABEL_186;
      return "unknown";
    case 72:
      if ( !(_DWORD)a2 )
        return "strict";
      if ( (_DWORD)a2 != 1 )
        goto LABEL_186;
      return "unknown";
    case 76:
      switch ( a2 )
      {
        case 0LL:
          return "concurrent";
        case 1LL:
        case 4LL:
          return "unknown";
        case 2LL:
          return "reproducible";
        case 3LL:
          return "unconstrained";
        default:
          goto LABEL_186;
      }
    case 83:
      switch ( a2 )
      {
        case 2LL:
          return "master";
        case 3LL:
          return "close";
        case 4LL:
          return "spread";
        case 5LL:
          return "primary";
        case 6LL:
          return "default";
        case 7LL:
          return "unknown";
        default:
          goto LABEL_186;
      }
    case 85:
      if ( (_DWORD)a2 == 1 )
        return "inscan";
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 == 2 )
          return "task";
        if ( (_DWORD)a2 == 3 )
          return "unknown";
        goto LABEL_186;
      }
      return "default";
    case 90:
      switch ( a2 )
      {
        case 0LL:
          return "static";
        case 1LL:
          return "dynamic";
        case 2LL:
          return "guided";
        case 3LL:
          return "auto";
        case 4LL:
          return "runtime";
        case 5LL:
        case 9LL:
          return "unknown";
        case 6LL:
          return "monotonic";
        case 7LL:
          return "nonmonotonic";
        case 8LL:
          return (char *)"simd";
        default:
          goto LABEL_186;
      }
    case 93:
      if ( (_DWORD)a2 != 1 )
      {
        if ( !(_DWORD)a2 )
          return "fatal";
        if ( (_DWORD)a2 == 2 )
          return "unknown";
        goto LABEL_186;
      }
      return "warning";
  }
  return result;
}
