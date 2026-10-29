__int64 __fastcall sub_5E30C0(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_BYTE *)(v1 + 186);
  if ( (v2 & 0x3F) != 0 )
    return set_qerrno(66);
  *(_BYTE *)(v1 + 186) = v2 | 0x32;
  return 0;
}
