__int64 __fastcall sub_1C2C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v9; // [rsp+8h] [rbp-60h]

  v4 = qalloc_or_throw(24, a2, a3, a4);
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  v9 = (__int64 *)v4;
  for_all_arglocs();
  if ( v9 )
  {
    v5 = *v9;
    if ( *v9 )
    {
      v6 = v9[1];
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          cleanup_argloc();
          v5 = *v9;
        }
      }
      v9[1] = 0;
      qfree(v5);
    }
    qfree((__int64)v9);
  }
  return 0;
}
