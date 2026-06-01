void __fastcall sub_221AFE0(char *a1)
{
  void (__fastcall *v2)(char *, char *, __int64); // rax
  void *v3; // rdi
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  bool v7; // zf
  char *v8; // rdi

  *(_QWORD *)a1 = off_2C75918;
  v2 = *((void (__fastcall **)(char *, char *, __int64))a1 + 26);
  if ( v2 )
    v2(a1 + 192, a1 + 192, 3);
  v3 = *((void **)a1 + 20);
  if ( v3 )
    operator delete(v3);
  v4 = *((_QWORD **)a1 + 17);
  v5 = *((_QWORD **)a1 + 16);
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = (_QWORD *)v5[1];
        *v5 = off_2C712B0;
        if ( v6 == v5 + 3 )
          break;
        operator delete(v6);
        v5 += 6;
        if ( v5 == v4 )
          goto LABEL_8;
      }
      v5 += 6;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = *((_QWORD **)a1 + 16);
  }
  if ( v5 )
    operator delete(v5);
  v7 = a1[108] == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v7 )
    free(*((void **)a1 + 11));
  v8 = *((char **)a1 + 8);
  if ( v8 != a1 + 80 )
    free(v8);
  operator delete(a1, 0xE0u);
}
