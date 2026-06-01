__int64 __fastcall sub_B8BFE0(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned __int64 v2; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 34 <= 5 )
  {
    v2 = sub_B77A30(a1);
    goto LABEL_3;
  }
  if ( (unsigned int)v1 - 59 <= 2 )
  {
    v2 = sub_B97230();
    if ( v2 )
      return *(_QWORD *)(v2 + 56);
LABEL_7:
    v1 = *(_BYTE *)(a1 + 28) & 0x7F;
    goto LABEL_8;
  }
  if ( (unsigned int)v1 - 40 <= 6 )
  {
    v2 = sub_B73BE0(a1);
LABEL_3:
    if ( v2 )
      return *(_QWORD *)(v2 + 56);
    goto LABEL_7;
  }
  if ( v1 == 65 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    if ( v2 )
      return *(_QWORD *)(v2 + 56);
    return 0;
  }
LABEL_8:
  if ( v1 == 61 )
    return *(_QWORD *)(a1 + 184);
  if ( v1 == 42 )
    return *(_QWORD *)(a1 + 144);
  return 0;
}
