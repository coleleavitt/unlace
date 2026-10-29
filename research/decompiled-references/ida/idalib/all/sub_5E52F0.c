__int64 __fastcall sub_5E52F0(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
  {
    v1 = *(_QWORD *)(a1 + 136);
    if ( !v1 )
      v1 = *(_QWORD *)(a1 + 112);
  }
  if ( (*(_BYTE *)(v1 + 41) & 0xE0) != 0 )
    return set_qerrno(66);
  if ( !(unsigned __int8)sub_609220(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL)) )
    (*(void (__fastcall **)(const char *))(a1 + 272))("ignored: __cdecl is not supported by the current architecture\n");
  *(_QWORD *)(v1 + 40) |= 0x1000uLL;
  return 0;
}
