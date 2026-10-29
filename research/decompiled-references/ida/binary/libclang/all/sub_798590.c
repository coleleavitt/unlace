__int64 __fastcall sub_798590(__int64 a1)
{
  int v1; // eax
  char v2; // dl
  __int64 v3; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v1 - 32) <= 5 )
  {
    v3 = sub_780E20(a1);
    goto LABEL_3;
  }
  if ( (unsigned int)(v1 - 57) <= 2 )
  {
    v3 = sub_7A47A0(a1);
    if ( v3 )
      return *(_QWORD *)(v3 + 56);
LABEL_7:
    v2 = *(_BYTE *)(a1 + 28) & 0x7F;
    goto LABEL_8;
  }
  if ( (unsigned int)(v1 - 38) <= 6 )
  {
    v3 = sub_77CBA0(a1);
LABEL_3:
    if ( v3 )
      return *(_QWORD *)(v3 + 56);
    goto LABEL_7;
  }
  if ( v2 == 63 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
      return *(_QWORD *)(v3 + 56);
    return 0;
  }
LABEL_8:
  if ( v2 == 59 )
    return *(_QWORD *)(a1 + 184);
  if ( v2 == 40 )
    return *(_QWORD *)(a1 + 144);
  return 0;
}

