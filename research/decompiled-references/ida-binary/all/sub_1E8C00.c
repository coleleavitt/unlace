__int64 __fastcall sub_1E8C00(_QWORD *a1, const char *a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = a1[3];
  if ( v2 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v6 = (_QWORD *)(v4 + 80 * i);
        v7 = v6[4];
        if ( v7 )
        {
          v6[5] = 0;
          qfree(v7, a2);
        }
        v8 = v6[1];
        if ( v8 )
        {
          v6[2] = 0;
          qfree(v8, a2);
        }
        v4 = a1[2];
      }
      a1[3] = 0;
      qfree(v4, a2);
      a1[2] = 0;
      a1[4] = 0;
    }
    return sub_459B60(a1);
  }
  return result;
}
