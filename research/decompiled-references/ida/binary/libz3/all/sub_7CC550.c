__int64 __fastcall sub_7CC550(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 2392);
  if ( !v2 )
    return 1;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 == v2 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 312LL))(*v2, a2);
    if ( !(_BYTE)result )
      break;
    if ( v3 == ++v2 )
      return 1;
  }
  return result;
}

