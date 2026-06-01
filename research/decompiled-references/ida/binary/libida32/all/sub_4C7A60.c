void __fastcall sub_4C7A60(char *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  char *v4; // rdi
  void *v5; // rdi

  if ( a1 )
  {
    v2 = *((_QWORD **)a1 + 83);
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      operator delete(v3, 0x10u);
    }
    memset(*((void **)a1 + 81), 0, 8LL * *((_QWORD *)a1 + 82));
    v4 = *((char **)a1 + 81);
    *((_QWORD *)a1 + 84) = 0;
    *((_QWORD *)a1 + 83) = 0;
    if ( v4 != a1 + 696 )
      operator delete(v4, 8LL * *((_QWORD *)a1 + 82));
    v5 = *((void **)a1 + 77);
    if ( v5 )
      operator delete(v5, *((_QWORD *)a1 + 79) - (_QWORD)v5);
    sub_4C7650((__int64)a1);
    operator delete(a1, 0x2C8u);
  }
}

