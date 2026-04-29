__int64 __fastcall sub_B970(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 832);
  if ( v2 )
    return v2(a2);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_B9A0();
}
