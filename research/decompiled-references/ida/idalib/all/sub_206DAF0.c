__int64 __fastcall sub_206DAF0(unsigned __int64 **a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  int v3; // eax

  v1 = **a1;
  result = 2;
  if ( v1 - 112 > 0x1F )
  {
    if ( v1 > 0x1001 )
    {
      if ( v1 != 4101 )
      {
        if ( v1 <= 0x1005 )
          v3 = v1 < 0x1004;
        else
          v3 = v1 < 0x1008 ? 2 : 0;
        return (unsigned int)(v3 + 1);
      }
    }
    else if ( v1 >= 0x1000 )
    {
      return 3;
    }
    else if ( v1 != 35 )
    {
      if ( v1 <= 0x23 )
      {
        return (unsigned int)(v1 - 16 < 2) + 1;
      }
      else
      {
        result = 3;
        if ( v1 != 146 )
        {
          result = 2;
          if ( v1 != 148 )
            return (unsigned int)(v1 == 144) + 1;
        }
      }
    }
  }
  return result;
}
