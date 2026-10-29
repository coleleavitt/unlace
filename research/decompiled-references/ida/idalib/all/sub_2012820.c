void __fastcall sub_2012820(_QWORD *a1)
{
  _QWORD *v1; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // r12
  __int64 v5; // rax
  void *v6; // rdi
  char *v7; // rbx
  char *v8; // rdi

  v1 = (_QWORD *)a1[2];
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)v1[1];
      v4 = (_QWORD *)*v1;
      if ( v3 == v1 + 3 )
      {
        operator delete(v1);
        if ( !v4 )
          break;
      }
      else
      {
        operator delete(v3);
        operator delete(v1);
        if ( !v4 )
          break;
      }
      v1 = v4;
    }
  }
  v5 = a1[1];
  v6 = (void *)*a1;
  v7 = (char *)(a1 + 6);
  memset(v6, 0, 8 * v5);
  v8 = *((char **)v7 - 6);
  *((_QWORD *)v7 - 3) = 0;
  *((_QWORD *)v7 - 4) = 0;
  if ( v8 != v7 )
    operator delete(v8);
}
