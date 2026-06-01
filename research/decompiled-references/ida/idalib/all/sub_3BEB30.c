__int64 __fastcall sub_3BEB30(_QWORD *a1, _BYTE *a2, unsigned __int64 a3)
{
  __int16 v4; // ax
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3FC580(a1) && (int)sub_3FC7A0(a1, &v6, a3) > 0 )
  {
    LOBYTE(v4) = v6;
  }
  else
  {
    v4 = sub_3BE900(a1, a3, 2);
    if ( (v4 & 0x100) == 0 )
    {
      *a2 = -1;
      return 0;
    }
  }
  *a2 = v4;
  return 1;
}
