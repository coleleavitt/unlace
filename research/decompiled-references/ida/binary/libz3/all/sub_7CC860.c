__int64 __fastcall sub_7CC860(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // r13
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 2392);
  if ( !v3 )
    return 1;
  v5 = &v3[*((unsigned int *)v3 - 1)];
  if ( v5 == v3 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v3 + 368LL))(*v3, a2, a3);
    if ( !(_BYTE)result )
      break;
    if ( v5 == ++v3 )
      return 1;
  }
  return result;
}

