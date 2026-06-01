/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000465A0
// Address: 0x00000001000465A0

//----- (00000001000465A0) ----------------------------------------------------
__int64 __fastcall sub_1000465A0(__int64 a1, int16x4_t *a2, _DWORD *a3)
{
  __int64 v6; // x22
  __int64 i; // x8
  __int64 v8; // x8
  int v9; // w0
  bool v10; // zf
  int v13; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( (*(_BYTE *)(a1 + 320) & 1) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = sub_100040B80(a1, &v13);
    if ( v13 )
      break;
    for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
    {
      v8 = *(_QWORD *)(a1 + 56) + 56 * i;
      *(_QWORD *)a1 = *(_QWORD *)(v8 - 32);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v8 - 24);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v8 - 8);
      sub_10003F3C8((__int64 *)(a1 + 56));
    }
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 320) = 1;
LABEL_6:
    v9 = sub_100042C40(a1, a2, 0, a3);
    if ( *(_QWORD *)(a1 + 64) )
      v10 = v9 == 0;
    else
      v10 = 0;
    if ( v10 )
      v9 = sub_100043A58(a1, a2);
    if ( v9 )
      goto LABEL_24;
    if ( a2[3].i16[0] == 1 )
    {
      *(_BYTE *)(a1 + 320) = 0;
    }
    else if ( (*(_BYTE *)(a1 + 320) & 1) != 0 )
    {
      return 0;
    }
  }
  if ( v13 == 34 || v13 == -1 )
  {
    a2[3].i16[0] = 1;
    return 0;
  }
LABEL_24:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
