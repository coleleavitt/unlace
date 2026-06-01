unsigned __int64 __fastcall sub_1A37C50(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rdi
  unsigned __int64 result; // rax
  int v4; // edx
  unsigned __int8 v5; // cl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  result = v1 & 0xFFFFFFFFFFFFFFF8LL;
  v4 = (v1 >> 2) & 1;
  if ( v4 )
    result = v2[1];
  v5 = *(_BYTE *)(result + 8) & 0x7F;
  if ( v5 > 0x12u )
  {
    if ( ((v5 + 94) & 0x7Fu) <= 5 )
      return result;
  }
  else if ( ((1LL << v5) & 0x40182) != 0 )
  {
    return result;
  }
  if ( v4 )
    v2 = (_QWORD *)*v2;
  return sub_B8EAA0((__int64)v2);
}
