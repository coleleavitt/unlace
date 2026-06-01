__int64 sub_34D280()
{
  __int16 v0; // bx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  unsigned __int16 v6; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v0 = (unsigned __int8)getinf_flag(44, 512);
  v6 = v0 | (2 * (unsigned __int8)getinf_flag(44, 256));
  if ( (unsigned int)sub_507F10(1048, (unsigned int)&v6, v1, v2, v3, v4) )
  {
    setinf_flag(44, 512, v6 & 1);
    setinf_flag(44, 256, (v6 >> 1) & 1);
  }
  return 1;
}
