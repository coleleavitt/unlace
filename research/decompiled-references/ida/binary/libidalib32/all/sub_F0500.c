__int64 __fastcall sub_F0500(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx

  if ( a2 < a1[1] )
  {
    v5 = (_QWORD *)((a2 << 6) + *a1);
    if ( v5[4] )
    {
      v5[5] = 0;
      qfree();
    }
    if ( v5[1] )
    {
      v5[2] = 0;
      qfree();
    }
    memmove(v5, v5 + 8, *a1 + (a1[1]-- << 6) - (_QWORD)v5 - 64LL);
  }
  return sub_F0430((__int64)a1, a3, 0);
}

