void __fastcall sub_18AA690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128 a6)
{
  __int64 v7; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  char v11; // di
  char *v12; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rdx
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // r14
  unsigned __int64 v21; // rax
  _BOOL8 v22; // r8
  unsigned __int64 v23; // r13
  char v24; // di
  __int64 v25; // rsi
  char *v26; // rcx
  __int64 v27; // rdi
  char *v28; // rdx
  char *v29; // rax
  char *v30; // rcx
  char *v31; // rax
  char *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 *v40; // rbx
  __int64 v41; // rdx
  void *v42; // rbx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rsi
  char *v46; // rdi
  __int64 v47; // r8
  char *v48; // rdx
  char *v49; // rax
  char v50; // r8
  char *v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rdx
  char *v54; // rax
  char *v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // [rsp+8h] [rbp-1F0h]
  __int64 v67; // [rsp+10h] [rbp-1E8h]
  __int64 v68; // [rsp+10h] [rbp-1E8h]
  __int64 v69; // [rsp+18h] [rbp-1E0h]
  __int64 v70; // [rsp+18h] [rbp-1E0h]
  __int64 *v71; // [rsp+20h] [rbp-1D8h]
  _BYTE v72[12]; // [rsp+2Ch] [rbp-1CCh] BYREF
  void *v73; // [rsp+38h] [rbp-1C0h] BYREF
  void *ptr; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v75; // [rsp+48h] [rbp-1B0h]
  int v76; // [rsp+50h] [rbp-1A8h]
  char v77; // [rsp+54h] [rbp-1A4h]
  __int64 v78; // [rsp+58h] [rbp-1A0h] BYREF
  void *v79; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-150h]
  int v81; // [rsp+B0h] [rbp-148h]
  char v82; // [rsp+B4h] [rbp-144h]
  __int64 v83; // [rsp+B8h] [rbp-140h] BYREF
  void *v84[2]; // [rsp+100h] [rbp-F8h] BYREF
  int v85; // [rsp+110h] [rbp-E8h]
  char v86; // [rsp+114h] [rbp-E4h]
  __int64 v87; // [rsp+118h] [rbp-E0h] BYREF
  void *v88[2]; // [rsp+160h] [rbp-98h] BYREF
  int v89; // [rsp+170h] [rbp-88h]
  char v90; // [rsp+174h] [rbp-84h]
  __int64 v91; // [rsp+178h] [rbp-80h] BYREF

  v7 = a3 + 48;
  v9 = a3;
  v67 = a2;
  v72[0] = a5;
  ptr = &v78;
  v75 = 8;
  v76 = 0;
  v77 = 1;
  v10 = sub_B8E970(a3 + 48);
  if ( !v10 )
    goto LABEL_25;
  while ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v10 + 58) & 2) == 0 )
  {
    v10 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v10 )
      goto LABEL_25;
  }
  v11 = v77;
LABEL_7:
  a2 = *(_QWORD *)(v10 + 40);
  if ( v11 )
  {
    v12 = (char *)ptr;
    v13 = 8LL * HIDWORD(v75);
    v14 = (__int64 *)((char *)ptr + v13);
    if ( ptr != (char *)ptr + v13 )
    {
      v15 = (char *)ptr;
      if ( a2 == *(_QWORD *)ptr )
        goto LABEL_15;
      while ( 1 )
      {
        v15 += 8;
        if ( v14 == (__int64 *)v15 )
          break;
        if ( a2 == *(_QWORD *)v15 )
          goto LABEL_15;
      }
    }
    if ( HIDWORD(v75) < (unsigned int)v75 )
    {
      ++HIDWORD(v75);
      *v14 = a2;
      v12 = (char *)ptr;
      v15 = (char *)ptr + v13;
LABEL_15:
      v11 = 1;
      v16 = &v12[8 * HIDWORD(v75)];
      goto LABEL_16;
    }
  }
  v15 = (char *)sub_2236760(&ptr, a2);
  v11 = v77;
  v12 = (char *)ptr;
  if ( v77 )
    goto LABEL_15;
  v16 = (char *)ptr + 8 * (unsigned int)v75;
LABEL_16:
  if ( v16 != v15 && *(_QWORD *)v15 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v17 = v15 + 8;
    do
    {
      v18 = v17;
      if ( v16 == v17 )
        break;
      v17 += 8;
    }
    while ( *(_QWORD *)v18 >= 0xFFFFFFFFFFFFFFFELL );
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v10 )
      break;
    while ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x12 )
    {
      if ( (*(_BYTE *)(v10 + 58) & 2) != 0 )
        goto LABEL_7;
      v10 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v10 )
        goto LABEL_25;
    }
  }
LABEL_25:
  v19 = sub_B8E970(v7);
  v20 = (_QWORD *)v19;
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0xE )
    {
LABEL_84:
      if ( v20[7] )
        goto LABEL_87;
      v44 = v20[6];
      if ( !v44 )
        goto LABEL_87;
      v45 = *(_QWORD *)(v44 + 80);
      if ( !v77 )
        goto LABEL_97;
      v46 = (char *)ptr;
      v47 = 8LL * HIDWORD(v75);
      v48 = (char *)ptr + v47;
      if ( ptr != (char *)ptr + v47 )
      {
        v49 = (char *)ptr;
        if ( v45 == *(_QWORD *)ptr )
          goto LABEL_115;
        do
        {
          v49 += 8;
          if ( v48 == v49 )
            break;
        }
        while ( *(_QWORD *)v49 != v45 );
      }
      if ( HIDWORD(v75) < (unsigned int)v75 )
      {
        ++HIDWORD(v75);
        *(_QWORD *)v48 = v45;
        v46 = (char *)ptr;
        v49 = (char *)ptr + v47;
      }
      else
      {
LABEL_97:
        v66 = v20[6];
        v49 = (char *)sub_2236760(&ptr, v45);
        v50 = v77;
        v46 = (char *)ptr;
        v44 = v66;
        if ( !v77 )
        {
          v51 = (char *)ptr + 8 * (unsigned int)v75;
          goto LABEL_99;
        }
      }
LABEL_115:
      v50 = 1;
      v51 = &v46[8 * HIDWORD(v75)];
LABEL_99:
      if ( v51 != v49 && (*(_QWORD *)v49 == -2 || *(_QWORD *)v49 == -1) )
      {
        do
          v49 += 8;
        while ( v51 != v49 && *(_QWORD *)v49 >= 0xFFFFFFFFFFFFFFFELL );
      }
      a2 = *(_QWORD *)(v44 + 88);
      if ( a2 )
      {
        if ( !v50 )
          goto LABEL_118;
        v52 = 8LL * HIDWORD(v75);
        v53 = (__int64 *)&v46[v52];
        if ( &v46[v52] != v46 )
        {
          v54 = v46;
          if ( a2 == *(_QWORD *)v46 )
            goto LABEL_113;
          do
          {
            v54 += 8;
            if ( v53 == (__int64 *)v54 )
              break;
          }
          while ( *(_QWORD *)v54 != a2 );
        }
        if ( HIDWORD(v75) < (unsigned int)v75 )
        {
          ++HIDWORD(v75);
          *v53 = a2;
          v46 = (char *)ptr;
          v54 = (char *)ptr + v52;
        }
        else
        {
LABEL_118:
          v54 = (char *)sub_2236760(&ptr, a2);
          v46 = (char *)ptr;
          if ( !v77 )
          {
            v55 = (char *)ptr + 8 * (unsigned int)v75;
            goto LABEL_120;
          }
        }
LABEL_113:
        v55 = &v46[8 * HIDWORD(v75)];
LABEL_120:
        if ( v55 != v54 && (unsigned __int64)(*(_QWORD *)v54 + 2LL) <= 1 )
        {
          do
            v54 += 8;
          while ( v55 != v54 && *(_QWORD *)v54 >= 0xFFFFFFFFFFFFFFFELL );
        }
      }
LABEL_87:
      while ( 1 )
      {
        v43 = v20[1] & 0xFFFFFFFFFFFFFFF8LL;
        v20 = (_QWORD *)v43;
        if ( !v43 )
          goto LABEL_30;
        if ( (*(_BYTE *)(v43 + 28) & 0x7F) == 0xE )
          goto LABEL_84;
      }
    }
    while ( 1 )
    {
      v21 = v20[1] & 0xFFFFFFFFFFFFFFF8LL;
      v20 = (_QWORD *)v21;
      if ( !v21 )
        break;
      if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0xE )
        goto LABEL_84;
    }
  }
LABEL_30:
  if ( (*(_BYTE *)(a4 + 28) & 0x7F) == 0x14 )
  {
    v22 = (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 8) != 0
       && byte_26430D8[*(unsigned int *)(sub_168B6E0((__int64)a1) + 368)]
       && sub_BABCD0(a4, a2, (__int64)byte_26430D8, v56, v57, v58) == 0;
    sub_1A9FB10(a1, v67, v9, a4, v22);
  }
  sub_1A9AC40(a1, v9);
  v80 = 8;
  v79 = &v83;
  v81 = 0;
  v82 = 1;
  v23 = sub_B8E970(v7);
  if ( !v23 )
    goto LABEL_58;
  while ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v23 + 58) & 2) != 0 )
  {
    v23 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v23 )
      goto LABEL_58;
  }
  v24 = v82;
LABEL_40:
  v25 = *(_QWORD *)(v23 + 40);
  if ( v24 )
  {
    v26 = (char *)v79;
    v27 = 8LL * HIDWORD(v80);
    v28 = (char *)v79 + v27;
    if ( v79 != (char *)v79 + v27 )
    {
      v29 = (char *)v79;
      if ( v25 == *(_QWORD *)v79 )
        goto LABEL_48;
      while ( 1 )
      {
        v29 += 8;
        if ( v28 == v29 )
          break;
        if ( v25 == *(_QWORD *)v29 )
          goto LABEL_48;
      }
    }
    if ( HIDWORD(v80) < (unsigned int)v80 )
    {
      ++HIDWORD(v80);
      *(_QWORD *)v28 = v25;
      v26 = (char *)v79;
      v29 = (char *)v79 + v27;
LABEL_48:
      v24 = 1;
      v30 = &v26[8 * HIDWORD(v80)];
      goto LABEL_49;
    }
  }
  v29 = (char *)sub_2236760(&v79, v25);
  v24 = v82;
  v26 = (char *)v79;
  if ( v82 )
    goto LABEL_48;
  v30 = (char *)v79 + 8 * (unsigned int)v80;
LABEL_49:
  if ( v30 != v29 && *(_QWORD *)v29 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v31 = v29 + 8;
    do
    {
      v32 = v31;
      if ( v30 == v31 )
        break;
      v31 += 8;
    }
    while ( *(_QWORD *)v32 >= 0xFFFFFFFFFFFFFFFELL );
  }
  while ( 1 )
  {
    v23 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v23 )
      break;
    while ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x12 )
    {
      if ( (*(_BYTE *)(v23 + 58) & 2) == 0 )
        goto LABEL_40;
      v23 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v23 )
        goto LABEL_58;
    }
  }
LABEL_58:
  v84[1] = byte_8;
  v84[0] = &v87;
  v88[0] = &v91;
  v85 = 0;
  v86 = 1;
  v88[1] = byte_8;
  v89 = 0;
  v90 = 1;
  sub_18A0470(a1, (unsigned __int64)&ptr, (__int64)&v79, (__int64)v84, (__int64)v88, v9, a6, a4, (__int64)v72, 1, 0);
  if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x16 )
    sub_18A0E80(a1, v9, v33, v34, v35, v36, a6);
  v73 = nullptr;
  if ( (*(_BYTE *)(a4 + 28) & 0x7F) != 0x14 )
  {
    v59 = *(_QWORD *)(a4 + 40);
    if ( (v59 & 7) != 0 || (v59 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_76;
    v60 = *(__int64 **)(a4 + 104);
    v71 = &v60[*(unsigned int *)(a4 + 112)];
    if ( v60 != v71 )
    {
      v70 = v9;
      v61 = *(__int64 **)(a4 + 104);
      do
      {
        v62 = *v61++;
        sub_18A9C90((_QWORD *)*a1, v70, v62, (__int64)v72, (__int64)&ptr, (__int64)&v79, a4, (__int64 *)&v73);
      }
      while ( v71 != v61 );
      v9 = v70;
    }
    sub_1A9FB10(a1, v67, v9, a4, 0);
    goto LABEL_74;
  }
  v37 = *(_QWORD *)(a4 + 120);
  if ( v37 )
  {
    v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v37 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_63;
LABEL_143:
    if ( !v37 )
    {
      v68 = 0;
LABEL_145:
      sub_A794E0((__int64 *)(*(_QWORD *)(a4 + 96) + 88LL), *(_QWORD *)(a4 + 96), v38, v34, v35, v36);
      v38 = *(_QWORD *)(a4 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_67:
      if ( !v38 )
      {
        v39 = nullptr;
LABEL_71:
        if ( (__int64 *)v68 != v39 )
        {
          v69 = v9;
          v40 = v39;
          do
          {
            v41 = *v40++;
            sub_18A9C90((_QWORD *)*a1, v69, v41, (__int64)v72, (__int64)&ptr, (__int64)&v79, a4, (__int64 *)&v73);
          }
          while ( (__int64 *)v68 != v40 );
        }
        goto LABEL_74;
      }
      if ( (*(_BYTE *)(v38 + 72) & 1) != 0 )
      {
        sub_BA8900(a4);
        v38 = *(_QWORD *)(a4 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        v65 = *(unsigned int *)(v38 + 48);
        if ( (_DWORD)v65 )
          goto LABEL_70;
        if ( !*(_QWORD *)(a4 + 120) )
        {
          sub_A794E0((__int64 *)(*(_QWORD *)(a4 + 96) + 88LL), *(_QWORD *)(a4 + 96), v38, v63, v65, v64);
          v38 = *(_QWORD *)(a4 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v39 = nullptr;
        if ( !v38 )
          goto LABEL_71;
      }
      else if ( *(_DWORD *)(v38 + 48) )
      {
LABEL_70:
        v39 = *(__int64 **)(v38 + 40);
        goto LABEL_71;
      }
      if ( (*(_BYTE *)(v38 + 72) & 1) != 0 )
      {
        sub_BA8900(a4);
        v38 = *(_QWORD *)(a4 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v39 = *(__int64 **)(v38 + 16);
      goto LABEL_71;
    }
    goto LABEL_74;
  }
  sub_A794E0((__int64 *)(*(_QWORD *)(a4 + 96) + 88LL), *(_QWORD *)(a4 + 96), v33, v34, v35, v36);
  v37 = *(_QWORD *)(a4 + 120);
  v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v37 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_143;
LABEL_63:
  if ( (*(_BYTE *)(v38 + 72) & 1) == 0 )
  {
    v34 = *(unsigned int *)(v38 + 48);
    if ( (_DWORD)v34 )
    {
LABEL_65:
      v68 = *(_QWORD *)(v38 + 40) + 8 * v34;
      goto LABEL_66;
    }
    goto LABEL_146;
  }
  sub_BA8900(a4);
  v37 = *(_QWORD *)(a4 + 120);
  v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
  v34 = *(unsigned int *)((v37 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( (_DWORD)v34 )
    goto LABEL_65;
  if ( !v37 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a4 + 96) + 88LL), *(_QWORD *)(a4 + 96), v38, v34, v35, v36);
    v37 = *(_QWORD *)(a4 + 120);
    v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v37 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
LABEL_147:
      if ( (*(_BYTE *)(v38 + 72) & 1) != 0 )
      {
        sub_BA8900(a4);
        v37 = *(_QWORD *)(a4 + 120);
        v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v34 = *(_QWORD *)(v38 + 16);
      v68 = v34 + 8LL * *(unsigned int *)(v38 + 24);
LABEL_66:
      if ( v37 )
        goto LABEL_67;
      goto LABEL_145;
    }
    goto LABEL_143;
  }
LABEL_146:
  if ( v38 )
    goto LABEL_147;
LABEL_74:
  v42 = v73;
  if ( v73 )
  {
    operator delete(*(_QWORD *)v73, 8LL * *((unsigned int *)v73 + 4), 8);
    operator delete(v42, 0x18u);
  }
LABEL_76:
  if ( !v90 )
    free(v88[0]);
  if ( !v86 )
    free(v84[0]);
  if ( !v82 )
    free(v79);
  if ( !v77 )
    free(ptr);
}
