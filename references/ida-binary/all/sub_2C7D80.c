__int64 __fastcall edit_apply_ah_t__::vfunc_0(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  if ( (v2 == 28 || v2 == 34) && *(_QWORD *)a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  else
    return 0;
}
