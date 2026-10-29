__int64 __fastcall diff_vault_local_action_t__::vfunc_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rax

  result = 0;
  if ( *(_QWORD *)(a2 + 8) == 1
    && *(_DWORD *)(*(_QWORD *)a2 + 28LL) != -1
    && (*(_BYTE *)(*(_QWORD *)a2 + 24LL) & 8) != 0 )
  {
    v3 = sub_426230(a1, (const char *)a2);
    return sub_417670((__int64)v3, 0, 1, *(_QWORD *)a2, 0, nullptr, 0, 1);
  }
  return result;
}
