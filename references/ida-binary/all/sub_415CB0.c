__int64 __fastcall vault_with_events_t__::vfunc_9(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 (*v7)(); // r8
  char v9; // al
  __int64 v10; // [rsp+10h] [rbp-18h]
  unsigned __int8 v11; // [rsp+1Ch] [rbp-Ch]

  v5 = *(__int64 **)(a1 + 8);
  if ( v5 )
  {
    v6 = *v5;
    v7 = *(__int64 (**)())(*v5 + 480);
    if ( v7 == sub_178B60 )
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v6 + 40))(v5, a2, a3, a4);
    v11 = a4;
    v10 = a3;
    v9 = v7();
    a3 = v10;
    a4 = v11;
    if ( !v9 )
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v6 + 40))(v5, a2, a3, a4);
    }
  }
  return 52;
}
