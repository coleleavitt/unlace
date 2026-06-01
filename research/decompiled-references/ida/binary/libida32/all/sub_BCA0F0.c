__int64 __fastcall sub_BCA0F0(_QWORD *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // r12
  __int64 result; // rax

  v2 = *(unsigned int **)(a2 + 24);
  if ( !v2 )
    return 1;
  v3 = (__int64 *)(v2 + 4);
  v4 = (__int64)&v2[2 * *v2 + 4];
  if ( (unsigned int *)v4 == v2 + 4 )
    return 1;
  while ( 1 )
  {
    result = sub_BC8BF0(a1, *v3);
    if ( !(_BYTE)result )
      break;
    if ( (__int64 *)v4 == ++v3 )
      return 1;
  }
  return result;
}

