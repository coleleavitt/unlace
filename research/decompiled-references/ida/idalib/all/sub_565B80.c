__int64 __fastcall sub_565B80(char a1, const char *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned __int8 v5; // di
  unsigned __int8 v6; // di
  unsigned __int8 v7; // di
  __int64 ph; // rax

  switch ( a1 & 0xF )
  {
    case 0:
      v6 = a1 & 0x30;
      if ( v6 == 32 )
        return 8;
      if ( v6 > 0x20u )
        return (v6 == 48) - 1LL;
      else
        return -(__int64)(v6 == 0) | 2;
    case 1:
      v7 = a1 & 0x30;
      if ( v7 == 16 )
        return 1;
      result = -2;
      if ( v7 > 0x10u )
      {
        result = 4;
        if ( v7 != 32 )
        {
          result = 16;
          if ( v7 != 48 )
            return -1;
        }
      }
      return result;
    case 2:
      return 1;
    case 3:
      return 2;
    case 4:
      return 4;
    case 5:
      return 8;
    case 6:
      return 16;
    case 7:
      v4 = a1 & 0x3F;
      if ( (_BYTE)v4 == 55 )
        return *(int *)(get_ph(v4, a2) + 76);
      else
        return (unsigned __int8)getinf(59);
    case 8:
      v5 = a1 & 0x30;
      if ( v5 != 32 )
      {
        if ( v5 > 0x20u )
          return 5LL * (v5 == 48) - 1;
        if ( v5 )
          return 1;
        return (unsigned __int8)getinf(60);
      }
      if ( (unsigned __int8)getinf_flag(3, 4) )
        return 8;
      return 2;
    case 9:
      v3 = a1 & 0x30;
      if ( (_BYTE)v3 == 32 )
      {
        LOBYTE(result) = getinf(66);
        if ( (_BYTE)result )
          return (unsigned __int8)result;
        else
          return *(_QWORD *)(get_ph(66, a2) + 120);
      }
      else if ( (unsigned __int8)v3 > 0x20u )
      {
        result = -1;
        if ( (_BYTE)v3 == 48 )
        {
          ph = get_ph(v3, a2);
          if ( (*(_BYTE *)(ph + 11) & 8) != 0 )
            return *(_QWORD *)(ph + 120);
          else
            return 2;
        }
      }
      else
      {
        result = 4;
        if ( (_BYTE)v3 )
          return 8;
      }
      return result;
    default:
      return -1;
  }
}
