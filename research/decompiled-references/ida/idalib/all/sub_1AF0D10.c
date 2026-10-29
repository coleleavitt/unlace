char __fastcall sub_1AF0D10(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
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
  if ( (unsigned int)v4 - 53 <= 1 || ((v4 + 52) & 0x7Fu) <= 1 )
  {
    v6 = sub_B72ED0(v3);
    v3 = v6;
    if ( !v6 )
      return 0;
    v5 = *(_BYTE *)(v6 + 28) & 0x7F;
  }
  if ( (unsigned int)(v5 - 40) > 6 || sub_9B48E0(v3) )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(v7 + 3032);
  if ( !v8 )
    v8 = *(_QWORD *)(v7 + 544);
  return sub_17A3270(v7, v3, v8, *(__int64 **)(v7 + 608), 0);
}
