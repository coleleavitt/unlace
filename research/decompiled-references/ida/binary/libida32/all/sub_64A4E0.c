__int64 __fastcall sub_64A4E0(__int64 a1, __int64 *a2, _BYTE *a3)
{
  char v4; // r13
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // r14
  int v9; // ebp
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  char v15; // si
  __int64 v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rsi
  _DWORD *v28; // rbx
  __int64 v29; // r10
  unsigned __int64 v30; // rdx
  __int64 v31; // r11
  __int64 v32; // rsi
  __int64 v33; // r10
  unsigned __int64 v34; // rdx
  __int64 v35; // r11
  __int64 v36; // rsi
  __int64 v37; // r10
  unsigned __int64 v38; // rdx
  __int64 v39; // r11
  __int64 v40; // rsi
  __int64 v41; // r10
  unsigned __int64 v42; // rdx
  __int64 v43; // r11
  __int64 v44; // rsi
  __int64 v45; // r10
  unsigned __int64 v46; // rdx
  __int64 v47; // r11
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r10
  unsigned __int64 v56; // rdx
  __int64 v57; // r11
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // edi
  __int64 custom_callcnv; // rax
  __int64 v63; // rdx
  __int64 v64; // rbx
  unsigned __int64 v65; // rbp
  __int64 v66; // r13
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // [rsp+Fh] [rbp-59h]
  unsigned __int64 v72; // [rsp+10h] [rbp-58h]
  unsigned __int64 v73; // [rsp+10h] [rbp-58h]
  unsigned __int64 v74; // [rsp+10h] [rbp-58h]
  unsigned __int64 v75; // [rsp+10h] [rbp-58h]
  unsigned __int64 v76; // [rsp+10h] [rbp-58h]
  unsigned __int64 v77; // [rsp+10h] [rbp-58h]
  unsigned __int64 v78; // [rsp+10h] [rbp-58h]
  unsigned __int64 v79; // [rsp+10h] [rbp-58h]
  __int64 v80; // [rsp+18h] [rbp-50h]
  __int64 v81; // [rsp+18h] [rbp-50h]
  __int64 v82; // [rsp+18h] [rbp-50h]
  __int64 v83; // [rsp+18h] [rbp-50h]
  __int64 v84; // [rsp+18h] [rbp-50h]
  __int64 v85; // [rsp+18h] [rbp-50h]
  __int64 v86; // [rsp+18h] [rbp-50h]
  __int64 v87; // [rsp+18h] [rbp-50h]
  __int64 v88; // [rsp+20h] [rbp-48h]
  __int64 v89; // [rsp+20h] [rbp-48h]
  __int64 v90; // [rsp+20h] [rbp-48h]
  __int64 v91; // [rsp+20h] [rbp-48h]
  __int64 v92; // [rsp+20h] [rbp-48h]
  __int64 v93; // [rsp+20h] [rbp-48h]
  __int64 v94; // [rsp+20h] [rbp-48h]
  __int64 v95; // [rsp+20h] [rbp-48h]

  v4 = 0;
  sub_641C10(a2, 40);
  if ( *(_DWORD *)(a1 + 40) == 1 && (*(_BYTE *)(a1 + 34) & 1) != 0 )
  {
    v64 = a2[1];
    if ( v64 )
    {
      v65 = v64 + 1;
      v66 = a2[1];
      --v64;
    }
    else
    {
      v66 = 1;
      v65 = 2;
    }
    v67 = *a2;
    if ( a2[2] < v65 )
    {
      v70 = qvector_reserve(a2, v67, v65, 1);
      *a2 = v70;
      v67 = v70;
    }
    a2[1] = v65;
    *(_BYTE *)(v67 + v64) = 10;
    *(_BYTE *)(*a2 + v66) = 0;
    v4 = 1;
  }
  v6 = *(_QWORD *)a3;
  v7 = *(_BYTE *)(*(_QWORD *)a3 + 88LL) & 0xF0;
  if ( v7 != -64 )
  {
    if ( v7 != 64 && v7 != -48 )
    {
      if ( v7 != 32 )
        goto LABEL_7;
      goto LABEL_6;
    }
LABEL_30:
    v71 = 1;
    if ( !*(_QWORD *)(v6 + 8) )
      goto LABEL_31;
    goto LABEL_9;
  }
  v61 = *(_DWORD *)(v6 + 28);
  if ( v61 == 64 || v61 == 208 )
    goto LABEL_30;
  if ( v61 != 32 )
  {
    if ( v61 <= 0x1FF && (v61 > 0xFF || (v61 & 0xFFFFFF0F) == 0) )
      goto LABEL_7;
    custom_callcnv = get_custom_callcnv();
    v63 = *(_QWORD *)(v6 + 8);
    if ( !custom_callcnv )
    {
      if ( v63 )
        goto LABEL_8;
      goto LABEL_20;
    }
    v71 = *(_BYTE *)(custom_callcnv + 16) & 1;
    if ( !v63 )
    {
LABEL_67:
      if ( !v71 )
      {
LABEL_13:
        if ( !v4 || !*(_QWORD *)(v6 + 8) )
          goto LABEL_20;
LABEL_15:
        v11 = a2[1];
        if ( v11 )
        {
          v13 = v11 + 1;
          v12 = a2[1];
          --v11;
        }
        else
        {
          v12 = 1;
          v13 = 2;
        }
        v14 = *a2;
        if ( a2[2] < v13 )
        {
          v68 = qvector_reserve(a2, v14, v13, 1);
          *a2 = v68;
          v14 = v68;
        }
        a2[1] = v13;
        *(_BYTE *)(v14 + v11) = 10;
        *(_BYTE *)(*a2 + v12) = 0;
        goto LABEL_20;
      }
LABEL_31:
      v24 = a2[1];
      if ( v24 )
      {
        v26 = v24 + 6;
        v25 = v24 + 7;
        --v24;
      }
      else
      {
        v25 = 8;
        v26 = 7;
      }
      v27 = *a2;
      if ( a2[2] < v25 )
      {
        v69 = qvector_reserve(a2, v27, v25, 1);
        *a2 = v69;
        v27 = v69;
      }
      a2[1] = v25;
      *(_BYTE *)(v27 + v26) = 0;
      v28 = (_DWORD *)(*a2 + v24);
      *v28 = 774768897;
      *(_DWORD *)((char *)v28 + 3) = 151137838;
      if ( !v4 )
        goto LABEL_20;
      goto LABEL_15;
    }
LABEL_9:
    v8 = 0;
    v9 = 0;
    if ( v4 )
      goto LABEL_27;
    while ( 1 )
    {
      result = sub_649620(a1, (char *)a2, v6, *(_QWORD *)v6 + 80 * v8);
      if ( !(_BYTE)result )
        return result;
      v8 = ++v9;
      if ( (unsigned __int64)v9 >= *(_QWORD *)(v6 + 8) && !v71 )
        goto LABEL_13;
      v29 = a2[1];
      if ( v29 )
      {
        v30 = v29 + 1;
        v31 = a2[1];
        v32 = *a2;
        --v29;
        if ( a2[2] >= v30 )
          goto LABEL_39;
      }
      else
      {
        v32 = *a2;
        v31 = 1;
        v30 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_39;
      }
      v88 = v31;
      v80 = v29;
      v72 = v30;
      v49 = qvector_reserve(a2, v32, v30, 1);
      v31 = v88;
      v29 = v80;
      *a2 = v49;
      v30 = v72;
      v32 = v49;
LABEL_39:
      a2[1] = v30;
      *(_BYTE *)(v32 + v29) = 1;
      *(_BYTE *)(*a2 + v31) = 0;
      v33 = a2[1];
      if ( v33 )
      {
        v34 = v33 + 1;
        v35 = a2[1];
        v36 = *a2;
        --v33;
        if ( a2[2] >= v34 )
          goto LABEL_41;
      }
      else
      {
        v36 = *a2;
        v35 = 1;
        v34 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_41;
      }
      v92 = v35;
      v84 = v33;
      v76 = v34;
      v53 = qvector_reserve(a2, v36, v34, 1);
      v35 = v92;
      v33 = v84;
      *a2 = v53;
      v34 = v76;
      v36 = v53;
LABEL_41:
      a2[1] = v34;
      *(_BYTE *)(v36 + v33) = 9;
      *(_BYTE *)(*a2 + v35) = 0;
      v37 = a2[1];
      if ( v37 )
      {
        v38 = v37 + 1;
        v39 = a2[1];
        v40 = *a2;
        --v37;
        if ( a2[2] >= v38 )
          goto LABEL_43;
      }
      else
      {
        v40 = *a2;
        v39 = 1;
        v38 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_43;
      }
      v91 = v39;
      v83 = v37;
      v75 = v38;
      v52 = qvector_reserve(a2, v40, v38, 1);
      v39 = v91;
      v37 = v83;
      *a2 = v52;
      v38 = v75;
      v40 = v52;
LABEL_43:
      a2[1] = v38;
      *(_BYTE *)(v40 + v37) = 44;
      *(_BYTE *)(*a2 + v39) = 0;
      v41 = a2[1];
      if ( v41 )
      {
        v42 = v41 + 1;
        v43 = a2[1];
        v44 = *a2;
        --v41;
        if ( a2[2] >= v42 )
          goto LABEL_45;
      }
      else
      {
        v44 = *a2;
        v43 = 1;
        v42 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_45;
      }
      v90 = v43;
      v82 = v41;
      v74 = v42;
      v51 = qvector_reserve(a2, v44, v42, 1);
      v43 = v90;
      v41 = v82;
      *a2 = v51;
      v42 = v74;
      v44 = v51;
LABEL_45:
      a2[1] = v42;
      *(_BYTE *)(v44 + v41) = 2;
      *(_BYTE *)(*a2 + v43) = 0;
      v45 = a2[1];
      if ( v45 )
      {
        v46 = v45 + 1;
        v47 = a2[1];
        v48 = *a2;
        --v45;
        if ( a2[2] < v46 )
          goto LABEL_55;
      }
      else
      {
        v48 = *a2;
        v47 = 1;
        v46 = 2;
        if ( (unsigned __int64)a2[2] < 2 )
        {
LABEL_55:
          v89 = v47;
          v81 = v45;
          v73 = v46;
          v50 = qvector_reserve(a2, v48, v46, 1);
          v47 = v89;
          v45 = v81;
          *a2 = v50;
          v46 = v73;
          v48 = v50;
        }
      }
      a2[1] = v46;
      *(_BYTE *)(v48 + v45) = 9;
      *(_BYTE *)(*a2 + v47) = 0;
      if ( v4 )
      {
        v16 = a2[1];
        if ( v16 )
        {
          v17 = v16 + 1;
          v18 = a2[1];
          v19 = *a2;
          --v16;
          if ( a2[2] >= v17 )
            goto LABEL_26;
        }
        else
        {
          v19 = *a2;
          v18 = 1;
          v17 = 2;
          if ( (unsigned __int64)a2[2] >= 2 )
            goto LABEL_26;
        }
        v94 = v18;
        v86 = v16;
        v78 = v17;
        v59 = qvector_reserve(a2, v19, v17, 1);
        v18 = v94;
        v16 = v86;
        *a2 = v59;
        v17 = v78;
        v19 = v59;
LABEL_26:
        a2[1] = v17;
        *(_BYTE *)(v19 + v16) = 10;
        *(_BYTE *)(*a2 + v18) = 0;
        if ( (unsigned __int64)v9 >= *(_QWORD *)(v6 + 8) )
          goto LABEL_67;
LABEL_27:
        v20 = a2[1];
        if ( v20 )
        {
          v21 = v20 + 7;
          v22 = v20 + 8;
          v23 = *a2;
          --v20;
          if ( a2[2] >= v22 )
            goto LABEL_29;
        }
        else
        {
          v23 = *a2;
          v22 = 9;
          v21 = 8;
          if ( (unsigned __int64)a2[2] >= 9 )
            goto LABEL_29;
        }
        v93 = v20;
        v85 = v21;
        v77 = v22;
        v54 = qvector_reserve(a2, v23, v22, 1);
        v20 = v93;
        v21 = v85;
        *a2 = v54;
        v22 = v77;
        v23 = v54;
LABEL_29:
        a2[1] = v22;
        *(_BYTE *)(v23 + v21) = 0;
        *(_QWORD *)(*a2 + v20) = 0x2020202020202020LL;
      }
      else if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      {
        v55 = a2[1];
        if ( v55 )
        {
          v56 = v55 + 1;
          v57 = a2[1];
          v58 = *a2;
          --v55;
          if ( a2[2] < v56 )
            goto LABEL_72;
        }
        else
        {
          v58 = *a2;
          v57 = 1;
          v56 = 2;
          if ( (unsigned __int64)a2[2] < 2 )
          {
LABEL_72:
            v95 = v57;
            v87 = v55;
            v79 = v56;
            v60 = qvector_reserve(a2, v58, v56, 1);
            v57 = v95;
            v55 = v87;
            *a2 = v60;
            v56 = v79;
            v58 = v60;
          }
        }
        a2[1] = v56;
        *(_BYTE *)(v58 + v55) = 32;
        *(_BYTE *)(*a2 + v57) = 0;
        if ( (unsigned __int64)v9 >= *(_QWORD *)(v6 + 8) )
          goto LABEL_67;
      }
      else if ( (unsigned __int64)v9 >= *(_QWORD *)(v6 + 8) )
      {
        if ( !v71 )
          goto LABEL_20;
        goto LABEL_31;
      }
    }
  }
LABEL_6:
  if ( aVoid[1] )
  {
    sub_640FE0(a2, "void", 32);
    if ( *(_QWORD *)(v6 + 8) )
      goto LABEL_8;
    goto LABEL_20;
  }
LABEL_7:
  if ( *(_QWORD *)(v6 + 8) )
  {
LABEL_8:
    v71 = 0;
    goto LABEL_9;
  }
LABEL_20:
  sub_641C10(a2, 41);
  v15 = a3[28];
  if ( (unsigned __int8)v15 > 0x3Fu )
    sub_6415D0(a2, v15, 0);
  return 1;
}

