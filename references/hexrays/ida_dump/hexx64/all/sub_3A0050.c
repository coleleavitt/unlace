__int64 __fastcall sub_3A0050(__int64 a1, int a2, __m128 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax

  sub_38B490(a1, 0);
  v3 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v4 = sub_384AF0(*(_QWORD *)(a1 + 88));
    v5 = v4;
    if ( v4 )
    {
      if ( a2 == 10 )
      {
LABEL_12:
        v6 = 0x22222202200000LL;
        goto LABEL_7;
      }
      if ( a2 > 10 )
      {
        if ( a2 == 16 )
          goto LABEL_10;
      }
      else
      {
        v6 = 0x33333303300000LL;
        if ( !a2 )
          goto LABEL_7;
        v6 = 0x77777707700000LL;
        if ( a2 == 8 )
          goto LABEL_7;
      }
      if ( (unsigned int)get_radix(*(_QWORD *)(v4 + 40), (unsigned int)*(char *)(v4 + 12)) != 10 )
        goto LABEL_12;
LABEL_10:
      v6 = 0x11111101100000LL;
LABEL_7:
      v7 = *(_QWORD *)(v5 + 40) & 0xFF000000F00FFFFFLL;
      *(_BYTE *)(v5 + 13) |= 1u;
      *(_QWORD *)(v5 + 40) = v6 | v7;
      sub_39FD80(a1, v5, 1u, a3);
      return 1;
    }
  }
  return v3;
}
