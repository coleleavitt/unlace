__int64 __fastcall sub_34A780(int a1)
{
  unsigned int v1; // eax
  int v2; // eax
  __int64 v3; // rsi
  unsigned __int16 v5; // [rsp+Eh] [rbp-1Ah] BYREF
  unsigned __int16 v6; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int16 v7; // [rsp+12h] [rbp-16h] BYREF
  __int16 v8; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int16 v9; // [rsp+16h] [rbp-12h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( a1 )
    v1 = getinf(37);
  else
    v1 = getinf(36);
  v5 = (unsigned __int16)v1 >> 3;
  v6 = v1 & 7;
  v7 = (v1 >> 20) & 7;
  v9 = (v1 >> 26) & 3;
  v8 = (v1 & 0x2000000) != 0;
  if ( (unsigned int)sub_507F10(
                       1057,
                       (unsigned int)&v6,
                       (unsigned int)&v8,
                       (unsigned int)&v5,
                       (unsigned int)&v7,
                       (unsigned int)&v9) )
  {
    v2 = v6 | (v7 << 20) | (8 * v5);
    if ( v8 )
      v2 |= 0x2000000u;
    v3 = v2 | (v9 << 26);
    if ( a1 )
      setinf(37, v3);
    else
      setinf(36, v3);
  }
  return 0;
}
