/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf16_utf8
// Address: 0x000A2E70

//----- (000A2E70) --------------------------------------------------------
char __cdecl utf16_utf8(int a1, unsigned __int16 *a2, int a3)
{
  char **v3; // edx
  char result; // al
  unsigned __int16 *v5; // edi
  int v6; // esi
  unsigned int v7; // eax
  void *v8; // eax
  int v9; // ebx
  unsigned __int16 v10; // ax
  char *v11; // eax
  char *v12; // ecx
  char *v13; // esi
  char *v14; // eax
  unsigned __int16 *v15; // ecx
  char **v16; // edi
  char v17; // dl
  char v18; // bl
  void *v19; // eax
  char *v20; // ecx
  char *v21; // esi
  char *v22; // eax
  char *v23; // ecx
  int v24; // eax
  void *v25; // eax
  char *v26; // ecx
  char *v27; // esi
  void *v28; // eax
  char *v29; // ecx
  char *v30; // esi
  char *v31; // eax
  char *v32; // ecx
  int v33; // ebx
  int v34; // ebx
  char **v35; // edx
  int v36; // eax
  int v37; // esi
  void *v38; // eax
  char *v39; // eax
  char *v40; // ecx
  char *v41; // esi
  char *v42; // eax
  char *v43; // ecx
  char *v44; // esi
  char *v45; // ecx
  char *v46; // eax
  char *v47; // ecx
  char *v48; // ecx
  unsigned int v49; // [esp+Ch] [ebp-30h]
  char v50; // [esp+Ch] [ebp-30h]
  char v51; // [esp+Ch] [ebp-30h]
  int v52; // [esp+Ch] [ebp-30h]
  char v53; // [esp+Ch] [ebp-30h]
  unsigned __int16 *v54; // [esp+14h] [ebp-28h]
  unsigned __int16 *v55; // [esp+14h] [ebp-28h]
  int v56; // [esp+1Ch] [ebp-20h]
  unsigned int v57; // [esp+20h] [ebp-1Ch]

  v3 = (char **)a1;
  result = 0;
  if ( a1 )
  {
    v5 = a2;
    if ( a2 )
    {
      v6 = a3;
      *(_DWORD *)(a1 + 4) = 0;
      v7 = 16;
      if ( a3 > 0 )
        v7 = a3;
      if ( *(_DWORD *)(a1 + 8) < v7 )
      {
        v8 = qvector_reserve(a1, *(void **)a1, v7, 1u);
        v3 = (char **)a1;
        *(_DWORD *)a1 = v8;
      }
      if ( a3 )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = *v5;
          if ( v6 < 0 && !v10 )
            return 1;
          v49 = v10;
          if ( v10 <= 0x7Fu )
          {
            v11 = *v3;
            v12 = v3[1];
            v13 = v12 - 1;
            if ( !v12 )
              v13 = nullptr;
            if ( v3[2] < v13 + 2 )
            {
              v11 = (char *)qvector_reserve((int)v3, v11, (unsigned int)(v13 + 2), 1u);
              v3 = (char **)a1;
              *(_DWORD *)a1 = v11;
            }
            v3[1] = v13 + 2;
            v14 = &v11[(_DWORD)v13];
            v15 = v5 + 1;
            v16 = v3;
            v17 = v49;
            goto LABEL_66;
          }
          if ( v10 <= 0x7FFu )
            break;
          v24 = v10 & 0xFC00;
          if ( v24 == 55296 )
          {
            v33 = v9 + 1;
            if ( v6 >= 0 && v33 >= v6 )
              return 0;
            v56 = v33;
            v34 = v5[1];
            result = 0;
            if ( (v5[1] & 0xFC00) != 0xDC00 )
              return result;
            v35 = (char **)a1;
            if ( v34 == 0 && v6 < 0 )
              return result;
            v52 = (v49 & 0x3FF) << 10;
            v36 = *(_DWORD *)(a1 + 4);
            v37 = v36 - 1;
            if ( !v36 )
              v37 = 0;
            v57 = v37 + 2;
            v38 = *(void **)a1;
            if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v37 + 2) )
            {
              v38 = qvector_reserve(a1, v38, v57, 1u);
              v35 = (char **)a1;
              *(_DWORD *)a1 = v38;
            }
            v35[1] = (char *)v57;
            *((_BYTE *)v38 + v37) = ((unsigned int)(v52 + 0x10000) >> 18) | 0xF0;
            (*v35)[v37 + 1] = 0;
            v39 = *v35;
            v40 = v35[1];
            v41 = v40 - 1;
            if ( !v40 )
              v41 = nullptr;
            if ( v35[2] < v41 + 2 )
            {
              v39 = (char *)qvector_reserve((int)v35, v39, (unsigned int)(v41 + 2), 1u);
              v35 = (char **)a1;
              *(_DWORD *)a1 = v39;
            }
            v35[1] = v41 + 2;
            v41[(_DWORD)v39] = ((unsigned int)(v52 + 0x10000) >> 12) & 0x3F | 0x80;
            v41[(_DWORD)*v35 + 1] = 0;
            v42 = *v35;
            v43 = v35[1];
            v44 = v43 - 1;
            if ( !v43 )
              v44 = nullptr;
            v45 = v44 + 2;
            v53 = (((unsigned int)&stru_10000 + v52 + (v34 & 0x3C0)) >> 6) & 0x3F | 0x80;
            if ( v35[2] < v44 + 2 )
            {
              v42 = (char *)qvector_reserve((int)v35, v42, (unsigned int)(v44 + 2), 1u);
              v45 = v44 + 2;
              v35 = (char **)a1;
              *(_DWORD *)a1 = v42;
            }
            v35[1] = v45;
            v44[(_DWORD)v42] = v53;
            v44[(_DWORD)*v35 + 1] = 0;
            v46 = *v35;
            v47 = v35[1];
            v13 = v47 - 1;
            if ( !v47 )
              v13 = nullptr;
            v48 = v13 + 2;
            if ( v35[2] < v13 + 2 )
            {
              v46 = (char *)qvector_reserve((int)v35, v46, (unsigned int)(v13 + 2), 1u);
              v48 = v13 + 2;
              v35 = (char **)a1;
              *(_DWORD *)a1 = v46;
            }
            v35[1] = v48;
            v15 = v5 + 2;
            v14 = &v46[(_DWORD)v13];
            v16 = v35;
            v17 = v34 & 0x3F | 0x80;
            goto LABEL_63;
          }
          if ( (unsigned __int16)v24 == 56320 )
            return 0;
          v55 = v5 + 1;
          v25 = *v3;
          v26 = v3[1];
          v27 = v26 - 1;
          if ( !v26 )
            v27 = nullptr;
          if ( v3[2] < v27 + 2 )
          {
            v25 = qvector_reserve((int)v3, v25, (unsigned int)(v27 + 2), 1u);
            v3 = (char **)a1;
            *(_DWORD *)a1 = v25;
          }
          v3[1] = v27 + 2;
          v27[(_DWORD)v25] = (v49 >> 12) | 0xE0;
          v27[(_DWORD)*v3 + 1] = 0;
          v28 = *v3;
          v29 = v3[1];
          v30 = v29 - 1;
          if ( !v29 )
            v30 = nullptr;
          if ( v3[2] < v30 + 2 )
          {
            v28 = qvector_reserve((int)v3, v28, (unsigned int)(v30 + 2), 1u);
            v3 = (char **)a1;
            *(_DWORD *)a1 = v28;
          }
          v3[1] = v30 + 2;
          v30[(_DWORD)v28] = (v49 >> 6) & 0x3F | 0x80;
          v30[(_DWORD)*v3 + 1] = 0;
          v51 = v49 & 0x3F;
          v31 = *v3;
          v32 = v3[1];
          v13 = v32 - 1;
          if ( !v32 )
            v13 = nullptr;
          if ( v3[2] >= v13 + 2 )
          {
            v16 = v3;
          }
          else
          {
            v31 = (char *)qvector_reserve((int)v3, v31, (unsigned int)(v13 + 2), 1u);
            v16 = (char **)a1;
            *(_DWORD *)a1 = v31;
          }
          v17 = v51 | 0x80;
          v16[1] = v13 + 2;
          v14 = &v31[(_DWORD)v13];
          v15 = v55;
LABEL_66:
          *v14 = v17;
          v13[(_DWORD)*v16 + 1] = 0;
          ++v9;
          v6 = a3;
          v3 = v16;
          v5 = v15;
          if ( a3 >= 0 && v9 >= a3 )
            return 1;
        }
        v54 = v5 + 1;
        v56 = v9;
        v18 = (v10 >> 6) & 0x1F | 0xC0;
        v19 = *v3;
        v20 = v3[1];
        v21 = v20 - 1;
        if ( !v20 )
          v21 = nullptr;
        if ( v3[2] < v21 + 2 )
        {
          v19 = qvector_reserve((int)v3, v19, (unsigned int)(v21 + 2), 1u);
          v3 = (char **)a1;
          *(_DWORD *)a1 = v19;
        }
        v3[1] = v21 + 2;
        v21[(_DWORD)v19] = v18;
        v21[(_DWORD)*v3 + 1] = 0;
        v50 = v49 & 0x3F;
        v22 = *v3;
        v23 = v3[1];
        v13 = v23 - 1;
        if ( !v23 )
          v13 = nullptr;
        if ( v3[2] >= v13 + 2 )
        {
          v16 = v3;
        }
        else
        {
          v22 = (char *)qvector_reserve((int)v3, v22, (unsigned int)(v13 + 2), 1u);
          v16 = (char **)a1;
          *(_DWORD *)a1 = v22;
        }
        v15 = v54;
        v17 = v50 | 0x80;
        v16[1] = v13 + 2;
        v14 = &v22[(_DWORD)v13];
LABEL_63:
        v9 = v56;
        goto LABEL_66;
      }
      return 1;
    }
  }
  return result;
}
// 10000: using guessed type Elf32_Rel stru_10000;
