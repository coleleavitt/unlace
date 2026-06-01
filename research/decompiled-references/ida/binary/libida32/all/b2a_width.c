__int64 __fastcall b2a_width(__int64 a1, int default_radix)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rsi

  if ( (int)a1 > 16 || !(_DWORD)a1 )
  {
    v2 = 3;
    if ( default_radix )
      goto LABEL_4;
    goto LABEL_11;
  }
  if ( (int)a1 > 0 )
  {
    v2 = a1 - 1;
    if ( default_radix )
    {
LABEL_4:
      if ( default_radix == 2 )
        goto LABEL_12;
      goto LABEL_5;
    }
LABEL_11:
    default_radix = get_default_radix(a1);
    if ( default_radix == 2 )
      goto LABEL_12;
LABEL_5:
    if ( default_radix != 8 )
    {
      if ( default_radix != 10 )
      {
        v3 = 0;
        if ( default_radix == 16 )
          v3 = 0;
        return qword_23999C0[16 * v3 + v2];
      }
      v4 = 8;
LABEL_13:
      v3 = qword_2399960[v4];
      return qword_23999C0[16 * v3 + v2];
    }
LABEL_12:
    v4 = (unsigned int)(default_radix - 2);
    goto LABEL_13;
  }
  return 2;
}

