void __fastcall sub_81D830(char a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int v4; // r8d
  int v5; // r9d
  void *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_2CACFEC = 1;
  if ( qword_2CACFF0 )
  {
    if ( qword_2CACFF8 )
    {
      v2 = operator new(0x20u);
      *(_QWORD *)(v2 + 8) = 0;
      v3 = (_DWORD *)v2;
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)v2 = off_2B12D50;
      *(_DWORD *)(v2 + 24) = a2;
      *(_BYTE *)(v2 + 28) = a1;
      if ( !(unsigned __int8)is_main_thread() )
        callui(86, (int)v3, 2, (int)&callui, v4, v5);
      while ( 1 )
      {
        v9 = qword_2CACFF8;
        if ( !qword_2CACFF8 )
          break;
        v7 = *((_QWORD *)qword_2CACFF8 + 1);
        if ( !v7 )
        {
          if ( *(_QWORD *)qword_2CACFF8 )
            qfree(*(void **)qword_2CACFF8);
          qfree(v9);
          break;
        }
        v8 = *(void (**)(void))(*(_QWORD *)qword_2CACFF8 + 8 * v7 - 8);
        del_qatexit(v8);
        v8();
      }
      qword_2CACFF8 = nullptr;
      if ( *((_BYTE *)v3 + 28) )
        exit(v3[6]);
      if ( v3 )
      {
        v6 = *((void **)v3 + 2);
        *(_QWORD *)v3 = &off_2BD1E18;
        qsem_free(v6);
        operator delete(v3, 0x20u);
      }
    }
  }
  else if ( a1 )
  {
    exit(a2);
  }
}

