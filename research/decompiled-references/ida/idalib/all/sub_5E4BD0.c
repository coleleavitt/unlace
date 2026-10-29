__int64 __fastcall sub_5E4BD0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = a1[16];
  if ( !v1 )
  {
    v1 = a1[17];
    if ( !v1 )
      v1 = a1[14];
  }
  v2 = *(_QWORD *)(v1 + 40);
  if ( (v2 & 0xF000) != 0 && (*(_QWORD *)(v1 + 40) & 0xF000LL) != 0x3000 )
    return set_qerrno(66);
  BYTE1(v2) |= 0x30u;
  *(_QWORD *)(v1 + 40) = v2;
  return 0;
}
