void __fastcall sub_E35890(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rax

  *(_QWORD *)a1 = &off_2B4B880;
  operator delete(*(_QWORD *)(a1 + 104), 24LL * *(unsigned int *)(a1 + 120), 8);
  operator delete(*(_QWORD *)(a1 + 80), 16LL * *(unsigned int *)(a1 + 96), 8);
  operator delete(*(_QWORD *)(a1 + 56), 16LL * *(unsigned int *)(a1 + 72), 8);
  if ( *(_DWORD *)(a1 + 36) )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v3 = *(char **)(a1 + 24);
    if ( v2 )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(v2 - 1) + 8;
      do
      {
        v6 = *(_QWORD **)&v3[v4];
        if ( v6 != (_QWORD *)-8LL )
        {
          if ( v6 )
          {
            operator delete(*(_QWORD *)&v3[v4], *v6 + 17LL, 8);
            v3 = *(char **)(a1 + 24);
          }
        }
        v4 += 8;
      }
      while ( v5 != v4 );
    }
    free(v3);
  }
  else
  {
    free(*(void **)(a1 + 24));
  }
}
