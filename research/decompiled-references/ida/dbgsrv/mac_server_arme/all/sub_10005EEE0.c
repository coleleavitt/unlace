/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EEE0
// Address: 0x000000010005EEE0

//----- (000000010005EEE0) ----------------------------------------------------
_BYTE *__fastcall sub_10005EEE0(_QWORD **a1, __int64 a2)
{
  _BYTE *result; // x0
  unsigned int v5; // w8
  __int64 v6; // x8
  __int64 v7; // x1
  unsigned int v8; // w1
  __int64 _18; // [xsp+18h] [xbp+8h]

  sub_10002E2F0(a1, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
  sub_10002E2F0(a1, *(_DWORD *)a2);
  sub_10002E2F0(a1, *(_DWORD *)(a2 + 4));
  sub_1000530E4(a1, *(_QWORD *)(a2 + 8) + 1LL);
  result = sub_10002E2F0(a1, *(unsigned __int8 *)(a2 + 16));
  v5 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v5 <= 6 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFFu) > 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 4 )
        {
          if ( v5 != 5 )
            return result;
          sub_1000530E4(a1, *(_QWORD *)(a2 + 24) + 1LL);
          v6 = *(_QWORD *)(a2 + 32);
          goto LABEL_18;
        }
        goto LABEL_12;
      }
      goto LABEL_9;
    }
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
        return result;
LABEL_12:
      v8 = *(_DWORD *)(a2 + 24);
      if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return sub_10002E2F0(a1, v8);
    }
LABEL_17:
    sub_10004ED18(a1, a2 + 24);
    sub_1000530E4(a1, *(_QWORD *)(a2 + 48) + 1LL);
    sub_1000530E4(a1, *(_QWORD *)(a2 + 56) + 1LL);
    v6 = *(_QWORD *)(a2 + 64);
LABEL_18:
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000530E4(a1, v6 + 1);
  }
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFFu) <= 8 )
  {
    if ( v5 == 7 )
    {
      sub_10002E2F0(a1, *(_DWORD *)(a2 + 24));
      sub_10002E2F0(a1, *(unsigned __int8 *)(a2 + 28));
      sub_1000530E4(a1, *(_QWORD *)(a2 + 32) + 1LL);
      v7 = a2 + 40;
      goto LABEL_24;
    }
    if ( v5 != 8 )
      return result;
    goto LABEL_17;
  }
  if ( v5 - 9 >= 2 )
  {
    if ( v5 != 11 )
      return result;
    goto LABEL_17;
  }
LABEL_9:
  v7 = a2 + 24;
LABEL_24:
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10004ED18(a1, v7);
}
// 10005EFC0: variable '_18' is possibly undefined
