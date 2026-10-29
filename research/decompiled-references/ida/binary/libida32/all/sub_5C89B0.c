__int64 __fastcall sub_5C89B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 728) |= 1u;
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    if ( !v2 )
      v2 = *(_QWORD *)(a1 + 104);
  }
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 0x800800000LL) != 0 )
    return set_qerrno(66, a2);
  *(_QWORD *)(v2 + 40) = v3 | 0x800800000LL;
  return 0;
}

