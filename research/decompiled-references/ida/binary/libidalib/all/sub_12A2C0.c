__int64 sub_12A2C0()
{
  int v0; // r12d
  int v1; // ebx
  int v2; // ebx
  int v3; // r13d
  int v4; // r12d
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int16 v9; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v10[0] = (unsigned __int8)getinf();
  v0 = (unsigned __int8)getinf_flag();
  v1 = (unsigned __int8)getinf_flag();
  v2 = (4 * (unsigned __int8)getinf_flag()) | (2 * v1);
  v3 = v0 | v2 | (8 * (unsigned __int8)getinf_flag());
  LOBYTE(v2) = getinf_flag();
  v4 = v3 | (32 * (unsigned __int8)getinf_flag());
  LOWORD(v3) = v4 | ((unsigned __int8)getinf_flag() << 6);
  LOWORD(v4) = (unsigned __int8)getinf_flag();
  v9 = v3 | ((_WORD)v4 << 7) | ((unsigned __int16)getinf_flag() << 8) | (16 * ((unsigned __int8)v2 ^ 1));
  if ( (unsigned int)sub_18C660(1045, (unsigned int)v10, (unsigned int)&v9, v5, v6, v7) )
  {
    setinf();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
    setinf_flag();
  }
  return 1;
}

