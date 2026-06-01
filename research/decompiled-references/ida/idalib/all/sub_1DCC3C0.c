unsigned __int64 __fastcall sub_1DCC3C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 result; // rax
  __int64 v10; // rdx

  v4 = sub_1C16E00(*(__int64 **)(*a1 + 776), a2);
  result = (unsigned __int64)sub_1DC71F0(a1, v4, v5, v6, v7, v8, a3, a4);
  if ( result != 1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1F5 )
      return sub_1C20D80(*(unsigned __int64 **)(*a1 + 776), result & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  }
  return result;
}
