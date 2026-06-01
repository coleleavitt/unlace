__int64 __fastcall sub_A6E5B0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rbx
  __int64 *i; // rbp
  __int64 v5; // rdi

  result = *(_QWORD *)(a1 + 8);
  v2 = *(__int64 **)(result + 8680);
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    for ( i = &v2[result]; i != v2; result = ((__int64 (__fastcall *)(__int64, __int64))result)(v5, a1) )
    {
      while ( 1 )
      {
        v5 = *v2;
        result = *(_QWORD *)(*(_QWORD *)*v2 + 328LL);
        if ( (void (*)())result != nullsub_529 )
          break;
        if ( i == ++v2 )
          return result;
      }
      ++v2;
    }
  }
  return result;
}

