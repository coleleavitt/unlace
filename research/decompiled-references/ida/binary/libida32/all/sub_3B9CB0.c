__int64 __fastcall sub_3B9CB0(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int16 v4; // ax
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3E9640(a1) && (int)sub_3E9860(a1, &v6, a3) > 0 )
  {
    LOBYTE(v4) = v6;
  }
  else
  {
    v4 = sub_3B9AA0(a1, a3, 2);
    if ( (v4 & 0x100) == 0 )
    {
      *a2 = -1;
      return 0;
    }
  }
  *a2 = v4;
  return 1;
}

