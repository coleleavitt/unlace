/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69554
// Address: 0x00069554

//----- (00069554) --------------------------------------------------------
int __fastcall sub_69554(int a1, _DWORD *a2)
{
  _BYTE *v4; // r0
  int v5; // r2
  int v6; // r0
  _BYTE *v7; // r1
  _BYTE *v8; // r0
  _BYTE v10[5]; // [sp+8h] [bp-10h] BYREF
  _BYTE v11[5]; // [sp+Dh] [bp-Bh] BYREF
  _BYTE v12[6]; // [sp+12h] [bp-6h] BYREF

  v4 = pack_dd(v10, (unsigned int)v11, *a2 + 3);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v10, v4 - v10);
  if ( *a2 != -3 )
  {
    if ( *a2 == -2 )
    {
      v5 = pack_dq(v10, (unsigned int)v12, a2[2] + 1, (unsigned __int64)(*((_QWORD *)a2 + 1) + 1LL) >> 32) - v10;
      v6 = a1;
      v7 = v10;
    }
    else
    {
      v8 = pack_dd(v10, (unsigned int)v11, a2[3]);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v10, v8 - v10);
      v7 = (_BYTE *)a2[2];
      v5 = a2[3];
      v6 = a1;
    }
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v6, v7, v5);
  }
  return _stack_chk_guard - *(_DWORD *)&v12[2];
}
