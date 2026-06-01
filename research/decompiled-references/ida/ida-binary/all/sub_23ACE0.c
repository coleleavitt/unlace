unsigned __int64 __fastcall sub_23ACE0(const char *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi

  v6 = qword_8CC030;
  if ( qword_8CC030 )
  {
    v7 = xmmword_8CC038;
    if ( (_QWORD)xmmword_8CC038 )
    {
      v8 = 0;
      do
      {
        v9 = (__int64 *)(v6 + 48 * v8);
        v10 = v9[3];
        if ( v10 )
        {
          v9[4] = 0;
          qfree(v10, a2);
        }
        v11 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v11, a2);
        }
        ++v8;
        v6 = qword_8CC030;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&xmmword_8CC038 = 0;
    a5 = qfree(v6, a2);
    qword_8CC030 = 0;
    *((_QWORD *)&xmmword_8CC038 + 1) = 0;
  }
  return sub_23AAB0(&qword_8CC030, a1, a3, a4, a5);
}
