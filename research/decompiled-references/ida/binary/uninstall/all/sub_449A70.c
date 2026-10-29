__int64 __fastcall sub_449A70(int a1, __int64 a2, int *a3)
{
  int v3; // edi
  int v4; // r15d
  int v5; // r14d
  int v6; // r13d
  int v7; // ebp
  int v8; // r12d
  int v9; // edx
  _BYTE *v10; // r11
  _BYTE *v11; // r10
  _BYTE *v12; // r9
  _BYTE *v13; // r8
  int v14; // ecx
  char v15; // al
  int v16; // ecx
  char v17; // al
  int v18; // ebx
  int v19; // ecx
  char v20; // al
  int v21; // ecx
  unsigned __int8 *v22; // r11
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned __int8 *v26; // r10
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  unsigned __int8 *v30; // r9
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  unsigned __int8 *v34; // r8
  int v35; // ecx
  int v36; // eax
  int v38; // [rsp+0h] [rbp-3Ch]

  v3 = a1 - *(_DWORD *)(a2 + 104);
  v4 = -1;
  v5 = 0x7FFFFFFF;
  v6 = *(_DWORD *)(a2 + 64);
  v38 = -1;
  if ( v3 < 0 )
    return 0;
  if ( *(_DWORD *)(a2 + 72) <= v3 )
    return 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(_BYTE **)(a2 + 136);
  v11 = *(_BYTE **)(a2 + 144);
  v12 = *(_BYTE **)(a2 + 152);
  v13 = *(_BYTE **)(a2 + 160);
  if ( v6 <= 0 )
    return 0;
  do
  {
    if ( *v10 == 0xFF )
    {
      v22 = v10 + 1;
      v23 = (v22[2] << 8) | (v22[1] << 16) | ((char)*v22 << 24);
      v24 = v22[3];
      v10 = v22 + 4;
      v25 = v24 | v23;
      v15 = *v11;
      v9 += v25;
      if ( *v11 != 0xFF )
      {
LABEL_6:
        v16 = v15;
        v17 = *v12;
        ++v11;
        v18 = v9 + v16 - 1;
        if ( *v12 != 0xFF )
          goto LABEL_7;
        goto LABEL_16;
      }
    }
    else
    {
      v14 = (char)*v10;
      v15 = *v11;
      ++v10;
      v9 += v14;
      if ( *v11 != 0xFF )
        goto LABEL_6;
    }
    v26 = v11 + 1;
    v27 = (v26[2] << 8) | (v26[1] << 16) | ((char)*v26 << 24);
    v28 = v26[3];
    v11 = v26 + 4;
    v29 = v28 | v27;
    v17 = *v12;
    v18 = v9 + v29 - 1;
    if ( *v12 != 0xFF )
    {
LABEL_7:
      v19 = v17;
      v20 = *v13;
      ++v12;
      v8 += v19;
      if ( *v13 != 0xFF )
        goto LABEL_8;
      goto LABEL_17;
    }
LABEL_16:
    v30 = v12 + 1;
    v31 = (v30[2] << 8) | (v30[1] << 16) | ((char)*v30 << 24);
    v32 = v30[3];
    v12 = v30 + 4;
    v33 = v32 | v31;
    v20 = *v13;
    v8 += v33;
    if ( *v13 != 0xFF )
    {
LABEL_8:
      ++v13;
      v21 = v20;
      if ( v9 > v3 )
        break;
      goto LABEL_9;
    }
LABEL_17:
    v34 = v13 + 1;
    v35 = (v34[2] << 8) | (v34[1] << 16) | ((char)*v34 << 24);
    v36 = v34[3];
    v13 = v34 + 4;
    v21 = v36 | v35;
    if ( v9 > v3 )
      break;
LABEL_9:
    if ( v3 <= v18 && v3 - v9 <= v5 )
    {
      v5 = v3 - v9;
      v4 = v8;
      v38 = v21;
    }
    ++v7;
  }
  while ( v7 < v6 );
  if ( v5 == 0x7FFFFFFF )
    return 0;
  if ( a3 )
    *a3 = v38;
  return *(_QWORD *)(a2 + 40) + v4;
}

