void __fastcall sub_14A1910(__int64 a1, __int64 a2)
{
  int v2; // edx
  char *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdi

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(char **)(a2 + 16);
  if ( v2 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(v2 - 1) + 8;
    do
    {
      v6 = *(_QWORD *)&v3[v4];
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v3 = *(char **)(a2 + 16);
      }
      v4 += 8;
    }
    while ( v5 != v4 );
  }
  if ( v3 != (char *)(a2 + 32) )
    free(v3);
  operator delete((void *)a2, 0x30u);
}
