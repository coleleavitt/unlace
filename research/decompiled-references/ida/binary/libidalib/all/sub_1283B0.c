__int64 sub_1283B0()
{
  __int16 v0; // bx
  __int16 v2; // [rsp+2h] [rbp-16h] BYREF
  __int16 v3; // [rsp+4h] [rbp-14h] BYREF
  __int16 v4; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = getinf() & 3;
  v3 = ((unsigned __int64)getinf() >> 2) & 1;
  v0 = v3;
  v4 = ((unsigned __int64)getinf() >> 3) & 1;
  if ( (unsigned int)sub_18C660(
                       1056,
                       (unsigned int)&v2,
                       (unsigned int)&v3,
                       (unsigned int)&v4,
                       (unsigned int)sub_125670,
                       (unsigned int)sub_125670) )
  {
    setinf();
    if ( v3 != v0 )
      mark_builtin_widgets();
  }
  return 1;
}

