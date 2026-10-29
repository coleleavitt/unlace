char __fastcall sub_12CC9C0(int a1)
{
  void *v1; // rdx
  void *v2; // rdx
  char result; // al
  void *v4; // rdx

  switch ( a1 )
  {
    case 9:
      return 0;
    case 12:
      v1 = &unk_2601460;
      return v1 == &unk_26014AC;
    case 22:
      v2 = &unk_2601460;
      return v2 == &unk_26014A8;
    case 25:
      v4 = &unk_2601460;
      return v4 == &unk_26014A4;
    case 27:
      return 0;
    case 33:
      v1 = &unk_2601470;
      return v1 == &unk_26014AC;
    case 36:
      v2 = &unk_2601470;
      return v2 == &unk_26014A8;
    case 45:
      v4 = &unk_2601470;
      return v4 == &unk_26014A4;
    case 46:
      return 0;
    case 53:
      v1 = &unk_2601480;
      return v1 == &unk_26014AC;
    case 54:
      v2 = &unk_2601480;
      return v2 == &unk_26014A8;
    case 55:
      v4 = &unk_2601480;
      return v4 == &unk_26014A4;
    case 56:
      return 0;
    case 57:
      v1 = &unk_2601490;
      return v1 == &unk_26014AC;
    case 58:
      v2 = &unk_2601490;
      return v2 == &unk_26014A8;
    case 60:
      v4 = &unk_2601490;
      return v4 == &unk_26014A4;
    case 61:
      return 0;
  }
  v1 = &unk_26014A0;
  if ( a1 == 62 )
    return v1 == &unk_26014AC;
  v2 = &unk_26014A0;
  if ( a1 == 63 )
    return v2 == &unk_26014A8;
  result = 1;
  v4 = &unk_26014A0;
  if ( a1 == 64 )
    return v4 == &unk_26014A4;
  return result;
}
