__int64 sub_125670()
{
  unsigned int v0; // eax
  __int16 v2; // [rsp+Eh] [rbp-1Ah] BYREF
  __int16 v3; // [rsp+10h] [rbp-18h] BYREF
  __int16 v4; // [rsp+12h] [rbp-16h] BYREF
  __int16 v5; // [rsp+14h] [rbp-14h] BYREF
  __int16 v6; // [rsp+16h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v0 = getinf();
  v2 = (unsigned __int16)v0 >> 3;
  v3 = v0 & 7;
  v4 = (v0 >> 20) & 7;
  v6 = (v0 >> 26) & 3;
  v5 = (v0 & 0x2000000) != 0;
  if ( (unsigned int)sub_18C660(
                       1057,
                       (unsigned int)&v3,
                       (unsigned int)&v5,
                       (unsigned int)&v2,
                       (unsigned int)&v4,
                       (unsigned int)&v6) )
    setinf();
  return 0;
}

