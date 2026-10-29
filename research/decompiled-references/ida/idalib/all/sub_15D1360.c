__int64 __fastcall sub_15D1360(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 16);
  v3 = &v2[*(unsigned int *)(a1 + 24)];
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 48LL))(*v2, a2);
    if ( result )
      break;
    if ( v3 == ++v2 )
      return 0;
  }
  return result;
}
