_QWORD *__fastcall jettison(_QWORD *result)
{
  _DWORD *v1; // x20
  _QWORD *v2; // x19

  v1 = (_DWORD *)*result;
  if ( *result )
  {
    if ( *v1 <= 4u )
    {
      v2 = result;
      switch ( *v1 )
      {
        case 0:
          goto LABEL_8;
        case 1:
          goto LABEL_7;
        case 2:
          goto LABEL_6;
        case 3:
          goto LABEL_5;
        case 4:
          closefd_optional(v1 + 7, "prereboot os graft point");
LABEL_5:
          closefd_optional(v1 + 6, "group dir");
LABEL_6:
          closefd_optional(v1 + 4, "os graft point");
          closefd_optional(v1 + 5, "app graft point");
LABEL_7:
          closefd_optional(v1 + 3, "xART");
LABEL_8:
          closefd_optional(v1 + 1, "preboot");
          result = (_QWORD *)closefd(v1 + 2, "shared cache");
          *v2 = 0;
          return result;
        default:
          break;
      }
    }
    dyld_halt("unsupported payload version: 0x%x", *v1);
  }
  return result;
}
