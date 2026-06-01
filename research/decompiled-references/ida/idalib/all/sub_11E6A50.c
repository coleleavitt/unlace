__int64 __fastcall sub_11E6A50(_DWORD *a1)
{
  int v1; // ebx
  unsigned int v2; // r12d
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+8h] [rbp-20h]

  v1 = a1[983];
  if ( v1 )
  {
    if ( v1 != 1 )
    {
      if ( (unsigned int)(v1 - 1) > 1 )
        goto LABEL_23;
      goto LABEL_4;
    }
    if ( a1[984] != 2 )
    {
      v2 = a1[984];
      if ( v2 <= 1 )
      {
        v4 = 0x8000000000000009LL;
        v5 = 0x80000000LL;
        if ( !(unsigned __int8)sub_A09E20(a1 + 985, (unsigned int *)&v4) )
          goto LABEL_7;
        return 2;
      }
      goto LABEL_32;
    }
  }
  if ( (unsigned __int8)sub_11E6860((__int64)a1, 10, 11, 0) )
    return 2;
  v1 = a1[983];
  if ( (unsigned int)(v1 - 1) > 1 )
  {
    if ( v1 )
      goto LABEL_23;
    goto LABEL_21;
  }
LABEL_4:
  v2 = a1[984];
  if ( v2 > 1 )
  {
    if ( v1 != 1 )
      return 5;
LABEL_32:
    if ( v2 != 2 )
      goto LABEL_33;
LABEL_21:
    if ( (unsigned __int8)sub_11E6860((__int64)a1, 15, 0, 0) )
      return 4;
    v1 = a1[983];
    if ( (unsigned int)(v1 - 1) <= 1 )
    {
      v2 = a1[984];
      goto LABEL_8;
    }
LABEL_23:
    if ( v1 == 3 )
    {
      v4 = 11;
      goto LABEL_25;
    }
LABEL_10:
    if ( v1 != 5 )
      goto LABEL_11;
    v4 = 2;
LABEL_25:
    v5 = 0;
    if ( !(unsigned __int8)sub_A09E20(a1 + 985, (unsigned int *)&v4) )
      return 5;
    return 4;
  }
  v4 = 0x8000000000000009LL;
  v5 = 0x80000000LL;
  if ( !(unsigned __int8)sub_A09E20(a1 + 985, (unsigned int *)&v4) )
  {
    if ( v1 != 1 )
    {
      v1 = 2;
      goto LABEL_8;
    }
LABEL_7:
    v1 = 1;
LABEL_8:
    if ( v2 > 1 )
    {
LABEL_11:
      if ( v1 != 4 )
      {
        if ( !v1 )
        {
LABEL_13:
          if ( !a1[985] && (a1[986] & 0x7FFFFFFF) == 0 && (a1[987] & 0x7FFFFFFF) == 0 && (a1[988] & 0x7FFFFFFF) == 0 )
            return 4;
          return 5;
        }
        if ( v1 != 1 )
          return 5;
LABEL_33:
        if ( a1[984] == 2 )
          goto LABEL_13;
        return 5;
      }
      v4 = 24;
      goto LABEL_25;
    }
    v4 = 0x8000000000000012LL;
    v5 = 0x80000000LL;
    if ( (unsigned __int8)sub_A09E20(a1 + 985, (unsigned int *)&v4) )
      return 4;
    goto LABEL_10;
  }
  return 2;
}
