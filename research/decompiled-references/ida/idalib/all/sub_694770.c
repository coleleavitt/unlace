void __fastcall sub_694770(_QWORD *a1)
{
  char *v1; // rbx
  char *v2; // rbp
  char *v3; // rbx
  char *v4; // rbp

  if ( a1 )
  {
    v1 = (char *)a1[9];
    while ( v1 )
    {
      v2 = v1;
      sub_693110(*((_QWORD **)v1 + 3));
      v1 = *((char **)v1 + 2);
      clear_tinfo_t(v2 + 48);
      operator delete(v2, 0x38u);
    }
    v3 = (char *)a1[3];
    while ( v3 )
    {
      v4 = v3;
      sub_693350(*((_QWORD **)v3 + 3));
      v3 = *((char **)v3 + 2);
      clear_tinfo_t(v4 + 40);
      operator delete(v4, 0x30u);
    }
    operator delete(a1, 0x68u);
  }
}
