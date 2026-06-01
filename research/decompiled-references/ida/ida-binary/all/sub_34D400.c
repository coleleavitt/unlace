__int64 sub_34D400()
{
  __int16 v0; // bx
  unsigned __int8 v1; // si
  __int16 v3; // [rsp+2h] [rbp-16h] BYREF
  __int16 v4; // [rsp+4h] [rbp-14h] BYREF
  __int16 v5; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v3 = getinf(38) & 3;
  v4 = ((unsigned __int64)getinf(38) >> 2) & 1;
  v0 = v4;
  v5 = ((unsigned __int64)getinf(38) >> 3) & 1;
  if ( (unsigned int)sub_507F10(
                       1056,
                       (unsigned int)&v3,
                       (unsigned int)&v4,
                       (unsigned int)&v5,
                       (unsigned int)sub_34A780,
                       (unsigned int)sub_34A780) )
  {
    v1 = v3;
    if ( v4 )
      v1 = v3 | 4;
    if ( v5 )
      v1 |= 8u;
    setinf(38, v1);
    if ( v4 != v0 )
      mark_builtin_widgets(0x4000000008000008LL, 0, 1);
  }
  return 1;
}
