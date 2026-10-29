__int64 __fastcall sub_7CC3D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 *i; // r13
  __int64 v7; // rdi

  v3 = *(__int64 **)(a1 + 2392);
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    for ( i = &v3[result];
          i != v3;
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 264LL))(v7, a2, a3) )
    {
      v7 = *v3++;
    }
  }
  return result;
}

