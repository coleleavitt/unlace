void __fastcall sub_4C90(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbp
  __int64 v4; // rdi

  v2 = (_QWORD *)a1[5];
  *a1 = &off_22318;
  if ( v2 )
  {
    if ( v2[7] )
    {
      v2[8] = 0;
      ((void (*)(void))qfree)();
    }
    if ( v2[4] )
    {
      v2[5] = 0;
      ((void (*)(void))qfree)();
    }
    if ( v2[1] )
    {
      v2[2] = 0;
      ((void (*)(void))qfree)();
    }
    operator delete(v2, 0x50u);
  }
  v3 = *(_QWORD **)((char *)a1 + 141);
  if ( v3 )
  {
    if ( *v3 )
    {
      v3[1] = 0;
      ((void (*)(void))qfree)();
    }
    qfree(v3);
  }
  v4 = *(_QWORD *)((char *)a1 + 85);
  if ( v4 )
  {
    *(_QWORD *)((char *)a1 + 93) = 0;
    qfree(v4);
  }
}

