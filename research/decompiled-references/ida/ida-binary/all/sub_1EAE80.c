bool __fastcall sub_1EAE80(void *a1)
{
  _BOOL8 v2; // rdi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  set_ida_state(3);
  if ( dword_8BA4FC == -1 )
    dword_8BA4FC = (unsigned __int8)qgetenv("IDA", 0);
  v2 = 0;
  if ( (unsigned __int8)is_auto_enabled() )
    v2 = dword_8BA4FC != 0;
  enable_auto(v2);
  if ( !a1 )
    a1 = &unk_5C2F25;
  return (unsigned int)callui(80, (_DWORD)a1, (unsigned int)&callui, v3, v4, v5) == 0;
}
