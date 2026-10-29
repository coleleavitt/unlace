void __fastcall clang_disposeAPISet(char *a1)
{
  char *v2; // rax
  char *v3; // rdi
  char *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  void (__fastcall ***v8)(_QWORD); // rdi
  char *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  char *v12; // rbx
  char *v13; // r12
  char *v14; // rdi

  if ( a1 )
  {
    v2 = a1 + 472;
    v3 = *((char **)a1 + 57);
    if ( v3 != v2 )
      operator delete(v3, *((_QWORD *)a1 + 59) + 1LL);
    v4 = *((char **)a1 + 23);
    if ( v4 != a1 + 200 )
      free(v4);
    v5 = *((unsigned int *)a1 + 44);
    if ( (_DWORD)v5 )
    {
      v6 = *((_QWORD **)a1 + 20);
      v7 = &v6[3 * v5];
      do
      {
        if ( *v6 != -2 && *v6 != -1 )
        {
          v8 = (void (__fastcall ***)(_QWORD))v6[2];
          if ( v8 )
            (**v8)(v8);
          v6[2] = 0;
        }
        v6 += 3;
      }
      while ( v7 != v6 );
    }
    operator delete();
    v9 = *((char **)a1 + 12);
    if ( v9 != a1 + 112 )
      operator delete(v9, *((_QWORD *)a1 + 14) + 1LL);
    v10 = *((_QWORD *)a1 + 2);
    v11 = v10 + 8LL * *((unsigned int *)a1 + 6);
    while ( v11 != v10 )
    {
      v10 += 8;
      operator delete();
    }
    v12 = *((char **)a1 + 8);
    v13 = &v12[16 * *((unsigned int *)a1 + 18)];
    if ( v12 != v13 )
    {
      do
      {
        v12 += 16;
        operator delete();
      }
      while ( v13 != v12 );
      v13 = *((char **)a1 + 8);
    }
    if ( v13 != a1 + 80 )
      free(v13);
    v14 = *((char **)a1 + 2);
    if ( v14 != a1 + 32 )
      free(v14);
    operator delete(a1, 0x1E8u);
  }
}

