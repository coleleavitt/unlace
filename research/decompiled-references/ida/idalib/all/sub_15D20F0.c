__int64 __fastcall sub_15D20F0(__int64 a1)
{
  char *v2; // rbx
  char *v3; // rbp
  __int64 v4; // rdi

  v2 = *(char **)(a1 + 16);
  *(_QWORD *)a1 = &off_2C48C18;
  v3 = &v2[8 * *(unsigned int *)(a1 + 24)];
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_QWORD *)v2;
      if ( (*(_DWORD *)(*(_QWORD *)v2 + 8LL))-- == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v2 += 8;
    }
    while ( v3 != v2 );
    v3 = *(char **)(a1 + 16);
  }
  if ( v3 != (char *)(a1 + 32) )
    free(v3);
  return sub_15F0060(a1);
}
