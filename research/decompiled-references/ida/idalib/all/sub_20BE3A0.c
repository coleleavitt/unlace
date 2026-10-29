bool __fastcall sub_20BE3A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rax

  v1 = sub_20BE200(a1, "SemanticInterposition", 0x15u);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(v1 + 128);
  v3 = *(_QWORD **)(v2 + 24);
  if ( *(_DWORD *)(v2 + 32) > 0x40u )
    v3 = (_QWORD *)*v3;
  return v3 != nullptr;
}
