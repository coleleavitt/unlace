void __fastcall sub_1BF2630(__int64 a1, _QWORD *a2, double a3, __m128 a4)
{
  unsigned __int64 v5; // rsi
  __int64 *i; // rbx
  char v7; // al
  char v8; // dl

  v5 = *(unsigned int *)(a1 + 8) + (unsigned __int64)(*(_DWORD *)(a1 + 2864) & 0x3FFFFFFF);
  if ( v5 > *(unsigned int *)(a1 + 12) )
    sub_1BD93E0(a1, v5);
  for ( i = *(__int64 **)(a1 + 2856); i; i = (__int64 *)*i )
  {
    while ( 1 )
    {
      v7 = *((_BYTE *)i + 8);
      v8 = v7 & 3;
      if ( (v7 & 3) != 1 )
        break;
      sub_1BF01B0(
        (__int64)a2,
        (unsigned int *)a1,
        i[2],
        i[3],
        i[6],
        0,
        a3,
        a4,
        i[8],
        *((_DWORD *)i + 14),
        i[4],
        i[5],
        (v7 & 0x20) != 0,
        (v7 & 0x40) != 0,
        *((_BYTE *)i + 72));
LABEL_7:
      i = (__int64 *)*i;
      if ( !i )
        goto LABEL_11;
    }
    if ( v8 )
    {
      if ( v8 == 2 )
        sub_1BEDBA0((__int64)a2, a1, i[2], i[3], i[4], i[5], i[6], (v7 & 4) != 0, (v7 & 0x10) != 0, (v7 & 8) != 0);
      goto LABEL_7;
    }
    sub_1BF1E70(
      a2,
      (unsigned int *)a1,
      i[2],
      i[3],
      0,
      (v7 & 0x20) != 0,
      a3,
      a4,
      (unsigned __int64 *)i[4],
      i[5],
      (v7 & 0x40) != 0,
      (v7 & 0x10) != 0,
      *((_BYTE *)i + 48),
      *((_BYTE *)i + 49),
      v7 < 0);
  }
LABEL_11:
  *(_QWORD *)(a1 + 2856) = 0;
  *(_DWORD *)(a1 + 2864) &= 0xC0000000;
}
