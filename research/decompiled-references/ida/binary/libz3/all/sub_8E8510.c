__int64 __fastcall sub_8E8510(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8688);
  if ( !v1 )
    return 0;
  v2 = &v1[*((unsigned int *)v1 - 1)];
  if ( v1 == v2 )
    return 0;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 176LL))(*v1);
    if ( (_BYTE)result )
      break;
    if ( v2 == ++v1 )
      return 0;
  }
  return result;
}

