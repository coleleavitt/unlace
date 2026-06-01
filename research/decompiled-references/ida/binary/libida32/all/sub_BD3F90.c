__int64 __fastcall sub_BD3F90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12,
        char a13)
{
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  char v19; // al
  int v20; // edx
  char v21; // al
  __int16 v22; // ax
  char v23; // si
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  __int64 result; // rax
  __int16 v27; // cx
  __int16 v28; // ax
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  _BYTE v31[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v16 = a8;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x47;
  if ( unk_2CAD564 )
  {
    v30 = a4;
    v29 = a6;
    sub_EC5E10(71);
    a4 = v30;
    v16 = a8;
    a6 = v29;
  }
  *(_QWORD *)(a1 + 16) = a6;
  *(_BYTE *)(a1 + 1) = (2 * (a12 & 3)) | *(_BYTE *)(a1 + 1) & 0xF9;
  *(_WORD *)(a1 + 1) &= 0xF807u;
  *(_QWORD *)(a1 + 8) = a11;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v16 + 16);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v16 + 8);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 32) = a3;
    v17 = 1;
    *(_QWORD *)(a1 + 40) = a4;
  }
  else
  {
    v17 = 0;
  }
  v18 = (unsigned int)(8 * v17);
  v19 = (8 * v17) | *(_BYTE *)(a1 + 2) & 0xF7;
  *(_BYTE *)(a1 + 2) = v18 | *(_BYTE *)(a1 + 2) & 0xF7;
  if ( a9 )
  {
    *(_BYTE *)(a1 + 2) = v19 | 0x20;
    *(_QWORD *)(a1 + ((*(_QWORD *)a1 >> 15) & 0x10LL) + 32) = a9;
  }
  else
  {
    *(_BYTE *)(a1 + 2) = v19 & 0xDF;
  }
  v20 = a13 & 3;
  if ( a10 )
  {
    v21 = *(_BYTE *)(a1 + 2);
    v31[0] = 0;
    *(_BYTE *)(a1 + 2) = v21 & 0x7F | (a7 << 7);
    v22 = *(_WORD *)(a1 + 2) & 0xFEEF | 0x10;
    *(_WORD *)(a1 + 2) = v22;
    *(_BYTE *)(a1 + 3) = (2 * v20) | HIBYTE(v22) & 0xF9;
    v23 = BYTE2(*(_QWORD *)a1);
    sub_EFA9B0(
      a1 + 8LL * ((v23 & 0x20) != 0) + 16LL * ((v23 & 8) != 0) + 32,
      a5,
      a10,
      a1 + 8LL * ((v23 & 0x20) != 0) + 16 * (((v23 & 8) != 0) + (unsigned __int64)((v23 & 0x10) != 0)) + 32,
      v31);
  }
  else
  {
    *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0x7F | (a7 << 7);
    if ( a5 )
    {
      v27 = *(_WORD *)(a1 + 2) & 0xFEEF | 0x10;
      *(_WORD *)(a1 + 2) = v27;
      *(_BYTE *)(a1 + 3) = (2 * v20) | HIBYTE(v27) & 0xF9;
      sub_EFA990(a1 + 16LL * ((*(_QWORD *)a1 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)a1 & 0x200000LL) != 0) + 32, a5);
    }
    else
    {
      v28 = *(_WORD *)(a1 + 2) & 0xFEEF;
      *(_WORD *)(a1 + 2) = v28;
      v24 = HIBYTE(v28) & 0xF9 | (unsigned int)(2 * v20);
      *(_BYTE *)(a1 + 3) = v24;
    }
  }
  *(_WORD *)(a1 + 2) &= 0xF7BFu;
  v25 = sub_B40070((unsigned __int64 *)a1, a2, v24, v18, v16);
  *(_BYTE *)(a1 + 1) = (v25 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v25 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

