__int64 sub_1282E0()
{
  int v0; // ecx
  int v1; // r8d
  int v2; // r9d
  __int16 v4; // [rsp+4h] [rbp-14h] BYREF
  __int16 v5; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = (getinf() & 0x4000000) != 0;
  v5 = (unsigned __int8)getinf() >> 5;
  if ( (unsigned int)sub_18C660(1049, (unsigned int)&v4, (unsigned int)&v5, v0, v1, v2) )
  {
    getinf();
    setinf();
    setinf();
  }
  return 1;
}

