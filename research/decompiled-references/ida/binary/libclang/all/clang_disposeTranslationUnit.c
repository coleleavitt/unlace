void __fastcall clang_disposeTranslationUnit(void *a1)
{
  _BYTE *v2; // rbx
  void *v3; // rbx
  __int64 v4; // rdi
  void *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbx

  if ( a1 )
  {
    v2 = *((_BYTE **)a1 + 1);
    if ( v2 )
    {
      if ( (v2[2036] & 1) != 0 )
        return;
      sub_FFE9C0(*((_QWORD *)a1 + 1));
      operator delete(v2, 0x808u);
    }
    v3 = *((void **)a1 + 2);
    if ( v3 )
    {
      sub_690750(*((_QWORD *)a1 + 2));
      operator delete(v3, 0x18u);
    }
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_63BC90(*((void **)a1 + 4));
    v5 = *((void **)a1 + 5);
    if ( v5 )
    {
      nullsub_214(*((_QWORD *)a1 + 5));
      operator delete(v5, 1u);
    }
    v6 = *((_QWORD *)a1 + 8);
    v7 = *((_QWORD *)a1 + 7);
    if ( v6 != v7 )
    {
      do
      {
        if ( *(_QWORD *)v7 != v7 + 16 )
          operator delete(*(void **)v7, *(_QWORD *)(v7 + 16) + 1LL);
        v7 += 32;
      }
      while ( v6 != v7 );
      v7 = *((_QWORD *)a1 + 7);
    }
    if ( v7 )
      operator delete((void *)v7, *((_QWORD *)a1 + 9) - v7);
    operator delete(a1, 0x50u);
  }
}

