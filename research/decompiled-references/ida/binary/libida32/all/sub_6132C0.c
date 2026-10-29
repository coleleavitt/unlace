__int64 __fastcall sub_6132C0(char *a1, const char *a2, __int64 a3, unsigned __int8 a4, double a5, double a6)
{
  unsigned int v7; // r14d
  int v9; // r15d

  unk_2CAA7A8 = ea2node;
  unk_2CAA7A0 = node2ea;
  byte_2CA23F9 = sub_78F130(a1, a2, a3, a4) ^ 1;
  if ( byte_2CA23F9 )
    goto LABEL_19;
  if ( !(unsigned __int8)netnode_inited() )
    sub_3B74D0((int)"si");
  v7 = (unsigned __int8)byte_2CA23F9;
  if ( byte_2CA23F9 )
  {
LABEL_19:
    if ( a4 && !(unsigned __int8)sub_78EE90(a1) )
      goto LABEL_6;
  }
  else
  {
    v9 = sub_613160(a1);
    if ( !v9 )
      return v7;
    if ( byte_2CA23F9 )
      sub_78F160(a1);
    if ( a4 && !(unsigned __int8)sub_78EE90(a1) )
    {
      if ( v9 > 32 )
        sub_395C70((int)"HIDECANCEL\nUpgrading the database");
LABEL_6:
      sub_78F160(a1);
      sub_57A760(a2, a5, a6);
    }
  }
  return 1;
}

