__int64 __fastcall sub_18058D0(unsigned int *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // eax

  v3 = *a1;
  result = a3;
  if ( *a1 )
  {
    v6 = *a2;
    if ( *a2 )
      goto LABEL_15;
    v7 = a2[1];
    if ( (v7 & 0x7FFFFFFF) != 0 )
    {
      if ( (_BYTE)a3 )
      {
        v5 = a1[1];
LABEL_30:
        v8 = v7 & 0x7FFFFFFF;
        v9 = v5 & 0x7FFFFFFF;
        v10 = a2[2] & 0x7FFFFFFF;
        v11 = a1[2] & 0x7FFFFFFF;
        return v3 == v6
            && (v8 > v9 || v8 == v9 && (v10 > v11 || (a2[3] & 0x7FFFFFFF) > (a1[3] & 0x7FFFFFFF) && v10 == v11));
      }
      return result;
    }
    if ( (a2[2] & 0x7FFFFFFF) == 0 )
    {
LABEL_13:
      if ( (a2[3] & 0x7FFFFFFF) == 0 )
        return 1;
      v6 = 0;
LABEL_15:
      if ( v3 == v6 )
      {
        v5 = a1[1];
        if ( ((v5 ^ a2[1]) & 0x7FFFFFFF) == 0 )
          goto LABEL_6;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v5 = a1[1];
    if ( (v5 & 0x7FFFFFFF) == 0 && (a1[2] & 0x7FFFFFFF) == 0 && (a1[3] & 0x7FFFFFFF) == 0 )
      return 1;
    v6 = *a2;
    if ( !*a2 )
    {
      if ( (a2[1] & 0x7FFFFFFF) != 0 || (a2[2] & 0x7FFFFFFF) != 0 )
      {
        if ( ((v5 ^ a2[1]) & 0x7FFFFFFF) == 0 )
        {
LABEL_6:
          if ( ((a2[2] ^ a1[2]) & 0x7FFFFFFF) == 0 && ((a2[3] ^ a1[3]) & 0x7FFFFFFF) == 0 )
            return 1;
        }
LABEL_8:
        if ( !(_BYTE)a3 )
          return result;
LABEL_29:
        v7 = a2[1];
        goto LABEL_30;
      }
      goto LABEL_13;
    }
  }
  if ( (_BYTE)a3 )
  {
    if ( v3 < v6 )
      return 1;
    v5 = a1[1];
    goto LABEL_29;
  }
  return result;
}
