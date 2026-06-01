char __fastcall clang_getExpansionLocation(
        unsigned __int64 *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  bool v15; // r15
  __int64 v16; // r8
  unsigned int v17; // r10d
  int v18; // r9d
  _DWORD *v19; // rdx
  _DWORD *v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 *v24; // r10
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  _DWORD *v27; // rax
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // r9
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  _QWORD *v36; // r8
  __int64 v37; // rax
  char v38; // dl
  __int64 *v39; // rdi
  __int64 v40; // rsi
  _DWORD *v41; // rax
  _DWORD *v42; // rdx
  __int64 *v43; // rdi
  __int64 v44; // rdx
  _DWORD *v45; // rax
  _DWORD *v46; // rdx
  __int64 *v47; // rdi
  __int64 v48; // rdx
  _DWORD *v49; // rax
  _DWORD *v50; // rdx
  __int64 *v51; // rdi
  __int64 v52; // rsi
  _DWORD *v53; // rax
  _DWORD *v54; // rdx
  unsigned int v56; // [rsp+8h] [rbp-70h]
  unsigned int v57; // [rsp+8h] [rbp-70h]
  unsigned int v58; // [rsp+8h] [rbp-70h]
  unsigned int v59; // [rsp+8h] [rbp-70h]
  unsigned int v60; // [rsp+8h] [rbp-70h]
  __int64 *v61; // [rsp+8h] [rbp-70h]
  unsigned int v62; // [rsp+8h] [rbp-70h]
  unsigned int v63; // [rsp+8h] [rbp-70h]
  unsigned int v64; // [rsp+8h] [rbp-70h]
  unsigned int v65; // [rsp+8h] [rbp-70h]
  unsigned int v66; // [rsp+8h] [rbp-70h]
  int v67; // [rsp+10h] [rbp-68h]
  int v68; // [rsp+10h] [rbp-68h]
  unsigned int v69; // [rsp+10h] [rbp-68h]
  unsigned int v70; // [rsp+10h] [rbp-68h]
  char v71; // [rsp+10h] [rbp-68h]
  unsigned int v72; // [rsp+10h] [rbp-68h]
  _QWORD *v73; // [rsp+10h] [rbp-68h]
  int v74; // [rsp+18h] [rbp-60h]
  int v75; // [rsp+18h] [rbp-60h]
  unsigned __int64 *v76; // [rsp+18h] [rbp-60h]
  char v77; // [rsp+18h] [rbp-60h]
  int v78; // [rsp+20h] [rbp-58h]
  char v79; // [rsp+20h] [rbp-58h]
  int v80; // [rsp+20h] [rbp-58h]
  _QWORD *v81; // [rsp+20h] [rbp-58h]
  int v82; // [rsp+28h] [rbp-50h]
  int v83; // [rsp+2Ch] [rbp-4Ch]
  bool v84; // [rsp+3Eh] [rbp-3Ah] BYREF
  _BYTE v85[57]; // [rsp+3Fh] [rbp-39h] BYREF

  if ( (a7 & 1) != 0 )
  {
    LOBYTE(v14) = sub_68C870(a1, a2, a3, a4, a5, a6, a7);
    return v14;
  }
  v13 = a9;
  LOBYTE(v14) = a7 == 0;
  v15 = a7 == 0 || a9 == 0;
  if ( v15 )
    goto LABEL_29;
  if ( a9 < 0 )
    v13 = sub_CAAA20(a7, (unsigned int)a9);
  v16 = *(int *)(a7 + 408);
  v17 = v13 & 0x7FFFFFFF;
  v18 = v16 + 1;
  if ( (unsigned int)(v16 + 1) <= 1 )
  {
    v19 = *(_DWORD **)(a7 + 184);
    if ( v17 < (*v19 & 0x7FFFFFFFu) )
      goto LABEL_47;
    goto LABEL_8;
  }
  if ( (int)v16 >= 0 )
  {
    v19 = *(_DWORD **)(a7 + 184);
    if ( v17 < (v19[6 * v16] & 0x7FFFFFFFu) )
      goto LABEL_47;
LABEL_8:
    if ( v18 != *(_DWORD *)(a7 + 192) )
    {
      v20 = &v19[6 * v18];
      goto LABEL_10;
    }
LABEL_48:
    if ( v17 < *(_DWORD *)(a7 + 248) )
      goto LABEL_11;
    goto LABEL_47;
  }
  v25 = (unsigned int)(-2 - v16);
  v26 = *(_QWORD *)(*(_QWORD *)(a7 + 256) + 8LL * ((unsigned int)(-2 - v16) >> 6));
  if ( _bittest64(&v26, v25) )
  {
    v61 = (__int64 *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v25 >> 5));
    v37 = *v61;
    if ( !*v61 )
    {
      v43 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v44 = *v43;
      v43[10] += 768;
      v45 = (_DWORD *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v43[1] >= (unsigned __int64)(v45 + 192) && v44 )
      {
        *v43 = (__int64)(v45 + 192);
      }
      else
      {
        v83 = v16 + 1;
        v82 = v16;
        v79 = -2 - v16;
        v75 = v13 & 0x7FFFFFFF;
        v70 = v13;
        v45 = (_DWORD *)sub_68E100((__int64)v43, 768, 3);
        v18 = v83;
        LODWORD(v16) = v82;
        LOBYTE(v25) = v79;
        v17 = v75;
        v13 = v70;
      }
      v46 = v45 + 192;
      *v61 = (__int64)v45;
      do
      {
        *v45 = 0;
        v45 += 6;
        *((_OWORD *)v45 - 1) = 0;
      }
      while ( v45 != v46 );
      v37 = *v61;
    }
    v27 = (_DWORD *)(v37 + 24 * (v25 & 0x1F));
  }
  else
  {
    v78 = v16 + 1;
    v74 = *(_DWORD *)(a7 + 408);
    v67 = v13 & 0x7FFFFFFF;
    v58 = v13;
    v27 = (_DWORD *)sub_CA9380(a7, (unsigned int)v25, 0);
    v13 = v58;
    v17 = v67;
    LODWORD(v16) = v74;
    v18 = v78;
  }
  if ( v17 < (*v27 & 0x7FFFFFFFu) )
    goto LABEL_47;
  if ( (_DWORD)v16 == -2 )
    goto LABEL_11;
  if ( v18 == *(_DWORD *)(a7 + 192) )
    goto LABEL_48;
  v28 = (unsigned int)(-2 - v18);
  v29 = *(_QWORD *)(*(_QWORD *)(a7 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
  if ( _bittest64(&v29, v28) )
  {
    v30 = (_QWORD *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v28 >> 5));
    v31 = *v30;
    if ( !*v30 )
    {
      v47 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v48 = *v47;
      v47[10] += 768;
      v49 = (_DWORD *)((v48 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v47[1] >= (unsigned __int64)(v49 + 192) && v48 )
      {
        *v47 = (__int64)(v49 + 192);
      }
      else
      {
        v81 = v30;
        v77 = v28;
        v72 = v17;
        v65 = v13;
        v49 = (_DWORD *)sub_68E100((__int64)v47, 768, 3);
        v30 = v81;
        LOBYTE(v28) = v77;
        v17 = v72;
        v13 = v65;
      }
      *v30 = v49;
      v50 = v49 + 192;
      do
      {
        *v49 = 0;
        v49 += 6;
        *((_OWORD *)v49 - 1) = 0;
      }
      while ( v50 != v49 );
      v31 = *v30;
    }
    v20 = (_DWORD *)(v31 + 24 * (v28 & 0x1F));
  }
  else
  {
    v69 = v17;
    v63 = v13;
    v20 = (_DWORD *)sub_CA9380(a7, (unsigned int)v28, 0);
    v13 = v63;
    v17 = v69;
  }
LABEL_10:
  if ( v17 < (*v20 & 0x7FFFFFFFu) )
  {
LABEL_11:
    v21 = *(int *)(a7 + 408);
    goto LABEL_12;
  }
LABEL_47:
  v59 = v13;
  v32 = sub_CA9700(a7, v17);
  v13 = v59;
  v21 = v32;
LABEL_12:
  LOBYTE(v14) = v21 + 1;
  v84 = 0;
  if ( (unsigned int)(v21 + 1) <= 1 )
    goto LABEL_29;
  if ( (int)v21 < 0 )
  {
    v22 = (unsigned int)(-2 - v21);
    v23 = *(_QWORD *)(*(_QWORD *)(a7 + 256) + 8LL * ((unsigned int)(-2 - v21) >> 6));
    if ( _bittest64(&v23, v22) )
    {
      v24 = (unsigned __int64 *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v22 >> 5));
      v14 = *v24;
      if ( *v24 )
      {
        if ( *(char *)(v14 + 24LL * ((-2 - (_BYTE)v21) & 0x1F) + 3) < 0 )
          goto LABEL_29;
LABEL_53:
        if ( !a1 )
          goto LABEL_19;
        v33 = *(_QWORD *)(a7 + 256);
        v85[0] = 0;
        v34 = (unsigned int)(-2 - v21);
        v35 = *(_QWORD *)(v33 + 8LL * ((unsigned int)(-2 - v21) >> 6));
        if ( _bittest64(&v35, v34) )
        {
          v36 = (_QWORD *)(*(_QWORD *)(a7 + 208) + 8 * ((unsigned __int64)(int)v34 >> 5));
          if ( *v36 )
          {
            v14 = *v36 + 24 * (v34 & 0x1F);
            goto LABEL_16;
          }
          v51 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v52 = *v51;
          v51[10] += 768;
          v53 = (_DWORD *)((v52 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v51[1] >= (unsigned __int64)(v53 + 192) && v52 )
          {
            *v51 = (__int64)(v53 + 192);
          }
          else
          {
            v73 = v36;
            v66 = v13;
            v53 = (_DWORD *)sub_68E100((__int64)v51, 768, 3);
            v36 = v73;
            v13 = v66;
          }
          *v36 = v53;
          v54 = v53 + 192;
          do
          {
            *v53 = 0;
            v53 += 6;
            *((_OWORD *)v53 - 1) = 0;
          }
          while ( v54 != v53 );
          v38 = v85[0];
          v14 = *v36 + 24 * (v34 & 0x1F);
        }
        else
        {
          v62 = v13;
          v14 = sub_CA9380(a7, (unsigned int)v34, v85);
          v38 = v85[0];
          v13 = v62;
        }
        if ( v38 || !v14 )
          goto LABEL_62;
        goto LABEL_16;
      }
      v39 = (__int64 *)(*(_QWORD *)(a7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v40 = *v39;
      v39[10] += 768;
      v41 = (_DWORD *)((v40 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v39[1] >= (unsigned __int64)(v41 + 192) && v40 )
      {
        *v39 = (__int64)(v41 + 192);
      }
      else
      {
        v80 = v21;
        v76 = v24;
        v71 = -2 - v21;
        v64 = v13;
        v41 = (_DWORD *)sub_68E100((__int64)v39, 768, 3);
        v15 = v84;
        LODWORD(v21) = v80;
        v24 = v76;
        LOBYTE(v22) = v71;
        v13 = v64;
      }
      *v24 = (unsigned __int64)v41;
      v42 = v41 + 192;
      do
      {
        *v41 = 0;
        v41 += 6;
        *((_OWORD *)v41 - 1) = 0;
      }
      while ( v42 != v41 );
      v14 = *v24 + 24 * (v22 & 0x1F);
    }
    else
    {
      v68 = v21;
      v60 = v13;
      v14 = sub_CA9380(a7, (unsigned int)v22, &v84);
      v15 = v84;
      v13 = v60;
      LODWORD(v21) = v68;
    }
    if ( v15 || *(char *)(v14 + 3) < 0 )
      goto LABEL_29;
    goto LABEL_53;
  }
  v14 = *(_QWORD *)(a7 + 184) + 24 * v21;
  if ( *(char *)(v14 + 3) >= 0 )
  {
    if ( !a1 )
    {
LABEL_19:
      if ( a2 )
      {
        v56 = v13;
        LODWORD(v14) = sub_CAE400(a7, v13, 0);
        v13 = v56;
        *a2 = v14;
      }
      if ( a3 )
      {
        v57 = v13;
        LODWORD(v14) = sub_CAE3B0(a7, v13, 0);
        v13 = v57;
        *a3 = v14;
      }
      if ( a4 )
      {
        v14 = sub_633200(a7, v13) >> 32;
        *a4 = v14;
      }
      return v14;
    }
LABEL_16:
    if ( *(char *)(v14 + 3) >= 0 )
    {
      v14 = *(_QWORD *)((*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_18:
      *a1 = v14;
      goto LABEL_19;
    }
LABEL_62:
    v14 = 0;
    goto LABEL_18;
  }
LABEL_29:
  if ( a1 )
    *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  return v14;
}

