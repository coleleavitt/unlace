bool __fastcall sub_36B4D0(int a1, __int64 a2)
{
  void (__fastcall __noreturn *v2)(); // rdx

  v2 = callui;
  if ( !a1 )
    callui();
  *(_DWORD *)(a2 + 24) = a1 - 1;
  return ((unsigned __int8 (__fastcall *)(__int64))v2)(1065) && *(_DWORD *)(a2 + 24) == a1;
}

