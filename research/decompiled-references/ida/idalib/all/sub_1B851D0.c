__int64 __fastcall sub_1B851D0(__int64 *a1, __m128 a2, __m128 a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx

  v3 = (unsigned __int16 *)sub_1C16E00(*(_QWORD *)(*a1 + 776));
  result = sub_1B7CAD0(a1, v3, a2, a3, v4, v5, v6);
  if ( result != 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v8 + 16) == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1F5 )
      return sub_1C20D80(*(_QWORD *)(*a1 + 776));
  }
  return result;
}
