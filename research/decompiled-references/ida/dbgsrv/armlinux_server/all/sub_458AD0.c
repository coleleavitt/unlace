/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458AD0
// Address: 0x0000000000458AD0

//----- (0000000000458AD0) ----------------------------------------------------
__int64 __fastcall sub_458AD0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // w1
  char *v5; // x2
  bool v6; // zf
  char v7; // w1
  int v8; // w21
  char *v10; // x0
  unsigned int v11; // w19
  int v13; // w19
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x24
  _BYTE *v16; // x0
  unsigned __int64 v17; // x19
  unsigned __int64 v18; // x21
  _BYTE *v19; // x0
  size_t v20; // x21
  unsigned __int64 v21; // x24
  size_t v22; // x26
  unsigned __int64 v23; // x25
  unsigned __int64 v24; // x24
  _BYTE *v25; // x0
  char *v26; // x0
  char *v27; // x26
  size_t v28; // x0
  size_t v29; // x21
  size_t v30; // x19
  __int64 v31; // x19
  __int64 v32; // x21
  size_t v33; // x0
  char *v34; // x25
  const char *v35; // x24
  const char *v36; // x1
  FILE *v38; // x19
  char *v39; // x1
  __int64 v40; // x0
  unsigned __int64 v41; // x2
  char *v42; // x3
  void *v43; // x0
  char *v44; // x0
  int v46; // [xsp+6Ch] [xbp-1084h]
  void *ptr; // [xsp+78h] [xbp-1078h] BYREF
  unsigned __int64 v48; // [xsp+80h] [xbp-1070h]
  unsigned __int64 v49; // [xsp+88h] [xbp-1068h]
  void *v50; // [xsp+90h] [xbp-1060h] BYREF
  size_t v51; // [xsp+98h] [xbp-1058h]
  __int64 v52; // [xsp+A0h] [xbp-1050h]
  void *src; // [xsp+A8h] [xbp-1048h] BYREF
  __int64 v54; // [xsp+B0h] [xbp-1040h]
  __int64 v55; // [xsp+B8h] [xbp-1038h]
  unsigned __int16 v56; // [xsp+C0h] [xbp-1030h]
  __int64 v57; // [xsp+C8h] [xbp-1028h]
  char v58; // [xsp+D0h] [xbp-1020h]
  __int64 v59; // [xsp+D8h] [xbp-1018h]
  __int64 v60; // [xsp+E0h] [xbp-1010h]
  char v61[4096]; // [xsp+E8h] [xbp-1008h] BYREF

  v46 = a2;
  v4 = *(unsigned __int8 *)(a1 + 692);
  v5 = *(char **)(a1 + 8);
  v6 = v4 == 32 || v4 == 9;
  if ( !v6 && !sub_450428(*(_BYTE *)(a1 + 692)) )
  {
    *(_QWORD *)(a1 + 8) = v5 - 1;
    *(v5 - 1) = v7;
    v5 = *(char **)(a1 + 8);
  }
  ptr = nullptr;
  v48 = 0;
  v49 = 0;
  v8 = (unsigned __int8)*v5;
  if ( v8 == 34 || v8 == 60 )
    goto LABEL_12;
  while ( 1 )
  {
    v56 = 0;
    src = nullptr;
    v54 = 0;
    v55 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v11 = sub_4578C8(a1, (unsigned __int8 **)&src, nullptr);
    if ( v11 )
    {
      if ( src )
      {
        v54 = 0;
        j__free(src);
      }
      v5 = (char *)ptr;
      goto LABEL_17;
    }
    LOBYTE(v13) = v56;
    if ( v56 == 1 )
      break;
    if ( v56 > 0x2Fu )
    {
      if ( v56 != 60 && v56 != 62 && v56 != 58 )
      {
LABEL_27:
        if ( src )
        {
          v54 = 0;
          j__free(src);
        }
        v11 = 30;
        v5 = (char *)ptr;
        goto LABEL_17;
      }
      goto LABEL_33;
    }
    if ( v56 >= 0x2Eu )
      goto LABEL_33;
    if ( v56 == 4 )
    {
      if ( v48 )
      {
        v18 = v48 - 1;
        v17 = v48 + 1;
        v19 = ptr;
        if ( v48 + 1 <= v49 )
          goto LABEL_40;
      }
      else
      {
        v17 = 2;
        v18 = 0;
        v19 = ptr;
        if ( v49 >= 2 )
        {
LABEL_40:
          v48 = v17;
          v13 = 34;
          v19[v18] = 34;
          *((_BYTE *)ptr + v18 + 1) = 0;
          if ( !v54 )
            goto LABEL_33;
          v20 = v54 - 1;
          if ( v54 == 1 )
            goto LABEL_33;
          v21 = v48;
          if ( !v48 )
            goto LABEL_43;
LABEL_48:
          v24 = v21 - 1;
          v22 = v24 + v20;
          v25 = ptr;
          v23 = v24 + v20 + 1;
          if ( v23 <= v49 )
          {
LABEL_49:
            v48 = v23;
            v25[v22] = 0;
            memcpy((char *)ptr + v24, src, v20);
            if ( !v13 )
              goto LABEL_36;
LABEL_33:
            if ( v48 )
            {
              v15 = v48 - 1;
              v14 = v48 + 1;
              v16 = ptr;
              if ( v49 >= v48 + 1 )
                goto LABEL_35;
            }
            else
            {
              v14 = 2;
              v15 = 0;
              v16 = ptr;
              if ( v49 >= 2 )
              {
LABEL_35:
                v48 = v14;
                v16[v15] = v13;
                *((_BYTE *)ptr + v15 + 1) = 0;
                goto LABEL_36;
              }
            }
            v16 = sub_491288((__int64)&ptr, v16, v14, 1u);
            ptr = v16;
            goto LABEL_35;
          }
LABEL_44:
          v25 = sub_491288((__int64)&ptr, v25, v23, 1u);
          ptr = v25;
          goto LABEL_49;
        }
      }
      v19 = sub_491288((__int64)&ptr, v19, v17, 1u);
      ptr = v19;
      goto LABEL_40;
    }
    if ( v56 != 6 && v56 != 2 )
      goto LABEL_27;
    if ( v54 )
    {
      v13 = 0;
      v20 = v54 - 1;
      if ( v54 != 1 )
      {
        v21 = v48;
        if ( v48 )
          goto LABEL_48;
LABEL_43:
        v22 = v20;
        v23 = v20 + 1;
        v24 = 0;
        v25 = ptr;
        if ( v20 + 1 <= v49 )
          goto LABEL_49;
        goto LABEL_44;
      }
    }
LABEL_36:
    if ( src )
    {
      v54 = 0;
      j__free(src);
    }
  }
  if ( src )
  {
    v54 = 0;
    j__free(src);
  }
  v5 = (char *)ptr;
  *(_QWORD *)(a1 + 8) = ptr;
  if ( !v5 )
    return 30;
  v8 = (unsigned __int8)*v5;
  v11 = 30;
  if ( v8 == 34 || v8 == 60 )
  {
LABEL_12:
    if ( v8 == 60 )
      v8 = 62;
    *(_QWORD *)(a1 + 8) = v5 + 1;
    v10 = strchr(v5 + 1, v8);
    if ( !v10 )
    {
      v11 = 30;
      v5 = (char *)ptr;
      goto LABEL_17;
    }
    *v10 = 0;
    if ( *(_QWORD *)(a1 + 272) > 0x7Fu )
    {
      v5 = (char *)ptr;
      v11 = 31;
      goto LABEL_17;
    }
    v26 = sub_452298(a1, v61, 4096, *(unsigned __int8 **)(a1 + 8), v8, a3);
    v50 = nullptr;
    v51 = 0;
    v27 = v26;
    v52 = 0;
    if ( v26 )
    {
      v28 = strlen(v26);
      v29 = v28 + 1;
      v30 = v28;
      v50 = sub_491288((__int64)&v50, nullptr, v28 + 1, 1u);
      v51 = v29;
      memmove(v50, v27, v30);
      *((_BYTE *)v50 + v30) = 0;
      v31 = *(_QWORD *)(a1 + 240);
      v32 = v31 + 24LL * *(_QWORD *)(a1 + 248);
      if ( v31 == v32 )
      {
        v34 = (char *)v50;
LABEL_85:
        v32 = v31;
        if ( !v34 )
        {
LABEL_86:
          if ( v27 )
          {
            v38 = sub_48DE20(v27);
            if ( v38 )
            {
              v39 = *(char **)(a1 + 264);
              v40 = *(_QWORD *)(a1 + 272);
              v41 = v40 + 1;
              if ( (unsigned __int64)(v40 + 1) > *(_QWORD *)(a1 + 280) )
              {
                v44 = (char *)sub_491288(a1 + 264, v39, v41, 0x28u);
                *(_QWORD *)(a1 + 264) = v44;
                v39 = v44;
                v40 = *(_QWORD *)(a1 + 272);
                v41 = v40 + 1;
              }
              *(_QWORD *)(a1 + 272) = v41;
              v42 = &v39[40 * v40];
              *((_QWORD *)v42 + 1) = *(_QWORD *)(a1 + 288);
              *((_DWORD *)v42 + 8) = *(_DWORD *)(a1 + 304);
              *(_QWORD *)v42 = *(_QWORD *)(a1 + 296);
              v42[36] = *(_BYTE *)(a1 + 144);
              *((_QWORD *)v42 + 2) = *(_QWORD *)(a1 + 216);
              *((_QWORD *)v42 + 3) = *(_QWORD *)(a1 + 224);
              *(_QWORD *)(a1 + 288) = v38;
              v43 = sub_4911C0(v27);
              *(_BYTE *)(a1 + 144) = 0;
              v11 = 0;
              v5 = (char *)ptr;
              *(_QWORD *)(a1 + 216) = sub_450B50;
              *(_QWORD *)(a1 + 224) = a1;
              *(_QWORD *)(a1 + 296) = v43;
              *(_DWORD *)(a1 + 304) = 0;
              goto LABEL_17;
            }
          }
LABEL_91:
          if ( !v46 )
          {
            sub_486A58(0, *(char **)(a1 + 8));
            v11 = 32;
            v5 = (char *)ptr;
            goto LABEL_17;
          }
LABEL_68:
          sub_4869C8(0);
          v11 = 0;
          v5 = (char *)ptr;
          goto LABEL_17;
        }
        goto LABEL_66;
      }
      v34 = (char *)v50;
      v33 = v51;
    }
    else
    {
      v31 = *(_QWORD *)(a1 + 240);
      v32 = v31 + 24LL * *(_QWORD *)(a1 + 248);
      if ( v31 == v32 )
        goto LABEL_91;
      v34 = nullptr;
      v33 = 0;
    }
    if ( v33 )
      v35 = v34;
    else
      v35 = (const char *)&qword_4B2D48;
    while ( 1 )
    {
      v36 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v31 + 8) )
        v36 = *(const char **)v31;
      if ( !strcmp(v35, v36) )
        break;
      v31 += 24;
      if ( v31 == v32 )
        goto LABEL_85;
    }
    if ( !v34 )
    {
LABEL_67:
      if ( v32 != v31 )
        goto LABEL_68;
      goto LABEL_86;
    }
LABEL_66:
    v51 = 0;
    j__free(v34);
    goto LABEL_67;
  }
LABEL_17:
  if ( v5 )
  {
    v48 = 0;
    j__free(v5);
  }
  return v11;
}
// 458AD0: could not find valid save-restore pair for x23
// 458AD0: could not find valid save-restore pair for x24
// 458E18: variable 'v5' is possibly undefined
// 458E20: variable 'v7' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
