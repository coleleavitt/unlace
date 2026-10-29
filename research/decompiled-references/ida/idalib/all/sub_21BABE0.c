__int64 __fastcall sub_21BABE0(__int64 *a1, _BYTE *a2, size_t a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  size_t v7; // rdx

  if ( a3 != 1 || (result = 1, *a2 != 45) )
  {
    v4 = *a1;
    v5 = *a1 + 16 * a1[1];
    if ( *a1 == v5 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( v7 <= a3 && (!v7 || !memcmp(a2, *(const void **)v4, v7)) )
          break;
        v4 += 16;
        if ( v5 == v4 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}
