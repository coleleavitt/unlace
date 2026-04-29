unsigned __int64 __fastcall std::__murmur2_or_cityhash<unsigned long,64ul>::__hash_len_0_to_16(
        _DWORD *a1,
        unsigned __int64 a2)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x10
  unsigned __int64 result; // x0
  __int64 v6; // x8
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8

  if ( a2 < 9 )
  {
    if ( a2 < 4 )
    {
      result = 0x9AE16A3B2F90404FLL;
      if ( a2 )
      {
        v8 = (0xC949D7C7509E6557LL * (a2 + 4LL * *((unsigned __int8 *)a1 + a2 - 1)))
           ^ (0x9AE16A3B2F90404FLL
            * (*(unsigned __int8 *)a1 | ((unsigned __int64)*((unsigned __int8 *)a1 + (a2 >> 1)) << 8)));
        return 0x9AE16A3B2F90404FLL * (v8 ^ (v8 >> 47));
      }
    }
    else
    {
      v6 = *(unsigned int *)((char *)a1 + a2 - 4);
      v7 = 0x9DDFEA08EB382D69LL * (((unsigned int)(8 * *a1) + a2) ^ v6);
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v7 ^ v6 ^ (v7 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v7 ^ v6 ^ (v7 >> 47))) >> 47));
    }
  }
  else
  {
    v3 = *(_QWORD *)((char *)a1 + a2 - 8);
    v4 = ((v3 + a2) << -(char)a2) | ((v3 + a2) >> a2);
    return (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v4 ^ *(_QWORD *)a1)) ^ v4 ^ ((0x9DDFEA08EB382D69LL * (v4 ^ *(_QWORD *)a1)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v4 ^ *(_QWORD *)a1))
              ^ v4
              ^ ((0x9DDFEA08EB382D69LL * (v4 ^ *(_QWORD *)a1)) >> 47))) >> 47)))
         ^ v3;
  }
  return result;
}
