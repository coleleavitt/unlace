__int64 __fastcall sub_F13B0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v5; // r12

  if ( a2 < a1[1] )
  {
    v5 = (_QWORD *)(*a1 + 80 * a2);
    if ( v5[5] )
    {
      v5[6] = 0;
      qfree();
    }
    if ( v5[2] )
    {
      v5[3] = 0;
      qfree();
    }
    memmove(v5, v5 + 10, *a1 + 80LL * a1[1]-- - (_QWORD)v5 - 80);
  }
  return sub_F12C0((__int64)a1, a3, 0);
}

