unsigned __int64 __fastcall sub_182180(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi

  clear_tinfo_t(a1 + 14);
  v2 = a1[8];
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 40 * i);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6);
          v2 = a1[8];
        }
      }
    }
    a1[9] = 0;
    qfree(v2);
  }
  v7 = a1[5];
  if ( v7 )
  {
    a1[6] = 0;
    qfree(v7);
  }
  sub_1181E0((__int64)(a1 + 3));
  return sub_1181E0((__int64)a1);
}
