void __fastcall sub_1C38A00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // rbx

  v2 = *a1;
  v3 = *a1 + 24LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 8);
      v2 += 24;
      a2 += 24;
      *(_DWORD *)(a2 - 16) = v4;
      *(_QWORD *)(a2 - 24) = *(_QWORD *)(v2 - 24);
      LOBYTE(v4) = *(_BYTE *)(v2 - 12);
      *(_DWORD *)(v2 - 16) = 0;
      *(_BYTE *)(a2 - 12) = v4;
      *(_QWORD *)(a2 - 8) = *(_QWORD *)(v2 - 8);
    }
    while ( v3 != v2 );
    v5 = *a1;
    v6 = *a1 + 24LL * *((unsigned int *)a1 + 2);
    while ( v5 != v6 )
    {
      while ( 1 )
      {
        v6 -= 24;
        if ( *(_DWORD *)(v6 + 8) <= 0x40u || !*(_QWORD *)v6 )
          break;
        operator delete[](*(void **)v6);
        if ( v5 == v6 )
          return;
      }
    }
  }
}
