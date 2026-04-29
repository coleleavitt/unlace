__int64 __fastcall sub_218720(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 j; // rbx
  __int64 v14; // rdi

  v2 = a1 + 17;
  *(v2 - 17) = &off_4CC890;
  clear_tinfo_t(v2);
  cleanup_argloc(a1 + 15);
  v3 = a1[12];
  if ( v3 )
  {
    v4 = a1[13];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 32 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree(v3);
  }
  v8 = a1[8];
  if ( v8 )
  {
    a1[9] = 0;
    qfree(v8);
  }
  result = qfree(a1[6]);
  v10 = a1[3];
  if ( v10 )
  {
    v11 = a1[4];
    if ( v11 )
    {
      v12 = 0;
      for ( j = 0; j != v11; ++j )
      {
        v14 = *(_QWORD *)(v10 + v12);
        if ( v14 )
        {
          *(_QWORD *)(v10 + v12 + 8) = 0;
          qfree(v14);
          v10 = a1[3];
        }
        v12 += 56;
      }
    }
    a1[4] = 0;
    return qfree(v10);
  }
  return result;
}
