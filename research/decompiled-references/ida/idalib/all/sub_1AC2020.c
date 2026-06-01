unsigned __int8 **__fastcall sub_1AC2020(unsigned __int8 **a1, char a2)
{
  char v2; // r15
  char v3; // r12
  char v4; // bp
  char v5; // r13
  char v6; // r14

  if ( !a2 )
  {
    sub_AE9DF0(a1, (__int64)"<invalid>", 1u);
    return a1;
  }
  v2 = a2 & 4;
  v3 = a2 & 8;
  v4 = a2 & 2;
  v5 = a2 & 1;
  v6 = a2 & 0x10;
  if ( (a2 & 0x20) == 0 )
  {
    if ( !v2 )
    {
      if ( !v3 )
      {
        if ( !v4 )
        {
          if ( !v5 )
          {
            if ( !v6 )
              return a1;
            goto LABEL_10;
          }
          goto LABEL_18;
        }
        goto LABEL_7;
      }
      goto LABEL_5;
    }
    goto LABEL_20;
  }
  sub_AE9DF0(a1, (__int64)"always", 1u);
  if ( v2 )
  {
    sub_AE9DF0(a1, (__int64)", ", 1u);
LABEL_20:
    sub_AE9DF0(a1, (__int64)"alwaysin", 1u);
  }
  if ( !v3 )
  {
    if ( !v4 )
    {
      if ( !v5 )
        goto LABEL_8;
      goto LABEL_17;
    }
    goto LABEL_6;
  }
  sub_AE9DF0(a1, (__int64)", ", 1u);
LABEL_5:
  sub_AE9DF0(a1, (__int64)"alwaysout", 1u);
  if ( v4 )
  {
LABEL_6:
    sub_AE9DF0(a1, (__int64)", ", 1u);
LABEL_7:
    sub_AE9DF0(a1, (__int64)"readonly", 1u);
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( !v5 )
  {
    if ( !v6 )
      return a1;
    goto LABEL_9;
  }
LABEL_17:
  sub_AE9DF0(a1, (__int64)", ", 1u);
LABEL_18:
  sub_AE9DF0(a1, (__int64)"zero", 1u);
LABEL_8:
  if ( v6 )
  {
LABEL_9:
    sub_AE9DF0(a1, (__int64)", ", 1u);
LABEL_10:
    sub_AE9DF0(a1, (__int64)"capture", 1u);
  }
  return a1;
}
