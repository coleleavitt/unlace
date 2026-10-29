__int64 __fastcall sub_54A320(__int64 *a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v4; // r14
  __int64 v5; // r12

  if ( a2 <= 0xFF )
    return 0;
  v4 = sub_5340D0((__int64)a1, a2);
  v5 = sub_5340D0((__int64)a1, a2);
  if ( (~*(_BYTE *)(v5 + 68) & 0x70) != 0 )
  {
    if ( !a3 )
      return v4;
  }
  else
  {
    if ( *(_QWORD *)v5 <= 0xFFu )
    {
      if ( !a3 )
        return v4;
      goto LABEL_10;
    }
    v5 = sub_5340D0((__int64)a1, *(_QWORD *)v5);
    if ( !a3 )
      return v4;
  }
  if ( !v5 )
  {
LABEL_10:
    v5 = 0;
    goto LABEL_6;
  }
  if ( sub_53CE30(v5, *a1, a2, 1) )
  {
LABEL_6:
    *a3 = v5;
    return v4;
  }
  return 0;
}
