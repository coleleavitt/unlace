void __fastcall sub_ADFE70(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // rax

  v2 = *(_BYTE *)(a2 + 68);
  if ( (v2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 72);
    if ( (v2 & 0xC) != 0xC && (v2 & 0xC) != 0 )
      v3 = *(_QWORD *)(v3 + 8);
    sub_ADE7F0(a1 + 8, 0, 0, v3, a1);
  }
  v4 = sub_B780B0(a2);
  if ( v4 )
    sub_ADE7F0(a1 + 8, 0, 0, v4, a1);
}
