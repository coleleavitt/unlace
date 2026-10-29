__int64 __fastcall sub_5C90D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = a1[15];
  if ( !v2 )
  {
    v2 = a1[16];
    if ( !v2 )
      v2 = a1[13];
  }
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 0xF000) != 0 && (*(_QWORD *)(v2 + 40) & 0xF000LL) != 0x7000 )
    return set_qerrno(66, a2);
  BYTE1(v3) |= 0x70u;
  *(_QWORD *)(v2 + 40) = v3;
  return 0;
}

