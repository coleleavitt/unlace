__int64 __fastcall sub_180DB0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rdi

  result = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = *(_QWORD *)(result + 32 * i);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          result = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}

