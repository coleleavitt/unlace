unsigned __int64 __fastcall ida_app_t__::vfunc_12(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // [rsp+Ch] [rbp-Ch]

  if ( a3 && *(_BYTE *)(a2 + 12) )
  {
    v4 = a3;
    cancel_undo_point(*(unsigned int *)(a2 + 8));
    a3 = v4;
  }
  sub_52F740(a1, a2, a3);
  return sub_17E220();
}
