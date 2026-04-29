const char *__fastcall sub_22AD0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 v4; // rax
  const char *result; // rax
  unsigned int v6; // edx
  int v7; // edi

  v2 = *a2;
  v3 = *a2 & 0xFFFFFFF8;
  v4 = *a2 & 7;
  *a2 = v3;
  switch ( v4 )
  {
    case 0LL:
      goto LABEL_2;
    case 1LL:
      result = "small model";
      break;
    case 2LL:
      result = "compact model";
      break;
    case 3LL:
      result = "medium model";
      break;
    case 4LL:
      result = "specmed model";
      break;
    case 5LL:
      result = "large model";
      break;
    default:
      v3 = v2;
LABEL_2:
      result = "user stack used for parameters";
      v6 = v3 & 0xFFFFFFE7;
      v7 = v3 & 0x18;
      *a2 = v3 & 0xFFFFFFE7;
      if ( v7 != 8 )
      {
        result = "system stack used for parameters";
        if ( v7 != 16 )
        {
          if ( (v3 & 0x18) != 0 )
          {
            *a2 = v3;
            v6 = v3;
          }
          if ( (v6 & 0x20) != 0 )
          {
            *a2 = v6 & 0xFFFFFFDF;
            result = "st9(old)";
          }
          else
          {
            result = nullptr;
            if ( (v6 & 0x40) != 0 )
            {
              *a2 = v6 & 0xFFFFFFBF;
              result = "floats are on";
            }
          }
        }
      }
      break;
  }
  return result;
}
