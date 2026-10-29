void __fastcall sub_4D70(_QWORD *a1)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = *(_QWORD **)((char *)a1 + 393);
  *a1 = &off_22350;
  if ( v2 )
  {
    v3 = v2[7];
    if ( v3 )
    {
      v2[8] = 0;
      qfree(v3);
    }
    operator delete(v2, 0x58u);
  }
  qfree(*(_QWORD *)((char *)a1 + 441));
  v4 = *(_QWORD *)((char *)a1 + 401);
  *(_QWORD *)((char *)a1 + 441) = 0;
  if ( v4 )
  {
    *(_QWORD *)((char *)a1 + 409) = 0;
    qfree(v4);
  }
  sub_4C90(a1);
}

