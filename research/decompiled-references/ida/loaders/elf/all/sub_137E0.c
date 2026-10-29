const char *__fastcall sub_137E0(__int64 a1, int *a2)
{
  int v2; // edx
  const char *result; // rax
  int v4; // edx
  int v5; // eax
  bool v6; // zf

  v2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 522LL);
  if ( v2 == 117 )
  {
    v5 = *a2;
    if ( *a2 == 1 )
    {
      *a2 = 0;
      return "-R8C (R8C/Tiny 64K)";
    }
    else if ( v5 == 2 )
    {
      *a2 = 0;
      return "-R8CE (R8C/Tiny 128K)";
    }
    else
    {
      v6 = v5 == 0;
      result = "-M60 (M16C/60)";
      if ( !v6 )
        return nullptr;
    }
  }
  else
  {
    result = nullptr;
    if ( v2 == 120 )
    {
      v4 = *a2;
      if ( *a2 == 1 )
      {
        *a2 = 0;
        return "-M82 (M32C/80)";
      }
      else if ( v4 == 2 )
      {
        *a2 = 0;
        return "-M90 (M32C/90)";
      }
      else if ( !v4 )
      {
        return "-M80 (M16C/80)";
      }
    }
  }
  return result;
}

