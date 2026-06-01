__int64 sub_128230()
{
  __int16 v0; // bx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int16 v6; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v0 = (unsigned __int8)getinf_flag();
  v6 = v0 | (2 * (unsigned __int8)getinf_flag());
  if ( (unsigned int)sub_18C660(1048, (unsigned int)&v6, v1, v2, v3, v4) )
  {
    setinf_flag();
    setinf_flag();
  }
  return 1;
}

