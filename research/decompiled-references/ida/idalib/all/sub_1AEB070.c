char __fastcall sub_1AEB070(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int8 v4; // dl
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx

  if ( !*(_DWORD *)(a2 + 24) )
    return 0;
  v3 = **(_QWORD **)(a2 + 16);
  if ( !v3 )
    return 0;
  v4 = *(_BYTE *)(v3 + 28) & 0x7F;
  v5 = v4;
  if ( ((v4 + 52) & 0x7Fu) <= 1 || (unsigned int)v4 - 53 <= 1 )
  {
    v6 = sub_B72ED0(v3);
    v3 = v6;
    if ( !v6 )
      return 0;
    v4 = *(_BYTE *)(v6 + 28) & 0x7F;
    v5 = v4;
  }
  if ( v4 != 40 && (unsigned int)(v5 - 34) > 5 )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(v7 + 3032);
  if ( !v8 )
    v8 = *(_QWORD *)(v7 + 544);
  return sub_17A3270(v7, v3, v8, *(__int64 **)(v7 + 608), 0);
}
