bool __fastcall sub_821CE0(__int64 *a1)
{
  __int64 v1; // rdi
  bool result; // al
  _WORD *v3; // rdi
  int v4; // edx

  v1 = *a1;
  result = 0;
  if ( v1 )
  {
    if ( (v1 & 3) == 1 )
    {
      v3 = (_WORD *)(v1 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v3 )
      {
        if ( ((*v3 + 422) & 0x1FFu) <= 4 )
        {
          v4 = sub_80FBD0((__int64)v3);
          result = v4 == 223 || v4 == 204;
          if ( !result )
            return v4 == 216 || v4 == 1030;
        }
      }
    }
  }
  return result;
}

