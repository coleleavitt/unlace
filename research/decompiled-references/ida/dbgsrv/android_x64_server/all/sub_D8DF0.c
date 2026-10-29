/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8DF0
// Address: 0x00000000000D8DF0

//----- (00000000000D8DF0) ----------------------------------------------------
_QWORD *__fastcall sub_D8DF0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // r13
  char *v4; // rbp
  char *v5; // r15
  unsigned __int64 v6; // rax
  char *v7; // rbx
  char *v8; // rbp
  char *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // r14
  _QWORD *v12; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // rbx
  _BYTE *v16; // r15
  signed __int64 v17; // rbx
  __int64 v18; // r12
  char *v19; // rbp
  char *v20; // rax
  char *v21; // rax
  _QWORD *v22; // rsi
  char *v24; // rbp
  char *v25; // rdi
  __int64 v26; // r8
  _QWORD *v27; // rbp
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  char *v31; // rbx
  char *v32; // rbp
  _BYTE *v33; // r14
  signed __int64 v34; // rbp
  __int64 v35; // r13
  char *v36; // r15
  char *v37; // rax
  char *v38; // rax
  char *v39; // rbp
  const void *v40; // r12
  signed __int64 v41; // r8
  unsigned __int64 v42; // rbx
  _QWORD *v43; // r14
  __int64 v44; // rcx
  _QWORD *v45; // rax
  char v46; // cl
  __int64 (__fastcall **v47)(); // rax
  _QWORD *v48; // rdx
  const void *v49; // r15
  signed __int64 v50; // r14
  unsigned __int64 v51; // rbx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  signed __int64 v55; // rbx
  char *v56; // r14
  char *v57; // rcx
  char *v58; // rax
  unsigned int v59; // edx
  _QWORD *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // r15
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // [rsp+8h] [rbp-50h]
  __int64 v70; // [rsp+8h] [rbp-50h]
  char v71; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]
  __int64 v73; // [rsp+18h] [rbp-40h]
  __int64 v74; // [rsp+18h] [rbp-40h]

  v3 = a1;
  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 8);
  v6 = (unsigned __int64)&v5[-*(_QWORD *)a1];
  if ( !v6 )
    goto LABEL_29;
  if ( *v4 != 85 )
  {
    if ( (unsigned __int8)(*v4 - 49) <= 8u )
    {
      v12 = sub_E0570((char **)a1);
      goto LABEL_30;
    }
    if ( v6 >= 2 && *v4 == 68 && v4[1] == 67 )
    {
      *(_QWORD *)a1 = v4 + 2;
      v69 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
      v13 = sub_E0570((char **)a1);
      if ( !v13 )
        return nullptr;
      v14 = v13;
      v70 = v69 >> 3;
      while ( 1 )
      {
        v15 = *(char **)(v3 + 24);
        if ( v15 == *(char **)(v3 + 32) )
        {
          v16 = *(_BYTE **)(v3 + 16);
          v17 = v15 - v16;
          v18 = v17 >> 2;
          if ( (_BYTE *)(a1 + 40) == v16 )
          {
            v20 = (char *)malloc(2 * v17);
            v19 = v20;
            if ( v17 )
              memmove(v20, v16, v17);
          }
          else
          {
            v19 = (char *)realloc(v16, 2 * v17);
          }
          *(_QWORD *)(a1 + 16) = v19;
          v15 = &v19[8 * (v17 >> 3)];
          v3 = a1;
          *(_QWORD *)(a1 + 24) = v15;
          *(_QWORD *)(a1 + 32) = &v19[8 * v18];
        }
        *(_QWORD *)(v3 + 24) = v15 + 8;
        *(_QWORD *)v15 = v14;
        v21 = *(char **)v3;
        if ( *(_QWORD *)v3 != *(_QWORD *)(v3 + 8) && *v21 == 69 )
          break;
        v14 = sub_E0570((char **)v3);
        if ( !v14 )
          return nullptr;
      }
      *(_QWORD *)v3 = v21 + 1;
      v49 = (const void *)(8 * v70 + *(_QWORD *)(v3 + 16));
      v50 = *(_QWORD *)(v3 + 24) - (_QWORD)v49;
      v51 = ((_DWORD)v50 + 15) & 0xFFFFFFF0;
      v27 = *(_QWORD **)(v3 + 4832);
      v52 = v27[1];
      if ( v51 + v52 < 0xFF0 )
      {
        v65 = v27 + 1;
      }
      else
      {
        if ( v51 >= 0xFF1 )
        {
          v53 = (_QWORD *)operator new[](v51 + 16);
          *v53 = *v27;
          v53[1] = 0;
          *v27 = v53;
          v7 = (char *)(v53 + 2);
          if ( !v50 )
            goto LABEL_90;
          goto LABEL_89;
        }
        v66 = (_QWORD *)operator new[](0x1000u);
        *v66 = v27;
        v66[1] = 0;
        *(_QWORD *)(v3 + 4832) = v66;
        v52 = 0;
        v65 = v66 + 1;
        v27 = v66;
      }
      *v65 = v52 + v51;
      v7 = (char *)v27 + v52 + 16;
      if ( !v50 )
      {
LABEL_90:
        v11 = v50 >> 3;
        *(_QWORD *)(v3 + 24) = v49;
        v28 = v27[1];
        if ( (unsigned __int64)(v28 + 32) < 0xFF0 )
        {
          v68 = v27 + 1;
        }
        else
        {
          v67 = (_QWORD *)operator new[](0x1000u);
          *v67 = v27;
          v67[1] = 0;
          *(_QWORD *)(v3 + 4832) = v67;
          v28 = 0;
          v68 = v67 + 1;
          v27 = v67;
        }
        *v68 = v28 + 32;
        v22 = (_QWORD *)((char *)v27 + v28 + 16);
        *(_DWORD *)((char *)v27 + v28 + 24) = 16843049;
        v47 = off_152B58;
LABEL_58:
        *(_QWORD *)((char *)v27 + v28 + 16) = v47;
        *(_QWORD *)((char *)v27 + v28 + 32) = v7;
        *(_QWORD *)((char *)v27 + v28 + 40) = v11;
        if ( !v22 )
          return nullptr;
        return sub_D8C70(v3, v22);
      }
LABEL_89:
      memmove(v7, v49, v50);
      v49 = (const void *)(*(_QWORD *)(v3 + 16) + 8 * v70);
      v27 = *(_QWORD **)(v3 + 4832);
      goto LABEL_90;
    }
LABEL_29:
    v12 = sub_E0820(a1, a2);
LABEL_30:
    v22 = v12;
    if ( v12 )
      return sub_D8C70(v3, v22);
    return nullptr;
  }
  if ( v6 < 2 )
    return nullptr;
  if ( v4[1] != 116 )
  {
    if ( v4[1] != 108 )
      return nullptr;
    *(_QWORD *)a1 = v4 + 2;
    v71 = *(_BYTE *)(a1 + 722);
    *(_BYTE *)(a1 + 722) = 1;
    if ( (unsigned __int64)(v5 - (v4 + 2)) >= 2 && v4[2] == 118 && v4[3] == 69 )
    {
      v24 = v4 + 4;
      *(_QWORD *)a1 = v24;
      v25 = nullptr;
      v26 = 0;
LABEL_69:
      v56 = nullptr;
      if ( v5 == v24 || (v56 = nullptr, (unsigned int)(*v24 - 48) > 9) )
      {
        v58 = v24;
        v24 = nullptr;
        if ( v58 == v5 )
          goto LABEL_80;
      }
      else
      {
        v57 = v24 + 1;
        do
        {
          v58 = v57;
          *(_QWORD *)v3 = v57;
          if ( v5 == v57 )
            break;
          v59 = *v57++ - 48;
        }
        while ( v59 < 0xA );
        v56 = v58;
        if ( v58 == v5 )
          goto LABEL_80;
      }
      if ( *v58 == 95 )
      {
        *(_QWORD *)v3 = v58 + 1;
        v60 = *(_QWORD **)(v3 + 4832);
        v61 = v60[1];
        if ( (unsigned __int64)(v61 + 48) < 0xFF0 )
        {
          v64 = v60 + 1;
        }
        else
        {
          v62 = v26;
          v63 = (_QWORD *)operator new[](0x1000u);
          *v63 = v60;
          v64 = v63 + 1;
          v63[1] = 0;
          *(_QWORD *)(v3 + 4832) = v63;
          v61 = 0;
          v60 = v63;
          v26 = v62;
        }
        *v64 = v61 + 48;
        v22 = (_QWORD *)((char *)v60 + v61 + 16);
        *(_DWORD *)((char *)v60 + v61 + 24) = 16843048;
        *v22 = off_152AE8;
        *(_QWORD *)((char *)v60 + v61 + 32) = v25;
        *(_QWORD *)((char *)v60 + v61 + 40) = v26;
        *(_QWORD *)((char *)v60 + v61 + 48) = v24;
        *(_QWORD *)((char *)v60 + v61 + 56) = v56;
        goto LABEL_83;
      }
LABEL_80:
      v22 = nullptr;
LABEL_83:
      v46 = v71;
LABEL_84:
      *(_BYTE *)(v3 + 722) = v46;
      if ( !v22 )
        return nullptr;
      return sub_D8C70(v3, v22);
    }
    v73 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
    do
    {
      v31 = sub_D4260(v3);
      if ( !v31 )
      {
        v46 = v71;
        v22 = nullptr;
        goto LABEL_84;
      }
      v32 = *(char **)(v3 + 24);
      if ( v32 == *(char **)(v3 + 32) )
      {
        v33 = *(_BYTE **)(v3 + 16);
        v34 = v32 - v33;
        v35 = v34 >> 2;
        if ( (_BYTE *)(a1 + 40) == v33 )
        {
          v37 = (char *)malloc(2 * v34);
          v36 = v37;
          if ( v34 )
            memmove(v37, v33, v34);
        }
        else
        {
          v36 = (char *)realloc(v33, 2 * v34);
        }
        *(_QWORD *)(a1 + 16) = v36;
        v32 = &v36[8 * (v34 >> 3)];
        *(_QWORD *)(a1 + 24) = v32;
        v38 = &v36[8 * v35];
        v3 = a1;
        *(_QWORD *)(a1 + 32) = v38;
      }
      *(_QWORD *)(v3 + 24) = v32 + 8;
      *(_QWORD *)v32 = v31;
      v39 = *(char **)v3;
      v5 = *(char **)(v3 + 8);
    }
    while ( *(char **)v3 == v5 || *v39 != 69 );
    v24 = v39 + 1;
    *(_QWORD *)v3 = v24;
    v74 = 8 * v73;
    v40 = (const void *)(v74 + *(_QWORD *)(v3 + 16));
    v41 = *(_QWORD *)(v3 + 24) - (_QWORD)v40;
    v42 = ((_DWORD)v41 + 15) & 0xFFFFFFF0;
    v43 = *(_QWORD **)(v3 + 4832);
    v44 = v43[1];
    if ( v42 + v44 < 0xFF0 )
    {
      v48 = v43 + 1;
    }
    else
    {
      n = *(_QWORD *)(v3 + 24) - (_QWORD)v40;
      if ( v42 >= 0xFF1 )
      {
        v45 = (_QWORD *)operator new[](v42 + 16);
        *v45 = *v43;
        v45[1] = 0;
        *v43 = v45;
        v25 = (char *)(v45 + 2);
        v41 = n;
        if ( !n )
          goto LABEL_68;
        goto LABEL_67;
      }
      v54 = (_QWORD *)operator new[](0x1000u);
      *v54 = v43;
      v48 = v54 + 1;
      v54[1] = 0;
      *(_QWORD *)(v3 + 4832) = v54;
      v44 = 0;
      v43 = v54;
      v41 = n;
    }
    *v48 = v44 + v42;
    v25 = (char *)v43 + v44 + 16;
    if ( !v41 )
    {
LABEL_68:
      v26 = v41 >> 3;
      *(_QWORD *)(v3 + 24) = v40;
      goto LABEL_69;
    }
LABEL_67:
    v55 = v41;
    memmove(v25, v40, v41);
    v41 = v55;
    v40 = (const void *)(*(_QWORD *)(v3 + 16) + v74);
    v24 = *(char **)v3;
    v5 = *(char **)(v3 + 8);
    goto LABEL_68;
  }
  v7 = v4 + 2;
  *(_QWORD *)a1 = v4 + 2;
  if ( v5 == v4 + 2 || (unsigned int)(*v7 - 48) > 9 )
  {
    v11 = 0;
    v9 = v4 + 2;
    v7 = nullptr;
    if ( v4 + 2 == v5 )
      return nullptr;
  }
  else
  {
    v8 = v4 + 3;
    do
    {
      v9 = v8;
      *(_QWORD *)a1 = v8;
      if ( v5 == v8 )
        break;
      v10 = *v8++ - 48;
    }
    while ( v10 < 0xA );
    v11 = (__int64)v9;
    if ( v9 == v5 )
      return nullptr;
  }
  if ( *v9 == 95 )
  {
    *(_QWORD *)a1 = v9 + 1;
    v27 = *(_QWORD **)(a1 + 4832);
    v28 = v27[1];
    if ( (unsigned __int64)(v28 + 32) < 0xFF0 )
    {
      v30 = v27 + 1;
    }
    else
    {
      v29 = (_QWORD *)operator new[](0x1000u);
      *v29 = v27;
      v29[1] = 0;
      *(_QWORD *)(a1 + 4832) = v29;
      v28 = 0;
      v30 = v29 + 1;
      v27 = v29;
    }
    *v30 = v28 + 32;
    v22 = (_QWORD *)((char *)v27 + v28 + 16);
    *(_DWORD *)((char *)v27 + v28 + 24) = 16843047;
    v47 = off_152A78;
    goto LABEL_58;
  }
  return nullptr;
}
// 152A78: using guessed type __int64 (__fastcall *off_152A78[7])();
// 152AE8: using guessed type __int64 (__fastcall *off_152AE8[7])();
// 152B58: using guessed type __int64 (__fastcall *off_152B58[7])();
