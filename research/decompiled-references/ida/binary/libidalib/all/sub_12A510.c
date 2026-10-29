__int64 sub_12A510()
{
  __int16 v0; // bx
  __int16 v1; // bx
  __int16 v3; // [rsp+Ah] [rbp-4Eh] BYREF
  _WORD v4[2]; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h] BYREF
  __int64 v6; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v7[3] = __readfsqword(0x28u);
  v3 = (unsigned __int8)getinf_flag();
  v0 = getinf();
  if ( (unsigned __int8)getinf_flag() )
    v0 = -v0;
  v5 = v0;
  v1 = (unsigned __int8)getinf_flag();
  v4[0] = v1 | (2 * (unsigned __int8)getinf());
  v6 = (unsigned __int8)getinf();
  v7[0] = (unsigned __int16)getinf();
  v4[1] = 2 * (((unsigned __int64)getinf() >> 2) & 1);
  v7[1] = getinf();
  v7[2] = getinf();
  if ( (unsigned int)sub_18C660(
                       1046,
                       (unsigned int)&v3,
                       (unsigned int)&v5,
                       (unsigned int)v7,
                       (unsigned int)v4,
                       (unsigned int)&v6) )
  {
    setinf_flag();
    setinf_flag();
    setinf();
    setinf();
    setinf_flag();
    setinf();
    setinf();
    setinf_flag();
    setinf();
    setinf();
    getinf_flag();
    get_view_options();
    dto_copy_from_inf();
  }
  return 1;
}

