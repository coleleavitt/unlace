void __fastcall sub_20155F0(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  bool v3; // zf
  char *v4; // rdi

  *(_QWORD *)a1 = off_2C71CA8;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 21);
  if ( v2 )
    v2(a1 + 152, a1 + 152, 3);
  v3 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v3 )
    free(*((void **)a1 + 11));
  v4 = *((char **)a1 + 8);
  if ( v4 != a1 + 80 )
    free(v4);
  operator delete(a1, 0xB8u);
}
