__int64 __fastcall sub_BDEA40(__int64 a1, __int64 a2)
{
  __int64 **v2; // rax
  __int64 **v3; // r8
  int v4; // r9d
  __int64 *v5; // rcx
  __int64 v6; // rdi
  _DWORD *v7; // rdx
  unsigned int v8; // r10d
  __int64 *v9; // rcx
  unsigned int i; // edx
  __int64 v11; // rdi

  v2 = *(__int64 ***)(a2 + 56);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v3 != v2 )
    {
      v4 = *(_DWORD *)(a1 + 8);
      do
      {
        v5 = *v2;
        v6 = **v2;
        v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( v7 && v4 == *v7 && v7[1] == 1 && (*((_BYTE *)v5 + 44) & 8) == 0 )
        {
          v8 = *(_DWORD *)(v6 + 24);
          v9 = v5 + 15;
          for ( i = 1; i < v8; ++i )
          {
            v11 = *v9++;
            if ( a2 == *(_QWORD *)(v11 + 8) )
              return 1;
          }
        }
        ++v2;
      }
      while ( v3 != v2 );
    }
  }
  return 0;
}

