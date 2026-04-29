__int64 *__fastcall sub_1CE950(unsigned __int64 *a1)
{
  __int64 *result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp

  result = (__int64 *)is_mapped();
  if ( (_BYTE)result )
  {
    result = (__int64 *)find_free_chunk();
    *a1 = (unsigned __int64)result;
    v3 = (unsigned __int64)result;
    if ( result == (__int64 *)-1LL )
    {
      result = (__int64 *)get_first_seg();
      if ( result )
      {
        v4 = 0;
        do
        {
          v5 = result[1];
          v6 = *result;
          v7 = v5 - *result;
          if ( v4 < v7 )
          {
            v4 = v7;
            v3 = (unsigned __int64)(v6 + v5) >> 1;
          }
          result = (__int64 *)get_next_seg();
        }
        while ( result );
        v8 = v3 & 0xFFFFFFFFFFF00000LL;
      }
      else
      {
        v8 = -1048576;
      }
      *a1 = v8;
    }
  }
  return result;
}
