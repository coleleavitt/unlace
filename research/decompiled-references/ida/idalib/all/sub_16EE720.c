__int64 __fastcall sub_16EE720(__int64 *a1, unsigned __int64 a2, __int64 a3, double a4)
{
  unsigned int v6; // eax
  char v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // r15
  _DWORD *v25; // r15
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // r11
  size_t v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // r15d
  char v35; // r13
  size_t v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  char v59; // dl
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // [rsp+8h] [rbp-120h]
  __int64 v67; // [rsp+8h] [rbp-120h]
  unsigned __int64 v68; // [rsp+8h] [rbp-120h]
  unsigned __int64 v69; // [rsp+10h] [rbp-118h]
  unsigned __int64 v70; // [rsp+10h] [rbp-118h]
  unsigned __int64 v71; // [rsp+10h] [rbp-118h]
  char v72; // [rsp+10h] [rbp-118h]
  unsigned __int64 v73; // [rsp+10h] [rbp-118h]
  __int64 v74; // [rsp+20h] [rbp-108h]
  unsigned int v75; // [rsp+28h] [rbp-100h]
  unsigned __int64 v76; // [rsp+28h] [rbp-100h]
  unsigned int v77; // [rsp+30h] [rbp-F8h] BYREF
  int v78; // [rsp+34h] [rbp-F4h] BYREF
  int v79; // [rsp+38h] [rbp-F0h] BYREF
  int v80; // [rsp+3Ch] [rbp-ECh] BYREF
  _QWORD *v81; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v82; // [rsp+48h] [rbp-E0h]
  char v83; // [rsp+50h] [rbp-D8h]
  _QWORD v84[25]; // [rsp+60h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a1[29] + 164) & 8) == 0 )
  {
    v6 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v84, a1 + 1, v6, 0xD1Cu, 0);
    sub_15F7200(v84);
    return 1;
  }
  v9 = sub_16EC930((__int64)a1, a2, 4u, a4);
  if ( v9 )
    return 1;
  v10 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v11 = *(_QWORD *)(a2 + v10 + 32);
  v12 = *(_QWORD *)(a2 + v10 + 40);
  v13 = *(_QWORD *)(a2 + v10 + 48);
  v66 = *(_QWORD *)(a2 + v10 + 56);
  v14 = sub_19179A0(a1, v11, 1);
  if ( v14 == 1 )
    return 1;
  v17 = v14 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) != 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1[31] + 19072);
    return a2;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) == 42
    || (v73 = v17,
        v18 = sub_16B68B0(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL), v11, v15, v16),
        v17 = v73,
        v18) )
  {
    v69 = v17;
    v84[0] = *(_QWORD *)(v18 + 32);
    v19 = sub_6D5440(v84);
    v74 = v19;
    v23 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v23 + 17) & 4) == 0 )
    {
      v76 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      if ( sub_F61040(v23, v11, v19 & 0xFFFFFFFFFFFFFFF0LL, v20, v21, v22) )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v76 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v59 = *(_BYTE *)(v58 + 16);
        if ( v59 == 13 )
        {
          if ( ((*(_WORD *)(v58 + 18) >> 3) & 0x1FF) != 0x1B4 )
            goto LABEL_10;
        }
        else if ( v59 != 47 )
        {
          goto LABEL_10;
        }
      }
      v60 = sub_EEB7E0(v69, v11, a4);
      sub_168B9F0((__int64)v84, a1 + 1, v60, 0xD17u, 0);
      v77 = 1;
      v61 = sub_16CF160((__int64)v84, &v77);
      v78 = 0;
      v62 = sub_1587D10(v61, &v78);
      v79 = 5;
      v63 = sub_1587D10(v62, &v79);
      v80 = 0;
      v64 = sub_1587D10(v63, &v80);
      v81 = *(_QWORD **)(v69 + 8);
      sub_162B6D0(v64, (__int64 *)&v81);
      v9 = 1;
      sub_15F7200(v84);
    }
  }
  else
  {
    v47 = sub_EEB7E0(v73, v11, a4);
    sub_168B9F0((__int64)v84, a1 + 1, v47, 0xD17u, 0);
    v77 = 1;
    v48 = sub_16CF160((__int64)v84, &v77);
    v78 = 0;
    v49 = sub_1587D10(v48, &v78);
    v79 = 5;
    v50 = sub_1587D10(v49, &v79);
    v80 = 0;
    v51 = sub_1587D10(v50, &v80);
    v81 = *(_QWORD **)(v73 + 8);
    sub_162B6D0(v51, (__int64 *)&v81);
    v9 = 1;
    sub_15F7200(v84);
    v74 = 0;
  }
LABEL_10:
  v24 = sub_19146F0(a1, v12);
  if ( v24 == 1
    || (v52 = sub_A63CE0((_QWORD *)a1[31]), v53 = sub_18C1BF0(a1, v24 & 0xFFFFFFFFFFFFFFFELL, v52), v53 == 1) )
  {
    v25 = nullptr;
    v26 = sub_19146F0(a1, v13);
    if ( v26 == 1 )
      goto LABEL_44;
  }
  else
  {
    v25 = (_DWORD *)(v53 & 0xFFFFFFFFFFFFFFFELL);
    *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) = v53 & 0xFFFFFFFFFFFFFFFELL;
    v26 = sub_19146F0(a1, v13);
    if ( v26 == 1 )
    {
LABEL_33:
      if ( v25 )
      {
        if ( (*v25 & 0x10000) == 0 )
          goto LABEL_35;
        goto LABEL_36;
      }
LABEL_44:
      v35 = 0;
      v34 = 0;
      v72 = 0;
      v75 = 0;
      goto LABEL_19;
    }
  }
  v27 = sub_A63CE0((_QWORD *)a1[31]);
  v28 = sub_18C1BF0(a1, v26 & 0xFFFFFFFFFFFFFFFELL, v27);
  if ( v28 == 1 )
    goto LABEL_33;
  v29 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v25 )
  {
    if ( !v29 )
      goto LABEL_44;
    if ( (*v29 & 0x10000) != 0 )
      goto LABEL_36;
    v35 = 0;
    v34 = 0;
LABEL_18:
    v71 = (unsigned __int64)v29;
    v36 = j__strlen("column");
    v39 = sub_16DE6A0(v71, "column", v36, (__int64)a1, v37, v38, a4);
    v75 = v39;
    v72 = BYTE4(v39);
LABEL_19:
    v67 = sub_19146F0(a1, v66);
    if ( v67 != 1 )
    {
      v40 = sub_A63CE0((_QWORD *)a1[31]);
      v41 = sub_18C1BF0(a1, v67 & 0xFFFFFFFFFFFFFFFELL, v40);
      if ( v41 != 1 )
      {
        v44 = v41 & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 56) = v44;
        if ( v35 )
        {
          v45 = v44;
          v68 = v44;
          sub_C3EB00((__int64)&v81, v44, a1[31], nullptr, v42, v43);
          if ( !v83 )
            goto LABEL_26;
          v46 = v81;
          if ( v82 > 0x40 )
            v46 = (_QWORD *)*v81;
          if ( v34 > (unsigned __int64)v46 )
          {
            v65 = sub_EEB7E0(v68, v45, a4);
            sub_168B9F0((__int64)v84, a1 + 1, v65, 0xD21u, 0);
            sub_15F7200(v84);
            sub_98E4B0((__int64)&v81);
          }
          else
          {
LABEL_26:
            sub_98E4B0((__int64)&v81);
            if ( !v9 && v72 )
            {
              *(_QWORD *)(a2 + 8) = sub_A76DD0(a1[31], v74, v34, v75);
              return a3;
            }
          }
        }
      }
    }
    return 1;
  }
  if ( (*v25 & 0x10000) == 0 )
  {
    if ( !v29 )
    {
LABEL_35:
      v54 = j__strlen("row");
      v57 = sub_16DE6A0((unsigned __int64)v25, "row", v54, (__int64)a1, v55, v56, a4);
      v72 = 0;
      v34 = v57;
      v75 = 0;
      v35 = BYTE4(v57);
      goto LABEL_19;
    }
    if ( (*v29 & 0x10000) == 0 )
    {
      v70 = v28 & 0xFFFFFFFFFFFFFFFELL;
      v30 = j__strlen("row");
      v33 = sub_16DE6A0((unsigned __int64)v25, "row", v30, (__int64)a1, v31, v32, a4);
      v29 = (_DWORD *)v70;
      v34 = v33;
      v35 = BYTE4(v33);
      goto LABEL_18;
    }
  }
LABEL_36:
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1[31] + 19072);
  return a3;
}
