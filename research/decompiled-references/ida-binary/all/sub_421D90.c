__int64 __fastcall sub_421D90(int a1, void (__fastcall ***a2)(_QWORD, const char *, __int64 *))
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi

  v3 = (__int64 (__fastcall *)(__int64))(*a2)[9];
  if ( v3 == form_actions_impl_t__::vfunc_9 )
    v4 = (__int64)a2[4];
  else
    v4 = v3((__int64)a2);
  if ( a1 != -1 )
  {
    if ( (unsigned int)(a1 - 1) <= 3 )
      sub_421CD0(v4, a2);
    return 1;
  }
  if ( !*(_BYTE *)(v4 + 1) )
    return 1;
  (*a2)[3](a2, (_BYTE *)&dword_0 + 1, nullptr);
  (*a2)[3](a2, (_BYTE *)&dword_0 + 2, nullptr);
  (*a2)[3](a2, &byte_4, nullptr);
  return 1;
}
