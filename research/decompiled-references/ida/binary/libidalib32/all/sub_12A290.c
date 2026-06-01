__int64 sub_12A290()
{
  __int16 v1; // [rsp+6h] [rbp-22h] BYREF
  int v2; // [rsp+8h] [rbp-20h] BYREF
  int v3; // [rsp+Ch] [rbp-1Ch] BYREF
  int v4; // [rsp+10h] [rbp-18h] BYREF
  int v5; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = (unsigned __int8)getinf();
  v2 = (unsigned __int8)getinf();
  v3 = (unsigned __int8)getinf();
  v4 = (unsigned __int16)getinf();
  v5 = getinf();
  if ( (unsigned int)sub_18BA90(
                       1047,
                       (unsigned int)&v1,
                       (unsigned int)&v4,
                       (unsigned int)&v5,
                       (unsigned int)&v2,
                       (unsigned int)&v3) )
  {
    setinf();
    setinf();
    setinf();
    setinf();
    setinf();
    getinf_flag();
    get_view_options();
    dto_copy_from_inf();
    sub_1984E0(0x40000, 0, 0);
  }
  return 1;
}

