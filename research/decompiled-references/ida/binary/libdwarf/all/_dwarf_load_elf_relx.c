__int64 __fastcall dwarf_load_elf_relx(__int64 a1, unsigned __int64 a2, int a3, _DWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  int v13; // esi
  size_t v14; // r13
  size_t v15; // r14
  size_t v16; // rax
  size_t v17; // r8
  unsigned __int64 v18; // rbx
  char *v19; // rax
  int random; // r14d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  char *v23; // r15
  char *v24; // r13
  char *v25; // r14
  int v26; // edx
  unsigned __int64 v27; // rsi
  char *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  char *v31; // r15
  _QWORD *v32; // r14
  char *v33; // r13
  char *v34; // rsi
  _QWORD *v35; // rdi
  unsigned __int64 v36; // rax
  char *v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r13
  char *v40; // r15
  char *v41; // r14
  int v42; // edx
  unsigned __int64 v43; // rsi
  char *v44; // rax
  unsigned __int64 v45; // rcx
  char *v46; // r14
  _QWORD *v47; // r15
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rax
  int v50; // edx
  int v51; // edx
  _QWORD *v52; // [rsp+0h] [rbp-78h]
  char *ptr; // [rsp+8h] [rbp-70h]
  bool v54; // [rsp+10h] [rbp-68h]
  unsigned __int64 v55; // [rsp+10h] [rbp-68h]
  unsigned __int64 v56; // [rsp+10h] [rbp-68h]
  bool v57; // [rsp+18h] [rbp-60h]
  int v58; // [rsp+20h] [rbp-58h]
  int v59; // [rsp+2Ch] [rbp-4Ch]
  int v60; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  if ( !a1 )
  {
    *a4 = 436;
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 168);
  if ( a2 >= v5 )
    goto LABEL_8;
  v7 = *(_QWORD *)(a1 + 192);
  v8 = (_QWORD *)(v7 + 184 * a2);
  v9 = v8[3];
  if ( (v9 & 0xFFFFFFFFFFFFFFF7LL) == 0 )
    return 0xFFFFFFFFLL;
  if ( v9 != 4 && v9 != 9 )
    return 0;
  v11 = v8[9];
  if ( v11 >= v5 )
  {
LABEL_8:
    *a4 = 446;
    return 1;
  }
  if ( !*(_BYTE *)(v7 + 184 * v11 + 176) || !(_DWORD)v11 )
    return 0;
  v12 = *(unsigned __int8 *)(a1 + 56);
  if ( v12 == 64 )
  {
    v13 = 8;
  }
  else
  {
    if ( v12 != 32 )
    {
      *a4 = 415;
      return 1;
    }
    v13 = 4;
  }
  v14 = v8[7];
  v15 = v8[6];
  if ( !v14 )
    return 0xFFFFFFFFLL;
  v16 = v8[7];
  v17 = *(_QWORD *)(a1 + 40);
  if ( v15 >= v14 )
    v16 = v8[6];
  if ( v17 < v16 || v17 < v15 + v14 )
  {
    *a4 = 470;
    return 1;
  }
  if ( v13 == 4 )
  {
    if ( a3 == 1 )
    {
      v18 = v14 / 0xC;
      if ( v14 != 12 * (v14 / 0xC) )
        goto LABEL_40;
      v52 = malloc(48 * (v14 / 0xC));
      if ( !v52 )
        goto LABEL_84;
      v44 = (char *)malloc(v14);
      ptr = v44;
      if ( !v44 )
        goto LABEL_83;
      random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v44);
      if ( !random )
      {
        v45 = v8[7];
        if ( v45 < *(_QWORD *)(a1 + 40) )
        {
          v56 = v45 / 0xC;
          if ( v45 == 12 * (v45 / 0xC) )
          {
            if ( v45 > 0xB )
            {
              v46 = ptr;
              v47 = v52;
              v48 = 0;
              do
              {
                *v47 = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v47, v46, 4);
                v47[1] = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v47 + 1, v46 + 4, 4);
                v47[4] = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v47 + 4, v46 + 8, 4);
                if ( *((char *)v47 + 35) < 0 )
                  *((_DWORD *)v47 + 9) = -1;
                v49 = v47[1];
                ++v48;
                v46 += 12;
                v47 += 6;
                *((_DWORD *)v47 - 1) = 1;
                *(v47 - 3) = (unsigned __int8)v49;
                *(v47 - 4) = v49 >> 8;
              }
              while ( v48 < v56 );
            }
            goto LABEL_51;
          }
        }
        goto LABEL_53;
      }
    }
    else
    {
      if ( (v14 & 7) != 0 )
        goto LABEL_40;
      v18 = v14 >> 3;
      v52 = malloc(48 * (v14 >> 3));
      if ( !v52 )
        goto LABEL_84;
      v28 = (char *)malloc(v14);
      ptr = v28;
      if ( !v28 )
        goto LABEL_83;
      random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v28);
      if ( !random )
      {
        v29 = v8[7];
        if ( v29 < *(_QWORD *)(a1 + 40) && (v29 & 7) == 0 )
        {
          v30 = v29 >> 3;
          if ( v30 )
          {
            v31 = ptr;
            v32 = v52;
            v33 = &ptr[8 * v30];
            do
            {
              *v32 = 0;
              (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v32, v31, 4);
              v34 = v31 + 4;
              v35 = v32 + 1;
              v32[1] = 0;
              v31 += 8;
              v32 += 6;
              (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v35, v34, 4);
              v36 = *(v32 - 5);
              *(v32 - 2) = 0;
              *((_DWORD *)v32 - 1) = 0;
              *(v32 - 3) = (unsigned __int8)v36;
              *(v32 - 4) = v36 >> 8;
            }
            while ( v31 != v33 );
          }
          goto LABEL_51;
        }
        goto LABEL_53;
      }
    }
LABEL_67:
    free(ptr);
    free(v52);
    if ( random == 1 )
      return 1;
    if ( random != -1 )
    {
      v52 = nullptr;
      v18 = 0;
      goto LABEL_52;
    }
    return 0xFFFFFFFFLL;
  }
  if ( a3 == 1 )
  {
    v18 = v14 / 0x18;
    if ( v14 != 24 * (v14 / 0x18) )
      goto LABEL_40;
    v52 = malloc(48 * (v14 / 0x18));
    if ( !v52 )
      goto LABEL_84;
    v37 = (char *)malloc(v14);
    ptr = v37;
    if ( !v37 )
      goto LABEL_83;
    random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v37);
    if ( !random )
    {
      v38 = v8[7];
      if ( v38 < *(_QWORD *)(a1 + 40) )
      {
        v55 = v38 / 0x18;
        if ( v38 == 24 * (v38 / 0x18) )
        {
          if ( v38 > 0x17 )
          {
            v59 = *(_DWORD *)(a1 + 20);
            v39 = 0;
            v57 = v59 == 8 && *(_DWORD *)(a1 + 32) == 2;
            v40 = ptr;
            v41 = (char *)(v52 + 2);
            do
            {
              *((_QWORD *)v41 - 2) = 0;
              (*(void (__fastcall **)(char *, char *, __int64))(a1 + 96))(v41 - 16, v40, 8);
              *((_QWORD *)v41 - 1) = 0;
              (*(void (__fastcall **)(char *, char *, __int64))(a1 + 96))(v41 - 8, v40 + 8, 8);
              *((_QWORD *)v41 + 2) = 0;
              (*(void (__fastcall **)(char *, char *, __int64))(a1 + 96))(v41 + 16, v40 + 16, 8);
              if ( v57 )
              {
                v42 = *((_DWORD *)v40 + 2);
                *(_QWORD *)v41 = 0;
                v60 = v42;
                (*(void (__fastcall **)(char *, int *, __int64))(a1 + 96))(v41, &v60, 4);
                *((_QWORD *)v41 + 1) = v40[15];
                v41[24] = v40[14];
                v41[25] = v40[13];
              }
              else if ( v59 == 43 )
              {
                v51 = *((_DWORD *)v40 + 2);
                *(_QWORD *)v41 = 0;
                v60 = v51;
                (*(void (__fastcall **)(char *, int *, __int64))(a1 + 96))(v41, &v60, 4);
                *((_QWORD *)v41 + 1) = v40[15];
              }
              else
              {
                v43 = *((_QWORD *)v41 - 1);
                *((_QWORD *)v41 + 1) = (unsigned int)v43;
                *(_QWORD *)v41 = HIDWORD(v43);
              }
              ++v39;
              v40 += 24;
              v41 += 48;
              *((_DWORD *)v41 - 5) = 1;
            }
            while ( v39 < v55 );
          }
          goto LABEL_51;
        }
      }
LABEL_53:
      *a4 = 489;
      free(ptr);
      free(v52);
      return 1;
    }
    goto LABEL_67;
  }
  if ( (v14 & 0xF) != 0 )
  {
LABEL_40:
    *a4 = 435;
    return 1;
  }
  v18 = v14 >> 4;
  v52 = malloc(48 * (v14 >> 4));
  if ( !v52 )
  {
LABEL_84:
    *a4 = 62;
    return 1;
  }
  v19 = (char *)malloc(v14);
  ptr = v19;
  if ( !v19 )
  {
LABEL_83:
    free(v52);
    goto LABEL_84;
  }
  random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v19);
  if ( random )
    goto LABEL_67;
  v21 = v8[7];
  if ( v21 >= *(_QWORD *)(a1 + 40) || (v21 & 0xF) != 0 )
    goto LABEL_53;
  v22 = v21 >> 4;
  if ( v22 )
  {
    v23 = ptr;
    v58 = *(_DWORD *)(a1 + 20);
    v24 = &ptr[16 * v22];
    v54 = v58 == 8 && *(_DWORD *)(a1 + 32) == 2;
    v25 = (char *)(v52 + 2);
    do
    {
      *((_QWORD *)v25 - 2) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 96))(v25 - 16, v23, 8);
      *((_QWORD *)v25 - 1) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 96))(v25 - 8, v23 + 8, 8);
      *((_QWORD *)v25 + 2) = 0;
      if ( v54 )
      {
        v26 = *((_DWORD *)v23 + 2);
        *(_QWORD *)v25 = 0;
        v60 = v26;
        (*(void (__fastcall **)(char *, int *, __int64))(a1 + 96))(v25, &v60, 4);
        *((_QWORD *)v25 + 1) = v23[15];
        v25[24] = v23[14];
        v25[25] = v23[13];
      }
      else if ( v58 == 43 )
      {
        v50 = *((_DWORD *)v23 + 2);
        *(_QWORD *)v25 = 0;
        v60 = v50;
        (*(void (__fastcall **)(char *, int *, __int64))(a1 + 96))(v25, &v60, 4);
        *((_QWORD *)v25 + 1) = v23[15];
      }
      else
      {
        v27 = *((_QWORD *)v25 - 1);
        *((_QWORD *)v25 + 1) = (unsigned int)v27;
        *(_QWORD *)v25 = HIDWORD(v27);
      }
      v23 += 16;
      *((_DWORD *)v25 + 7) = 0;
      v25 += 48;
    }
    while ( v24 != v23 );
  }
LABEL_51:
  free(ptr);
LABEL_52:
  v8[17] = v18;
  v8[18] = v52;
  return 0;
}

