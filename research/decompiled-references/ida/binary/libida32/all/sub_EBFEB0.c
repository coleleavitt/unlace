_QWORD *__fastcall sub_EBFEB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  bool v8; // sf
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rbp
  __int64 v15; // rcx
  __int64 *v16; // rdx
  int v17; // eax
  __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 i; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r9
  _QWORD *v42; // rax
  __int64 v43; // r12
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rdx
  _DWORD *v48; // rdx
  __int64 v49; // rdi
  int v50; // eax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // esi
  __int64 v57; // rdx
  __int64 v58; // r12
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  _QWORD *v61; // rdi
  __int64 v62; // rdx
  _DWORD *v63; // rdx
  __int64 v64; // rdi
  int v65; // eax
  __int64 v66; // [rsp+0h] [rbp-408h]
  unsigned __int64 v67; // [rsp+0h] [rbp-408h]
  __int64 v68; // [rsp+8h] [rbp-400h]
  void *src; // [rsp+10h] [rbp-3F8h]
  __int64 v70; // [rsp+18h] [rbp-3F0h]
  unsigned __int64 v71; // [rsp+20h] [rbp-3E8h]
  __int64 v72; // [rsp+28h] [rbp-3E0h]
  __int64 v73; // [rsp+30h] [rbp-3D8h]
  __int64 v74; // [rsp+38h] [rbp-3D0h] BYREF
  __int64 v75; // [rsp+40h] [rbp-3C8h] BYREF
  __int64 *v76; // [rsp+48h] [rbp-3C0h] BYREF
  __int64 v77[2]; // [rsp+50h] [rbp-3B8h] BYREF
  unsigned __int64 v78; // [rsp+60h] [rbp-3A8h]
  __int64 v79; // [rsp+68h] [rbp-3A0h]
  __int64 v80; // [rsp+70h] [rbp-398h]
  __int64 v81; // [rsp+78h] [rbp-390h]
  __int64 v82; // [rsp+80h] [rbp-388h]
  void *v83; // [rsp+88h] [rbp-380h]
  unsigned int v84; // [rsp+90h] [rbp-378h]
  char v85; // [rsp+118h] [rbp-2F0h]
  unsigned __int64 v86; // [rsp+128h] [rbp-2E0h]

  v6 = a2;
  v8 = *(char *)(a2 + 56) < 0;
  v9 = *(_QWORD *)(a2 + 120);
  v74 = a2;
  if ( v8 )
  {
    if ( !v9 )
    {
      v58 = *(_QWORD *)(a2 + 96);
      v59 = *(_QWORD *)(v58 + 88);
      v60 = v59 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v59 & 1) == 0 )
      {
        v61 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v59 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v62 = v59 & 2;
          if ( !(_DWORD)v62 )
          {
LABEL_51:
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 18360) + 168LL))(*(_QWORD *)(a1 + 18360), v6);
            v6 = v74;
LABEL_42:
            v9 = *(_QWORD *)(v6 + 120);
            goto LABEL_2;
          }
          v60 = sub_6C1EC0(v61, *(_QWORD *)(a2 + 96), v62, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
          v59 = v60 | 1;
          *(_QWORD *)(v58 + 88) = v60 | 1;
        }
      }
      if ( v60 )
      {
        if ( (v60 & 4) != 0 )
        {
          v63 = (_DWORD *)(v59 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v63 )
          {
            v64 = *(_QWORD *)v63;
            v65 = *(_DWORD *)(*(_QWORD *)v63 + 12LL);
            if ( v63[2] != v65 )
            {
              v63[2] = v65;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 152LL))(v64, v58);
            }
          }
        }
      }
      v9 = *(_QWORD *)(a2 + 120);
      v6 = v74;
    }
    v51 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v51 && *v51 )
      goto LABEL_42;
    goto LABEL_51;
  }
LABEL_2:
  if ( !v9 )
  {
    v43 = *(_QWORD *)(v6 + 96);
    v44 = *(_QWORD *)(v43 + 88);
    v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v44 & 1) == 0 )
    {
      v46 = (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v44 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v47 = v44 & 2;
        if ( !(_DWORD)v47 )
          goto LABEL_31;
        v45 = sub_6C1EC0(v46, *(_QWORD *)(v6 + 96), v47, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        v44 = v45 | 1;
        *(_QWORD *)(v43 + 88) = v45 | 1;
      }
    }
    if ( v45 )
    {
      if ( (v45 & 4) != 0 )
      {
        v48 = (_DWORD *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v48 )
        {
          v49 = *(_QWORD *)v48;
          v50 = *(_DWORD *)(*(_QWORD *)v48 + 12LL);
          if ( v48[2] != v50 )
          {
            v48[2] = v50;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 152LL))(v49, v43);
          }
        }
      }
    }
    v9 = *(_QWORD *)(v6 + 120);
  }
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10 )
  {
    v11 = *v10;
    goto LABEL_5;
  }
LABEL_31:
  v11 = 0;
LABEL_5:
  v74 = v11;
  if ( !(unsigned __int8)sub_EB4980((__int64 *)(a1 + 1096), &v74, &v76) )
  {
    v15 = *(unsigned int *)(a1 + 1112);
    v16 = v76;
    v17 = *(_DWORD *)(a1 + 1104) + 1;
    v18 = (unsigned int)(4 * v17);
    v77[0] = (__int64)v76;
    if ( (unsigned int)v18 >= 3 * (int)v15 )
    {
      sub_EB8C50(a1 + 1096, 2 * v15, (__int64)v76, v15, v18, v12);
    }
    else
    {
      if ( (int)v15 - *(_DWORD *)(a1 + 1108) - v17 > (unsigned int)v15 >> 3 )
      {
LABEL_10:
        v19 = *v16 == -4096;
        *(_DWORD *)(a1 + 1104) = v17;
        if ( !v19 )
          --*(_DWORD *)(a1 + 1108);
        v20 = v74;
        v16[1] = 0;
        *v16 = v20;
LABEL_13:
        sub_EB3220((__int64)v77, a1, 0);
        v66 = v74;
        if ( sub_B878F0(v74, a1, v21, v22, v23, v24) )
        {
          v29 = sub_A3F380(v77[0]);
          if ( (v85 & 0x10) == 0 && (v85 & 3) != 1 )
          {
            v30 = *(_QWORD *)(v29 + 16);
            if ( v30 > v79 )
              v79 = *(_QWORD *)(v29 + 16);
            if ( v30 > v81 )
              v81 = v30;
            if ( v30 > v80 )
              v80 = v30;
          }
          v86 = sub_A74320(v77[0], *(_QWORD *)(v29 + 8));
          v31 = sub_A742B0(v77[0], v86);
          v78 = sub_A74320(v77[0], v31);
        }
        sub_EB2E10((__int64)v77, v66, v25, v26, v27, v28);
        for ( i = sub_B889F0(v66, v66, v32, v33, v34, v35); i; i = *(_QWORD *)(i + 80) )
          sub_EBE690((__int64)v77, i, 0);
        sub_EB4A40((__int64)v77, v66, v36, v37, v39, v40);
        v67 = sub_A742B0(v77[0], v78);
        v73 = v79;
        v72 = v80;
        v68 = v82;
        v71 = sub_A742B0(v77[0], v86);
        src = v83;
        v70 = v84;
        v13 = (_QWORD *)sub_99FDF0((__int64 *)(a1 + 2352), 80, 3u);
        sub_EB2520(v13, (_QWORD *)a1, v67, v73, v72, v68, v73, v71, src, v70);
        if ( (unsigned __int8)sub_EB4980((__int64 *)(a1 + 1096), &v74, &v75) )
        {
          v42 = (_QWORD *)(v75 + 8);
LABEL_27:
          *v42 = v13;
          sub_EB3570((__int64)v77);
          return v13;
        }
        v52 = (_QWORD *)v75;
        v53 = (unsigned int)(*(_DWORD *)(a1 + 1104) + 1);
        v54 = *(unsigned int *)(a1 + 1112);
        v76 = (__int64 *)v75;
        v55 = (unsigned int)(4 * v53);
        v56 = 2 * v54;
        if ( (unsigned int)v55 < 3 * (int)v54 )
        {
          if ( (int)v54 - *(_DWORD *)(a1 + 1108) - (int)v53 > (unsigned int)v54 >> 3 )
          {
LABEL_45:
            v19 = *v52 == -4096;
            *(_DWORD *)(a1 + 1104) = v53;
            if ( !v19 )
              --*(_DWORD *)(a1 + 1108);
            v57 = v74;
            v52[1] = 0;
            v42 = v52 + 1;
            *(v42 - 1) = v57;
            goto LABEL_27;
          }
          v56 = v54;
        }
        sub_EB8C50(a1 + 1096, v56, v53, v54, v55, v41);
        sub_EB4980((__int64 *)(a1 + 1096), &v74, &v76);
        LODWORD(v53) = *(_DWORD *)(a1 + 1104) + 1;
        v52 = v76;
        goto LABEL_45;
      }
      sub_EB8C50(a1 + 1096, v15, (__int64)v76, v15, v18, v12);
    }
    sub_EB4980((__int64 *)(a1 + 1096), &v74, v77);
    v16 = (__int64 *)v77[0];
    v17 = *(_DWORD *)(a1 + 1104) + 1;
    goto LABEL_10;
  }
  v13 = (_QWORD *)v76[1];
  if ( !v13 )
    goto LABEL_13;
  return v13;
}

