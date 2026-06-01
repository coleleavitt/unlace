__int64 __fastcall sub_107B910(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // rbp
  size_t v5; // rdx
  __int64 v7; // rbp

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 != v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 8);
      if ( v4 )
      {
        v5 = 6;
        if ( v4 <= 6 )
          v5 = *(_QWORD *)(v2 + 8);
        if ( !memcmp(*(const void **)v2, "+alu32", v5) )
        {
          v7 = v4 - 6;
          if ( v7 <= 0x7FFFFFFF && v7 >= (__int64)0xFFFFFFFF80000000LL && !(_DWORD)v7 )
            *(_BYTE *)(a1 + 509) = 1;
        }
      }
      v2 += 32;
    }
    while ( v3 != v2 );
  }
  return 1;
}
