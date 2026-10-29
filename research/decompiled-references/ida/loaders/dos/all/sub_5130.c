unsigned __int64 __fastcall sub_5130(
        double a1,
        double a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 result; // rax
  unsigned __int64 *v15; // rbx

  v8 = 0;
  v9 = getinf(21, a4, a5, a6, a7, a8);
  sub_31F0((__int64)"Deleting bytes which do not belong to any segment...\n");
  while ( 1 )
  {
    result = getinf(22, a4, v10, v11, v12, v13);
    if ( v9 >= result )
      break;
    v15 = (unsigned __int64 *)getnseg(v8);
    if ( v9 < *v15 )
    {
      show_auto(v9, 0);
      if ( (debug & 0x10) != 0 )
      {
        sub_4FB0((__int64)"Deleting bytes at %a..%a (they do not belong to any segment)...\n", a1, a2);
        a4 = *v15;
        if ( (unsigned int)disable_flags(v9, *v15) )
          return sub_3120((__int64)"Maximal number of segments is reached, some bytes are out of segments");
      }
      else
      {
        a4 = *v15;
        if ( (unsigned int)disable_flags(v9, *v15) )
          return sub_3120((__int64)"Maximal number of segments is reached, some bytes are out of segments");
      }
      sub_3490();
    }
    v9 = v15[1];
    ++v8;
  }
  return result;
}

