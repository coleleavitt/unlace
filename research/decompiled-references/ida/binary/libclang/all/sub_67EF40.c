void __fastcall sub_67EF40(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, _DWORD *a5, _DWORD *a6, unsigned int *a7)
{
  __int64 v7; // r10
  int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // r8d
  _DWORD *v17; // rdx
  _DWORD *v18; // rax
  bool v19; // al
  int v20; // r8d
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // r11
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  char v28; // dl
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  int *v32; // rax
  char v33; // dl
  int v34; // eax
  __int64 v35; // rax
  _QWORD *v36; // r9
  unsigned __int64 v37; // r9
  __int64 v38; // rax
  _DWORD *v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // r8
  __int64 v43; // rax
  _QWORD *v44; // r11
  __int64 v45; // rax
  _QWORD *v46; // r11
  __int64 *v47; // rdi
  __int64 v48; // rdx
  _DWORD *v49; // rax
  _DWORD *v50; // rdx
  __int64 *v51; // rdi
  __int64 v52; // rdx
  _DWORD *v53; // rax
  _DWORD *v54; // rsi
  __int64 *v55; // rdi
  __int64 v56; // rdx
  _DWORD *v57; // rax
  _DWORD *v58; // rdx
  __int64 *v59; // rdi
  __int64 v60; // rsi
  _DWORD *v61; // rax
  _DWORD *v62; // rsi
  int v63; // [rsp+0h] [rbp-78h]
  int v64; // [rsp+0h] [rbp-78h]
  __int64 v65; // [rsp+0h] [rbp-78h]
  int v66; // [rsp+0h] [rbp-78h]
  unsigned __int8 v67; // [rsp+0h] [rbp-78h]
  int v68; // [rsp+0h] [rbp-78h]
  __int64 v69; // [rsp+0h] [rbp-78h]
  char v70; // [rsp+0h] [rbp-78h]
  char v71; // [rsp+0h] [rbp-78h]
  char v72; // [rsp+0h] [rbp-78h]
  __int64 v73; // [rsp+8h] [rbp-70h]
  int v74; // [rsp+8h] [rbp-70h]
  __int64 v75; // [rsp+8h] [rbp-70h]
  _QWORD *v76; // [rsp+8h] [rbp-70h]
  int v77; // [rsp+8h] [rbp-70h]
  _QWORD *v78; // [rsp+8h] [rbp-70h]
  _QWORD *v79; // [rsp+8h] [rbp-70h]
  int v80; // [rsp+10h] [rbp-68h]
  int v81; // [rsp+10h] [rbp-68h]
  int v82; // [rsp+10h] [rbp-68h]
  _QWORD *v83; // [rsp+10h] [rbp-68h]
  __int64 v84; // [rsp+10h] [rbp-68h]
  int v85; // [rsp+10h] [rbp-68h]
  __int64 v86; // [rsp+18h] [rbp-60h]
  __int64 v87; // [rsp+18h] [rbp-60h]
  int v88; // [rsp+18h] [rbp-60h]
  __int64 v89; // [rsp+18h] [rbp-60h]
  __int64 v90; // [rsp+20h] [rbp-58h]
  int v91; // [rsp+20h] [rbp-58h]
  __int64 v92; // [rsp+20h] [rbp-58h]
  __int64 v93; // [rsp+28h] [rbp-50h]
  _BYTE v94[57]; // [rsp+3Fh] [rbp-39h] BYREF

  if ( !(_DWORD)a2 )
    return;
  v7 = a1;
  v12 = a2;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 2152LL);
  if ( (int)a2 < 0 )
  {
    v27 = sub_CADBE0(v13, a2);
    v7 = a1;
    v12 = v27;
  }
  v14 = *(int *)(v13 + 408);
  v15 = v12 & 0x7FFFFFFF;
  v16 = v14 + 1;
  if ( (unsigned int)(v14 + 1) <= 1 )
  {
    v17 = *(_DWORD **)(v13 + 184);
    if ( v15 < (*v17 & 0x7FFFFFFFu) )
      goto LABEL_29;
    goto LABEL_7;
  }
  if ( (int)v14 >= 0 )
  {
    v17 = *(_DWORD **)(v13 + 184);
    if ( v15 < (v17[6 * v14] & 0x7FFFFFFFu) )
      goto LABEL_29;
LABEL_7:
    if ( *(_DWORD *)(v13 + 192) != v16 )
    {
      v18 = &v17[6 * v16];
LABEL_9:
      v19 = v15 < (*v18 & 0x7FFFFFFFu);
      goto LABEL_10;
    }
    goto LABEL_34;
  }
  v37 = (unsigned int)(-2 - v14);
  v38 = *(_QWORD *)(*(_QWORD *)(v13 + 256) + 8LL * ((unsigned int)(-2 - v14) >> 6));
  if ( _bittest64(&v38, v37) )
  {
    v44 = (_QWORD *)(*(_QWORD *)(v13 + 208) + 8 * ((unsigned __int64)(int)v37 >> 5));
    v45 = *v44;
    if ( !*v44 )
    {
      v47 = (__int64 *)(*(_QWORD *)(v13 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v48 = *v47;
      v47[10] += 768;
      v49 = (_DWORD *)((v48 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v47[1] >= (unsigned __int64)(v49 + 192) && v48 )
      {
        *v47 = (__int64)(v49 + 192);
      }
      else
      {
        v91 = v14 + 1;
        v87 = v7;
        v82 = v14;
        v76 = v44;
        v70 = -2 - v14;
        v49 = (_DWORD *)sub_67A630((__int64)v47, 768, 3);
        v16 = v91;
        v7 = v87;
        LODWORD(v14) = v82;
        v44 = v76;
        LOBYTE(v37) = v70;
      }
      *v44 = v49;
      v50 = v49 + 192;
      do
      {
        *v49 = 0;
        v49 += 6;
        *((_OWORD *)v49 - 1) = 0;
      }
      while ( v50 != v49 );
      v45 = *v44;
    }
    v39 = (_DWORD *)(v45 + 24 * (v37 & 0x1F));
  }
  else
  {
    v81 = v14 + 1;
    v75 = v7;
    v68 = *(_DWORD *)(v13 + 408);
    v39 = (_DWORD *)sub_CA9380(v13, (unsigned int)v37, 0);
    LODWORD(v14) = v68;
    v7 = v75;
    v16 = v81;
  }
  if ( v15 < (*v39 & 0x7FFFFFFFu) )
    goto LABEL_29;
  if ( (_DWORD)v14 == -2 )
    goto LABEL_11;
  if ( *(_DWORD *)(v13 + 192) != v16 )
  {
    v40 = (unsigned int)(-2 - v16);
    v41 = *(_QWORD *)(*(_QWORD *)(v13 + 256) + 8LL * ((unsigned int)(-2 - v16) >> 6));
    if ( _bittest64(&v41, v40) )
    {
      v42 = (_QWORD *)(*(_QWORD *)(v13 + 208) + 8 * ((unsigned __int64)(int)v40 >> 5));
      v43 = *v42;
      if ( !*v42 )
      {
        v55 = (__int64 *)(*(_QWORD *)(v13 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v56 = *v55;
        v55[10] += 768;
        v57 = (_DWORD *)((v56 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v55[1] >= (unsigned __int64)(v57 + 192) && v56 )
        {
          *v55 = (__int64)(v57 + 192);
        }
        else
        {
          v84 = v7;
          v78 = v42;
          v71 = v40;
          v57 = (_DWORD *)sub_67A630((__int64)v55, 768, 3);
          v7 = v84;
          v42 = v78;
          LOBYTE(v40) = v71;
        }
        *v42 = v57;
        v58 = v57 + 192;
        do
        {
          *v57 = 0;
          v57 += 6;
          *((_OWORD *)v57 - 1) = 0;
        }
        while ( v58 != v57 );
        v43 = *v42;
      }
      v18 = (_DWORD *)(v43 + 24 * (v40 & 0x1F));
    }
    else
    {
      v69 = v7;
      v18 = (_DWORD *)sub_CA9380(v13, (unsigned int)v40, 0);
      v7 = v69;
    }
    goto LABEL_9;
  }
LABEL_34:
  v19 = v15 < *(_DWORD *)(v13 + 248);
LABEL_10:
  if ( v19 )
  {
LABEL_11:
    v20 = *(_DWORD *)(v13 + 408);
    goto LABEL_12;
  }
LABEL_29:
  v65 = v7;
  v26 = sub_CA9700(v13, v15);
  v7 = v65;
  v20 = v26;
LABEL_12:
  v94[0] = 0;
  if ( (unsigned int)(v20 + 1) <= 1 )
    return;
  if ( v20 >= 0 )
  {
    v21 = *(_QWORD *)(v13 + 184) + 24LL * v20;
    v22 = v15 - (*(_DWORD *)v21 & 0x7FFFFFFF);
    goto LABEL_15;
  }
  v29 = (unsigned int)(-2 - v20);
  v30 = (unsigned int)(-2 - v20) >> 6;
  v67 = (-2 - v20) & 0x3F;
  v31 = *(_QWORD *)(*(_QWORD *)(v13 + 256) + 8 * v30);
  if ( _bittest64(&v31, v29) )
  {
    v46 = (_QWORD *)(*(_QWORD *)(v13 + 208) + 8 * ((unsigned __int64)(int)v29 >> 5));
    if ( *v46 )
    {
      v32 = (int *)(*v46 + 24LL * ((-2 - (_BYTE)v20) & 0x1F));
      goto LABEL_39;
    }
    v51 = (__int64 *)(*(_QWORD *)(v13 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v52 = *v51;
    v51[10] += 768;
    v53 = (_DWORD *)((v52 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v51[1] >= (unsigned __int64)(v53 + 192) && v52 )
    {
      *v51 = (__int64)(v53 + 192);
      v33 = 0;
    }
    else
    {
      v93 = (unsigned int)(-2 - v20) >> 6;
      v92 = v7;
      v88 = v20;
      v83 = v46;
      v77 = -2 - v20;
      v53 = (_DWORD *)sub_67A630((__int64)v51, 768, 3);
      v33 = v94[0];
      v30 = v93;
      v7 = v92;
      v20 = v88;
      v46 = v83;
      LODWORD(v29) = v77;
    }
    *v46 = v53;
    v54 = v53 + 192;
    do
    {
      *v53 = 0;
      v53 += 6;
      *((_OWORD *)v53 - 1) = 0;
    }
    while ( v54 != v53 );
    v32 = (int *)(*v46 + 24 * (v29 & 0x1F));
  }
  else
  {
    v90 = (unsigned int)(-2 - v20) >> 6;
    v86 = v7;
    v80 = v20;
    v74 = -2 - v20;
    v32 = (int *)sub_CA9380(v13, (unsigned int)v29, v94);
    v33 = v94[0];
    LODWORD(v29) = v74;
    v20 = v80;
    v7 = v86;
    v30 = v90;
  }
  if ( v33 || !v32 )
    return;
LABEL_39:
  v34 = *v32;
  v94[0] = 0;
  v22 = v15 - (v34 & 0x7FFFFFFF);
  v35 = *(_QWORD *)(*(_QWORD *)(v13 + 256) + 8 * v30);
  if ( _bittest64(&v35, v67) )
  {
    v36 = (_QWORD *)(*(_QWORD *)(v13 + 208) + 8 * ((unsigned __int64)(int)v29 >> 5));
    if ( *v36 )
    {
      v21 = *v36 + 24 * (v29 & 0x1F);
      goto LABEL_15;
    }
    v59 = (__int64 *)(*(_QWORD *)(v13 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v60 = *v59;
    v59[10] += 768;
    v61 = (_DWORD *)((v60 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v59[1] >= (unsigned __int64)(v61 + 192) && v60 )
    {
      *v59 = (__int64)(v61 + 192);
      v28 = 0;
    }
    else
    {
      v89 = v7;
      v85 = v20;
      v79 = v36;
      v72 = v29;
      v61 = (_DWORD *)sub_67A630((__int64)v59, 768, 3);
      v28 = v94[0];
      v7 = v89;
      v20 = v85;
      v36 = v79;
      LOBYTE(v29) = v72;
    }
    *v36 = v61;
    v62 = v61 + 192;
    do
    {
      *v61 = 0;
      v61 += 6;
      *((_OWORD *)v61 - 1) = 0;
    }
    while ( v62 != v61 );
    v21 = *v36 + 24 * (v29 & 0x1F);
  }
  else
  {
    v73 = v7;
    v66 = v20;
    v21 = sub_CA9380(v13, (unsigned int)v29, v94);
    v28 = v94[0];
    v7 = v73;
    v20 = v66;
  }
  if ( v28 || !v21 )
    goto LABEL_33;
LABEL_15:
  if ( *(char *)(v21 + 3) < 0 )
  {
LABEL_33:
    v23 = 0;
    goto LABEL_17;
  }
  v23 = *(_QWORD *)((*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_17:
  if ( a3 )
  {
    v63 = v20;
    v24 = sub_67EE90(v7, v23);
    v20 = v63;
    *a3 = v24;
  }
  if ( a4 )
    *a4 = v23;
  if ( a5 )
  {
    v64 = v20;
    v25 = sub_CAB8D0(v13, (unsigned int)v20, v22, 0);
    v20 = v64;
    *a5 = v25;
  }
  if ( a6 )
    *a6 = sub_CAC390(v13, (unsigned int)v20, v22, 0);
  if ( a7 )
    *a7 = v22;
}

