void __fastcall sub_20947A0(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  char *v3; // rdi
  bool v4; // zf
  char *v5; // rdi

  *(_QWORD *)a1 = &off_2C72378;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 72);
  if ( v2 )
    v2(a1 + 560, a1 + 560, 3);
  v3 = *((char **)a1 + 20);
  *((_QWORD *)a1 + 18) = &off_2C72328;
  if ( v3 != a1 + 176 )
    free(v3);
  v4 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v4 )
    free(*((void **)a1 + 11));
  v5 = *((char **)a1 + 8);
  if ( v5 != a1 + 80 )
    free(v5);
  operator delete(a1, 0x250u);
}
