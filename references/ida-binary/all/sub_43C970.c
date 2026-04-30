char __fastcall file_history_chooser_t__::vfunc_8(__int64 a1, const char *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  int v4; // r12d

  v2 = sub_426230(a1, a2);
  LOBYTE(v3) = sub_4175A0((__int64)v2);
  if ( (_BYTE)v3 )
  {
    v4 = *(_DWORD *)(a1 + 312);
    if ( v4 == *(_DWORD *)(a1 + 280) )
      v4 = -3;
    v3 = sub_4180E0((__int64)v2);
    *(_DWORD *)(v3 + 8) = v4;
  }
  return v3;
}
