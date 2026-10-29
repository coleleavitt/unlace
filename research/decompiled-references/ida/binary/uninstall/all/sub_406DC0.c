__int64 __fastcall sub_406DC0(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  _UNKNOWN **v3; // rbx

  result = 1;
  if ( a1 )
  {
    v2 = "append" == nullptr;
    v3 = &off_650EA0;
    while ( !v2 )
    {
      if ( !*((_DWORD *)v3 + 6) )
        sub_406C50(a1, (__int64)*v3, (const char *)*v3);
      v3 += 4;
      v2 = *v3 == nullptr;
    }
    return 0;
  }
  return result;
}

