unsigned __int64 __fastcall sub_B85F80(
        __int64 a1,
        __int64 a2,
        const void *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  char v10; // al
  unsigned __int64 v11; // r8
  __int64 v12; // r9

  if ( (*(_BYTE *)(a1 + 29) & 2) != 0 )
    return sub_B85E30(a1, a2, a3, a4, 0, 0);
  v10 = sub_EC3C30(*(_QWORD *)(a1 + 40), a5, a6, a3, a4, *(unsigned int *)(a1 + 108));
  v11 = 0;
  v12 = 0;
  v10 &= 3u;
  *(_BYTE *)(a1 + 60) = (4 * v10) | *(_BYTE *)(a1 + 60) & 0xF3;
  if ( !v10 )
  {
    v11 = a5;
    v12 = a6;
  }
  return sub_B85E30(a1, a2, a3, a4, v11, v12);
}

