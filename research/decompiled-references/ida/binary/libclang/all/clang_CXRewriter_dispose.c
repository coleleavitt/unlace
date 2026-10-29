void __fastcall clang_CXRewriter_dispose(_QWORD *a1)
{
  char *v2; // rbx
  char *v3; // rbp
  _DWORD *v4; // rdi

  if ( a1 )
  {
    v2 = (char *)a1[4];
    while ( v2 )
    {
      v3 = v2;
      sub_69E630(*((_QWORD **)v2 + 3));
      v4 = *((_DWORD **)v2 + 7);
      v2 = *((char **)v2 + 2);
      if ( v4 )
      {
        if ( (*v4)-- == 1 )
          operator delete[](v4);
      }
      sub_25D36E0(v3 + 48);
      sub_25A7550(v3 + 40);
      operator delete(v3, 0x48u);
    }
    operator delete(a1, 0x40u);
  }
}

