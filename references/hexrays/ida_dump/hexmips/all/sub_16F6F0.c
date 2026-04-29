__int64 __fastcall sub_16F6F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  *a1 = off_4BE838;
  v2 = a1[7];
  if ( v2 )
  {
    v3 = a1[8];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + (v4 << 6));
        v6 = v5[5];
        if ( v6 )
        {
          v5[6] = 0;
          qfree(v6);
        }
        ++v4;
        qfree(v5[3]);
        sub_118BA0((__int64)(v5 + 1));
        v2 = a1[7];
      }
      while ( v3 != v4 );
    }
    a1[8] = 0;
    qfree(v2);
  }
  return j__qfree(a1);
}
