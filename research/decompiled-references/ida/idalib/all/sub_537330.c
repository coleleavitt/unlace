_BYTE *__fastcall sub_537330(__int64 a1)
{
  _BYTE *result; // rax
  unsigned int v2; // ecx
  _BYTE *v3; // rdx
  char v4; // si

  result = nullptr;
  if ( *(_QWORD *)(a1 + 32) > 1u )
  {
    result = *(_BYTE **)(a1 + 24);
    if ( result )
    {
      if ( *result == 5 )
      {
        v2 = (char)result[1];
        v3 = ++result;
        v4 = v2;
        if ( v2 <= 0x7F )
        {
          while ( v2 - 48 <= 9 )
          {
            v2 = (char)*++v3;
            v4 = v2;
            if ( v2 > 0x7F )
              goto LABEL_9;
          }
          if ( v4 == 46 )
            ++v3;
LABEL_9:
          result = nullptr;
          if ( *v3 )
            return v3;
        }
      }
    }
  }
  return result;
}
