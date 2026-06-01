_QWORD *__fastcall sub_ACE130(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v3 = sub_ACDB80(
         a3,
         a3 + 88,
         a2,
         *(_DWORD *)(a1 + 16),
         *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16)) + 80));
  v4 = *(_QWORD *)(a1 + 24);
  v8 = v4;
  do
  {
    v5 = v3;
    v3 = *(_QWORD *)(v3 + 8);
  }
  while ( v3 );
  result = *(_QWORD **)(v5 + 48);
  if ( !result )
    return (_QWORD *)sub_AC8490((_QWORD *)(v5 + 48), &v8);
  v7 = &result[*((unsigned int *)result - 1)];
  if ( result == v7 )
    return (_QWORD *)sub_AC8490((_QWORD *)(v5 + 48), &v8);
  while ( v4 != *result )
  {
    if ( v7 == ++result )
      return (_QWORD *)sub_AC8490((_QWORD *)(v5 + 48), &v8);
  }
  return result;
}

