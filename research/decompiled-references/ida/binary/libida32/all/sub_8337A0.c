unsigned int *__fastcall sub_8337A0(unsigned int *a1, int a2)
{
  unsigned int *result; // rax
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rdx

  result = a1;
  v4 = 0;
  while ( 1 )
  {
    v5 = *result;
    v6 = *result;
    LOWORD(v6) = 0;
    if ( v6 == -2146631680 )
    {
      if ( a2 == 1 )
        return result;
      goto LABEL_7;
    }
    if ( v6 <= 0x800D0000 )
    {
      if ( v6 == -2147418112 )
      {
        if ( !(a2 | v4) )
          return result;
      }
      else if ( v6 > 0x80010000 )
      {
        if ( v6 != -2147287040 )
        {
          if ( v6 == -2146959360 || v6 == -2147352576 )
            goto LABEL_33;
LABEL_44:
          v7 = HIWORD(v6) & 0x7FFF;
LABEL_45:
          result += byte_239B5E0[v7];
          goto LABEL_7;
        }
        if ( (unsigned __int16)v5 > 9u )
          result += 2;
      }
      else
      {
        if ( v6 == 0x80000000 )
          return nullptr;
        if ( (v6 & 0x80000000) != 0 )
        {
          v7 = 0;
          goto LABEL_45;
        }
      }
      goto LABEL_7;
    }
    if ( v6 == -2145583104 )
    {
      if ( !v4 )
        return result;
      --v4;
      goto LABEL_7;
    }
    if ( v6 > 0x801D0000 )
      break;
    if ( v6 != -2145648640 )
    {
      if ( v6 <= 0x801C0000 )
      {
        if ( v6 == -2146238464 )
          goto LABEL_33;
        if ( v6 > 0x80130000 )
        {
          if ( (v5 & 0xFFFE0000) == 0x80140000 || v6 == -2145976320 )
            goto LABEL_33;
        }
        else
        {
          if ( v6 == -2146369536 )
            goto LABEL_33;
          if ( v6 > 0x80110000 )
          {
            if ( v6 == -2146304000 )
              goto LABEL_33;
          }
          else if ( ((v6 + 2146500608) & 0xFFFE0000) == 0 )
          {
            goto LABEL_33;
          }
        }
      }
      goto LABEL_44;
    }
    if ( v5 + 2145648625 < 2 )
      ++result;
LABEL_7:
    ++result;
  }
  if ( v6 == -2144272384 )
    goto LABEL_19;
  if ( v6 <= 0x80310000 )
  {
    if ( v6 == -2144731136 )
      goto LABEL_33;
    if ( v6 <= 0x802A0000 )
    {
      if ( v6 == -2144927744 )
        goto LABEL_33;
      if ( v6 > 0x80270000 )
      {
        if ( (v5 & 0xFFFE0000) == 0x80280000 )
          goto LABEL_33;
      }
      else if ( ((v6 + 2145517568) & 0xFFF70000) == 0 )
      {
        goto LABEL_33;
      }
    }
    else
    {
      if ( v6 == -2144534528 )
        goto LABEL_19;
      if ( v6 <= 0x802D0000 && ((v6 + 2144665600) & 0xFFFE0000) == 0 )
      {
LABEL_33:
        ++v4;
        result += byte_239B5E0[HIWORD(v6) & 0x7FFF];
        goto LABEL_7;
      }
    }
    goto LABEL_44;
  }
  if ( v6 == -2144010240 || (v5 & 0xFFFB0000) == 0x80330000 )
  {
LABEL_19:
    result += result[1] + (unsigned __int64)byte_239B5E0[HIWORD(v6) & 0x7FFF];
    goto LABEL_7;
  }
  v7 = HIWORD(v6) & 0x7FFF;
  if ( (unsigned int)v7 <= 0x48 )
    goto LABEL_45;
  return nullptr;
}

