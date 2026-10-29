unsigned __int64 __fastcall sub_A709A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(char *)(a2 + 29) < 0 && (v6 = sub_B72720(a2)) != 0 && (v7 = *(_QWORD *)(v6 + 48)) != 0 )
  {
    *(_QWORD *)(a2 + 48) = v7;
    return v7 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v4 = sub_A6FFD0((__int64 *)(a1 + 2352), 32, 4u);
    *(_BYTE *)(v4 + 18) &= 0xF8u;
    v5 = v4 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 8) = v4 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)v4 = v4;
    *(_WORD *)(v4 + 16) = 1591;
    *(_QWORD *)(a2 + 48) = v4;
    sub_A6A720(a1 + 8, v4);
    return v5;
  }
}
