__int64 __fastcall sub_8EB8E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *i; // rbp

  v2 = *(_QWORD **)(a1 + 8680);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; ++v2 )
    {
      if ( *v2 )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 368LL))(*v2, a2);
    }
  }
  return result;
}

