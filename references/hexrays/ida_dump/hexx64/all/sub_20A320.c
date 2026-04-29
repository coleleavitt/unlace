__int64 __fastcall sub_20A320(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 48;
  *(_QWORD *)(v1 - 48) = &unk_4EC100;
  return cleanup_argloc(v1);
}
