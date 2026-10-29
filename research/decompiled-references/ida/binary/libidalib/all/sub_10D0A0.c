unsigned __int64 __fastcall sub_10D0A0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // [rsp+Ch] [rbp-Ch]

  if ( a3 && *(_BYTE *)(a2 + 12) )
  {
    v4 = a3;
    cancel_undo_point();
    a3 = v4;
  }
  sub_199BB0(a1, a2, a3);
  return sub_109D60();
}

