__int64 __fastcall sub_1713010(__int64 a1, char a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( (a2 & 1) != 0 )
  {
    sub_9EE7C0((_QWORD *)a1, "in ");
    goto LABEL_5;
  }
  if ( (a2 & 2) == 0 )
  {
    if ( (a2 & 4) != 0 )
      sub_9EE7C0((_QWORD *)a1, "out ");
LABEL_5:
    if ( (a2 & 8) == 0 )
      goto LABEL_6;
LABEL_12:
    sub_9EE7C0((_QWORD *)a1, "bycopy ");
    if ( (a2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_13;
  }
  sub_9EE7C0((_QWORD *)a1, "inout ");
  if ( (a2 & 8) != 0 )
    goto LABEL_12;
LABEL_6:
  if ( (a2 & 0x10) != 0 )
    sub_9EE7C0((_QWORD *)a1, "byref ");
  if ( (a2 & 0x20) == 0 )
  {
LABEL_9:
    if ( (a2 & 0x40) == 0 )
      return a1;
    goto LABEL_14;
  }
LABEL_13:
  sub_9EE7C0((_QWORD *)a1, "oneway ");
  if ( (a2 & 0x40) == 0 )
    return a1;
LABEL_14:
  v5 = sub_F5E9A0(a3);
  if ( HIBYTE(v5) )
  {
    if ( (_BYTE)v5 == 1 )
    {
      sub_9EE7C0((_QWORD *)a1, "nullable ");
    }
    else if ( (_BYTE)v5 )
    {
      if ( (_BYTE)v5 == 2 )
        sub_9EE7C0((_QWORD *)a1, "null_unspecified ");
    }
    else
    {
      sub_9EE7C0((_QWORD *)a1, "nonnull ");
    }
  }
  return a1;
}
