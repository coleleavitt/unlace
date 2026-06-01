bool __fastcall sub_1E25C0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 custom_data_format; // rax
  __int64 v4; // rbp
  bool result; // al

  if ( a2 < 0 || a2 >= (unsigned __int64)xmmword_8CC398 )
    return 0;
  v2 = qword_8CC390 + 56LL * a2;
  if ( !v2 )
    return 0;
  if ( *(_DWORD *)(v2 + 40) == -1 )
    return 0;
  custom_data_format = get_custom_data_format();
  if ( !custom_data_format )
    return 0;
  v4 = *(_QWORD *)(custom_data_format + 48);
  result = 1;
  if ( v4 )
    return v4 == get_dtype_size(*(unsigned __int8 *)(v2 + 34));
  return result;
}
