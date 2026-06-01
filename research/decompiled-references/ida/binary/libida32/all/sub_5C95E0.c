__int64 __fastcall sub_5C95E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 120);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    if ( !v2 )
      v2 = *(_QWORD *)(a1 + 104);
  }
  if ( (*(_BYTE *)(v2 + 186) & 0x3F) != 0xD )
    return set_qerrno(10, a2);
  v3 = *(int *)(a1 + 68);
  if ( (int)v3 < 0 )
    return set_qerrno(7, a2);
  *(_QWORD *)(v2 + 96) = v3;
  v4 = *(_QWORD *)(a1 + 120);
  if ( !v4 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 104);
  }
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x400000000LL) != 0 )
    return set_qerrno(66, a2);
  *(_QWORD *)(v4 + 40) = v5 | 0x400000000LL;
  return 0;
}

