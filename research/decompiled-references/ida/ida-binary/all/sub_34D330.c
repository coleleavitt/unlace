__int64 sub_34D330()
{
  int v0; // ebx
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  char v5; // al
  __int64 v6; // rsi
  __int16 v7; // [rsp+4h] [rbp-14h] BYREF
  __int16 v8; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v0 = getinf(10);
  v7 = (v0 & 0x4000000) != 0;
  v8 = (unsigned __int8)getinf(45) >> 5;
  if ( (unsigned int)sub_507F10(1049, (unsigned int)&v7, (unsigned int)&v8, v1, v2, v3) )
  {
    v5 = getinf(45);
    setinf(45, v5 & 0x1Fu | (unsigned __int8)(32 * v8));
    v6 = v0 & 0xFBFFFFFF;
    if ( v7 )
      v6 = v0 | 0x4000000u;
    setinf(10, v6);
  }
  return 1;
}
