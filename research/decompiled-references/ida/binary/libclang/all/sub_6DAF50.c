unsigned __int64 __fastcall sub_6DAF50(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  __int64 v5; // rdx

  v2 = sub_6DABD0(a1, a2);
  v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(a1[270] + 89LL) & 1) != 0 && (unsigned int)v4 - 2 <= 1 )
  {
    v2 = sub_6C48D0((__int64)a1, v2);
    v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v5 & 7) != 0 )
      return sub_B0CF30(v2, v2) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( (unsigned __int8)(v4 - 25) <= 1u || (unsigned __int8)(v4 - 2) <= 4u )
    {
      v2 = sub_6DA4C0(a1, v2);
      v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v5 = *(_QWORD *)(v3 + 8);
    if ( (v5 & 7) != 0 )
      return sub_B0CF30(v2, v2) & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( (v5 & 8) != 0 )
    return sub_B0CF30(v2, v2) & 0xFFFFFFFFFFFFFFF0LL;
  return v3 & 0xFFFFFFFFFFFFFFF0LL;
}

