__int64 __fastcall sub_414430(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax

  v2 = (_QWORD *)operator new(8u);
  *v2 = vault_messenger_t___vtable;
  v3 = sub_426230(8, a2);
  return set_filesys_callbacks(a1, v2, *(_QWORD *)(v3 + 32) + 336LL);
}
