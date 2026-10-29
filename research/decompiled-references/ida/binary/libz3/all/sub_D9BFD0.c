__int64 __fastcall sub_D9BFD0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v4; // rsi

  v1 = *(__int64 **)(a1 + 48);
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    for ( i = &v1[result]; i != v1; result = sub_E5EBF0(*(_QWORD *)(a1 + 112), v4) )
      v4 = *v1++;
  }
  return result;
}

