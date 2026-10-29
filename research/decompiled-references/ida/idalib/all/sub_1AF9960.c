void __fastcall sub_1AF9960(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int16 v24; // dx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rbx
  char v29; // cl
  __int64 v30; // r8
  __int64 v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r15d
  char v36; // cl
  __int64 v37; // rdi
  __int64 v38; // rdx
  unsigned int v39; // eax
  _QWORD *v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  int v53; // r10d
  int i; // edx
  int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rdi
  __int64 v59; // r8
  int v60; // r11d
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdx
  int v66; // r10d
  unsigned int v67; // r9d
  __int64 v68; // rcx
  __int64 v69; // r11
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rsi
  int j; // esi
  int v77; // r8d
  int v78; // r11d
  __int64 v79; // rcx
  unsigned __int64 v81; // [rsp+10h] [rbp-68h]
  char v82; // [rsp+27h] [rbp-51h]
  __m128 v84[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = sub_1AEE450(a3);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v5;
  v8 = *(unsigned int *)(v6 + 344);
  if ( !(_DWORD)v8 )
    return;
  v9 = *(_QWORD *)(v6 + 336) + 6776LL * (unsigned int)v8 - 6776;
  if ( *(_QWORD *)(v9 + 6768) != *(_QWORD *)(v6 + 328) )
    return;
  v10 = *(_DWORD *)(v9 + 8);
  v11 = *(_DWORD *)(v6 + 27504);
  if ( v10 <= v11 )
    return;
  v12 = v10 - v11;
  if ( a4 >= v12 )
    return;
  v13 = v12 - 1;
  v14 = 1688 * v13;
  v81 = v13 - (~a4 + v12);
  while ( 1 )
  {
    if ( !(_DWORD)v8 )
      goto LABEL_10;
    v18 = *(_QWORD *)(v6 + 336) + 6776LL * (unsigned int)v8 - 6776;
    if ( *(_QWORD *)(v18 + 6768) == *(_QWORD *)(v6 + 328) )
    {
      v19 = *(unsigned int *)(v18 + 8);
      v20 = *(unsigned int *)(v6 + 27504);
      if ( (unsigned int)v19 > (unsigned int)v20 && v13 < v19 - v20 )
        break;
    }
LABEL_7:
    if ( !(_DWORD)v8 )
      goto LABEL_10;
    v15 = *(_QWORD *)(v6 + 336);
    v16 = v15 + 6776 * v8 - 6776;
    if ( *(_QWORD *)(v16 + 6768) == *(_QWORD *)(v6 + 328) )
    {
      v61 = *(unsigned int *)(v16 + 8);
      v62 = *(unsigned int *)(v6 + 27504);
      if ( (unsigned int)v61 > (unsigned int)v62 && v13 < v61 - (unsigned __int64)(unsigned int)v62 )
      {
        v63 = v14 + *(_QWORD *)v16;
        v64 = *(_QWORD *)(v63 + 704);
        v65 = *(unsigned int *)(v63 + 720);
        if ( (_DWORD)v65 )
        {
          v66 = v65 - 1;
          v67 = (v65 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
          v68 = v64 + 1184LL * v67;
          v69 = *(_QWORD *)v68;
          if ( v7 == *(_QWORD *)v68 )
            goto LABEL_65;
          LODWORD(v74) = 1;
          if ( v69 != -4096 )
            goto LABEL_97;
        }
LABEL_86:
        v17 = v15 + 6776 * v8 - 6776;
        goto LABEL_69;
      }
    }
    v17 = v15 + 6776 * v8 - 6776;
    if ( *(_QWORD *)(v17 + 6768) != *(_QWORD *)(v6 + 328) )
      goto LABEL_10;
    v62 = *(unsigned int *)(v6 + 27504);
LABEL_69:
    v70 = *(unsigned int *)(v17 + 8);
    if ( (unsigned int)v70 > (unsigned int)v62 && v13 < v70 - v62 && sub_FFE8A0(*(_DWORD *)(*(_QWORD *)v17 + v14 + 976)) )
    {
      v71 = *(_QWORD *)(a1 + 8);
      v62 = v7;
      v64 = sub_168B6E0(a1);
      v8 = sub_1AF0190(v64, v7, v72, v73);
      v74 = *(_QWORD *)(*(_QWORD *)(v71 + 336) + 6776LL * *(unsigned int *)(v71 + 344) - 6776) + 8LL * (int)v8 + 928;
      v65 = *(unsigned int *)(v14 + v74 + 8);
      if ( (_DWORD)v8 == 1 )
      {
        v45 = 55;
        if ( (_DWORD)v65 == 9 )
          v45 = 36;
LABEL_46:
        v46 = sub_168B6C0(a1);
        v47 = sub_B31280(v46, v45, 0);
        sub_B8CC60(a2, v47, v48, v49, v50, v51);
        return;
      }
      if ( !(_DWORD)v8 || (_DWORD)v8 == 2 )
      {
        if ( (v65 & 0xFFFFFFFD) == 9 || (v45 = 55, (_DWORD)v65 == 4) )
          v45 = 36;
        goto LABEL_46;
      }
LABEL_97:
      while ( 1 )
      {
        v78 = v74 + 1;
        v79 = v66 & (v67 + (unsigned int)v74);
        v67 = v79;
        v68 = v64 + 1184 * v79;
        if ( v7 == *(_QWORD *)v68 )
          break;
        if ( *(_QWORD *)v68 == -4096 )
          goto LABEL_86;
        LODWORD(v74) = v78;
      }
LABEL_65:
      if ( v68 != 1184 * v65 + v64 && 9LL * *(unsigned int *)(v68 + 16) )
      {
        v45 = 55;
        goto LABEL_46;
      }
      goto LABEL_86;
    }
LABEL_10:
    v14 -= 1688;
    if ( v13 == v81 )
      return;
    --v13;
    v6 = *(_QWORD *)(a1 + 8);
    v8 = *(unsigned int *)(v6 + 344);
  }
  v21 = v7;
  v22 = v7;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x2C )
  {
    v23 = sub_B73640(v7);
    v24 = *(_WORD *)v23 & 0x1FF;
    if ( ((v24 + 452) & 0x1FFu) <= 1 )
    {
      v23 = *(_QWORD *)(v23 + 16);
      v24 = *(_WORD *)v23 & 0x1FF;
    }
    if ( v24 == 48 )
    {
      v25 = *(_QWORD *)(v23 + 16);
      v23 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v25 & 4) == 0 )
        goto LABEL_24;
      v23 = *(_QWORD *)(v23 + 40);
      v24 = *(_WORD *)v23 & 0x1FF;
    }
    for ( ; v24 == 116; v24 = *(_WORD *)v23 & 0x1FF )
    {
      v23 = *(_QWORD *)(v23 + 24);
LABEL_24:
      ;
    }
    if ( v24 == 79 )
      v23 = sub_BFA3B0(v23);
    v26 = sub_BFB9F0(v23);
    v22 = v7;
    if ( (*(_WORD *)v26 & 0x1FF) == 0x2E )
    {
      v21 = *(_QWORD *)(v26 + 24);
      v22 = v21;
    }
  }
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v21);
  v28 = v14 + *(_QWORD *)(*(_QWORD *)(v6 + 336) + 6776LL * *(unsigned int *)(v6 + 344) - 6776);
  v29 = *(_BYTE *)v28 & 1;
  if ( v29 )
  {
    v30 = v28 + 8;
    v31 = v28 + 8;
    v32 = ((unsigned __int8)((unsigned int)v27 >> 4) ^ (unsigned __int8)((unsigned int)v27 >> 9)) & 7;
    v33 = v28 + 8 + 40LL * (((unsigned __int8)((unsigned int)v27 >> 4) ^ (unsigned __int8)((unsigned int)v27 >> 9)) & 7);
    if ( v27 == *(_QWORD *)v33 )
      goto LABEL_31;
    v53 = 7;
    if ( *(_QWORD *)v33 != -4096 )
      goto LABEL_50;
LABEL_55:
    v56 = 320;
LABEL_80:
    v33 = v30 + v56;
    goto LABEL_31;
  }
  v31 = *(_QWORD *)(v28 + 8);
  v52 = *(unsigned int *)(v28 + 16);
  v30 = v31;
  if ( !(_DWORD)v52 )
    goto LABEL_79;
  v53 = v52 - 1;
  v32 = (v52 - 1) & (((unsigned int)v27 >> 4) ^ ((unsigned int)v27 >> 9));
  v33 = v31 + 40LL * v32;
  if ( v27 == *(_QWORD *)v33 )
    goto LABEL_32;
  if ( *(_QWORD *)v33 == -4096 )
  {
LABEL_79:
    v56 = 40 * v52;
    goto LABEL_80;
  }
LABEL_50:
  for ( i = 1; ; i = v55 )
  {
    v55 = i + 1;
    v32 = v53 & (i + v32);
    v33 = v31 + 40LL * v32;
    if ( v27 == *(_QWORD *)v33 )
      break;
    if ( *(_QWORD *)v33 == -4096 )
    {
      if ( v29 )
      {
        v30 = v28 + 8;
        goto LABEL_55;
      }
      v30 = *(_QWORD *)(v28 + 8);
      v52 = *(unsigned int *)(v28 + 16);
      goto LABEL_79;
    }
  }
LABEL_31:
  v34 = 320;
  if ( !v29 )
LABEL_32:
    v34 = 40LL * *(unsigned int *)(v28 + 16);
  if ( v33 == v34 + v31
    || (*(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFFCLL) == 0
    || (v35 = *(_DWORD *)(v33 + 8), v82 = *(_BYTE *)(v33 + 32), (unsigned __int8)sub_FFEF20(v35) != 1)
    || v82 )
  {
    v36 = *(_BYTE *)(v28 + 728) & 1;
    if ( v36 )
    {
      v37 = v28 + 736;
      v38 = v28 + 736;
      v39 = ((unsigned __int8)((unsigned int)v27 >> 4) ^ (unsigned __int8)((unsigned int)v27 >> 9)) & 7;
      v40 = (_QWORD *)(v28
                     + 736
                     + 24LL
                     * (((unsigned __int8)((unsigned int)v27 >> 4) ^ (unsigned __int8)((unsigned int)v27 >> 9)) & 7));
      if ( v27 == *v40 )
      {
LABEL_39:
        v41 = 192;
LABEL_40:
        sub_1AF9650(v84, v40, (_QWORD *)(v41 + v38), v28 + 728, 1);
        v42 = v84[0].m128_u64[0];
LABEL_41:
        if ( (*(_BYTE *)(v28 + 728) & 1) != 0 )
        {
          v43 = v28 + 736;
          v44 = 192;
        }
        else
        {
          v43 = *(_QWORD *)(v28 + 736);
          v44 = 24LL * *(unsigned int *)(v28 + 744);
        }
        sub_1AF9650(v84, (_QWORD *)(v44 + v43), (_QWORD *)(v44 + v43), v28 + 728, 1);
        if ( v84[0].m128_u64[0] != v42 && (unsigned __int8)sub_FFEF20(82) )
        {
          v45 = 82;
          goto LABEL_46;
        }
        v6 = *(_QWORD *)(a1 + 8);
        v8 = *(unsigned int *)(v6 + 344);
        goto LABEL_7;
      }
      v60 = 7;
      if ( *v40 != -4096 )
        goto LABEL_88;
LABEL_103:
      v38 = v37;
      v75 = 192;
    }
    else
    {
      v57 = *(_QWORD *)(v28 + 736);
      v58 = *(unsigned int *)(v28 + 744);
      v38 = v57;
      v59 = (unsigned int)v58;
      if ( (_DWORD)v58 )
      {
        v60 = v58 - 1;
        v39 = (v58 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
        v40 = (_QWORD *)(v57 + 24LL * v39);
        if ( *v40 == v27 )
        {
LABEL_60:
          v41 = 24 * v59;
          goto LABEL_40;
        }
        if ( *v40 != -4096 )
        {
LABEL_88:
          for ( j = 1; ; j = v77 )
          {
            v77 = j + 1;
            v39 = v60 & (v39 + j);
            v40 = (_QWORD *)(v38 + 24LL * v39);
            if ( v27 == *v40 )
              break;
            if ( *v40 == -4096 )
            {
              if ( !v36 )
              {
                v57 = *(_QWORD *)(v28 + 736);
                v58 = *(unsigned int *)(v28 + 744);
                goto LABEL_82;
              }
              v37 = v28 + 736;
              goto LABEL_103;
            }
          }
          if ( v36 )
          {
            v38 = v28 + 736;
            goto LABEL_39;
          }
          v38 = *(_QWORD *)(v28 + 736);
          v59 = *(unsigned int *)(v28 + 744);
          goto LABEL_60;
        }
LABEL_82:
        v38 = v57;
      }
      v75 = 24 * v58;
    }
    sub_1AF9650(v84, (_QWORD *)(v38 + v75), (_QWORD *)(v38 + v75), v28 + 728, 1);
    v42 = v84[0].m128_u64[0];
    goto LABEL_41;
  }
  if ( v35 != 106 )
  {
    v45 = v35;
    goto LABEL_46;
  }
}
