__int64 __fastcall sub_10D87B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 + 8LL * *(unsigned int *)(a1 + 24);
  if ( v1 == v2 )
    return 1;
  while ( 1 )
  {
    result = sub_12CCCB0(*(unsigned int *)(*(_QWORD *)v1 + 12LL));
    if ( !(_BYTE)result )
      break;
    v1 += 8;
    if ( v2 == v1 )
      return 1;
  }
  return result;
}
