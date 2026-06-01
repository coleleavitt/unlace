/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004C5A0
// Address: 0x000000014004C5A0

//----- (000000014004C5A0) ----------------------------------------------------
_BOOL8 __fastcall sub_14004C5A0(__int64 a1, __int64 a2)
{
  bool v4; // bl
  int v5; // ebx
  int v6; // r8d
  char v7; // r14
  char v8; // r15
  _BYTE *v9; // rcx
  unsigned __int64 v10; // rsi
  int v11; // eax
  void *v12; // rdi
  _QWORD v14[3]; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+48h] [rbp-B8h]
  void *Src; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  void *Block[2]; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+70h] [rbp-90h]
  void *v20[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v22)(); // [rsp+A0h] [rbp-60h] BYREF
  void *v23; // [rsp+A8h] [rbp-58h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v26; // [rsp+ECh] [rbp-14h]
  unsigned __int16 v27; // [rsp+EEh] [rbp-12h]
  unsigned __int16 v28; // [rsp+FCh] [rbp-4h]
  int v29; // [rsp+2F0h] [rbp+1F0h]

  v4 = 0;
  v22 = &off_140092F30;
  v23 = nullptr;
  v24 = 0;
  if ( !sub_140019860((__int64)&v22, a2, 1, 1) )
    goto LABEL_43;
  v5 = -1;
  if ( v26 > 0x266u )
  {
    if ( v26 > 0xA00u )
    {
      switch ( v26 )
      {
        case 0xEBCu:
          v5 = 57;
          break;
        case 0x8664u:
LABEL_5:
          v5 = 0;
          break;
        case 0x9041u:
          v5 = 37;
          break;
      }
      goto LABEL_24;
    }
    if ( v26 == 2560 )
    {
LABEL_18:
      v5 = 13;
      goto LABEL_24;
    }
    if ( v26 == 616 )
    {
      v5 = 7;
      goto LABEL_24;
    }
    if ( ((v26 - 870) & 0xFFFFFEFF) != 0 )
    {
      if ( v26 == 1312 )
        v5 = 27;
      goto LABEL_24;
    }
  }
  else if ( v26 != 614 )
  {
    switch ( v26 )
    {
      case 0x14Cu:
      case 0x14Du:
      case 0x14Eu:
        goto LABEL_5;
      case 0x162u:
      case 0x163u:
      case 0x166u:
      case 0x168u:
      case 0x169u:
        goto LABEL_16;
      case 0x184u:
        v5 = 24;
        break;
      case 0x1A2u:
      case 0x1A3u:
      case 0x1A4u:
      case 0x1A6u:
      case 0x1A8u:
        v5 = 18;
        break;
      case 0x1C0u:
      case 0x1C2u:
      case 0x1C4u:
        goto LABEL_18;
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
        v5 = 15;
        break;
      case 0x200u:
        v5 = 31;
        break;
      default:
        goto LABEL_24;
    }
    goto LABEL_24;
  }
LABEL_16:
  v5 = 12;
LABEL_24:
  *(_OWORD *)v20 = 0;
  v21 = 0;
  sub_14004D3D0((__int64)&v22, v20, a2);
  v14[0] = off_140097568;
  v14[1] = a2;
  v14[2] = v20;
  v15 = 0;
  Src = nullptr;
  v17 = 0;
  *(_OWORD *)Block = 0;
  v19 = 0;
  if ( v25 == 23126 )
    v6 = v29 + 40;
  else
    v6 = v28 + v29 + 24;
  sub_1400190C0((__int64)&v22, a2, v6, v27, (__int64)v14);
  v7 = v15;
  v8 = v15;
  v9 = (_BYTE *)(a1 + 1034);
  v10 = v19;
  if ( (unsigned __int64)v19 > 1 )
  {
    sub_1400621E0(v9, (char *)Block[1], 260);
    v10 = v19;
    v7 = v15;
  }
  else
  {
    *v9 = 0;
  }
  v11 = v17;
  if ( (unsigned int)v17 > 0x400 )
    v11 = 1024;
  *(_DWORD *)(a1 + 4) = v5;
  *(_WORD *)(a1 + 8) = v11;
  v12 = Src;
  memcpy((void *)(a1 + 10), Src, v11);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = v8;
  v4 = v7 || v17 || v10 > 1;
  if ( Block[1] )
  {
    *(_QWORD *)&v19 = 0;
    j_free(Block[1]);
    Block[1] = nullptr;
    *((_QWORD *)&v19 + 1) = 0;
    v12 = Src;
  }
  if ( v12 )
  {
    v17 = 0;
    j_free(v12);
    Src = nullptr;
    Block[0] = nullptr;
  }
  v14[0] = off_140092F00;
  if ( v20[0] )
  {
    v20[1] = nullptr;
    j_free(v20[0]);
  }
LABEL_43:
  v22 = &off_140092F30;
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    j_free(v23);
  }
  return v4;
}
// 140092F00: using guessed type __int64 (__fastcall *off_140092F00[4])();
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
// 140097568: using guessed type __int64 (__fastcall *off_140097568[2])();
