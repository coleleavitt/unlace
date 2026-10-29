__int64 __fastcall sub_7BD9E0(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rdi

  if ( (unsigned int)sub_7B6F20(a1) != 3 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v3 & 4) != 0 )
  {
    v4 = *(_QWORD *)v4;
    v5 = *(_BYTE *)(v4 + 8) & 0x7F;
    if ( v5 == 17 )
      return 0;
  }
  else
  {
    v5 = *(_BYTE *)(v4 + 8) & 0x7F;
    if ( v5 == 17 )
      return 0;
  }
  if ( v5 == 18 )
  {
    v6 = v4 - 48;
    return sub_7BD6A0(v6, *(_QWORD *)(a1 + 40), a2);
  }
  v6 = *(_QWORD *)(v4 + 40);
  if ( v6 )
    return sub_7BD6A0(v6, *(_QWORD *)(a1 + 40), a2);
  return 0;
}

