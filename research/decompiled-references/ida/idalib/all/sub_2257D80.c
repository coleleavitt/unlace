__int64 __fastcall sub_2257D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 24);
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 - 8) + 96LL))(*(_QWORD *)(v3 - 8), a2);
    if ( (_BYTE)result )
      break;
    v3 -= 8;
    if ( v2 == v3 )
      return 0;
  }
  return result;
}
