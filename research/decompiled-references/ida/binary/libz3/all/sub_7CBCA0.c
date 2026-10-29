__int64 __fastcall sub_7CBCA0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 *i; // rbp
  __int64 v4; // rdi

  v1 = *(__int64 **)(a1 + 2392);
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    for ( i = &v1[result]; i != v1; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4) )
      v4 = *v1++;
  }
  return result;
}

