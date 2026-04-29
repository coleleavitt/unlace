void __fastcall sub_2C2DD0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(80 * i + v2);
        v6 = v5[3];
        *v5 = off_4B3C98;
        if ( v6 )
        {
          v5[4] = 0;
          qfree(v6);
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v2);
  }
}
