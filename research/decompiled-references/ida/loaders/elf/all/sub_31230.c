unsigned __int64 __fastcall sub_31230(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  int v6; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v5 = a2;
  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag(3, 4) )
  {
    fwritebytes(a1, &v5, 8, a3);
  }
  else
  {
    v6 = v5;
    fwritebytes(a1, &v6, 4, a3);
  }
  return v7 - __readfsqword(0x28u);
}

