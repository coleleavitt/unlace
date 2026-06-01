void __fastcall sub_2014000(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  bool v3; // zf
  char *v4; // rdi

  *(_QWORD *)a1 = off_2C71B48;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 22);
  if ( v2 )
    v2(a1 + 160, a1 + 160, 3);
  v3 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v3 )
    free(*((void **)a1 + 11));
  v4 = *((char **)a1 + 8);
  if ( v4 != a1 + 80 )
    free(v4);
}
