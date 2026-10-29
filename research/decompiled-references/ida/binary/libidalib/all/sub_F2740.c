__int64 __fastcall sub_F2740(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  *a1 = -1;
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    result = get_dbctx_qty();
    if ( result )
    {
      result = get_dbctx_id();
      *a1 = result;
      if ( (int)v2 >= 0 && (_DWORD)v2 != (_DWORD)result )
        return switch_dbctx();
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

