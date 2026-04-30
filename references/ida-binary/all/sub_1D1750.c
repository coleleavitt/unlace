__int64 __fastcall sub_1D1750(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 i; // rbp
  _QWORD *v6; // rbx
  void *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 result; // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        v7 = (void *)*v6;
        if ( *v6 )
        {
          jvalue_t_clear(*v6);
          a2 = (const char *)&off_18;
          operator delete(v7, 0x18u);
        }
        v8 = v6[5];
        if ( v8 )
        {
          v6[6] = 0;
          qfree(v8, a2);
        }
        v9 = v6[1];
        if ( v9 )
        {
          v6[2] = 0;
          qfree(v9, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
