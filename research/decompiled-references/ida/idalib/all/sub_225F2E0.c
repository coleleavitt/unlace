void __fastcall sub_225F2E0(char *a1)
{
  __int64 v2; // rbp
  char *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r12
  void *v6; // rdi
  char *v7; // rdi
  char *v8; // rdi

  v2 = *((_QWORD *)a1 + 19);
  *(_QWORD *)a1 = &off_2BEB998;
  if ( v2 )
  {
    v3 = a1 + 136;
    while ( 1 )
    {
      sub_225F260((__int64)v3, *(_QWORD **)(v2 + 24));
      v4 = *(_QWORD *)(v2 + 64);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v6 = *(void **)(v2 + 32);
      if ( v6 == (void *)(v2 + 48) )
      {
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      else
      {
        operator delete(v6);
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      v2 = v5;
    }
  }
  v7 = *((char **)a1 + 6);
  if ( v7 != a1 + 64 )
    operator delete(v7);
  v8 = *((char **)a1 + 2);
  *(_QWORD *)a1 = &unk_2C76008;
  if ( v8 != a1 + 32 )
    operator delete(v8);
  operator delete(a1, 0xB8u);
}
