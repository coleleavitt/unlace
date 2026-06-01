void __fastcall sub_22C7EF0(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  bool v6; // zf
  char *v7; // rdi

  *(_QWORD *)a1 = off_2C77518;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 28);
  if ( v2 )
    v2(a1 + 208, a1 + 208, 3);
  v3 = *((void **)a1 + 22);
  if ( v3 )
    operator delete(v3);
  v4 = *((void **)a1 + 18);
  if ( v4 )
    operator delete(v4);
  v5 = *((void **)a1 + 15);
  if ( v5 )
    operator delete(v5);
  v6 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v6 )
    free(*((void **)a1 + 11));
  v7 = *((char **)a1 + 8);
  if ( v7 != a1 + 80 )
    free(v7);
  operator delete(a1, 0xF0u);
}
