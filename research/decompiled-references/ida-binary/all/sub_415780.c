__int64 __fastcall vault_with_events_t__::vfunc_21(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 (*v6)(); // rcx
  char v8; // al
  unsigned __int8 v9; // [rsp+Ch] [rbp-Ch]

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 )
  {
    v5 = *v4;
    v6 = *(__int64 (**)())(*v4 + 480);
    if ( v6 == sub_178B60 )
      return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 136))(v4, a2, a3);
    v9 = a3;
    v8 = v6();
    a3 = v9;
    if ( !v8 )
    {
      v4 = *(__int64 **)(a1 + 8);
      v5 = *v4;
      return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 136))(v4, a2, a3);
    }
  }
  return 52;
}
