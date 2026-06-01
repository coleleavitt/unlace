__int16 __fastcall actions_inspector_chooser_widget_t__::vfunc_37(__int64 a1, int a2)
{
  __int16 result; // ax
  __int64 v3; // rdx

  result = 0;
  if ( a2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 2288);
    if ( a2 < *(_DWORD *)(v3 + 48) )
    {
      if ( *(_QWORD *)(v3 + 56) )
        return 0;
    }
  }
  return result;
}
