char *__fastcall sub_F39B40(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 16);
  if ( a2 )
  {
    if ( (v2 & 0x800000) != 0 )
    {
      if ( (v2 & 0x1000000) != 0 )
      {
        j__strlen("__sized_by_or_null");
        return "__sized_by_or_null";
      }
      else
      {
        j__strlen("__sized_by");
        return "__sized_by";
      }
    }
    else if ( (v2 & 0x1000000) != 0 )
    {
      j__strlen("__counted_by_or_null");
      return "__counted_by_or_null";
    }
    else
    {
      j__strlen("__counted_by");
      return "__counted_by";
    }
  }
  else if ( (v2 & 0x800000) != 0 )
  {
    if ( (v2 & 0x1000000) != 0 )
    {
      j__strlen("sized_by_or_null");
      return "sized_by_or_null";
    }
    else
    {
      j__strlen("sized_by");
      return "sized_by";
    }
  }
  else if ( (v2 & 0x1000000) != 0 )
  {
    j__strlen("counted_by_or_null");
    return "counted_by_or_null";
  }
  else
  {
    j__strlen("counted_by");
    return "counted_by";
  }
}

