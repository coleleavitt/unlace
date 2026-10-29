/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B360
// Address: 0x000000010005B360

//----- (000000010005B360) ----------------------------------------------------
_BYTE *__fastcall sub_10005B360(_QWORD **a1, __int64 a2)
{
  _BYTE *result; // x0
  unsigned int v5; // w8
  __int64 v6; // x8
  __int64 v7; // x1

  sub_10002CF84(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
  sub_10002CF84(a1, *(_DWORD *)a2);
  sub_10002CF84(a1, *(_DWORD *)(a2 + 4));
  sub_1000500AC(a1, *(_QWORD *)(a2 + 8) + 1LL);
  result = sub_10002CF84(a1, *(unsigned __int8 *)(a2 + 16));
  v5 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v5 > 6 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFFu) <= 8 )
    {
      if ( v5 == 7 )
      {
        sub_10002CF84(a1, *(_DWORD *)(a2 + 24));
        sub_10002CF84(a1, *(unsigned __int8 *)(a2 + 28));
        sub_1000500AC(a1, *(_QWORD *)(a2 + 32) + 1LL);
        v7 = a2 + 40;
        return sub_10004C294(a1, v7);
      }
      if ( v5 != 8 )
        return result;
    }
    else
    {
      if ( v5 - 9 < 2 )
        goto LABEL_9;
      if ( v5 != 11 )
        return result;
    }
LABEL_15:
    sub_10004C294(a1, a2 + 24);
    sub_1000500AC(a1, *(_QWORD *)(a2 + 48) + 1LL);
    sub_1000500AC(a1, *(_QWORD *)(a2 + 56) + 1LL);
    v6 = *(_QWORD *)(a2 + 64);
    return sub_1000500AC(a1, v6 + 1);
  }
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFFu) <= 2 )
  {
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
        return result;
      return sub_10002CF84(a1, *(_DWORD *)(a2 + 24));
    }
    goto LABEL_15;
  }
  switch ( v5 )
  {
    case 3u:
LABEL_9:
      v7 = a2 + 24;
      return sub_10004C294(a1, v7);
    case 4u:
      return sub_10002CF84(a1, *(_DWORD *)(a2 + 24));
    case 5u:
      sub_1000500AC(a1, *(_QWORD *)(a2 + 24) + 1LL);
      v6 = *(_QWORD *)(a2 + 32);
      return sub_1000500AC(a1, v6 + 1);
  }
  return result;
}
