__int64 __fastcall patch_fixup_value(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 fixup_handler; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax

  v3 = *(_QWORD *)(qword_2CCB598 + 1672);
  fixup_handler = get_fixup_handler(*(_WORD *)a2);
  if ( !fixup_handler )
    return 0;
  v5 = fixup_handler;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(fixup_handler + 48);
  if ( v6 )
    return v6(v5, a1, a2);
  else
    return sub_41A4A0(*(_QWORD *)(v3 + 24), v5, a1, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
}
