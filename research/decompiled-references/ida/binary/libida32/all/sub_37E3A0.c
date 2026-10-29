__int64 __fastcall sub_37E3A0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdi

  v1 = a1[1] - 1LL;
  if ( v1 >= 0 )
  {
    do
    {
      result = *a1 + 32 * v1;
      v4 = *(_QWORD *)(result + 16);
      if ( v4 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
    while ( v1-- != 0 );
  }
  return result;
}

