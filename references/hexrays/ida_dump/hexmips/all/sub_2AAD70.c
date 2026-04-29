__int64 (__fastcall **__fastcall sub_2AAD70(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rax

  result = &off_4C22D8;
  *a1 = &off_4C22D8;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(48 * i + v3);
        v7 = v6[2];
        *v6 = off_4C1AB0;
        if ( v7 )
        {
          v6[3] = 0;
          qfree(v7);
        }
        v3 = a1[5];
      }
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
