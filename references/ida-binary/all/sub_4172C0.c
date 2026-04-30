void __fastcall sub_4172C0(__int64 a1, const char *a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v2 = *(_QWORD **)(a1 + 32);
  v3 = v2[25];
  if ( v3 )
  {
    v4 = v2[26];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 80 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
          v3 = v2[25];
        }
      }
    }
    v2[26] = 0;
    qfree(v3, a2);
    v2[25] = 0;
    v2[27] = 0;
  }
}
