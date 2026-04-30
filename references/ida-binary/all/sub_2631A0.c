__int64 __fastcall sub_2631A0(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdi

  if ( (unsigned __int64)a2 < a1[1] )
  {
    v9 = (_QWORD *)(*a1 + 80LL * (_QWORD)a2);
    v10 = v9[5];
    if ( v10 )
    {
      v9[6] = 0;
      qfree(v10, a2);
    }
    v11 = v9[2];
    if ( v11 )
    {
      v9[3] = 0;
      qfree(v11, a2);
    }
    memmove(v9, v9 + 10, *a1 + 80LL * a1[1]-- - (_QWORD)v9 - 80);
  }
  return sub_2630B0((__int64)a1, a3, 0, a4, a5, a6);
}
