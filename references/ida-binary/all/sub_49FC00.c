__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_33(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 2288);
  result = 0;
  v3 = *(_QWORD *)(v1 + 56);
  if ( v3 )
  {
    v4 = *(int *)(v1 + 48);
    if ( v4 )
    {
      while ( (*(_BYTE *)(v3 + 4 * result + 2) & 0x20) == 0 )
      {
        if ( v4 == ++result )
          return 0;
      }
    }
  }
  return result;
}
