__int64 __fastcall sub_1F43500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // r8
  int v14; // r15d
  unsigned int i; // eax
  _QWORD *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r15
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // r13
  __int64 v36; // r15
  __int64 v37; // rdi
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // edi
  _QWORD *v42; // rsi
  __int64 v43; // r12
  _QWORD *v44; // rdx
  unsigned __int64 v45; // r12
  _QWORD *v46; // rcx
  _QWORD *v47; // rdx
  _QWORD *v48; // rdi
  __int64 v49; // rax
  int v50; // edx
  __int64 v51; // rcx
  unsigned int v53; // edx
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  unsigned __int64 v61; // r15
  __int64 v62; // rax
  int v63; // edx
  __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // edx
  unsigned __int64 v69; // rcx
  __int64 v70; // rdi
  char v71; // al
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rdx
  int v77; // esi
  int v78; // r10d
  __int64 v79; // r12
  __int64 v80; // r12
  __int64 v81; // r12
  __int64 v82; // rax
  char v83; // dl
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rsi
  _QWORD *v90; // [rsp+8h] [rbp-80h]
  unsigned __int64 v91; // [rsp+10h] [rbp-78h]
  _QWORD *v92; // [rsp+18h] [rbp-70h]
  __m128 v93; // [rsp+20h] [rbp-68h] BYREF
  __int64 v94; // [rsp+30h] [rbp-58h]
  char v95; // [rsp+38h] [rbp-50h]
  int v96; // [rsp+3Ch] [rbp-4Ch]
  __int64 v97; // [rsp+40h] [rbp-48h]

  v6 = *(_QWORD *)(a2 + 80);
  if ( v6 )
  {
    v91 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 40);
    v91 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
    {
      if ( !sub_1EA74C0(a3) )
      {
        v67 = *(_QWORD *)(a2 + 80);
        v68 = *(_DWORD *)(a2 + 64);
        v93.m128_u64[1] = a3;
        v69 = *(_QWORD *)a2;
        *(_QWORD *)(a1 + 8) = a3;
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)a1 = v69;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = v68;
        *(_QWORD *)(a1 + 32) = v67;
        v93.m128_u64[0] = v69;
        v94 = 0;
        v96 = v68;
        v97 = v67;
        v95 = 0;
        sub_1F42E40((__int64)&v93);
        return a1;
      }
      v91 = 0;
    }
  }
  v90 = *(_QWORD **)(*(_QWORD *)a2 + 144LL);
  v7 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v8 = sub_B8EAA0((__int64)v7);
  v9 = *(_QWORD *)(a2 + 80);
  v10 = v8;
  if ( v9 )
  {
    v11 = *(unsigned int *)(*(_QWORD *)a2 + 3616LL);
    v12 = (__int64 *)(*(_QWORD *)a2 + 3600LL);
    v13 = *v12;
    if ( (_DWORD)v11 )
    {
      v14 = 1;
      for ( i = (v11 - 1)
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)
                  | ((unsigned __int64)(((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4)) << 32))) >> 31)
               ^ (484763065 * (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)))); ; i = (v11 - 1) & v17 )
      {
        v16 = (_QWORD *)(v13 + 24LL * i);
        if ( v10 == *v16 && v9 == v16[1] )
          break;
        if ( *v16 == -4096 && v16[1] == -4096 )
          goto LABEL_81;
        v17 = v14 + i;
        ++v14;
      }
      v60 = (_QWORD *)(v13 + 24 * v11);
    }
    else
    {
LABEL_81:
      v16 = (_QWORD *)(v13 + 24 * v11);
      v60 = v16;
    }
    sub_1F335E0(&v93, v16, v60, (__int64)v12, 1);
    v61 = v93.m128_u64[0];
    sub_1F335E0(
      &v93,
      (_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 3600LL) + 24LL * *(unsigned int *)(*(_QWORD *)a2 + 3616LL)),
      (_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 3600LL) + 24LL * *(unsigned int *)(*(_QWORD *)a2 + 3616LL)),
      *(_QWORD *)a2 + 3600LL,
      1);
    if ( v93.m128_u64[0] != v61 && (unsigned __int8)sub_A952E0(v90, *(_QWORD *)(v61 + 16), a3) )
    {
      v62 = *(_QWORD *)(a2 + 80);
      v63 = *(_DWORD *)(a2 + 64);
      v64 = *(_QWORD *)(v61 + 16);
      v65 = *(_QWORD *)a2;
      *(_QWORD *)(a1 + 8) = a3;
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)a1 = v65;
      *(_QWORD *)(a1 + 16) = v64;
      *(_DWORD *)(a1 + 28) = v63;
      *(_QWORD *)(a1 + 32) = v62;
      return a1;
    }
  }
  v22 = sub_1EA74C0(a3);
  if ( v22 )
  {
    v53 = *(_DWORD *)(a2 + 64);
    v54 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    {
      v55 = sub_1F42630(*(_QWORD *)a2, *(_QWORD *)(v54 + 8), v53);
      v56 = v55;
      if ( !v55 )
        goto LABEL_28;
    }
    else
    {
      v55 = sub_1F42630(*(_QWORD *)a2, v54, v53);
      v56 = v55;
      if ( !v55 )
        goto LABEL_28;
    }
    if ( !(unsigned __int8)sub_A952E0(v90, v55, a3) )
      goto LABEL_28;
    v57 = *(_QWORD *)(a2 + 80);
    v58 = *(_DWORD *)(a2 + 64);
    v59 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = v56;
    *(_QWORD *)a1 = v59;
    *(_BYTE *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 28) = v58;
    *(_QWORD *)(a1 + 32) = v57;
    return a1;
  }
  v23 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(v10 + 8) & 0x7F) != 0 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 144) + 2320LL) + 1LL) & 8) != 0 )
  {
    v24 = sub_1F42D60(v23, v10, v18, v19, v20, v21);
    if ( !v24 )
    {
      v66 = *(_QWORD *)a2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = v66;
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      return a1;
    }
    v31 = sub_B94050(v24, v6, v25, v26, v27, v28);
    if ( !v31 )
      goto LABEL_28;
    while ( 1 )
    {
      v32 = v31;
      v33 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
      v34 = *(_QWORD *)(a2 + 80);
      LODWORD(v32) = (v32 >> 2) & 1;
      v35 = (unsigned int)v32;
      if ( (_DWORD)v32 )
      {
        if ( !v33 )
        {
          if ( !v34 )
            goto LABEL_28;
          v36 = 0;
          goto LABEL_21;
        }
        v36 = *v33;
      }
      else
      {
        v36 = (__int64)v33;
      }
      if ( !v34 )
        goto LABEL_23;
      if ( *(char *)(v36 + 29) < 0 )
        goto LABEL_25;
LABEL_21:
      if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 64 > 2 )
        goto LABEL_25;
      v36 = sub_B7A5B0((_QWORD *)v36, 1, v34, v29, v30);
LABEL_23:
      if ( v36 && (unsigned __int8)sub_A952E0(v90, v36, a3) )
      {
        v84 = *(_QWORD *)(a2 + 80);
        v85 = *(_DWORD *)(a2 + 64);
        v86 = *(_QWORD *)a2;
        *(_QWORD *)(a1 + 8) = a3;
        *(_QWORD *)(a1 + 16) = v36;
        *(_QWORD *)a1 = v86;
        *(_BYTE *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 28) = v85;
        *(_QWORD *)(a1 + 32) = v84;
        return a1;
      }
LABEL_25:
      if ( v35 )
      {
        if ( v33 )
        {
          v31 = v33[1];
          if ( v31 )
            continue;
        }
      }
      goto LABEL_28;
    }
  }
  v70 = sub_1EACA10(v23);
  if ( (v6 & 7) != 0 )
  {
    v92 = nullptr;
    goto LABEL_59;
  }
  v92 = (_QWORD *)v91;
  if ( !v91 || (v71 = *(_BYTE *)(v91 + 4), (v71 & 0x10) == 0) )
  {
LABEL_59:
    v93.m128_u64[0] = sub_15C1650(v70, v6);
    v73 = v93.m128_u64[0];
    if ( v93.m128_u64[0] )
      goto LABEL_60;
    goto LABEL_28;
  }
  *(_BYTE *)(v91 + 4) = v71 & 0xEF;
  v83 = 1;
  if ( (*(_BYTE *)(v91 + 3) & 0x3A) == 0 )
    v83 = (v71 & 0x20) != 0;
  *(_BYTE *)(v91 + 3) = (v83 << 7) | *(_BYTE *)(v91 + 3) & 0x7F;
  v93.m128_u64[0] = sub_15C1650(v70, v6);
  v73 = v93.m128_u64[0];
  if ( !v93.m128_u64[0] )
    goto LABEL_71;
  v22 = 1;
  do
  {
LABEL_60:
    v74 = v73;
    v75 = v73 & 1;
    if ( (v73 & 1) != 0 )
      v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_QWORD *)(a2 + 80) )
    {
      if ( *(char *)(v74 + 29) < 0 )
        goto LABEL_69;
      v76 = (*(_BYTE *)(v74 + 28) & 0x7Fu) - 64;
      if ( (unsigned int)v76 > 2 )
        goto LABEL_69;
      v74 = sub_B7A5B0((_QWORD *)v74, 1, v76, v73, v72);
    }
    if ( v74 && (unsigned __int8)sub_A952E0(v90, v74, a3) )
    {
      v87 = *(_QWORD *)(a2 + 80);
      v88 = *(_DWORD *)(a2 + 64);
      v89 = *(_QWORD *)a2;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = v74;
      *(_QWORD *)a1 = v89;
      *(_BYTE *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 28) = v88;
      *(_QWORD *)(a1 + 32) = v87;
      if ( v22 )
        *v92 |= 0x1080000000uLL;
      return a1;
    }
    v75 = v93.m128_i8[0] & 1;
LABEL_69:
    if ( !v75 )
      break;
    sub_15C20B0((__int64 *)&v93);
    v73 = v93.m128_u64[0];
  }
  while ( v93.m128_u64[0] );
  if ( !v22 )
    goto LABEL_28;
LABEL_71:
  *v92 |= 0x1080000000uLL;
LABEL_28:
  v37 = *(_QWORD *)a2;
  v38 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v38 = *(_QWORD *)(v38 + 8);
  v39 = *(unsigned int *)(v37 + 13008);
  v40 = *(_QWORD *)(v37 + 12992);
  if ( !(_DWORD)v39 )
    goto LABEL_85;
  v41 = (v39 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
  v42 = (_QWORD *)(v40 + 16LL * v41);
  v43 = *v42;
  if ( v38 == *v42 )
    goto LABEL_32;
  v77 = 1;
  if ( v43 == -4096 )
  {
LABEL_85:
    v42 = (_QWORD *)(v40 + 16LL * (unsigned int)v39);
    v44 = v42;
  }
  else
  {
    while ( 1 )
    {
      v78 = v77 + 1;
      v41 = (v39 - 1) & (v41 + v77);
      v42 = (_QWORD *)(v40 + 16LL * v41);
      v79 = *v42;
      if ( v38 == *v42 )
        break;
      v77 = v78;
      if ( v79 == -4096 )
        goto LABEL_85;
    }
LABEL_32:
    v44 = (_QWORD *)(16 * v39 + v40);
  }
  sub_1F33660(&v93, v42, v44, *(_QWORD *)a2 + 12992LL, 1);
  v45 = v93.m128_u64[0];
  v46 = (_QWORD *)(*(_QWORD *)a2 + 12992LL);
  v47 = (_QWORD *)(*v46 + 16LL * *(unsigned int *)(*(_QWORD *)a2 + 13008LL));
  sub_1F33660(&v93, v47, v47, (__int64)v46, 1);
  if ( v45 != v93.m128_u64[0]
    && ((*(_BYTE *)(*(_QWORD *)(sub_B8C330(a3) + 2320) + 21LL) & 8) == 0 || !sub_B8D940(a3) && !sub_B8DB40(a3)) )
  {
    v48 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v48 = (_QWORD *)*v48;
    if ( *(_QWORD **)(v45 + 8) == v48 )
    {
      v80 = sub_B8C1B0((__int64)v48);
      if ( (*(_BYTE *)(*(_QWORD *)(sub_B8C330(v80) + 2320) + 21LL) & 8) == 0 || !sub_B8D940(v80) && !sub_B8DB40(v80) )
      {
        v81 = *(_QWORD *)a2;
        v82 = *(unsigned int *)(*(_QWORD *)a2 + 11872LL);
        if ( v82 + 1 > (unsigned __int64)*(unsigned int *)(*(_QWORD *)a2 + 11876LL) )
        {
          sub_2237220(v81 + 11864, v81 + 11880, v82 + 1, 8);
          v82 = *(unsigned int *)(v81 + 11872);
        }
        *(_QWORD *)(*(_QWORD *)(v81 + 11864) + 8 * v82) = a3;
        ++*(_DWORD *)(v81 + 11872);
      }
    }
  }
  v49 = *(_QWORD *)(a2 + 80);
  v50 = *(_DWORD *)(a2 + 64);
  v51 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v51;
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = v50;
  *(_QWORD *)(a1 + 32) = v49;
  return a1;
}
