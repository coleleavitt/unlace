unsigned __int64 sub_6431D0()
{
  unsigned int v1; // eax
  char v2; // al
  __m128i v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( (getinf(57) & 0xF) == 0 )
  {
    v1 = getinf(5);
    if ( v1 <= 0x17 )
    {
      v2 = byte_23B1620[v1];
      if ( v2 )
      {
        v3 = 0;
        v3.m128i_i8[0] = v2 | 0x80;
        set_compiler(&v3, (_BYTE *)&dword_0 + 2, nullptr);
      }
    }
  }
  return v4 - __readfsqword(0x28u);
}
