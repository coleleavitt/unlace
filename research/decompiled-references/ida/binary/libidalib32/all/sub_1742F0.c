__int64 __fastcall sub_1742F0(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *i; // rbx
  _QWORD *v6; // rdi

  v2 = (_QWORD *)a1[3];
  *a1 = &off_234A38;
  if ( v2 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 != v2 )
    {
      do
      {
        v4 = v3[2];
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v3 = (_QWORD *)*v3;
      }
      while ( v3 != v2 );
      for ( i = (_QWORD *)*v2; v2 != i; --v2[2] )
      {
        v6 = i;
        i = (_QWORD *)*i;
        *(_QWORD *)v6[1] = i;
        i[1] = v6[1];
        qfree();
      }
    }
    qfree();
  }
  *a1 = &off_235C80;
  return qsem_free();
}

