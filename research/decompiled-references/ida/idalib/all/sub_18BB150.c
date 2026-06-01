bool __fastcall sub_18BB150(_QWORD *a1)
{
  __int16 v1; // cx
  bool result; // al
  unsigned __int16 v3; // cx

  v1 = *(_WORD *)sub_BFBAE0(*a1 & 0xFFFFFFFFFFFFFFFELL);
  result = 0;
  v3 = v1 & 0x1FF;
  if ( v3 <= 0x2Au )
    return ((1LL << v3) & 0x4C020000000LL) != 0;
  return result;
}
