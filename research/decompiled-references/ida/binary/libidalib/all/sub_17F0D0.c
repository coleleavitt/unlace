__int64 __fastcall sub_17F0D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rdi

  *a1 = &off_235CB0;
  v2 = a1[4];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  result = a1[1];
  if ( result )
  {
    v4 = a1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_QWORD *)(result + 32 * i);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          result = a1[1];
        }
      }
    }
    a1[2] = 0;
    return qfree();
  }
  return result;
}

