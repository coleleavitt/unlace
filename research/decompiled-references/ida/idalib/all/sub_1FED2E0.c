void __fastcall sub_1FED2E0(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  char *v3; // rdi
  char *v4; // rdi
  bool v5; // zf
  char *v6; // rdi

  *(_QWORD *)a1 = off_2C757E0;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 28);
  if ( v2 )
    v2(a1 + 208, a1 + 208, 3);
  v3 = *((char **)a1 + 20);
  *((_QWORD *)a1 + 19) = off_2C712B0;
  if ( v3 != a1 + 176 )
    operator delete(v3);
  v4 = *((char **)a1 + 15);
  if ( v4 != a1 + 136 )
    operator delete(v4);
  v5 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v5 )
    free(*((void **)a1 + 11));
  v6 = *((char **)a1 + 8);
  if ( v6 != a1 + 80 )
    free(v6);
}
