void __fastcall sub_2AABB0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  *a1 = &off_4B45D8;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(48 * i + v2);
        v6 = v5[2];
        *v5 = off_4B3DB0;
        if ( v6 )
        {
          v5[3] = 0;
          qfree(v6);
        }
        v2 = a1[5];
      }
    }
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
