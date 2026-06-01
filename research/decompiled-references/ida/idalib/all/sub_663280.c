char *__fastcall sub_663280(__int64 *a1, int a2, __int64 a3, const char **a4, char a5, unsigned __int64 a6)
{
  const char *v6; // r14
  bool v10; // zf
  int v12; // r9d
  char v13; // al
  char v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rsi
  size_t v23; // rax
  __int64 v24; // r8
  size_t v25; // r9
  size_t v26; // r11
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rsi
  char v37; // r15
  size_t v38; // rax
  unsigned __int64 v39; // rdx
  bool v40; // cf
  const char *v41; // rbp
  __int64 v42; // r9
  int v43; // r15d
  unsigned __int8 v44; // al
  __int64 v45; // r8
  char v46; // cl
  unsigned __int8 v47; // al
  int v48; // edx
  size_t v49; // rax
  size_t v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rbp
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  size_t v58; // rax
  size_t v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  size_t v67; // rax
  __int64 v68; // rax
  char *v70; // [rsp+10h] [rbp-C8h]
  int v71; // [rsp+18h] [rbp-C0h]
  unsigned int v72; // [rsp+18h] [rbp-C0h]
  bool v73; // [rsp+1Fh] [rbp-B9h]
  __int64 v74; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v77; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+20h] [rbp-B8h]
  __int64 v79; // [rsp+20h] [rbp-B8h]
  int v80; // [rsp+20h] [rbp-B8h]
  __int64 v81; // [rsp+28h] [rbp-B0h]
  __int64 v82; // [rsp+28h] [rbp-B0h]
  __int64 v83; // [rsp+28h] [rbp-B0h]
  __int64 v84; // [rsp+28h] [rbp-B0h]
  __int64 v85; // [rsp+28h] [rbp-B0h]
  __int64 v86; // [rsp+30h] [rbp-A8h]
  __int64 v87; // [rsp+30h] [rbp-A8h]
  __int64 v88; // [rsp+30h] [rbp-A8h]
  __int64 v89; // [rsp+30h] [rbp-A8h]
  size_t v90; // [rsp+30h] [rbp-A8h]
  size_t v91; // [rsp+38h] [rbp-A0h]
  char v92; // [rsp+4Fh] [rbp-89h] BYREF
  _BYTE v93[72]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v94; // [rsp+98h] [rbp-40h]

  v6 = haystack;
  v10 = a4[1] == nullptr;
  v94 = __readfsqword(0x28u);
  if ( !v10 )
    v6 = *a4;
  v70 = sub_537330((__int64)a4);
  if ( a5 )
  {
    if ( (unsigned __int64)a4[1] <= 1 )
    {
      v6 = v93;
      qsnprintf((unsigned int)v93, 69, (unsigned int)"MM_%llXh_%s", (unsigned int)a4[6], a2, v12);
      v13 = v93[0];
      if ( v70 )
        goto LABEL_6;
    }
    else
    {
      v13 = *v6;
      if ( v70 )
      {
LABEL_6:
        if ( v13 )
        {
          v73 = 0;
          v14 = 23;
          v71 = 16;
          goto LABEL_8;
        }
        v37 = *(_BYTE *)(a3 + 52);
        if ( a6 )
        {
          v50 = strlen(v6);
          v51 = a6 - v50;
          v40 = v50 < a6;
          a6 = 0;
          if ( v40 )
            a6 = v51;
        }
LABEL_45:
        v48 = *(_DWORD *)(a3 + 48);
        v42 = 129;
        goto LABEL_46;
      }
    }
    if ( !v13 )
    {
      v37 = *(_BYTE *)(a3 + 52);
      if ( !a6 )
      {
        v48 = *(_DWORD *)(a3 + 48);
        v42 = 129;
        v70 = "MASK";
        goto LABEL_46;
      }
      v58 = strlen(v6);
      if ( v58 >= a6 )
        a6 = 0;
      else
        a6 -= v58;
      v70 = "MASK";
      goto LABEL_45;
    }
    v73 = 0;
    v14 = 23;
    v71 = 16;
    v70 = "MASK";
LABEL_8:
    v15 = a1[1];
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = a1[1];
      v18 = *a1;
      --v15;
      if ( a1[2] >= v16 )
        goto LABEL_10;
    }
    else
    {
      v18 = *a1;
      v17 = 1;
      v16 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_10;
    }
    v89 = v17;
    v84 = v15;
    v78 = v16;
    v63 = qvector_reserve(a1, v18, v16, 1);
    v17 = v89;
    v15 = v84;
    *a1 = v63;
    v16 = v78;
    v18 = v63;
LABEL_10:
    a1[1] = v16;
    *(_BYTE *)(v18 + v15) = 1;
    *(_BYTE *)(*a1 + v17) = 0;
    v19 = a1[1];
    if ( v19 )
    {
      v20 = v19 + 1;
      v21 = a1[1];
      v22 = *a1;
      --v19;
      if ( a1[2] >= v20 )
        goto LABEL_12;
    }
    else
    {
      v22 = *a1;
      v21 = 1;
      v20 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_12;
    }
    v88 = v21;
    v83 = v19;
    v77 = v20;
    v62 = qvector_reserve(a1, v22, v20, 1);
    v21 = v88;
    v19 = v83;
    *a1 = v62;
    v20 = v77;
    v22 = v62;
LABEL_12:
    a1[1] = v20;
    *(_BYTE *)(v22 + v19) = v14;
    *(_BYTE *)(*a1 + v21) = 0;
    if ( v6 )
    {
      v74 = a1[1];
      v23 = strlen(v6);
      v24 = v74;
      v25 = v23;
      v26 = v23;
      if ( v74 )
      {
        v24 = v74 - 1;
        v26 = v23 + v74 - 1;
      }
      v27 = *a1;
      v28 = v26 + 1;
      if ( a1[2] < v26 + 1 )
      {
        v91 = v23;
        v90 = v26;
        v85 = v24;
        v79 = v26 + 1;
        v65 = qvector_reserve(a1, v27, v28, 1);
        v25 = v91;
        v26 = v90;
        *a1 = v65;
        v24 = v85;
        v27 = v65;
        v28 = v79;
      }
      a1[1] = v28;
      *(_BYTE *)(v27 + v26) = 0;
      memmove((void *)(v24 + *a1), v6, v25);
    }
    v29 = a1[1];
    if ( v29 )
    {
      v30 = v29 + 1;
      v31 = a1[1];
      v32 = *a1;
      --v29;
      if ( a1[2] >= v30 )
        goto LABEL_20;
    }
    else
    {
      v32 = *a1;
      v31 = 1;
      v30 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_20;
    }
    v87 = v29;
    v82 = v31;
    v76 = v30;
    v61 = qvector_reserve(a1, v32, v30, 1);
    v29 = v87;
    v31 = v82;
    *a1 = v61;
    v30 = v76;
    v32 = v61;
LABEL_20:
    a1[1] = v30;
    *(_BYTE *)(v32 + v29) = 2;
    *(_BYTE *)(*a1 + v31) = 0;
    v33 = a1[1];
    if ( v33 )
    {
      v34 = v33 + 1;
      v35 = a1[1];
      v36 = *a1;
      --v33;
      if ( a1[2] >= v34 )
      {
LABEL_22:
        a1[1] = v34;
        *(_BYTE *)(v36 + v33) = v14;
        *(_BYTE *)(*a1 + v35) = 0;
        v37 = *(_BYTE *)(a3 + 52);
        if ( a6 )
        {
          v38 = strlen(v6);
          v39 = a6 - v38;
          v40 = v38 < a6;
          a6 = 0;
          if ( v40 )
            a6 = v39;
        }
        if ( v71 == 1 )
        {
          v42 = 131;
          goto LABEL_48;
        }
        goto LABEL_26;
      }
    }
    else
    {
      v36 = *a1;
      v35 = 1;
      v34 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_22;
    }
    v86 = v33;
    v81 = v35;
    v75 = v34;
    v60 = qvector_reserve(a1, v36, v34, 1);
    v33 = v86;
    v35 = v81;
    *a1 = v60;
    v34 = v75;
    v36 = v60;
    goto LABEL_22;
  }
  v37 = *(_BYTE *)(a3 + 52);
  v46 = *v6;
  v47 = v37 & 0x60;
  if ( (v37 & 0x60) == 0x20 )
  {
    if ( !v46 )
    {
      if ( a6 )
      {
        v59 = strlen(v6);
        if ( v59 >= a6 )
        {
          a6 = 0;
          v42 = 131;
          goto LABEL_48;
        }
        a6 -= v59;
      }
      v42 = 131;
LABEL_48:
      v41 = a4[6];
      v43 = v37 & 7;
      if ( !v43 )
        goto LABEL_28;
      goto LABEL_49;
    }
    v73 = 0;
    v14 = 37;
    v71 = 1;
    goto LABEL_8;
  }
  if ( v47 <= 0x20u )
  {
    v48 = *(_DWORD *)(a3 + 48);
    if ( (v48 & 0x200) != 0 )
    {
      v73 = (*(_DWORD *)(a3 + 48) & 0x400) != 0;
      if ( v46 )
      {
        v71 = 2;
        v14 = 37;
        goto LABEL_8;
      }
      if ( !a6 )
      {
        v42 = 32 * (unsigned int)((*(_DWORD *)(a3 + 48) & 0x400) != 0);
        goto LABEL_114;
      }
      v71 = 2;
    }
    else if ( (v48 & 0x100) != 0 )
    {
      v73 = (*(_DWORD *)(a3 + 48) & 0x400) != 0;
      if ( v46 )
      {
        v71 = 8;
        v14 = 37;
        goto LABEL_8;
      }
      if ( !a6 )
      {
        v42 = 32 * (unsigned int)((*(_DWORD *)(a3 + 48) & 0x400) != 0);
LABEL_110:
        LOBYTE(v42) = v42 | 0x82;
        goto LABEL_46;
      }
      v71 = 8;
    }
    else
    {
      v73 = (*(_DWORD *)(a3 + 48) & 0x400) != 0;
      if ( v46 )
      {
        v71 = 16;
        v14 = 37;
        goto LABEL_8;
      }
      if ( !a6 )
      {
        v42 = 32 * (unsigned int)((*(_DWORD *)(a3 + 48) & 0x400) != 0);
LABEL_36:
        LOBYTE(v42) = v42 | 0x81;
        goto LABEL_46;
      }
      v71 = 16;
    }
    v80 = *(_DWORD *)(a3 + 48);
    v67 = strlen(v6);
    if ( v67 >= a6 )
    {
      BYTE1(v48) = BYTE1(v80);
      a6 = 0;
      goto LABEL_120;
    }
    a6 -= v67;
LABEL_26:
    if ( v71 == 10 )
      goto LABEL_27;
    v48 = *(_DWORD *)(a3 + 48);
LABEL_120:
    v42 = 32 * (unsigned int)v73;
    if ( v71 != 2 )
    {
      if ( v71 != 8 )
        goto LABEL_36;
      goto LABEL_110;
    }
LABEL_114:
    LOBYTE(v42) = v42 | 0x84;
LABEL_46:
    if ( (v48 & 0x800) != 0 )
      v42 = (unsigned int)v42 | 0x10;
    goto LABEL_48;
  }
  if ( (v37 & 0x40) == 0 )
  {
    if ( !v46 )
    {
      if ( a6 )
      {
        v49 = strlen(v6);
        if ( v49 < a6 )
        {
          a6 -= v49;
          v48 = *(_DWORD *)(a3 + 48);
          v42 = 0;
        }
        else
        {
          v48 = *(_DWORD *)(a3 + 48);
          v42 = 0;
          a6 = 0;
        }
        goto LABEL_36;
      }
      goto LABEL_45;
    }
    v73 = 0;
    v14 = 37;
    v71 = 16;
    goto LABEL_8;
  }
  v73 = v47 == 64;
  if ( v46 )
  {
    v71 = 10;
    v14 = 37;
    goto LABEL_8;
  }
  if ( a6 )
  {
    v64 = strlen(v6);
    if ( v64 < a6 )
      a6 -= v64;
    else
      a6 = 0;
  }
LABEL_27:
  v41 = a4[6];
  v42 = !v73 ? 136 : 224;
  v43 = v37 & 7;
  if ( !v43 )
  {
LABEL_28:
    v72 = v42;
    v44 = getinf(61);
    v42 = v72;
    v45 = v44;
    goto LABEL_50;
  }
LABEL_49:
  v45 = (unsigned int)(1 << (v43 - 1));
LABEL_50:
  format_c_number(v93, 69, v41, 0, v45, v42);
  if ( a6 )
  {
    v52 = a1[1];
    if ( v52 )
    {
      v92 = 32;
      v53 = *a1;
      a6 += v52 - 1;
      if ( v52 - 1 < a6 )
      {
        *(_BYTE *)(v53 + v52 - 1) = 32;
        v52 = a1[1];
        v53 = *a1;
      }
      v54 = a6 + 1;
      v55 = v53;
      if ( a6 + 1 < v52 )
        goto LABEL_60;
    }
    else
    {
      v92 = 32;
      v53 = *a1;
      v54 = a6 + 1;
    }
    v55 = v53;
    if ( v52 >= v54 )
    {
LABEL_61:
      *(_BYTE *)(v55 + a6) = 0;
      goto LABEL_62;
    }
    v56 = a1[2];
    if ( (unsigned __int64)&v92 < v53 || (unsigned __int64)&v92 >= v53 + v56 )
    {
      if ( v56 < v54 )
      {
        v66 = qvector_reserve(a1, v53, v54, 1);
        *a1 = v66;
        v55 = v66;
        v52 = a1[1];
      }
      if ( v52 < v54 )
      {
        do
        {
          *(_BYTE *)(v55 + v52++) = 32;
          v55 = *a1;
        }
        while ( v52 != v54 );
      }
    }
    else
    {
      if ( v56 < v54 )
      {
        v68 = qvector_reserve(a1, v53, v54, 1);
        *a1 = v68;
        v55 = v68;
        v52 = a1[1];
      }
      if ( v52 < v54 )
      {
        do
        {
          *(_BYTE *)(v55 + v52++) = 32;
          v55 = *a1;
        }
        while ( v52 != v54 );
      }
    }
LABEL_60:
    a1[1] = v54;
    goto LABEL_61;
  }
LABEL_62:
  sub_35A910(a1);
  return v70;
}
