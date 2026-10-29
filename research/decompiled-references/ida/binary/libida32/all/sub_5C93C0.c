__int64 __fastcall sub_5C93C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx

  v2 = *(_QWORD *)(a1 + 120);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    if ( !v2 )
      v2 = *(_QWORD *)(a1 + 104);
  }
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 0xF000) != 0xC000 && (v3 & 0xF000) != 0 )
    return set_qerrno(66, a2);
  v4 = *(_DWORD *)(a1 + 80);
  BYTE1(v3) |= 0xC0u;
  *(_QWORD *)(v2 + 40) = v3;
  if ( v4 )
    *(_DWORD *)(v2 + 180) = v4;
  return 0;
}

