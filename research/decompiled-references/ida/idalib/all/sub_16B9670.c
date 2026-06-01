bool __fastcall sub_16B9670(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v2; // rax
  bool result; // al
  unsigned int v4; // ebp

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 <= 0x40 )
  {
    v2 = *(_QWORD **)a1;
    return v2 == nullptr;
  }
  v4 = v1 - sub_2206780(a1);
  result = 0;
  if ( v4 <= 0x40 )
  {
    v2 = **(_QWORD ***)a1;
    return v2 == nullptr;
  }
  return result;
}
