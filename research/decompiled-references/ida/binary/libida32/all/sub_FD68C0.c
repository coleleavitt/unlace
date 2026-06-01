void __fastcall sub_FD68C0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_FD6880(v6, *(__int64 **)a1, *(_DWORD *)(a1 + 8) == 0);
  v1 = v6[0];
  sub_FD6880(v6, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  v2 = v6[0];
  if ( v6[0] != v1 )
  {
    v3 = *v1;
    do
    {
      while ( 1 )
      {
        *(_BYTE *)(v3 + 25) = 0;
        v3 = v1[1];
        v4 = v1 + 1;
        if ( v3 == -8 || !v3 )
          break;
        ++v1;
        if ( v2 == v4 )
          return;
      }
      v5 = v1 + 2;
      do
      {
        do
        {
          v3 = *v5;
          v1 = v5++;
        }
        while ( v3 == -8 );
      }
      while ( !v3 );
    }
    while ( v2 != v1 );
  }
}

