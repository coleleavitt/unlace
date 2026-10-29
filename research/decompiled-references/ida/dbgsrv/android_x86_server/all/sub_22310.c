/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22310
// Address: 0x00022310

//----- (00022310) --------------------------------------------------------
unsigned int __cdecl sub_22310(int a1, int *a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // esi
  const char **v6; // edi
  const char *v7; // eax
  unsigned int v8; // ecx
  const char *v9; // eax
  const char *v10; // edx
  const char *v11; // ecx
  _DWORD *v12; // esi
  int v13; // ecx
  bool v14; // zf
  char *v15; // ecx
  unsigned int v16; // edi
  const char **v17; // esi
  const char *v18; // eax
  _DWORD *v19; // eax
  size_t v20; // eax
  const char *v21; // ecx
  size_t v22; // edi
  unsigned int v23; // esi
  void *v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // esi
  int v28; // edi
  int v29; // eax
  _DWORD *v30; // eax
  int v31; // ecx
  int *v32; // eax
  int v33; // eax
  int v34; // edi
  const char **v35; // esi
  int v36; // ecx
  const char *v37; // ecx
  int v38; // eax
  unsigned int v39; // esi
  _DWORD *v40; // ecx
  _DWORD *v41; // eax
  char *v42; // edx
  unsigned int v43; // eax
  char *v44; // ecx
  int v46; // [esp+0h] [ebp-9Ch]
  const char *v47; // [esp+18h] [ebp-84h]
  const char *v48; // [esp+18h] [ebp-84h]
  int *v49; // [esp+1Ch] [ebp-80h]
  _DWORD *v50; // [esp+1Ch] [ebp-80h]
  int v51; // [esp+20h] [ebp-7Ch]
  _DWORD *v52; // [esp+20h] [ebp-7Ch]
  int v53; // [esp+24h] [ebp-78h]
  char *v54; // [esp+24h] [ebp-78h]
  unsigned int v55; // [esp+28h] [ebp-74h]
  unsigned int v56; // [esp+28h] [ebp-74h]
  int v57; // [esp+28h] [ebp-74h]
  int v58; // [esp+2Ch] [ebp-70h]
  unsigned int v59; // [esp+34h] [ebp-68h]
  char *v60; // [esp+38h] [ebp-64h] BYREF
  int v61; // [esp+3Ch] [ebp-60h]
  int v62; // [esp+40h] [ebp-5Ch]
  const char **v63; // [esp+48h] [ebp-54h] BYREF
  int v64; // [esp+4Ch] [ebp-50h]
  int v65; // [esp+50h] [ebp-4Ch]
  unsigned int v66; // [esp+54h] [ebp-48h] BYREF
  int v67; // [esp+58h] [ebp-44h] BYREF
  int v68; // [esp+5Ch] [ebp-40h]
  int v69; // [esp+60h] [ebp-3Ch]
  char v70; // [esp+64h] [ebp-38h]
  int v71; // [esp+68h] [ebp-34h]
  int v72; // [esp+6Ch] [ebp-30h] BYREF
  unsigned int v73; // [esp+70h] [ebp-2Ch]
  unsigned int v74; // [esp+74h] [ebp-28h]
  int v75; // [esp+78h] [ebp-24h]
  int v76; // [esp+7Ch] [ebp-20h]
  int v77; // [esp+80h] [ebp-1Ch]
  unsigned int v78; // [esp+88h] [ebp-14h]

  v78 = __readgsdword(0x14u);
  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  v59 = a2[1];
  if ( v59 )
  {
    v2 = 0;
    do
    {
      v3 = *a2;
      v51 = v2;
      v4 = 5 * v2;
      v47 = byte_EF875;
      if ( *(_DWORD *)(*a2 + 8 * v4 + 12) )
        v47 = *(const char **)(v3 + 8 * v4 + 8);
      v53 = *a2;
      v58 = v4;
      v49 = (int *)(v3 + 8 * v4);
      v55 = v64;
      if ( !v64 )
        goto LABEL_22;
      v5 = 0;
      v6 = v63;
      while ( 1 )
      {
        v7 = v6[3] ? v6[2] : byte_EF875;
        if ( !strcmp(v7, v47) )
          break;
        ++v5;
        v6 += 10;
        if ( v5 >= v55 )
          goto LABEL_22;
      }
      if ( v6 )
      {
        v8 = *v49;
        v9 = *v6;
        if ( (unsigned int)*v6 > *v49 )
        {
          *v6 = (const char *)v8;
          v9 = (const char *)v8;
        }
        v10 = v6[1];
        if ( (unsigned int)v10 < v8 )
        {
          v6[1] = (const char *)v8;
          v10 = (const char *)v8;
        }
        v11 = *(const char **)(v53 + 8 * v58 + 4);
        if ( v9 > v11 )
          *v6 = v11;
        if ( v10 < v11 )
          v6[1] = v11;
      }
      else
      {
LABEL_22:
        sub_2AAD0((int)&v63, v49);
      }
      v2 = v51 + 1;
    }
    while ( v51 + 1 < v59 );
  }
  v12 = *(_DWORD **)(a1 + 556);
  v52 = (_DWORD *)(a1 + 560);
  while ( v52 != v12 )
  {
    v15 = byte_EF875;
    if ( v12[8] )
      v15 = (char *)v12[7];
    v50 = v12;
    v56 = v64;
    v48 = v15;
    if ( !v64 )
      goto LABEL_44;
    v16 = 0;
    v17 = v63;
    while ( 1 )
    {
      v18 = v17[3] ? v17[2] : byte_EF875;
      if ( !strcmp(v18, v15) )
        break;
      ++v16;
      v17 += 10;
      v15 = (char *)v48;
      if ( v16 >= v56 )
        goto LABEL_44;
    }
    v15 = (char *)v48;
    if ( v17 )
    {
      v19 = (_DWORD *)v50[1];
      if ( v19 )
      {
        do
        {
          v12 = v19;
          v19 = (_DWORD *)*v19;
        }
        while ( v19 );
      }
      else
      {
        v12 = (_DWORD *)v50[2];
        if ( (_DWORD *)*v12 != v50 )
        {
          v13 = (int)(v50 + 2);
          do
          {
            v12 = *(_DWORD **)(*(_DWORD *)v13 + 8);
            v14 = *v12 == *(_DWORD *)v13;
            v13 = *(_DWORD *)v13 + 8;
          }
          while ( !v14 );
        }
      }
    }
    else
    {
LABEL_44:
      if ( !sub_20810((_DWORD *)a1, 8, v15) )
      {
        v67 = -1;
        v68 = 0;
        v69 = -1;
        v70 = 0;
        v72 = 0;
        v71 = 0;
        v74 = 0;
        v73 = 0;
        v76 = 0;
        v75 = 0;
        v77 = 0;
        set_debug_event_code(&v67, 9);
        if ( (v71 & 0xFFFFFFFu) - 9 >= 2 && (v71 & 0xFFFFFFF) != 3 )
        {
          if ( !(_BYTE)under_debugger )
            interr(3297);
          BUG();
        }
        if ( v48 && (v20 = strlen(v48), v21 = v48, v20) )
        {
          v22 = v20;
          v23 = v20 + 1;
          v24 = (void *)v72;
          if ( v74 < v23 )
          {
            v24 = qvector_reserve((int)&v72, (void *)v72, v23, 1u);
            v72 = (int)v24;
            v21 = v48;
          }
          v73 = v23;
          memmove(v24, v21, v22);
          *(_BYTE *)(v72 + v22) = 0;
        }
        else
        {
          v73 = 0;
        }
        v67 = *(_DWORD *)(a1 + 624);
        v68 = v67;
        v69 = -1;
        v70 = 1;
        if ( (v71 & 0xFFFFFFF) != 0 )
        {
          v25 = a1;
          v26 = *(_DWORD *)(a1 + 72);
          if ( !v26 )
          {
            sub_2B960((_DWORD *)(a1 + 56));
            v25 = a1;
            v26 = *(_DWORD *)(a1 + 72);
          }
          v27 = *(_DWORD *)(v25 + 60);
          v28 = *(_DWORD *)(v27 + 4 * (v26 / 0x5D));
          v29 = v28 + 44 * (v26 % 0x5D);
          if ( *(_DWORD *)(a1 + 64) == v27 )
            v29 = 0;
          if ( v29 == v28 )
            v29 = *(_DWORD *)(v27 + 4 * (v26 / 0x5D) - 4) + 4092;
          *(_DWORD *)(v29 - 44) = -1;
          *(_DWORD *)(v29 - 40) = 0;
          *(_DWORD *)(v29 - 36) = -1;
          *(_BYTE *)(v29 - 32) = 0;
          *(_DWORD *)(v29 - 28) = 0;
          copy_debug_event(v29 - 44, &v67);
          --*(_DWORD *)(a1 + 72);
          ++*(_DWORD *)(a1 + 76);
          *(_BYTE *)(a1 + 676) = 0;
        }
        free_debug_event(&v67);
      }
      v30 = (_DWORD *)v50[1];
      if ( v30 )
      {
        do
        {
          v12 = v30;
          v30 = (_DWORD *)*v30;
        }
        while ( v30 );
        v31 = a1;
      }
      else
      {
        v12 = (_DWORD *)v50[2];
        v31 = a1;
        if ( (_DWORD *)*v12 != v50 )
        {
          v32 = v50 + 2;
          do
          {
            v33 = *v32;
            v12 = *(_DWORD **)(v33 + 8);
            v14 = *v12 == v33;
            v32 = (int *)(v33 + 8);
          }
          while ( !v14 );
        }
      }
      if ( *(_DWORD **)(v31 + 556) == v50 )
        *(_DWORD *)(v31 + 556) = v12;
      --*(_DWORD *)(v31 + 564);
      sub_2F420(*(int ***)(v31 + 560), (int **)v50);
      sub_25060((int)(v50 + 5));
      operator delete(v50);
    }
  }
  v57 = v64;
  if ( v64 > 0 )
  {
    v34 = 0;
    do
    {
      v35 = v63;
      v36 = 5 * v34;
      if ( (unsigned int)v63[10 * v34 + 3] >= 2 )
      {
        if ( *(_BYTE *)(a1 + 389) )
          goto LABEL_79;
        v37 = byte_EF875;
        if ( *(_DWORD *)(a1 + 252) )
          v37 = *(const char **)(a1 + 248);
        v38 = strcmp(v63[10 * v34 + 2], v37);
        v36 = 5 * v34;
        if ( v38 )
        {
LABEL_79:
          v39 = (unsigned int)v35[2 * v36];
          v40 = (_DWORD *)*v52;
          if ( !*v52 )
            goto LABEL_87;
          v41 = (_DWORD *)(a1 + 560);
          do
          {
            if ( v40[4] >= v39 )
              v41 = v40;
            v40 = (_DWORD *)v40[v40[4] < v39];
          }
          while ( v40 );
          if ( v41 == v52 || v39 < v41[4] )
          {
LABEL_87:
            if ( sub_21300(a1, -1, v39, &v66, 4u, 0) == 4 && v66 == 1179403647 )
            {
              v60 = nullptr;
              v61 = 0;
              v62 = 0;
              v42 = byte_EF875;
              if ( v63[10 * v34 + 3] )
                v42 = (char *)v63[10 * v34 + 2];
              v68 = 4;
              v67 = (int)off_1346F0;
              v69 = (int)&v60;
              v54 = v42;
              sub_40950(v42, &v67, 0);
              v43 = sub_26E90(v46, &v63, (unsigned int *)&v63[10 * v34]);
              if ( v61 )
                v44 = v60;
              else
                v44 = byte_EF875;
              sub_24780(a1, v39, v43, v54, v44);
              if ( v60 )
              {
                v61 = 0;
                qfree(v60);
                v60 = nullptr;
                v62 = 0;
              }
            }
          }
        }
      }
      ++v34;
    }
    while ( v34 < v57 );
  }
  sub_1FCF0(a1);
  if ( v63 )
  {
    sub_1BDA0((int *)&v63, 0);
    qfree(v63);
    v63 = nullptr;
    v65 = 0;
  }
  return __readgsdword(0x14u);
}
// 22953: variable 'v46' is possibly undefined
// 1346F0: using guessed type int (*off_1346F0[3])();
// 13E34C: using guessed type int under_debugger;
