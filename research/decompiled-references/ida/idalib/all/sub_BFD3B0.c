bool __fastcall sub_BFD3B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  const char *v4; // rax

  v2 = sub_BFBC70(*(_QWORD *)(a1 + 32));
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 > 5 )
    return 0;
  v3 = sub_B75A50(v2, 0);
  if ( !v3 )
    return 0;
  v4 = (const char *)sub_FBD4B0(*(_QWORD *)(a2 + 17520), v3);
  return strchr(v4, 117) != nullptr;
}
