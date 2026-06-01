__int64 __fastcall sub_5C8EB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = a1[15];
  if ( !v2 )
  {
    v2 = a1[16];
    if ( !v2 )
      v2 = a1[13];
  }
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 0xB000) != 0 )
    return set_qerrno(66, a2);
  BYTE1(v3) |= 0x40u;
  *(_QWORD *)(v2 + 40) = v3;
  return 0;
}

