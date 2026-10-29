void __fastcall sub_840BF0(char a1, int a2)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rbx
  int v4; // r8d
  int v5; // r9d
  void *v6; // rdi
  __int64 v7; // rax
  void (*v8)(void); // rbp
  void *v9; // rbp

  byte_2CD6F0C = 1;
  if ( qword_2CD6F10 )
  {
    if ( qword_2CD6F18 )
    {
      v2 = (_QWORD *)operator new(0x20u);
      v2[1] = 0;
      v3 = v2;
      v2[2] = 0;
      *v2 = off_2B3CCF0;
      *((_DWORD *)v2 + 6) = a2;
      *((_BYTE *)v2 + 28) = a1;
      if ( !(unsigned __int8)is_main_thread() )
        callui(86, (int)v3, 2, (int)&callui, v4, v5);
      while ( 1 )
      {
        v9 = qword_2CD6F18;
        if ( !qword_2CD6F18 )
          break;
        v7 = *((_QWORD *)qword_2CD6F18 + 1);
        if ( !v7 )
        {
          if ( *(_QWORD *)qword_2CD6F18 )
            qfree(*(void **)qword_2CD6F18);
          qfree(v9);
          break;
        }
        v8 = *(void (**)(void))(*(_QWORD *)qword_2CD6F18 + 8 * v7 - 8);
        del_qatexit((__int64)v8);
        v8();
      }
      qword_2CD6F18 = nullptr;
      if ( *((_BYTE *)v3 + 28) )
        exit(v3[6]);
      if ( v3 )
      {
        v6 = *((void **)v3 + 2);
        *(_QWORD *)v3 = &off_2BFBE18;
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
