bool __fastcall sub_BEDFC0(__int64 *a1)
{
  __int64 v1; // rdi
  bool result; // al
  _WORD *v3; // rdi
  int v4; // ecx

  v1 = *a1;
  result = 0;
  if ( v1 )
  {
    if ( (v1 & 3) == 1 )
    {
      v3 = (_WORD *)(v1 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v3 )
      {
        if ( ((*v3 + 423) & 0x1FFu) <= 4 )
        {
          v4 = sub_BD8130((__int64)v3);
          result = v4 == 206 || v4 == 225;
          if ( !result )
            return v4 == 1063 || v4 == 218;
        }
      }
    }
  }
  return result;
}

