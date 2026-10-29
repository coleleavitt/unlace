__int64 __fastcall sub_DDFB20(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // r13
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 40);
  if ( !v3 )
    return 1;
  v5 = &v3[*((unsigned int *)v3 - 1)];
  if ( v5 == v3 )
    return 1;
  while ( 1 )
  {
    result = sub_DDF7E0(*v3, a2, a3);
    if ( !(_BYTE)result )
      break;
    if ( v5 == ++v3 )
      return 1;
  }
  return result;
}

