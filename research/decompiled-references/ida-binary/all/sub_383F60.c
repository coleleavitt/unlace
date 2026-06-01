__int64 sub_383F60()
{
  __int64 result; // rax
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rdx

  result = xmmword_8CF2A8;
  v1 = (__int64 *)qword_8CF2A0;
  v2 = (__int64 *)(qword_8CF2A0 + 8 * xmmword_8CF2A8);
  if ( (__int64 *)qword_8CF2A0 != v2 )
  {
    do
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 48);
        if ( v4 )
        {
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            result = (***(__int64 (__fastcall ****)(_QWORD))(v3 + 48))(*(_QWORD *)(v3 + 48));
        }
        *(_QWORD *)(v3 + 48) = 0;
      }
      ++v1;
    }
    while ( v2 != v1 );
  }
  return result;
}
