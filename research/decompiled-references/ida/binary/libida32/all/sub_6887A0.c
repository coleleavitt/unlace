__int64 __fastcall sub_6887A0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  _QWORD *v14; // rdi

  if ( a2 >= a3 || (v7 = a1[1], a2 >= v7) )
  {
    set_error_data(0, a3, a3, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v8 = *a1;
    v9 = (_QWORD *)(*a1 + 80 * a2);
    if ( a3 < v7 )
      v10 = (_QWORD *)(v8 + 80 * a3);
    else
      v10 = (_QWORD *)(v8 + 80 * v7);
    if ( v10 != v9 )
    {
      v11 = (_QWORD *)(*a1 + 80 * a2);
      do
      {
        clear_tinfo_t(v11 + 8);
        v12 = (void *)v11[5];
        if ( v12 )
        {
          v11[6] = 0;
          qfree(v12);
        }
        v13 = (void *)v11[2];
        if ( v13 )
        {
          v11[3] = 0;
          qfree(v13);
        }
        v14 = v11;
        v11 += 10;
        cleanup_argloc(v14);
      }
      while ( v10 != v11 );
      v8 = *a1;
      v7 = a1[1];
    }
    memmove(v9, v10, v8 + 80 * v7 - (_QWORD)v10);
    a1[1] -= 0xCCCCCCCCCCCCCCCDLL * (((char *)v10 - (char *)v9) >> 4);
    return 0;
  }
}

