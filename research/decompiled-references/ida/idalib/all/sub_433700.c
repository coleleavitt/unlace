void __fastcall sub_433700(char *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  char *v5; // rdi
  void *v6; // rdi

  if ( a1 )
  {
    v2 = *((_QWORD **)a1 + 7);
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      v4 = v3[2];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      operator delete(v3, 0x18u);
    }
    memset(*((void **)a1 + 5), 0, 8LL * *((_QWORD *)a1 + 6));
    v5 = *((char **)a1 + 5);
    *((_QWORD *)a1 + 8) = 0;
    *((_QWORD *)a1 + 7) = 0;
    if ( v5 != a1 + 88 )
      operator delete(v5, 8LL * *((_QWORD *)a1 + 6));
    v6 = *((void **)a1 + 1);
    if ( v6 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v6);
    }
    operator delete(a1, 0x60u);
  }
}
