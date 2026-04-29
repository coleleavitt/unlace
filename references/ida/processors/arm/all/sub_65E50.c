__int64 __fastcall sub_65E50(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v3; // esi
  _BOOL4 v4; // edi
  int v5; // edx
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int16 v12; // dx
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  __int16 v17; // cx
  int v18; // esi
  int v19; // ecx
  char v20; // di
  char v21; // r8
  int v22; // edx
  __int64 v23; // rsi
  int v24; // r9d
  __int16 v25; // dx
  unsigned int v26; // edx
  int v27; // esi
  int v28; // ecx
  int v29; // edx
  char v30; // r8
  int v31; // ecx
  __int64 v32; // rsi
  int v33; // r9d
  __int16 v34; // cx
  __int16 v35; // cx
  __int64 v36; // rdx
  int v37; // ecx
  __int64 v38; // rdx
  __int16 v39; // cx
  int v40; // ecx
  int v41; // esi
  __int64 v42; // rdi
  int v43; // edx
  char v44; // si
  __int64 v45; // rdx
  int v46; // ecx

  v1 = *(_DWORD *)(a1 + 52);
  v3 = v1 >> 21;
  v4 = (v1 & 0x100000) != 0;
  v5 = (v1 >> 8) & 3;
  if ( v5 != 2 )
  {
    if ( v5 == 1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        v9 = v8 + 40;
        v10 = v8 + 80;
      }
      else
      {
        v9 = v8 + 80;
        v10 = v8 + 40;
      }
      *(_BYTE *)(v9 + 1) = 1;
      v11 = *(_DWORD *)(a1 + 20);
      *(_BYTE *)(v9 + 5) = 2;
      *(_WORD *)(v9 + 6) = v11;
      v12 = *(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16));
      *(_BYTE *)(v10 + 1) = 1;
      *(_BYTE *)(v10 + 5) = 18;
      *(_WORD *)(v10 + 6) = v12 + 93;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 351;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = -109;
      v6 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)(v6 + 24) )
        return *(unsigned __int16 *)(v6 + 26);
      return 0;
    }
    if ( v5 == 3 )
    {
      if ( (v1 & 0x100000) != 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
          return 0;
        v26 = v1 >> 5;
        v27 = (4 * (_BYTE)v3) & 0xC;
        v28 = (v1 >> 23) & 1;
        v29 = v27 | v26 & 3;
        if ( (v27 & 8) != 0 )
        {
          LOBYTE(v29) = v29 & 7;
          v30 = 0;
          v20 = v28 == 0 ? -123 : -119;
        }
        else if ( (v29 & 9) == 1 )
        {
          v29 >>= 1;
          v30 = 1;
          v20 = v28 == 0 ? -122 : -118;
        }
        else
        {
          if ( v28 | v29 & 0xB )
            return 0;
          v29 >>= 2;
          v20 = -125;
          v30 = 2;
        }
        v31 = *(_DWORD *)(a1 + 36);
        v32 = *(_QWORD *)(a1 + 8);
        v33 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(v32 + 81) = 12;
        if ( v31 == 2 )
          v34 = v33 + 45;
        else
          v34 = (v33 | (16 * v31)) + 61;
        *(_WORD *)(v32 + 86) = v34;
        *(_QWORD *)(v32 + 88) = 0;
        *(_BYTE *)(v32 + 113) = 0;
        *(_BYTE *)(v32 + 114) = v29 + 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = v30;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 46LL) = *(_DWORD *)(a1 + 20);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = 2;
      }
      else
      {
        if ( (v1 & 0x800000) != 0 )
        {
          if ( (v1 & 0x40) == 0 )
          {
            v40 = ((v1 & 0x20) != 0) | (v1 >> 21) & 2;
            if ( v40 == 3 )
              return 0;
            v41 = v3 & 1;
            v42 = *(_QWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 40) = v41;
            v43 = *(_DWORD *)(a1 + 16) | (16 * *(_DWORD *)(a1 + 36));
            if ( v41 )
            {
              if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
                return 0;
              v43 = v43 / 2 + 45;
              v44 = 8;
            }
            else
            {
              LOWORD(v43) = v43 + 61;
              v44 = 7;
            }
            *(_WORD *)(v42 + 46) = v43;
            *(_BYTE *)(v42 + 41) = 1;
            *(_BYTE *)(v42 + 45) = v44;
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = byte_8DB20[(unsigned __int8)(2 - v40)];
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 1;
            *(_WORD *)(*(_QWORD *)(a1 + 8) + 86LL) = *(_DWORD *)(a1 + 20);
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 2;
            *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 330;
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = (3 - v40) | 0x80;
            v6 = *(_QWORD *)(a1 + 8);
            goto LABEL_5;
          }
          goto LABEL_4;
        }
        if ( *(_DWORD *)(a1 + 24) )
          return 0;
        v18 = (4 * (_BYTE)v3) & 0xC;
        v19 = v18 | (v1 >> 5) & 3;
        if ( (v18 & 8) != 0 )
        {
          LOBYTE(v19) = v19 & 7;
          v20 = -127;
          v21 = 0;
        }
        else if ( (v19 & 1) != 0 )
        {
          v19 >>= 1;
          v20 = -126;
          v21 = 1;
        }
        else
        {
          if ( (v19 & 2) != 0 )
            return 0;
          v19 >>= 2;
          v20 = -125;
          v21 = 2;
        }
        v22 = *(_DWORD *)(a1 + 36);
        v23 = *(_QWORD *)(a1 + 8);
        v24 = *(_DWORD *)(a1 + 16);
        *(_BYTE *)(v23 + 41) = 12;
        if ( v22 == 2 )
          v25 = v24 + 45;
        else
          v25 = (v24 | (16 * v22)) + 61;
        *(_WORD *)(v23 + 46) = v25;
        *(_QWORD *)(v23 + 48) = 0;
        *(_BYTE *)(v23 + 73) = 0;
        *(_BYTE *)(v23 + 74) = v19 + 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = v21;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 86LL) = *(_DWORD *)(a1 + 20);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = 2;
      }
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 351;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v20;
    }
LABEL_4:
    v6 = *(_QWORD *)(a1 + 8);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 40) || *(_DWORD *)(a1 + 24) )
    return 0;
  v13 = (v1 >> 21) & 7;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v13 == 7 )
  {
    v35 = word_8DCC0[*(unsigned int *)(a1 + 16)];
    if ( v4 )
    {
      if ( v35 == -1 )
      {
        *(_BYTE *)(v6 + 81) = 11;
        *(_WORD *)(v6 + 86) = *(_DWORD *)(a1 + 16);
      }
      else
      {
        *(_WORD *)(v6 + 86) = v35;
        *(_BYTE *)(v6 + 81) = 1;
      }
      v36 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v36 + 41) = 1;
      v37 = *(_DWORD *)(a1 + 20);
      v38 = v36 + 40;
      *(_BYTE *)(v38 + 5) = 2;
      *(_WORD *)(v38 + 6) = v37;
      v39 = 354;
      if ( *(_DWORD *)(a1 + 20) == 15 )
        goto LABEL_38;
    }
    else
    {
      if ( v35 == -1 )
      {
        *(_BYTE *)(v6 + 41) = 11;
        *(_WORD *)(v6 + 46) = *(_DWORD *)(a1 + 16);
      }
      else
      {
        *(_WORD *)(v6 + 46) = v35;
        *(_BYTE *)(v6 + 41) = 1;
      }
      v45 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v45 + 81) = 1;
      v46 = *(_DWORD *)(a1 + 20);
      *(_BYTE *)(v45 + 85) = 2;
      *(_WORD *)(v45 + 86) = v46;
      v39 = 355;
      if ( *(_DWORD *)(a1 + 20) == 15 )
      {
        v38 = v45 + 80;
LABEL_38:
        if ( *(_DWORD *)(a1 + 16) != 1 )
          return 0;
        *(_BYTE *)(v38 + 32) = 1;
        *(_WORD *)(v38 + 6) = 31;
        v39 = 355 - v4;
      }
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v39;
    v6 = *(_QWORD *)(a1 + 8);
    goto LABEL_5;
  }
  if ( !v13 )
  {
    if ( (v1 & 0x100000) != 0 )
    {
      v14 = v6 + 40;
      v15 = v6 + 80;
    }
    else
    {
      v14 = v6 + 80;
      v15 = v6 + 40;
    }
    *(_BYTE *)(v14 + 1) = 1;
    v16 = *(_DWORD *)(a1 + 20);
    *(_BYTE *)(v14 + 5) = 2;
    *(_WORD *)(v14 + 6) = v16;
    v17 = *(_WORD *)(a1 + 36) | (2 * *(_WORD *)(a1 + 16));
    *(_BYTE *)(v15 + 1) = 1;
    *(_BYTE *)(v15 + 5) = 3;
    *(_WORD *)(v15 + 6) = v17 + 93;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 351;
    v6 = *(_QWORD *)(a1 + 8);
  }
LABEL_5:
  if ( *(_WORD *)(v6 + 24) )
    return *(unsigned __int16 *)(v6 + 26);
  return 0;
}
