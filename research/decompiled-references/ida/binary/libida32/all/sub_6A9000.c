bool __fastcall sub_6A9000(int a1, int a2)
{
  char numbered_type; // dl
  bool result; // al
  _QWORD v4[3]; // [rsp+8h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  numbered_type = get_numbered_type(a1, a2, (int)v4, 0, 0, 0, 0);
  result = 1;
  if ( numbered_type )
    return (*(_BYTE *)v4[0] & 0x2F) == 13;
  return result;
}

