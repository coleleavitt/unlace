__int64 __fastcall sub_227E70(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rbx
  char v6; // al
  _DWORD *v7; // [rsp+8h] [rbp-18h]
  __int64 v8; // [rsp+10h] [rbp-10h]

  if ( (*(_BYTE *)(a1 + 5) & 0x10) == 0 )
    return 0;
  v5 = *(_QWORD *)(a1 + 944);
  if ( *(_QWORD *)(v5 + 8) == -1 )
  {
    v8 = a4;
    v7 = a3;
    v6 = sub_2193A0(*(__int64 **)(a1 + 944));
    a3 = v7;
    a4 = v8;
    if ( !v6 )
      return 0;
  }
  if ( !*(_QWORD *)(v5 + 16) )
    return 0;
  if ( a2 )
    *a2 = *(_QWORD *)(v5 + 8);
  if ( a3 )
    *a3 = *(_QWORD *)(v5 + 16);
  if ( a4 )
    copy_tinfo_t(a4, v5 + 32);
  return 1;
}
