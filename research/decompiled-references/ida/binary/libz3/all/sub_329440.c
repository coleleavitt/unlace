__int64 __fastcall sub_329440(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  bool v11; // cc
  int v12; // r10d
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  int v15; // r11d
  unsigned int v16; // r15d
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // esi
  unsigned int v20; // r14d
  unsigned int v21; // ecx
  unsigned int v22; // esi
  unsigned int i; // edx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // r14d
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // esi
  __int64 v33; // rax
  int v34; // esi
  char v35; // cl
  __int64 v36; // rdx
  int v37; // eax
  int v38; // edi
  int v39; // r14d
  int v40; // r14d
  __int64 v41; // r15
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  int v46; // rdx^4
  __int64 v47; // rax
  int v48; // edx
  char v49; // cl
  int v50; // esi
  int v51; // edx
  int v52; // esi
  int v53; // edx
  unsigned int v54; // r14d
  unsigned int v55; // ecx
  int v56; // edx
  int v57; // eax
  unsigned int v58; // r14d
  int v59; // edx
  unsigned int v60; // ecx
  unsigned __int64 v61; // rax
  bool v62; // al
  unsigned int v63; // edx
  unsigned int v64; // eax
  bool v65; // al
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // esi
  int v69; // [rsp+8h] [rbp-70h]
  unsigned int v70; // [rsp+Ch] [rbp-6Ch]
  int v71; // [rsp+10h] [rbp-68h]
  unsigned int v72; // [rsp+10h] [rbp-68h]
  unsigned int v73; // [rsp+10h] [rbp-68h]
  int v74; // [rsp+14h] [rbp-64h]
  unsigned int v75; // [rsp+18h] [rbp-60h]
  int v76; // [rsp+18h] [rbp-60h]
  int v77; // [rsp+1Ch] [rbp-5Ch]
  int v78; // [rsp+20h] [rbp-58h]
  int v79; // [rsp+24h] [rbp-54h]
  unsigned int v80; // [rsp+24h] [rbp-54h]
  unsigned int v81; // [rsp+28h] [rbp-50h]
  unsigned int v82; // [rsp+28h] [rbp-50h]
  unsigned int v83; // [rsp+28h] [rbp-50h]
  unsigned int v84; // [rsp+28h] [rbp-50h]
  unsigned int v85; // [rsp+2Ch] [rbp-4Ch]
  int v86; // [rsp+2Ch] [rbp-4Ch]
  int v87; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v88; // [rsp+2Ch] [rbp-4Ch]
  int v89; // [rsp+30h] [rbp-48h]
  int v90; // [rsp+30h] [rbp-48h]
  unsigned int v91; // [rsp+34h] [rbp-44h]
  int v92; // [rsp+38h] [rbp-40h]
  unsigned int v93; // [rsp+38h] [rbp-40h]
  int v94; // [rsp+3Ch] [rbp-3Ch]

  v3 = a2;
  v4 = a2 >> 1;
  v5 = a2 - (a2 >> 1);
  if ( a2 >> 1 == 1 && v5 == 1 )
  {
    v6 = *(unsigned int *)(a1 + 16);
    v7 = 6;
    if ( (_DWORD)v6 != 2 )
    {
      v6 = 2;
      v7 = 3;
    }
    return (v7 << 32) | v6;
  }
  if ( !v4 || !v5 )
  {
    v9 = 0;
    v3 = 0;
    if ( v5 <= 1 )
    {
      LODWORD(v10) = 0;
      v5 = 0;
      goto LABEL_10;
    }
LABEL_61:
    if ( v5 == 2 )
      goto LABEL_62;
    if ( v5 > 9 )
      goto LABEL_69;
LABEL_75:
    v47 = sub_329440(a1, v5);
    v48 = *(_DWORD *)(a1 + 16);
    v49 = v5 - 1;
    LODWORD(v10) = 1 << (v5 - 1);
    if ( v48 == 1 )
    {
      v50 = 1 << (v5 - 1);
    }
    else
    {
      if ( !v48 )
      {
        if ( (unsigned int)v10 + 5 * v5 < 5 * (int)v47 + HIDWORD(v47) )
          goto LABEL_10;
        goto LABEL_69;
      }
      v50 = 2 << v49;
    }
    if ( v50 + 5 * v5 < 5 * (int)v47 + HIDWORD(v47) )
    {
      if ( v48 != 1 )
        LODWORD(v10) = 2 << v49;
LABEL_10:
      v11 = v4 <= 2;
      if ( v4 != 2 )
        goto LABEL_11;
      goto LABEL_65;
    }
LABEL_69:
    v44 = sub_329440(a1, v5);
    v5 = v44;
    v10 = HIDWORD(v44);
    goto LABEL_10;
  }
  v12 = *(_DWORD *)(a1 + 16);
  v13 = a2 >> 2;
  v14 = v5 >> 1;
  v70 = ((a2 & 2) != 0) + (a2 >> 2);
  v15 = (v5 & 1) + (v5 >> 1);
  v16 = v70 + v15 - 1;
  if ( v16 > (a2 >> 2) + (v5 >> 1) )
    v16 = (a2 >> 2) + (v5 >> 1);
  v69 = 2 * v16;
  if ( v4 > 9 || v5 > 9 )
    goto LABEL_58;
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      v77 = 2;
      v17 = 6;
      v78 = 1;
    }
    else
    {
      v78 = 1;
      v77 = 2 * (v12 != 1);
      v17 = 3;
    }
  }
  else
  {
    v78 = 0;
    v17 = 3;
    v77 = 2;
  }
  v18 = v5 >> 1;
  v19 = a2 >> 2;
  v20 = (v3 - 1) >> 1;
  v74 = v16 * v17;
  if ( (v3 & 1) == 0 )
    v20 = v4;
  if ( v20 == 1 )
  {
    while ( 1 )
    {
      if ( v19 == 1 && v18 == 1 )
      {
LABEL_97:
        v51 = 1;
        if ( v12 != 1 )
          v51 = 2 - ((v12 == 0) - 1);
        v71 = v51;
        goto LABEL_30;
      }
      if ( !v19 || !v18 )
        goto LABEL_29;
      if ( v19 != 1 )
      {
        if ( v18 == 1 )
          goto LABEL_97;
        v19 = 1;
      }
      if ( v18 <= 1 )
        break;
      v18 = 1;
    }
LABEL_138:
    v73 = v19 + v18;
    if ( v20 >= v19 + v18 )
    {
      v89 = (v5 & 1) + v14;
      v85 = v5 >> 1;
      v81 = v3 >> 2;
      v79 = *(_DWORD *)(a1 + 16);
      v61 = sub_3249B0(a1, v19, v18);
LABEL_140:
      v20 = v61;
      v12 = v79;
      v13 = v81;
      v14 = v85;
      v15 = v89;
      v71 = HIDWORD(v61);
      goto LABEL_30;
    }
    v92 = (v5 & 1) + v14;
    v87 = *(_DWORD *)(a1 + 16);
    v83 = v18;
    v62 = sub_326230(a1, v19, v18, v20);
    v63 = v83;
    v12 = v87;
    v13 = v3 >> 2;
    v14 = v5 >> 1;
    v15 = v92;
    if ( !v62 )
    {
      v89 = v92;
      v85 = v5 >> 1;
      v81 = v3 >> 2;
      v79 = v12;
      v61 = sub_3254A0(a1, v19, v63, v20);
      goto LABEL_140;
    }
    v64 = (v83 * v19) >> 1;
    if ( v87 == 1 )
    {
      v71 = 0;
    }
    else
    {
      v71 = v64 + v73;
      if ( !v87 )
        goto LABEL_30;
    }
    v71 += v64;
  }
  else
  {
LABEL_22:
    if ( v18 == 1 && v19 == 1 )
    {
      v19 = 1;
      goto LABEL_25;
    }
    while ( v19 && v18 )
    {
LABEL_25:
      if ( v20 >= v19 )
      {
        if ( v20 >= v18 )
          goto LABEL_138;
        v18 = v20;
        goto LABEL_22;
      }
      v19 = v20;
    }
LABEL_29:
    v71 = 0;
    v20 = 0;
  }
LABEL_30:
  v21 = v4 + 1;
  if ( (v3 & 1) != 0 )
  {
    v21 = (v3 + 1) >> 1;
    if ( v21 == 1 )
    {
      v22 = (v4 & 1) + (v3 >> 2);
      for ( i = v15; ; i = 1 )
      {
        if ( v22 == 1 && i == 1 )
        {
LABEL_121:
          if ( v12 == 1 )
          {
            v52 = 1;
          }
          else
          {
            if ( !v12 )
            {
              v56 = v20 + v69 + 2;
              v57 = v71 + v74 + v77 + v78 + 2;
              goto LABEL_124;
            }
            v52 = 3;
          }
          goto LABEL_108;
        }
        if ( !v22 || !i )
          goto LABEL_40;
        if ( v22 != 1 )
        {
          if ( i == 1 )
            goto LABEL_121;
          v22 = 1;
        }
        if ( i <= 1 )
          break;
      }
      v21 = 1;
LABEL_142:
      v75 = i + v22;
      if ( v21 >= i + v22 )
      {
        v86 = v15;
        v82 = v14;
        v80 = v13;
        v76 = v12;
        v25 = sub_3249B0(a1, v22, i);
LABEL_144:
        v12 = v76;
        v13 = v80;
        v14 = v82;
        v15 = v86;
        v24 = HIDWORD(v25);
        goto LABEL_41;
      }
      v94 = v15;
      v93 = v14;
      v91 = v13;
      v90 = v12;
      v88 = v21;
      v84 = i;
      v65 = sub_326230(a1, v22, i, v21);
      v66 = v84;
      v21 = v88;
      v12 = v90;
      v13 = v91;
      v14 = v93;
      v15 = v94;
      if ( !v65 )
      {
        v86 = v94;
        v82 = v93;
        v80 = v91;
        v76 = v90;
        v25 = sub_3254A0(a1, v22, v66, v21);
        goto LABEL_144;
      }
      v67 = (v22 * v84) >> 1;
      if ( v90 == 1 )
      {
        v68 = 0;
      }
      else
      {
        v68 = v67 + v75;
        if ( !v90 )
        {
          v56 = v88 + v20 + v69 + 1;
          v57 = v68 + v71 + v74 + v77 + v78;
LABEL_124:
          v58 = v3;
          v59 = 5 * v56;
          v60 = v4;
          if ( v5 <= v3 )
            v58 = v5;
          if ( v3 <= v4 )
            v60 = v3;
          v9 = v3 + ((v60 * v58) >> 1);
          if ( v9 + 5 * v3 < v59 + v57 )
            goto LABEL_48;
          goto LABEL_59;
        }
      }
      v52 = v67 + v68;
LABEL_108:
      v53 = v20 + v69 + 1;
      v54 = v4;
      v28 = v21 + v53;
      v55 = v3;
      v29 = v52 + v71 + v74 + v77 + v78;
      if ( v3 <= v4 )
        v54 = v3;
      if ( v5 <= v3 )
        v55 = v5;
      v9 = (v55 * v54) >> 1;
      v31 = v3 + v9;
      if ( v12 != 1 )
        goto LABEL_47;
LABEL_113:
      if ( v9 + 5 * v3 >= 5 * v28 + v29 )
        goto LABEL_59;
      goto LABEL_48;
    }
  }
  v22 = (v4 & 1) + (v3 >> 2);
  i = v15;
LABEL_33:
  if ( i == 1 && v22 == 1 )
  {
    v22 = 1;
    goto LABEL_36;
  }
  while ( v22 && i )
  {
LABEL_36:
    if ( v21 >= v22 )
    {
      if ( v21 >= i )
        goto LABEL_142;
      i = v21;
      goto LABEL_33;
    }
    v22 = v21;
  }
LABEL_40:
  LODWORD(v24) = 0;
  LODWORD(v25) = 0;
LABEL_41:
  v26 = v20 + v69 + 1;
  v27 = v3;
  v28 = v25 + v26;
  v29 = v24 + v71 + v74 + v77 + v78;
  v30 = v4;
  if ( v5 <= v3 )
    v27 = v5;
  if ( v3 <= v4 )
    v30 = v3;
  v9 = (v30 * v27) >> 1;
  if ( v12 == 1 )
    goto LABEL_113;
  v31 = v3 + v9;
  if ( v12 )
  {
LABEL_47:
    v32 = v9 + 5 * v3;
    v9 += v31;
    if ( v31 + v32 < v29 + 5 * v28 )
      goto LABEL_48;
LABEL_58:
    v39 = 6;
    if ( v12 == 2 )
    {
LABEL_60:
      v72 = v15;
      v40 = v16 * v39;
      v41 = sub_3249B0(a1, v13, v14);
      v42 = sub_3249B0(a1, v70, v72);
      v3 = v69 + v42 + v41;
      v9 = HIDWORD(v42) + HIDWORD(v41) - 2 + v40;
      if ( v5 != 1 )
        goto LABEL_61;
      if ( v4 != 2 )
      {
        v5 = 0;
        LODWORD(v10) = 0;
        if ( v4 <= 2 )
          goto LABEL_12;
        goto LABEL_72;
      }
LABEL_104:
      v5 = 0;
      LODWORD(v10) = 0;
      goto LABEL_65;
    }
LABEL_59:
    v39 = 3;
    goto LABEL_60;
  }
  if ( v31 + 5 * v3 >= 5 * v28 + v29 )
    goto LABEL_59;
  v9 += v3;
LABEL_48:
  if ( v5 == 1 )
  {
    if ( v4 != 2 )
    {
      v5 = 0;
      LODWORD(v10) = 0;
      if ( v4 <= 2 )
        goto LABEL_12;
      goto LABEL_51;
    }
    goto LABEL_104;
  }
  if ( v5 != 2 )
    goto LABEL_75;
LABEL_62:
  LODWORD(v10) = 3;
  if ( *(_DWORD *)(a1 + 16) == 2 )
    LODWORD(v10) = 6;
  v5 = 2;
  v11 = v4 <= 2;
  if ( v4 != 2 )
  {
LABEL_11:
    if ( v11 )
    {
LABEL_12:
      v7 = v9 + (unsigned int)v10;
      v6 = v5 + v3;
      return (v7 << 32) | v6;
    }
LABEL_72:
    if ( v4 > 9 )
      goto LABEL_73;
LABEL_51:
    v33 = sub_329440(a1, v4);
    v34 = *(_DWORD *)(a1 + 16);
    v35 = v4 - 1;
    v36 = v33;
    v37 = 1 << (v4 - 1);
    if ( v34 == 1 )
    {
      v38 = 1 << (v4 - 1);
    }
    else
    {
      if ( !v34 )
      {
        if ( v37 + 5 * v4 >= 5 * (int)v36 + HIDWORD(v36) )
          goto LABEL_73;
        goto LABEL_85;
      }
      v38 = 2 << v35;
    }
    if ( v38 + 5 * v4 >= 5 * (int)v36 + HIDWORD(v36) )
    {
LABEL_73:
      v45 = sub_329440(a1, v4);
      v46 = HIDWORD(v45);
      v6 = v5 + v3 + (_DWORD)v45;
      v7 = (unsigned int)v10 + v9 + v46;
      return (v7 << 32) | v6;
    }
    if ( v34 != 1 )
      v37 = 2 << v35;
LABEL_85:
    v7 = v37 + v9 + (unsigned int)v10;
    v6 = v3 + v4 + v5;
    return (v7 << 32) | v6;
  }
LABEL_65:
  v43 = 3;
  if ( *(_DWORD *)(a1 + 16) == 2 )
    v43 = 6;
  v7 = v43 + v9 + (unsigned int)v10;
  v6 = v5 + v3 + 2;
  return (v7 << 32) | v6;
}

