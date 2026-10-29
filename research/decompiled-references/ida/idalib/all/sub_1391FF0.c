__int64 __fastcall sub_1391FF0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 result; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx

  v2 = *(_QWORD **)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 24);
  if ( v2 == v3 )
    return 1;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 24LL))(*v2, a2);
    v5 = v2 + 1;
    if ( !(_BYTE)result )
      break;
    ++v2;
    if ( v3 == v5 )
      return 1;
  }
  v6 = v2 + 2;
  if ( v3 != v5 )
  {
    while ( v3 != v6 && v3 != v6 + 1 )
      v6 += 2;
  }
  return result;
}
