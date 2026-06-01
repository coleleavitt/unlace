void __fastcall sub_1CB3BA0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r12
  __int64 v4; // r13
  void **v5; // rbp
  void *v6; // rdi

  if ( !*(_BYTE *)(a1 + 112) )
  {
    v2 = *(_DWORD *)(a1 + 88);
    if ( v2 )
    {
      v3 = 0;
      v4 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v5 = *(void ***)(*(_QWORD *)(a1 + 80) + v3);
        if ( v5 )
        {
          if ( *v5 != v5 + 2 )
            free(*v5);
          operator delete(v5, 0x30u);
        }
        v3 += 8;
      }
      while ( v4 != v3 );
    }
    *(_QWORD *)(*(_QWORD *)a1 + 11280LL) = *(_QWORD *)(a1 + 104);
    *(_BYTE *)(a1 + 112) = 1;
  }
  v6 = *(void **)(a1 + 80);
  if ( v6 != (void *)(a1 + 96) )
    free(v6);
  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 16), 16LL * *(unsigned int *)(a1 + 24), 8);
}
