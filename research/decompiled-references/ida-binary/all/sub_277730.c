__int64 __fastcall sub_277730(_DWORD *a1, int a2)
{
  __int64 result; // rax

  *a1 = -1;
  result = get_dbctx_qty();
  if ( result )
  {
    result = get_dbctx_id();
    *a1 = result;
    if ( a2 >= 0 && a2 != (_DWORD)result )
      return switch_dbctx(a2);
  }
  return result;
}
