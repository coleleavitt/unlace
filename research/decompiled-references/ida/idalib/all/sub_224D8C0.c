void __fastcall sub_224D8C0(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  char *v3; // rdi
  bool v4; // zf
  char *v5; // rdi

  *(_QWORD *)a1 = off_2C75E48;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 25);
  if ( v2 )
    v2(a1 + 184, a1 + 184, 3);
  v3 = *((char **)a1 + 17);
  *((_QWORD *)a1 + 16) = off_2C712B0;
  if ( v3 != a1 + 152 )
    operator delete(v3);
  v4 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v4 )
    free(*((void **)a1 + 11));
  v5 = *((char **)a1 + 8);
  if ( v5 != a1 + 80 )
    free(v5);
  operator delete(a1, 0xD8u);
}
