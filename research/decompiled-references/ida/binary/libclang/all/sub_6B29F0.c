__int64 __fastcall sub_6B29F0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // di
  unsigned __int8 v4; // r8
  int v5; // eax
  unsigned __int16 v6; // dx
  int v7; // ecx
  __int64 v8; // r11
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  __int64 *v14; // r11
  char v15; // cl
  unsigned int v16; // eax
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // rbp
  char v20; // r8
  unsigned __int64 v21; // r10
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int16 v27; // dx
  __int16 v28; // dx
  unsigned __int64 v29; // rax
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rax
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  __int64 *v39; // r11
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax

  *(_WORD *)a1 = *(_WORD *)(a2 + 18) >> 3;
  v3 = *(_BYTE *)(a2 + 23);
  v4 = (unsigned __int8)(v3 & 0x10) >> 4;
  *(_BYTE *)(a1 + 2) = v4 | *(_BYTE *)(a1 + 2) & 0xFE;
  v5 = 0;
  if ( (v3 & 0x10) != 0 )
    v5 = *(_DWORD *)(a2 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48);
  *(_DWORD *)(a1 + 80) = v5;
  v6 = *(_WORD *)(a2 + 22);
  *(_BYTE *)(a1 + 2) = (v3 >> 4) & 2 | *(_BYTE *)(a1 + 2) & 0xFD;
  v7 = (v6 >> 6) & 0xF;
  if ( v7 == 2 )
  {
    v31 = (a2 + 4LL * v4 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v32 = 8LL * (*(_WORD *)v31 & 0x3FF);
    if ( (v3 & 8) != 0 )
    {
      v33 = v31 + 8;
      if ( (*(_BYTE *)(v31 + 1) & 4) != 0 )
        v33 = v31 + 16;
      v34 = v33 + v32;
      v35 = 1 - (((*(_BYTE *)(v31 + 1) & 4) == 0) - 1LL);
    }
    else
    {
      v34 = v31 + v32;
      v35 = 0;
    }
    v12 = v31 + 8 * v35;
    v9 = 0;
    v8 = 0;
    v10 = 0;
    v11 = (__int64)(v34 - v12) >> 3;
  }
  else
  {
    if ( (unsigned int)(v7 - 6) > 2 )
    {
      if ( v7 != 10 )
      {
        if ( v7 == 9 )
        {
          v38 = (a2 + 4LL * v4 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v3 & 8) == 0 || (v39 = (__int64 *)(v38 + 16), (*(_BYTE *)(v38 + 1) & 4) == 0) )
            v39 = (__int64 *)(v38 + 8LL * ((unsigned __int8)(v3 & 8) >> 3));
          v9 = *v39;
          v10 = 0;
          v8 = 0;
          v11 = 0;
          v12 = 0;
        }
        else
        {
          v8 = 0;
          v9 = 0;
          v10 = 0;
          v11 = 0;
          v12 = 0;
        }
        goto LABEL_11;
      }
      v40 = (a2 + 4LL * v4 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v3 & 8) != 0 )
      {
        if ( (*(_BYTE *)(v40 + 1) & 4) != 0 )
        {
          v9 = *(_QWORD *)(v40 + 16);
          v41 = v40 + 16;
          goto LABEL_54;
        }
        v9 = *(_QWORD *)(v40 + 8);
      }
      else
      {
        v9 = *(_QWORD *)v40;
      }
      v41 = v40 + 8LL * ((unsigned __int8)(v3 & 8) >> 3);
LABEL_54:
      v8 = *(_QWORD *)(v41 + 8);
      v10 = 0;
      v11 = 0;
      v12 = 0;
      goto LABEL_11;
    }
    v13 = (a2 + 4LL * v4 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 8) == 0 || (v14 = (__int64 *)(v13 + 16), (*(_BYTE *)(v13 + 1) & 4) == 0) )
      v14 = (__int64 *)(v13 + 8LL * ((unsigned __int8)(v3 & 8) >> 3));
    v10 = *v14;
    v9 = 0;
    v8 = 0;
    v11 = 0;
    v12 = 0;
  }
LABEL_11:
  *(_DWORD *)(a1 + 24) = v7;
  v15 = *(_BYTE *)(a2 + 20);
  *(_QWORD *)(a1 + 32) = v12;
  *(_QWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 56) = v9;
  *(_QWORD *)(a1 + 64) = v8;
  if ( (v15 & 0x20) == 0 )
  {
    if ( *(_BYTE *)(a2 + 16) == 26
      || (v22 = 0, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26)
      && (v36 = sub_B0D320(a2), v3 = *(_BYTE *)(a2 + 23), v15 = *(_BYTE *)(a2 + 20), v36) )
    {
      v22 = (*(_BYTE *)(a2 + 20) >> 2) & 7;
    }
    *(_QWORD *)(a1 + 8) = v22;
    v20 = v3 & 8;
    *(_DWORD *)(a1 + 16) = v15 & 3;
    if ( (v3 & 4) == 0 )
    {
      v26 = 0;
      goto LABEL_25;
    }
    v16 = *(_DWORD *)(a2 + 20);
    v6 = *(_WORD *)(a2 + 22);
LABEL_20:
    v23 = a2 + 4LL * ((v3 & 0x10) != 0) + 8LL * (unsigned __int16)(v16 >> 6) + 48 + 7;
    v24 = 0;
    v25 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v20 )
      v24 = ((*(_BYTE *)(v25 + 1) & 4) != 0) + 1LL;
    v26 = v25 + 8 * v24;
    v27 = (v6 >> 6) & 0xF;
    if ( (_BYTE)v27 != 2 )
    {
      switch ( (char)v27 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 11:
          goto LABEL_25;
        case 6:
        case 7:
        case 8:
        case 9:
          v26 += 8LL;
          goto LABEL_25;
        case 10:
          v26 += 16LL;
          goto LABEL_25;
        default:
          return sub_6B2F10();
      }
    }
    v26 += 8LL * (*(_WORD *)v25 & 0x3FF);
    goto LABEL_25;
  }
  v16 = *(_DWORD *)(a2 + 20);
  v17 = 0;
  v18 = (unsigned __int16)(v16 >> 6);
  v19 = (a2 + 4LL * v4 + 8 * v18 + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v20 = v3 & 8;
  if ( (v3 & 8) != 0 )
    v17 = ((*(_BYTE *)(v19 + 1) & 4) != 0) + 1LL;
  v21 = v19 + 8 * v17;
  if ( ((v6 >> 6) & 0xF) != 2 )
  {
    switch ( (v6 >> 6) & 0xF )
    {
      case 0:
      case 1:
      case 3:
      case 4:
      case 5:
      case 0xB:
        goto LABEL_40;
      case 6:
      case 7:
      case 8:
        v21 += 8LL;
LABEL_40:
        v37 = 0;
        goto LABEL_41;
      case 9:
        v37 = 8;
        goto LABEL_41;
      case 0xA:
        v37 = 16;
        goto LABEL_41;
      default:
        return sub_6B2F10();
    }
  }
  v21 += 8LL * (*(_WORD *)v19 & 0x3FF);
  v37 = 0;
LABEL_41:
  if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 16) = v15 & 3;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)((v21 + v18 + v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)((v21 + v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  *(_DWORD *)(a1 + 16) = v15 & 3;
  v26 = 0;
LABEL_25:
  *(_QWORD *)(a1 + 72) = v26;
  v28 = 0;
  if ( v20 )
  {
    v29 = (a2 + 4LL * ((v3 & 0x10) != 0) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 7)
        & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v29 + 1) & 4) != 0 )
      v28 = *(_WORD *)(v29 + 8) & 0x1FF;
  }
  *(_WORD *)(a1 + 2) = (4 * v28) | *(_WORD *)(a1 + 2) & 0xF803;
  sub_6B27F0((_QWORD *)(a1 + 88), a2);
  return a1;
}

