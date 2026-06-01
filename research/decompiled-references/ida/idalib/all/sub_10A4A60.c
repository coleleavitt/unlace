__int64 __fastcall sub_10A4A60(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // [rsp+0h] [rbp-14h]
  __int64 v6; // [rsp+0h] [rbp-14h]

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 576) + 8LL) >> 6;
  if ( *(_QWORD *)(a2 + 176) )
  {
    v3 = *(_DWORD *)(a2 + 180);
    if ( *(_DWORD *)(a2 + 176) >= v2 )
      v2 = *(_DWORD *)(a2 + 176);
    if ( v3 && v3 < v2 )
      v3 = v2;
    HIDWORD(v6) = v3;
    if ( !v2 )
      v2 = 1;
    LODWORD(v6) = v2;
    return v6;
  }
  else if ( *(_DWORD *)(*(_QWORD *)(a1 + 576) + 8LL) <= 0x3Fu )
  {
    return v5;
  }
  else
  {
    return v2 | 0x40000000000LL;
  }
}
