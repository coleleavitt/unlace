__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_11(__int64 a1)
{
  __int64 result; // rax

  sub_4DEC50(a1);
  result = *(_QWORD *)(a1 + 2280);
  *(_BYTE *)(a1 + 1920) = 0;
  *(_QWORD *)(a1 + 1688) = -1;
  if ( result )
    *(_DWORD *)(result + 216) = 15;
  return result;
}
