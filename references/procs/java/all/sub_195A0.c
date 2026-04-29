unsigned __int64 __fastcall sub_195A0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _BYTE v4[72]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4[0] = 0;
  if ( a3 )
    qsnprintf(v4, 60, "Illegal access bits (0x%X)", a3);
  sub_7B10(a1, a2, v4);
  return v5 - __readfsqword(0x28u);
}
