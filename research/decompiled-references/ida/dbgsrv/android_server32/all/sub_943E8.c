/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_943E8
// Address: 0x000943E8

//----- (000943E8) --------------------------------------------------------
_DWORD *__fastcall sub_943E8(_DWORD *a1, _DWORD *a2)
{
  int v3; // r10
  int v5; // r8
  int v6; // r9
  _DWORD *v7; // r0
  char v8; // r1
  __int16 v9; // r2
  __int64 v10; // r0
  int v12; // [sp+8h] [bp-28h] BYREF
  int v13; // [sp+Ch] [bp-24h]

  v3 = (int)(a1 + 92);
  while ( 1 )
  {
    v10 = *(_QWORD *)a1;
    if ( (_DWORD)v10 == HIDWORD(v10) || *(_BYTE *)v10 != 66 )
      break;
    *a1 = v10 + 1;
    sub_97DB4(&v12, a1);
    v6 = v12;
    v5 = v13;
    if ( v12 == v13 )
      return nullptr;
    v7 = sub_93AC6(v3, 20);
    v8 = *((_BYTE *)a2 + 7);
    v9 = *(_WORD *)((char *)a2 + 5);
    *v7 = &off_DC3E8;
    *(_WORD *)((char *)v7 + 5) = v9;
    v7[2] = a2;
    v7[3] = v6;
    a2 = v7;
    v7[4] = v5;
    *((_BYTE *)v7 + 7) = v8;
    *((_BYTE *)v7 + 4) = 8;
  }
  return a2;
}
// DC3E8: using guessed type _UNKNOWN *off_DC3E8;
