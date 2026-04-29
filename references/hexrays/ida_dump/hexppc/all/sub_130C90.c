__int64 (__fastcall **__fastcall sub_130C90(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  result = off_4CAB38;
  *a1 = off_4CAB38;
  v3 = a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8);
        }
        v3 = a1[9];
      }
    }
    a1[10] = 0;
    result = (__int64 (__fastcall **)())qfree(v3);
  }
  v9 = a1[2];
  if ( v9 )
  {
    a1[3] = 0;
    return (__int64 (__fastcall **)())qfree(v9);
  }
  return result;
}
