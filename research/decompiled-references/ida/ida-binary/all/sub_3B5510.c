__int64 __fastcall sub_3B5510(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  int named_type; // eax
  bool v5; // zf
  __int64 result; // rax
  __int64 v7; // r12
  bool v8; // cl

  v3 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  named_type = get_named_type(a1, v3, 3, 0, 0, 0, 0, 0, 0);
  if ( named_type )
  {
    v5 = named_type == 1;
    result = 0;
    if ( v5 )
      return a1;
  }
  else if ( *(int *)(a1 + 16) <= 0 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    do
    {
      result = sub_3B5510(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7), a2);
      v8 = *(_DWORD *)(a1 + 16) > (int)v7++ + 1;
    }
    while ( result == 0 && v8 );
  }
  return result;
}
