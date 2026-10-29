unsigned __int64 __fastcall sub_846500(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  void *v7; // rdi
  __int64 v8; // rsi
  size_t v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( a2 < a1[3] )
    return 0;
  if ( a2 >= a1[1] )
    return 0;
  v4 = a1[2];
  if ( v4 < a2 )
  {
    if ( qword_2CAD048 )
    {
      v6 = ~qword_2CAD048;
    }
    else
    {
      v10 = sysconf(30);
      if ( v10 < 0 )
      {
        v6 = -4096;
        v11 = 4095;
      }
      else
      {
        v11 = v10 - 1;
        v6 = -v10;
      }
      qword_2CAD048 = v11;
      v4 = a1[2];
    }
    v7 = (void *)(v6 & v4);
    v8 = v6 & a2;
    if ( (unsigned __int64)v7 < (v6 & a2) )
    {
      v9 = v8 - (_QWORD)v7;
      posix_madvise(v7, v9, 4);
      madvise(v7, v9, 8);
    }
  }
  a1[2] = a2;
  return a2;
}

