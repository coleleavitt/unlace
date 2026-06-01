__int64 __fastcall bookmarks_dirtree_widget_t__::vfunc_2(
        __m128i *this,
        int a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax

  result = ida_dirtree_widget_t__::vfunc_2();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_198540(
          this,
          **(_DWORD **)(a7 + 8),
          *(_QWORD *)(a7 + 16),
          a3,
          a4,
          a5,
          **(_QWORD **)(a7 + 24),
          **(_DWORD **)(a7 + 32));
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a7 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
