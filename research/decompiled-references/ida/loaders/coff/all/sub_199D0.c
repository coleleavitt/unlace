__int64 __fastcall sub_199D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int16 v5; // ax
  __int64 v6; // rdi

  if ( *(_WORD *)(a3 + 12) == 3 )
    a1[5] = *(_QWORD *)(a1[1] + 343LL) + a1[7];
  v4 = sub_14830(a1, a2, a3);
  if ( !(_BYTE)v4 )
    return v4;
  v5 = *(_WORD *)(a3 + 12);
  v6 = a1[4];
  if ( v5 != 3 )
  {
    if ( (unsigned __int16)(v5 - 7) <= 1u )
      auto_mark_range(v6, v6 + 1, 20);
    return v4;
  }
  append_cmt(v6, "gprel32", 0);
  return v4;
}

