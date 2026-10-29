__int64 __fastcall worklists_dialog_t__::vfunc_2(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v8; // al

  v5 = ActionsInspectorDialog__::vfunc_2();
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      if ( a2 != 7 )
        return v6;
      if ( !v5 )
        **(_QWORD **)a4 = 0;
    }
    else if ( !v5 )
    {
      v8 = sub_443480(a1, *(_QWORD *)(a4 + 8));
      if ( *(_QWORD *)a4 )
        **(_BYTE **)a4 = v8;
    }
    --v6;
  }
  return v6;
}
