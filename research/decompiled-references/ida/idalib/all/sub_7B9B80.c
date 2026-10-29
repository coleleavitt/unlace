__int64 __fastcall sub_7B9B80(__int64 a1, __int64 a2, const char *a3, unsigned __int64 a4, __int64 a5, __int16 a6)
{
  __int64 v8; // r15
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
    if ( unk_2CD46C8 )
      v8 = unk_2CD46C8(a5);
  }
  for ( ; a4; a4 -= v10 )
  {
    v10 = 1024;
    v11 = v8;
    if ( a4 <= 0x400 )
      v10 = a4;
    ++v8;
    if ( !(unsigned __int8)sub_7B4100(a1, a2, v11, a3, v10, v9) )
      return 0;
    a3 += v10;
  }
  while ( (unsigned __int8)sub_7B4CA0(a1, a2, v8, v9) )
    ++v8;
  return 1;
}
