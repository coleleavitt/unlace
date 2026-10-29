__int64 __fastcall vault_with_events_t__::vfunc_53(__int64 a1, unsigned __int8 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx

  v3 = *(__int64 **)(a1 + 8);
  if ( v3 )
  {
    v4 = *v3;
    v5 = *(__int64 (**)())(*v3 + 480);
    if ( v5 == sub_178B60 )
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v4 + 408))(v3, a2);
    if ( !(unsigned __int8)v5() )
    {
      v3 = *(__int64 **)(a1 + 8);
      v4 = *v3;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v4 + 408))(v3, a2);
    }
  }
  return 52;
}
