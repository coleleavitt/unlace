/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_demangle
// Address: 0x000C1300

//----- (000C1300) --------------------------------------------------------
char *_cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus)
{
  char *v4; // edi
  size_t v5; // eax
  char *v6; // edi
  int *v7; // edx
  int v8; // edx
  int *v9; // eax
  char *v10; // edi
  char *v11; // edx
  char *v12; // ecx
  size_t v13; // eax
  char *v14; // eax
  size_t v15; // edx
  unsigned int v16; // ecx
  char *v17; // eax
  size_t v18; // eax
  int *v19; // eax
  int *v20; // ecx
  char *v22; // ecx
  char *v23; // edx
  char *v24; // edx
  unsigned int v25; // eax
  int v26; // ecx
  int *v27; // eax
  _DWORD *v28; // edx
  int v29; // [esp+10h] [ebp-11CCh]
  int *v30; // [esp+10h] [ebp-11CCh]
  char *v31; // [esp+10h] [ebp-11CCh]
  int *v32; // [esp+10h] [ebp-11CCh]
  char *v33; // [esp+14h] [ebp-11C8h]
  char *v34; // [esp+18h] [ebp-11C4h]
  char *v35; // [esp+18h] [ebp-11C4h]
  _DWORD *v36; // [esp+1Ch] [ebp-11C0h]
  char v37; // [esp+1Ch] [ebp-11C0h]
  char *v38; // [esp+20h] [ebp-11BCh]
  char *v39; // [esp+28h] [ebp-11B4h] BYREF
  size_t v40; // [esp+2Ch] [ebp-11B0h]
  unsigned int v41; // [esp+30h] [ebp-11ACh]
  int v42; // [esp+34h] [ebp-11A8h]
  int v43; // [esp+38h] [ebp-11A4h]
  char *v44; // [esp+40h] [ebp-119Ch] BYREF
  char *v45; // [esp+44h] [ebp-1198h]
  _BYTE *v46; // [esp+48h] [ebp-1194h]
  _BYTE *v47; // [esp+4Ch] [ebp-1190h]
  void **v48; // [esp+50h] [ebp-118Ch]
  _BYTE v49[128]; // [esp+54h] [ebp-1188h] BYREF
  void *v50[3]; // [esp+D4h] [ebp-1108h] BYREF
  _BYTE v51[128]; // [esp+E0h] [ebp-10FCh] BYREF
  void *v52[3]; // [esp+160h] [ebp-107Ch] BYREF
  _BYTE v53[32]; // [esp+16Ch] [ebp-1070h] BYREF
  void *v54[3]; // [esp+18Ch] [ebp-1050h] BYREF
  _BYTE v55[16]; // [esp+198h] [ebp-1044h] BYREF
  __int16 v56; // [esp+1A8h] [ebp-1034h] BYREF
  char v57; // [esp+1AAh] [ebp-1032h]
  int v58; // [esp+1B0h] [ebp-102Ch] BYREF
  int v59; // [esp+1B4h] [ebp-1028h]
  int *v60; // [esp+11B0h] [ebp-2Ch]

  if ( !lpmangled || lpout && !lpoutlen )
  {
    v4 = nullptr;
    if ( lpstatus )
      *lpstatus = -3;
    return v4;
  }
  v38 = lpout;
  v5 = strlen(lpmangled);
  v44 = (char *)lpmangled;
  v45 = (char *)&lpmangled[v5];
  v46 = v49;
  v47 = v49;
  v48 = v50;
  v50[0] = v51;
  v50[1] = v51;
  v50[2] = v52;
  v52[0] = v53;
  v52[1] = v53;
  v52[2] = v54;
  v54[0] = v55;
  v54[1] = v55;
  v54[2] = &v56;
  v56 = 1;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = &v58;
  v42 = -1;
  v43 = -1;
  if ( v5 >= 2 && *lpmangled == 95 )
  {
    if ( lpmangled[1] == 90 )
    {
      v44 = (char *)(lpmangled + 2);
      v6 = sub_C1A20(&v44);
      v29 = -2;
      if ( v6 )
      {
        v7 = lpstatus;
        if ( v45 == v44 )
          goto LABEL_46;
        if ( *v44 == 46 )
        {
          v34 = v44;
          v33 = v45;
          v8 = v60[1];
          v30 = v60;
          if ( (unsigned int)(v8 + 32) < 0xFF8 )
          {
            v36 = v60 + 1;
          }
          else
          {
            v9 = (int *)operator new[](0x1000u);
            *v9 = (int)v30;
            v36 = v9 + 1;
            v9[1] = 0;
            v60 = v9;
            v8 = 0;
            v30 = v9;
          }
          *v36 = v8 + 32;
          *(int *)((char *)v30 + v8 + 12) = 16843009;
          *(int *)((char *)v30 + v8 + 8) = (int)off_13A7EC;
          *(int *)((char *)v30 + v8 + 16) = (int)v6;
          *(int *)((char *)v30 + v8 + 20) = (int)v34;
          *(int *)((char *)v30 + v8 + 24) = (int)v33;
          v6 = (char *)v30 + v8 + 8;
          v44 = v45;
LABEL_45:
          v7 = lpstatus;
LABEL_46:
          v12 = lpout;
          if ( !v6 )
            goto LABEL_47;
          goto LABEL_23;
        }
LABEL_40:
        v12 = lpout;
        if ( !v7 )
          goto LABEL_49;
        goto LABEL_48;
      }
LABEL_39:
      v7 = lpstatus;
      goto LABEL_40;
    }
    if ( v5 >= 4 && lpmangled[1] == 95 && lpmangled[2] == 95 && lpmangled[3] == 90 )
    {
      v44 = (char *)(lpmangled + 4);
      v10 = sub_C1A20(&v44);
      v29 = -2;
      if ( v10 )
      {
        v11 = v44;
        if ( (unsigned int)(v45 - v44) < 0xD )
          goto LABEL_20;
        v12 = lpout;
        v29 = -2;
        if ( *v44 != 95 || v44[1] != 98 || v44[2] != 108 || v44[3] != 111 )
          goto LABEL_37;
        if ( v44[4] != 99
          || v44[5] != 107
          || v44[6] != 95
          || v44[7] != 105
          || v44[8] != 110
          || v44[9] != 118
          || v44[10] != 111
          || v44[11] != 107
          || v44[12] != 101 )
        {
          goto LABEL_20;
        }
        v22 = v44 + 13;
        v44 += 13;
        if ( v11 + 13 != v45 )
        {
          v31 = nullptr;
          if ( *v22 == 95 )
          {
            v44 = v11 + 14;
            v37 = 1;
            v22 = v11 + 14;
          }
          else
          {
            v37 = 0;
          }
          v23 = v45;
          v35 = nullptr;
          if ( v45 != v22 )
          {
            v35 = nullptr;
            v23 = v22;
            v31 = nullptr;
            if ( (unsigned int)(*v22 - 48) <= 9 )
            {
              v24 = v22 + 1;
              while ( 1 )
              {
                v44 = v24;
                if ( v45 == v24 )
                  break;
                v25 = *v24++ - 48;
                if ( v25 >= 0xA )
                {
                  v23 = v24 - 1;
                  v35 = v23;
                  goto LABEL_88;
                }
              }
              v23 = v45;
              v35 = v45;
LABEL_88:
              v31 = v22;
            }
          }
          v22 = v23;
          if ( ((v31 == v35) & (unsigned __int8)v37) != 0 )
            goto LABEL_20;
        }
        if ( v45 != v22 )
        {
LABEL_20:
          v7 = lpstatus;
          v12 = lpout;
          goto LABEL_47;
        }
        v32 = v60;
        v26 = v60[1];
        if ( (unsigned int)(v26 + 32) < 0xFF8 )
        {
          v28 = v60 + 1;
        }
        else
        {
          v27 = (int *)operator new[](0x1000u);
          *v27 = (int)v32;
          v28 = v27 + 1;
          v27[1] = 0;
          v60 = v27;
          v26 = 0;
          v32 = v27;
        }
        *v28 = v26 + 32;
        *(int *)((char *)v32 + v26 + 12) = 16843029;
        *(int *)((char *)v32 + v26 + 8) = (int)off_139C74;
        *(int *)((char *)v32 + v26 + 16) = (int)"invocation function for block in ";
        *(int *)((char *)v32 + v26 + 20) = (int)"";
        *(int *)((char *)v32 + v26 + 24) = (int)v10;
        v6 = (char *)v32 + v26 + 8;
        goto LABEL_45;
      }
      goto LABEL_39;
    }
  }
  v6 = sub_C2AF0(&v44);
  v7 = lpstatus;
  v12 = lpout;
  if ( v45 == v44 && v6 )
  {
LABEL_23:
    if ( v12 )
    {
      v13 = *lpoutlen;
    }
    else
    {
      v14 = (char *)malloc(0x400u);
      if ( !v14 )
      {
        v12 = nullptr;
        v29 = -1;
        goto LABEL_37;
      }
      v38 = v14;
      v13 = 1024;
    }
    v40 = 0;
    v39 = v38;
    v41 = v13;
    (*(void (__cdecl **)(char *, char **))(*(_DWORD *)v6 + 12))(v6, &v39);
    if ( v6[5] != 1 )
      (*(void (__cdecl **)(char *, char **))(*(_DWORD *)v6 + 16))(v6, &v39);
    v15 = v40;
    v16 = v40 + 1;
    if ( v40 + 1 >= v41 )
    {
      v18 = 2 * v41;
      if ( 2 * v41 < v16 )
        v18 = v40 + 1;
      v41 = v18;
      v17 = (char *)realloc(v39, v18);
      v39 = v17;
      v15 = v40;
      v16 = v40 + 1;
    }
    else
    {
      v17 = v39;
    }
    v40 = v16;
    v17[v15] = 0;
    if ( lpoutlen )
      *lpoutlen = v40;
    v29 = 0;
    v12 = v39;
LABEL_37:
    v7 = lpstatus;
    if ( !lpstatus )
      goto LABEL_49;
    goto LABEL_48;
  }
LABEL_47:
  v29 = -2;
  if ( v7 )
LABEL_48:
    *v7 = v29;
LABEL_49:
  v4 = nullptr;
  if ( !v29 )
    v4 = v12;
  v19 = v60;
  if ( v60 )
  {
    do
    {
      v20 = (int *)*v19;
      v60 = (int *)*v19;
      if ( &v58 != v19 )
      {
        operator delete[](v19);
        v20 = v60;
      }
      v19 = v20;
    }
    while ( v20 );
  }
  v58 = 0;
  v59 = 0;
  v60 = &v58;
  if ( v54[0] != v55 )
    free(v54[0]);
  if ( v52[0] != v53 )
    free(v52[0]);
  if ( v50[0] != v51 )
    free(v50[0]);
  if ( v46 != v49 )
    free(v46);
  return v4;
}
// C14F3: conditional instruction was optimized away because cl.1==5F
// 139C74: using guessed type int (*off_139C74[3])();
// 13A7EC: using guessed type int (*off_13A7EC[3])();
