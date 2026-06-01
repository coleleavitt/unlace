__int64 __fastcall sub_2777F0(_DWORD *a1, __int64 a2)
{
  int v2; // ebp
  __int64 result; // rax

  *a1 = -1;
  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 8);
    result = get_dbctx_qty();
    if ( result )
    {
      result = get_dbctx_id();
      *a1 = result;
      if ( v2 >= 0 && v2 != (_DWORD)result )
        return switch_dbctx(v2);
    }
  }
  else
  {
    result = get_dbctx_qty();
    if ( result )
    {
      result = get_dbctx_id();
      *a1 = result;
    }
  }
  return result;
}
