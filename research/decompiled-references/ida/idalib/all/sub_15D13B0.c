__int64 __fastcall sub_15D13B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 16);
  v3 = &v2[*(unsigned int *)(a1 + 24)];
  if ( v2 == v3 )
    return 2;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 120LL))(*v2, a2);
    if ( (result & 0xFFFFFFFD) != 0 )
      break;
    if ( v3 == ++v2 )
      return 2;
  }
  return result;
}
