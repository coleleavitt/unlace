__int64 __fastcall sub_796B30(
        const char *a1,
        unsigned int a2,
        const char *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int16 a6)
{
  unsigned int v8; // r15d
  __int16 v9; // r12
  size_t v10; // rbx
  __int64 v11; // rdx

  if ( a2 == -1 )
    return 0;
  v8 = a5;
  v9 = a6;
  if ( (a6 & 0x100) != 0 )
  {
    v9 = a6 & 0xFEFF;
    if ( unk_2CAA7A8 )
      v8 = unk_2CAA7A8(a5);
  }
  for ( ; a4; a4 -= v10 )
  {
    v10 = 1024;
    v11 = v8;
    if ( a4 <= 0x400 )
      v10 = a4;
    ++v8;
    if ( !(unsigned __int8)sub_791DB0(a1, a2, v11, a3, v10, v9) )
      return 0;
    a3 += v10;
  }
  while ( (unsigned __int8)sub_792400((__int64)a1, a2, v8, v9) )
    ++v8;
  return 1;
}

