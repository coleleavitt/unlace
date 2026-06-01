__int64 __fastcall sub_5C73A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v3; // al

  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_BYTE *)(v2 + 186);
  if ( (v3 & 0x3F) != 0 )
    return set_qerrno(66, a2);
  *(_BYTE *)(v2 + 186) = v3 | 0x32;
  return 0;
}

