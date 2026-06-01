__int64 sub_76F170()
{
  char *v0; // r12
  __int64 v1; // rbx
  char v2; // bl
  char v3; // al
  unsigned int v4; // esi
  char *v5; // rbp
  char v6; // r12

  v0 = qword_2CD44C0;
  v1 = *qword_2CD44C0;
  if ( (_BYTE)v1 != 95 )
  {
    v4 = 1610612736;
    if ( (unsigned __int8)sub_76F0B0(1) != 0xFF )
      return v4;
    if ( (unsigned int)(char)v1 > 0x7F )
      return 0;
    v4 = 0;
    if ( ((*__ctype_b_loc())[v1] & 8) == 0 )
      return v4;
    v2 = v0[1];
    v5 = v0 + 1;
    goto LABEL_5;
  }
  v2 = qword_2CD44C0[1];
  v3 = v2;
  if ( !qword_2CD44B0 && v2 == 95 )
    v3 = qword_2CD44C0[2];
  v4 = 1610612736;
  if ( v3 != 90 )
  {
    v5 = qword_2CD44C0 + 1;
    if ( (unsigned __int8)sub_76F0B0(1) == 0xFF )
    {
LABEL_5:
      v4 = 0;
      if ( !v2 )
        return v4;
      v6 = 0;
      while ( 1 )
      {
        if ( v2 == 46 )
          goto LABEL_17;
        if ( v2 == 95 )
        {
          while ( 1 )
          {
            v2 = v5[1];
            if ( v2 != 95 )
              break;
            v6 |= 1u;
            ++v5;
          }
          ++v5;
          if ( !v2 )
          {
LABEL_27:
            if ( v6 == -1 )
              return 1342177280;
            else
              return v6 != 0 ? 0x70000000 : 0;
          }
          if ( v2 == 46 )
            goto LABEL_17;
        }
        if ( v2 == 36 )
        {
LABEL_17:
          v2 = v5[1];
          v6 = -1;
        }
        else
        {
          if ( (unsigned int)v2 > 0x7F || ((*__ctype_b_loc())[(unsigned __int8)v2] & 8) == 0 )
            return 0;
          v2 = v5[1];
        }
        ++v5;
        if ( !v2 )
          goto LABEL_27;
      }
    }
  }
  return v4;
}
