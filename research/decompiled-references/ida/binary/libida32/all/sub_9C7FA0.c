void __fastcall sub_9C7FA0(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi

  v2 = *a1;
  v3 = *a1 + 24LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v3 )
  {
    do
    {
      v3 -= 24;
      if ( *(_DWORD *)(v3 + 12) )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( v4 )
        {
          v5 = 0;
          v6 = 8LL * (unsigned int)(v4 - 1) + 8;
          do
          {
            v7 = *(_QWORD *)(*(_QWORD *)v3 + v5);
            if ( v7 != -8 && v7 )
              operator delete();
            v5 += 8;
          }
          while ( v6 != v5 );
        }
      }
      free(*(void **)v3);
    }
    while ( v2 != v3 );
  }
  *((_DWORD *)a1 + 2) = 0;
}

