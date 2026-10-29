bool __fastcall sub_80F8E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 v4; // rax

  v2 = sub_80F4C0(*(_QWORD *)(*(unsigned __int8 *)(a1 + 3) + a1));
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 32 > 5 )
    return 0;
  v3 = sub_77F000(v2, 0);
  if ( !v3 )
    return 0;
  v4 = sub_C63970(*(_QWORD *)(a2 + 17360), v3);
  return strchr(*(const char **)(v4 + 24), 117) != nullptr;
}

