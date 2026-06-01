__int64 __fastcall sub_ECEE90(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned __int16 *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 14) & 1) != 0 )
    return sub_EC8400(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v1 + 24) + 16LL));
  if ( (_WORD)v1 )
    return sub_EC8400(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v1 + 16) + 16LL));
  return sub_EC8400(*(_QWORD *)(a1 + 16));
}

