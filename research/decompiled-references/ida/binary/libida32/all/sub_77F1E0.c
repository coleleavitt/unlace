__int64 __fastcall sub_77F1E0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rbx
  unsigned int v4; // r15d
  const char *v5; // rax
  const char *v6; // r13

  v2 = *(_DWORD *)(a1 + 64) - 1;
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 56) + 56LL * (unsigned int)v2 + 40;
    do
    {
      if ( *(_QWORD *)v3 == a2 )
      {
        v4 = *(unsigned __int8 *)(a2 + 25);
        if ( !(_BYTE)v4 )
          return 1;
        v5 = haystack;
        v6 = haystack;
        if ( *(_QWORD *)(a2 + 8) )
        {
          v6 = *(const char **)a2;
          v5 = &v6[strlen(*(const char **)a2)];
        }
        LOBYTE(v5) = *(_QWORD *)(a1 + 8) >= (unsigned __int64)v6 && (unsigned __int64)v5 >= *(_QWORD *)(a1 + 8);
        if ( (_BYTE)v5 )
          return (unsigned int)v5;
        if ( *(_DWORD *)(a1 + 80) > *(_DWORD *)(v3 + 8) )
          return v4;
      }
      --v2;
      v3 -= 56;
    }
    while ( v2 != -1 );
  }
  return 0;
}

