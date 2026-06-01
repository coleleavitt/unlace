__int64 __fastcall sub_17647A0(__int64 *a1)
{
  unsigned __int16 *v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = (unsigned __int16 *)sub_1C16E00(*(_QWORD *)(*a1 + 776));
  result = sub_175B800(a1, v1);
  if ( result != 1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v3 + 16) == 13 && ((*(_WORD *)(v3 + 18) >> 3) & 0x1FF) == 0x1F5 )
      return sub_1C20D80(*(_QWORD *)(*a1 + 776));
  }
  return result;
}
