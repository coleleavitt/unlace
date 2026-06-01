__int64 __fastcall sub_669630(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char *v4; // r14
  void *v9; // rdi
  void *v10; // rdi

  v4 = (char *)a1 + 2556;
  if ( a3 )
  {
    v4 = (char *)a1 + 2556;
    if ( sub_79B6F0((char *)a1 + 2556, *a1, a3, 0xFFFFFFFFLL, 83) < 0 )
    {
      v9 = *(void **)a3;
      if ( *(_QWORD *)a3 )
      {
        *(_QWORD *)(a3 + 8) = 0;
        qfree(v9);
        *(_QWORD *)a3 = 0;
        *(_QWORD *)(a3 + 16) = 0;
      }
    }
  }
  if ( (int)a4 >= (int)sub_79B3A0(v4, *a1, 4294967294LL, 65) )
    return 0xFFFFFFFFLL;
  if ( a2 && sub_79B6F0(v4, *a1, a2, a4, 83) < 0 )
  {
    v10 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v10);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
  }
  return sub_79B3A0(v4, *a1, a4, 65);
}

