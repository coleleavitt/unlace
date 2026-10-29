void __fastcall sub_674A90(_QWORD *a1)
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
      sub_673450(*((_QWORD **)v1 + 3));
      v1 = *((char **)v1 + 2);
      clear_tinfo_t(v2 + 40);
      operator delete(v2, 0x30u);
    }
    v3 = (char *)a1[3];
    while ( v3 )
    {
      v4 = v3;
      sub_673690(*((_QWORD **)v3 + 3));
      v3 = *((char **)v3 + 2);
      clear_tinfo_t(v4 + 40);
      operator delete(v4, 0x30u);
    }
    operator delete(a1, 0x68u);
  }
}

