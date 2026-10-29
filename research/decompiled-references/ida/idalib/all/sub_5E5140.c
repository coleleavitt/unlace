__int64 __fastcall sub_5E5140(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ecx

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
  {
    v1 = *(_QWORD *)(a1 + 136);
    if ( !v1 )
      v1 = *(_QWORD *)(a1 + 112);
  }
  v2 = *(_QWORD *)(v1 + 40);
  if ( (v2 & 0xF000) != 0xC000 && (v2 & 0xF000) != 0 )
    return set_qerrno(66);
  v3 = *(_DWORD *)(a1 + 88);
  BYTE1(v2) |= 0xC0u;
  *(_QWORD *)(v1 + 40) = v2;
  if ( v3 )
    *(_DWORD *)(v1 + 180) = v3;
  return 0;
}
