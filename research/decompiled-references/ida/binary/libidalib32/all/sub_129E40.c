__int64 sub_129E40()
{
  __int16 v0; // bx
  __int16 v1; // bx
  __int16 v3; // [rsp+Eh] [rbp-2Ah] BYREF
  _WORD v4[2]; // [rsp+10h] [rbp-28h] BYREF
  int v5; // [rsp+14h] [rbp-24h] BYREF
  int v6; // [rsp+18h] [rbp-20h] BYREF
  _DWORD v7[3]; // [rsp+1Ch] [rbp-1Ch] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
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
  if ( (unsigned int)sub_18BA90(
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

