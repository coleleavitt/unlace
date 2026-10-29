__int64 sub_12A970()
{
  __int16 v1; // [rsp+6h] [rbp-32h] BYREF
  __int64 v2; // [rsp+8h] [rbp-30h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF
  __int64 v4; // [rsp+18h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v1 = (unsigned __int8)getinf();
  v2 = (unsigned __int8)getinf();
  v3 = (unsigned __int8)getinf();
  v4 = (unsigned __int16)getinf();
  v5[0] = getinf();
  if ( (unsigned int)sub_18C660(
                       1047,
                       (unsigned int)&v1,
                       (unsigned int)&v4,
                       (unsigned int)v5,
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
    sub_1990E0(&stru_40000, 0, 0);
  }
  return 1;
}

