__int64 __fastcall tif_highlighter_helper_t__::vfunc_3(__int64 a1, _DWORD *a2, __int64 a3)
{
  const char *v4; // rsi
  int named_type; // edx
  __int64 result; // rax

  v4 = &s1;
  if ( *(_QWORD *)(a3 + 8) )
    v4 = *(const char **)a3;
  named_type = get_named_type(0, v4, 1, 0, 0, 0, 0, 0, 0);
  result = 0;
  if ( named_type > 0 )
  {
    *a2 = 8;
    return 1;
  }
  return result;
}
