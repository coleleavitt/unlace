__int64 __fastcall sub_1BCD550(unsigned __int8 *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // r8d
  __int64 result; // rax
  int v6; // esi
  int v7; // edx

  v1 = dword_265F680[*a1];
  v2 = v1;
  if ( v1 <= 0 )
  {
    v2 = 0;
    v1 = 0;
  }
  v3 = dword_265F680[a1[1]];
  v4 = v3;
  if ( v3 <= v2 )
  {
    v3 = v1;
    v4 = v2;
    result = dword_265F680[a1[2]];
    if ( (_DWORD)result != 1 )
    {
LABEL_5:
      v6 = result;
      if ( (_DWORD)result != 11 )
      {
        if ( v4 < (int)result )
          goto LABEL_8;
        goto LABEL_7;
      }
      if ( v3 == 2 )
      {
        v6 = 12;
        result = 12;
        goto LABEL_8;
      }
      if ( v3 == 4 )
      {
        v6 = 13;
        result = 13;
        goto LABEL_8;
      }
      v6 = 11;
      if ( v4 < 11 )
        goto LABEL_8;
LABEL_7:
      v6 = v4;
      result = (unsigned int)v3;
      goto LABEL_8;
    }
  }
  else
  {
    result = dword_265F680[a1[2]];
    if ( (_DWORD)result != 1 )
      goto LABEL_5;
  }
  if ( v3 == 2 )
  {
    v6 = 3;
    result = 3;
    goto LABEL_8;
  }
  if ( v3 == 4 )
  {
    v6 = 6;
    result = 6;
    goto LABEL_8;
  }
  v6 = 1;
  if ( v4 >= 1 )
    goto LABEL_7;
LABEL_8:
  v7 = dword_265F680[a1[3]];
  if ( v7 > v6 )
    return (unsigned int)v7;
  return result;
}
