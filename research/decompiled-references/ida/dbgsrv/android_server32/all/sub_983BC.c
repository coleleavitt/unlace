/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_983BC
// Address: 0x000983BC

//----- (000983BC) --------------------------------------------------------
_DWORD *__fastcall sub_983BC(int a1)
{
  int v2; // r9
  _DWORD *v3; // r11
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r4
  __int64 v6; // r0
  int v7; // r2
  _DWORD *v8; // r3
  int v9; // r8
  __int64 v10; // r0
  __int64 v11; // r0
  unsigned __int8 *v12; // r2
  int v13; // r3
  _DWORD *v14; // r3
  __int64 v15; // r0
  unsigned __int8 *v16; // r2
  unsigned __int8 *v17; // r0
  __int64 v18; // r0
  __int64 v19; // r0
  int v20; // r1
  int v21; // r2
  _DWORD *v22; // r3
  char v23; // r4
  _DWORD *result; // r0
  unsigned __int8 *v25; // r3
  int v26; // r6
  int v27; // [sp+4h] [bp-34h]
  unsigned __int8 *v28; // [sp+8h] [bp-30h]
  unsigned __int8 *v29; // [sp+10h] [bp-28h] BYREF
  int v30; // [sp+14h] [bp-24h]

  v2 = sub_94068((__int64 *)a1);
  if ( sub_924C8((__int64 *)a1, "Do", (unsigned __int8 *)"") )
  {
    v3 = sub_98740(a1, (int)"noexcept");
  }
  else if ( sub_924C8((__int64 *)a1, "DO", (unsigned __int8 *)"") )
  {
    v4 = sub_948A0(a1);
    if ( !v4 )
      return nullptr;
    v5 = v4;
    v6 = *(_QWORD *)a1;
    if ( (_DWORD)v6 == HIDWORD(v6) || *(_BYTE *)v6 != 69 )
      return nullptr;
    *(_DWORD *)a1 = v6 + 1;
    v3 = sub_93AC6(a1 + 368, 12);
    *v3 = &off_DC6C0;
    v3[1] = 16843025;
    v3[2] = v5;
  }
  else if ( sub_924C8((__int64 *)a1, "Dw", (unsigned __int8 *)"") )
  {
    v9 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
    while ( 1 )
    {
      v11 = *(_QWORD *)a1;
      if ( (_DWORD)v11 != HIDWORD(v11) )
      {
        HIDWORD(v11) = *(unsigned __int8 *)v11;
        if ( HIDWORD(v11) == 69 )
          break;
      }
      v29 = sub_92B28((__int64 *)a1, SHIDWORD(v11), v7, v8);
      if ( !v29 )
        return nullptr;
      LODWORD(v10) = a1 + 8;
      HIDWORD(v10) = &v29;
      sub_938C4(v10);
    }
    *(_DWORD *)a1 = v11 + 1;
    sub_9392E(&v29, a1, v9);
    v3 = sub_93AC6(a1 + 368, 16);
    v12 = v29;
    v13 = v30;
    *v3 = &off_DC6F4;
    v3[1] = 16843026;
    v3[2] = v12;
    v3[3] = v13;
  }
  else
  {
    v3 = nullptr;
  }
  sub_924C8((__int64 *)a1, "Dx", (unsigned __int8 *)"");
  v15 = *(_QWORD *)a1;
  if ( (_DWORD)v15 == HIDWORD(v15) || *(_BYTE *)v15 != 70 )
    return nullptr;
  v16 = (unsigned __int8 *)(v15 + 1);
  *(_DWORD *)a1 = v15 + 1;
  if ( (_DWORD)v15 + 1 != HIDWORD(v15) )
  {
    HIDWORD(v15) = *v16;
    if ( HIDWORD(v15) == 89 )
      *(_DWORD *)a1 = v15 + 2;
  }
  v17 = sub_92B28((__int64 *)a1, SHIDWORD(v15), (int)v16, v14);
  if ( !v17 )
    return nullptr;
  v28 = v17;
  v27 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
  while ( 1 )
  {
    v19 = *(_QWORD *)a1;
    if ( (_DWORD)v19 == HIDWORD(v19) )
      goto LABEL_30;
    if ( *(_BYTE *)v19 == 69 )
      break;
    if ( *(_BYTE *)v19 == 118 )
    {
      *(_DWORD *)a1 = v19 + 1;
    }
    else
    {
LABEL_30:
      if ( sub_924C8((__int64 *)a1, "RE", (unsigned __int8 *)"") )
      {
        v23 = 1;
        goto LABEL_36;
      }
      if ( sub_924C8((__int64 *)a1, "OE", (unsigned __int8 *)"") )
      {
        v23 = 2;
        goto LABEL_36;
      }
      v29 = sub_92B28((__int64 *)a1, v20, v21, v22);
      if ( !v29 )
        return nullptr;
      LODWORD(v18) = a1 + 8;
      HIDWORD(v18) = &v29;
      sub_938C4(v18);
    }
  }
  v23 = 0;
  *(_DWORD *)a1 = v19 + 1;
LABEL_36:
  sub_9392E(&v29, a1, v27);
  result = sub_93AC6(a1 + 368, 32);
  v25 = v29;
  v26 = v30;
  *result = &off_DC728;
  result[1] = 65552;
  result[2] = v28;
  result[3] = v25;
  result[4] = v26;
  result[5] = v2;
  *((_BYTE *)result + 24) = v23;
  result[7] = v3;
  return result;
}
// 9847C: variable 'v7' is possibly undefined
// 9847C: variable 'v8' is possibly undefined
// 984E6: variable 'v14' is possibly undefined
// 98510: variable 'v20' is possibly undefined
// 98510: variable 'v21' is possibly undefined
// 98510: variable 'v22' is possibly undefined
// DC6C0: using guessed type _UNKNOWN *off_DC6C0;
// DC6F4: using guessed type _UNKNOWN *off_DC6F4;
// DC728: using guessed type _UNKNOWN *off_DC728;
