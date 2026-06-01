__int64 __fastcall sub_63CB90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 result; // rax

  v6 = *(__int64 **)(a1 + 24);
  if ( !v6 )
    return 1;
  v7 = &v6[*((unsigned int *)v6 - 1)];
  if ( v7 == v6 )
    return 1;
  while ( 1 )
  {
    result = sub_62FF90(*(_QWORD *)(a1 + 8), *v6, a3, a4, a5, a6);
    if ( !(_BYTE)result )
      break;
    if ( v7 == ++v6 )
      return 1;
  }
  return result;
}

