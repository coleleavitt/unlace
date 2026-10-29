__int64 __fastcall sub_7B60(_QWORD *a1, unsigned __int64 a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rcx
  const char *v6; // rax
  char v7; // si
  _BYTE *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8

  v5 = &a3[a4];
  if ( a2 < a1[1] )
  {
    v9 = a3;
    while ( 1 )
    {
      v10 = a2++;
      v11 = *(unsigned __int8 *)(*a1 + v10);
      if ( !(_BYTE)v11 )
      {
LABEL_14:
        if ( v9 >= v5 )
          goto LABEL_21;
        *v9 = 0;
        return v9 - a3;
      }
      if ( v9 >= v5 )
        break;
      *v9++ = v11;
      if ( v9 >= v5 )
      {
        *(v5 - 1) = 0;
        v9 = v5 - 1;
      }
      if ( a2 >= a1[1] )
        goto LABEL_14;
    }
    if ( under_debugger )
      goto LABEL_23;
    interr(518, a2, a3, v5, v11);
LABEL_19:
    if ( under_debugger )
      goto LABEL_23;
    interr(520, a2, a3, v5, a5);
LABEL_21:
    if ( under_debugger )
LABEL_23:
      BUG();
    interr(519, a2, a3, v5, v11);
    return sub_7C80();
  }
  else
  {
    if ( a3 >= v5 )
      goto LABEL_19;
    v6 = "?";
    if ( a3 == v5 - 1 )
    {
LABEL_16:
      *(v5 - 1) = 0;
      return -1;
    }
    else
    {
      while ( 1 )
      {
        v7 = *v6++;
        *a3 = v7;
        if ( !v7 )
          return -1;
        if ( ++a3 == v5 - 1 )
          goto LABEL_16;
      }
    }
  }
}

