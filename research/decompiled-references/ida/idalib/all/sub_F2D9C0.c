__int64 __fastcall sub_F2D9C0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  sub_F2A610(a1, *(_QWORD *)(a2[2] + 48));
  result = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " elidable");
    result = *a2;
    if ( (*a2 & 0x200000) == 0 )
    {
LABEL_3:
      if ( (result & 0x400000) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (result & 0x200000) == 0 )
  {
    goto LABEL_3;
  }
  sub_995540(*(_QWORD *)(a1 + 1096), " list");
  result = *a2;
  if ( (*a2 & 0x400000) == 0 )
  {
LABEL_4:
    if ( (result & 0x800000) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  sub_995540(*(_QWORD *)(a1 + 1096), " std::initializer_list");
  result = *a2;
  if ( (BYTE2(*a2) & 0x80u) == 0 )
  {
LABEL_5:
    if ( (result & 0x8000000) == 0 )
      return result;
    return sub_995540(*(_QWORD *)(a1 + 1096), " immediate-escalating");
  }
LABEL_10:
  sub_995540(*(_QWORD *)(a1 + 1096), " zeroing");
  result = *a2;
  if ( (*a2 & 0x8000000) != 0 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " immediate-escalating");
  return result;
}
