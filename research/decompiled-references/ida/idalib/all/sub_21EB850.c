void __fastcall sub_21EB850(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  char *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  bool v7; // zf
  char *v8; // rdi

  *(_QWORD *)a1 = &off_2C75070;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 79);
  if ( v2 )
    v2(a1 + 616, a1 + 616, 3);
  v3 = *((char **)a1 + 27);
  *((_QWORD *)a1 + 25) = &off_2C75020;
  if ( v3 != a1 + 232 )
    free(v3);
  v4 = *((void **)a1 + 22);
  if ( v4 )
    operator delete(v4);
  v5 = *((void **)a1 + 18);
  if ( v5 )
    operator delete(v5);
  v6 = *((void **)a1 + 15);
  if ( v6 )
    operator delete(v6);
  v7 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v7 )
    free(*((void **)a1 + 11));
  v8 = *((char **)a1 + 8);
  if ( v8 != a1 + 80 )
    free(v8);
}
