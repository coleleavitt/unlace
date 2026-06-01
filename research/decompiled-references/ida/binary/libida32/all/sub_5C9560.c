__int64 __fastcall sub_5C9560(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = *(_QWORD *)(a1 + 120);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    if ( !v2 )
      v2 = *(_QWORD *)(a1 + 104);
  }
  if ( (*(_BYTE *)(v2 + 41) & 0xE0) != 0 )
    return set_qerrno(66, a2);
  if ( !(unsigned __int8)sub_5ED360(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 1480LL)) )
    (*(void (__fastcall **)(const char *))(a1 + 264))("ignored: __cdecl is not supported by the current architecture\n");
  *(_QWORD *)(v2 + 40) |= 0x1000uLL;
  return 0;
}

