void __fastcall sub_1A06650(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned int *v14; // rbx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rax
  size_t v19; // rcx
  size_t v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // r8
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned __int64 v38; // rax
  unsigned int *v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // r11
  int v47; // edx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // r12
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 *v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned int v67; // edx
  unsigned int v68; // ecx
  unsigned int v69; // [rsp+8h] [rbp-130h]
  __int64 v70; // [rsp+8h] [rbp-130h]
  const char *v71; // [rsp+10h] [rbp-128h]
  unsigned __int64 v72; // [rsp+18h] [rbp-120h]
  unsigned int v73; // [rsp+18h] [rbp-120h]
  unsigned int v74; // [rsp+20h] [rbp-118h]
  int v75; // [rsp+24h] [rbp-114h]
  char v76; // [rsp+28h] [rbp-110h]
  __int64 v77; // [rsp+28h] [rbp-110h]
  unsigned __int8 v78; // [rsp+33h] [rbp-105h]
  unsigned int v79; // [rsp+34h] [rbp-104h]
  __int64 v80; // [rsp+38h] [rbp-100h]
  int v81; // [rsp+4Ch] [rbp-ECh] BYREF
  void *s1; // [rsp+50h] [rbp-E8h] BYREF
  size_t v83; // [rsp+58h] [rbp-E0h]
  __int64 v84[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v85[25]; // [rsp+70h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v5 = *a1;
    v6 = *(_QWORD *)(a2 + 48);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    if ( (unsigned __int8)sub_1E63CF0(v5, v7, v6, 1, 3968) )
      return;
  }
  v8 = 0;
  v83 = 0;
  s1 = (void *)&byte_22F0C30;
  v9 = a3[3].m128i_i16[4];
  if ( !v9 || (v10 = a3[5].m128i_i64[0], (v10 & 2) == 0) )
  {
    sub_168B9F0((__int64)v85, a1, a3[1].m128i_u32[2], 0xC57u, 0);
    v11 = sub_15DD120((__int64)v85, (__int64)a3);
    v12 = v11;
    if ( *(_BYTE *)(v11 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v11 + 32), 3, 2u);
    }
    else if ( *(_BYTE *)(v11 + 132) )
    {
      v35 = sub_168B9E0((_QWORD *)v11);
      v36 = *(_QWORD *)(v12 + 16);
      if ( v36 )
        v36 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v36 + 32LL))(*(_QWORD *)(v12 + 16));
      v84[0] = v36;
      v37 = sub_1587BC0(v35, v84, v31, v32, v33, v34);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * *(unsigned int *)(v12 + 128) + 8), 3, 2u);
    }
    goto LABEL_7;
  }
  v13 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  v14 = *(unsigned int **)(*(_QWORD *)(v13 + 8) + 16LL);
  v69 = *(_DWORD *)v13;
  v15 = *v14;
  v71 = (const char *)(v14 + 4);
  if ( v9 == 2 )
  {
    v16 = a3[5].m128i_i64[1];
    v8 = *(_DWORD *)v13;
    if ( (v16 & 2) == 0 )
    {
      sub_168B9F0((__int64)v85, a1, a3[1].m128i_u32[2], 0xC57u, 0);
      v17 = sub_15DD120((__int64)v85, (__int64)a3);
      LODWORD(v84[0]) = 3;
      sub_180A710(v17, (int *)v84);
      sub_15F7200(v85);
      return;
    }
    v38 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    v39 = *(unsigned int **)(*(_QWORD *)(v38 + 8) + 16LL);
    v69 = *(_DWORD *)v38;
    v19 = *v39;
    s1 = v39 + 4;
    v83 = v19;
  }
  else
  {
    v18 = j__strlen("space");
    if ( v18 <= v15 && (!v18 || !memcmp(v14 + 4, "space", v18)) )
    {
      v76 = 0;
      v19 = v15;
      v75 = 0;
      s1 = v14 + 4;
      v71 = &byte_22F0C30;
      v74 = 0;
      v78 = 0;
      v79 = 0;
      v83 = v15;
      v15 = 0;
      goto LABEL_17;
    }
    v8 = v69;
    v69 = 0;
    v19 = j__strlen("space0");
    s1 = (void *)"space0";
    v83 = v19;
  }
  if ( v15 )
  {
    switch ( *((_BYTE *)v14 + 16) )
    {
      case 'B':
      case 'b':
        v75 = 2;
        v74 = 2;
        goto LABEL_39;
      case 'C':
      case 'c':
        v75 = 4;
        v74 = 4;
        goto LABEL_39;
      case 'I':
      case 'i':
        v40 = 6971;
        goto LABEL_46;
      case 'S':
      case 's':
        v75 = 3;
        v74 = 3;
        goto LABEL_39;
      case 'T':
      case 't':
        v75 = 0;
        v74 = 0;
        goto LABEL_39;
      case 'U':
      case 'u':
        v75 = 1;
        v74 = 1;
LABEL_39:
        if ( !(unsigned __int8)sub_2247970((char *)v14 + 17, v15 - 1, 10, v85) && v85[0] == LODWORD(v85[0]) )
        {
          v79 = v85[0];
          v19 = v83;
          v76 = 1;
          v78 = 1;
          goto LABEL_17;
        }
        v40 = 3916;
LABEL_46:
        sub_168B9F0((__int64)v85, a1, v8, v40, 0);
        break;
      default:
        sub_168B9F0((__int64)v85, a1, v8, 0xF31u, 0);
        v84[1] = 1;
        v84[0] = (__int64)(v14 + 4);
        sub_166BAF0((__int64)v85, (__int64)v84);
        sub_15F7200(v85);
        return;
    }
    goto LABEL_7;
  }
  v75 = 0;
  v76 = 0;
  v74 = 0;
  v78 = 0;
  v79 = 0;
LABEL_17:
  v72 = v19;
  v20 = j__strlen("space");
  v21 = v72;
  if ( v20 > v72 )
    goto LABEL_30;
  v22 = (char *)s1;
  if ( v20 )
  {
    v23 = memcmp(s1, "space", v20);
    v22 = (char *)s1;
    v21 = v72;
    if ( v23 )
      goto LABEL_30;
  }
  v24 = 0;
  if ( v21 > 4 )
  {
    v24 = v21 - 5;
    v21 = 5;
  }
  if ( (unsigned __int8)sub_2247970(&v22[v21], v24, 10, v85) || (v28 = v85[0], v73 = v85[0], v85[0] != LODWORD(v85[0])) )
  {
LABEL_30:
    sub_168B9F0((__int64)v85, a1, v69, 0xF38u, 0);
    sub_1682BA0((__int64)v85, (__int64)&s1);
    sub_15F7200(v85);
    return;
  }
  if ( !v76 )
    goto LABEL_73;
  v77 = *a1;
  LODWORD(v84[0]) = v75;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v64 = sub_B8C3D0(a2, v24, v25, v85[0], v26, v27);
    v65 = *v64;
    v28 = *v64 + 8LL * *((unsigned int *)v64 + 2);
    if ( *v64 >= v28 )
    {
      if ( v65 != v28 )
      {
        while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 17 )
        {
          v28 += 8LL;
          if ( v65 == v28 )
            goto LABEL_26;
        }
        goto LABEL_84;
      }
    }
    else
    {
      v66 = *v64;
      while ( *(_WORD *)(*(_QWORD *)v66 + 36LL) != 17 )
      {
        v66 += 8LL;
        if ( v28 == v66 )
          goto LABEL_26;
      }
      if ( v28 != v66 )
        goto LABEL_84;
    }
  }
LABEL_26:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x19 )
  {
    if ( 2 * (*(_BYTE *)(a2 + 92) != 0) != v74 )
    {
LABEL_28:
      v29 = *(_DWORD *)(a2 + 24);
      v30 = (__int64 *)(v77 + 8);
LABEL_29:
      sub_168B9F0((__int64)v85, v30, v29, 0xF32u, 0);
      sub_16CF4F0((__int64)v85, (int *)v84);
LABEL_7:
      sub_15F7200(v85);
      return;
    }
    goto LABEL_64;
  }
  v63 = sub_F63500(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v24);
  if ( v63 )
  {
    v28 = v74;
    if ( dword_26473B0[*(unsigned __int8 *)(v63 + 48)] != v74 )
      goto LABEL_28;
    goto LABEL_64;
  }
  v41 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    do
    {
      v42 = sub_F649E0(v42);
      v44 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2;
    }
    while ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u );
    v41 = v42;
  }
  v80 = v41;
  v45 = sub_F610C0(v41, v24, v44, v43, v26, v27);
  v46 = v80;
  if ( !v45 )
  {
    v47 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v47 - 57) > 1 )
    {
      if ( (_BYTE)v47 == 48 )
        goto LABEL_64;
LABEL_84:
      v30 = (__int64 *)(v77 + 8);
      goto LABEL_85;
    }
  }
  v48 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v48 = *(_QWORD *)v48;
  v49 = v69;
  v50 = *(_BYTE *)(v48 + 8) & 0x7F;
  if ( !v69 || v50 == 25 )
  {
    if ( v50 == 25 )
      goto LABEL_93;
  }
  else
  {
    sub_168B9F0((__int64)v85, (__int64 *)(v77 + 8), v8, 0xF4Au, 0);
    sub_15F7200(v85);
    v46 = v80;
  }
  v70 = v46;
  v24 = *(_QWORD *)(v77 + 248);
  if ( !sub_F60F80(v46, v24, v49, v28, v26, v27)
    && !sub_F58060(v70)
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v70 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
  {
LABEL_93:
    v30 = (__int64 *)(v77 + 8);
    if ( v74 == 4 )
    {
      v68 = 6975;
LABEL_95:
      sub_168B9F0((__int64)v85, v30, v8, v68, 0);
      goto LABEL_7;
    }
LABEL_85:
    v29 = v8;
    goto LABEL_29;
  }
  if ( v74 == 2 )
  {
    v68 = 6970;
    v30 = (__int64 *)(v77 + 8);
    goto LABEL_95;
  }
  if ( v74 != 4 )
    goto LABEL_84;
LABEL_64:
  v51 = *(unsigned __int8 *)(a2 + 29);
  BYTE4(v84[0]) = 0;
  v52 = 0;
  LODWORD(v84[0]) = 0;
  *((_BYTE *)v84 + v75) = 1;
  if ( (v51 & 1) != 0 )
  {
    v53 = sub_B8C3D0(a2, v24, v51, v28, v26, v27);
    LOBYTE(v51) = *(_BYTE *)(a2 + 29);
    v52 = *v53;
  }
  while ( 1 )
  {
    v55 = 0;
    v56 = v51 & 1;
    if ( (_DWORD)v56 )
    {
      v57 = sub_B8C3D0(a2, v24, v56, v28, v26, v27);
      v55 = *v57 + 8LL * *((unsigned int *)v57 + 2);
    }
    if ( v52 == v55 )
      break;
    if ( *(_WORD *)(*(_QWORD *)v52 + 36LL) == 226 )
    {
      v54 = *(int *)(*(_QWORD *)v52 + 72LL);
      if ( *((_BYTE *)v84 + v54) )
      {
        v67 = *(_DWORD *)(a2 + 24);
        v81 = *(_DWORD *)(*(_QWORD *)v52 + 72LL);
        sub_168B9F0((__int64)v85, (__int64 *)(v77 + 8), v67, 0xF35u, 0);
        sub_16CF4F0((__int64)v85, &v81);
        goto LABEL_7;
      }
      *((_BYTE *)v84 + v54) = 1;
    }
    LOBYTE(v51) = *(_BYTE *)(a2 + 29);
    v52 += 8;
  }
LABEL_73:
  v58 = sub_168B6C0((__int64)a1);
  v59 = sub_B2EC20(v58, v71, v15, s1, v83, a3);
  if ( v59 )
  {
    v62 = ((unsigned __int64)v78 << 32) | v79;
    *(_QWORD *)(v59 + 76) = v62;
    *(_DWORD *)(v59 + 72) = v74;
    *(_DWORD *)(v59 + 84) = v73;
    sub_B8CC60(a2, v59, v62, v73, v60, v61);
  }
}
