const char *__fastcall sub_21C80(__int64 a1, unsigned int *a2, const char *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ecx
  bool v6; // zf
  const char *result; // rax

  v4 = *a2;
  v5 = v4 & 0x1F;
  if ( v5 > 0x13 )
  {
    if ( v5 - 20 <= 4 )
    {
      switch ( v4 & 0x1F )
      {
        case 0x15u:
        case 0x17u:
          v6 = (unsigned __int8)getinf_flag(3, 32) == 0;
          result = "sh3";
          if ( !v6 )
            result = "sh2a";
          *a2 &= 0xFFFFFFE0;
          break;
        case 0x16u:
        case 0x18u:
          v6 = (unsigned __int8)getinf_flag(3, 32) == 0;
          result = "sh2a";
          if ( v6 )
            result = "sh4";
          *a2 &= 0xFFFFFFE0;
          break;
        default:
          goto LABEL_15;
      }
      return result;
    }
LABEL_18:
    *a2 = v4 & 0xFFFFFFE0;
    return a3;
  }
  if ( (v4 & 0x1F) == 0 )
    goto LABEL_18;
  if ( ((1LL << v5) & 0x93E) != 0 )
  {
LABEL_15:
    v6 = (unsigned __int8)getinf_flag(3, 32) == 0;
    result = "sh3";
    if ( !v6 )
      result = "sh3b";
    *a2 &= 0xFFFFFFE0;
  }
  else
  {
    result = "sh2a";
    if ( ((1LL << v5) & 0x82000) == 0 )
      result = a3;
    *a2 = v4 & 0xFFFFFFE0;
  }
  return result;
}

