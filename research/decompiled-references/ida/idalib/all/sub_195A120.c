__int64 __fastcall sub_195A120(__int64 *a1, __m128 a2, __m128 a3)
{
  unsigned __int16 *v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = (unsigned __int16 *)sub_1C16E00(*(_QWORD *)(*a1 + 776));
  result = sub_1944E10(a1, v3, a2, a3);
  if ( result != 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) == 13 && ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) == 0x1F5 )
      return sub_1C20D80(*(_QWORD *)(*a1 + 776));
  }
  return result;
}
