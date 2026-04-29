unsigned __int64 __fastcall sub_164D0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // r13
  char v15; // cl
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rsi
  int v19; // ebx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  char v24; // al
  const char *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  char v31; // dl
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // r13
  int v38; // ebx
  char v40; // dl
  unsigned __int64 v41; // rax
  const char *v42; // rdx
  __int64 v43; // r14
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // cl
  unsigned __int64 v49; // rax
  const char *v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  int v55; // ebx
  unsigned __int64 v56; // rax
  const char *v57; // rdx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // r13
  unsigned __int64 v61; // rax
  const char *v62; // rdx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // r13
  unsigned __int64 v66; // rax
  char i; // dl
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rdi
  unsigned __int64 v73; // r13
  int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // rsi
  char v77; // dl
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  const char *v81; // rdx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rdx
  char *v84; // r15
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // [rsp+8h] [rbp-60h] BYREF
  __int64 *v88; // [rsp+10h] [rbp-58h] BYREF
  __int64 v89; // [rsp+18h] [rbp-50h]
  unsigned __int64 v90; // [rsp+28h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 || (v3 = v2 + 24, (unsigned __int64)(v2 + 24) > *(_QWORD *)(a1 + 16)) )
  {
    v32 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v32 < 0x20 )
      v32 = 32;
    *(_QWORD *)(a1 + 32) = v32;
    v33 = v32 + 8;
    v34 = malloc(v32 + 8);
    v35 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v34;
    *v34 = v35;
    v2 = ((unsigned __int64)v34 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v34 + v33;
    v3 = v2 + 24;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_WORD *)(v2 + 16) = 109;
  *(_BYTE *)(v2 + 18) = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 72);
  v6 = v4;
  if ( v4 <= v5 )
    goto LABEL_48;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_BYTE *)(v7 + v5);
  if ( v8 != 115 )
    goto LABEL_11;
  *(_QWORD *)(a1 + 72) = v5 + 1;
  v88 = nullptr;
  v89 = 0;
  if ( !(unsigned __int8)sub_F1A0(a1, (__int64)&v88, (unsigned __int64 *)&v87) )
    return 0;
  v9 = sub_BBE0(a1, 40);
  if ( !v9 )
    return 0;
  v10 = sub_12C70((_QWORD *)a1, 1);
  *(_WORD *)(v10 + 16) = 113;
  v11 = v10;
  *(_BYTE *)(v10 + 18) = 0;
  sub_C080(v10, v9, (_QWORD *)a1);
  sub_C080(v11, *v88, (_QWORD *)a1);
  if ( v87 )
    sub_C080(v11, v87, (_QWORD *)a1);
  sub_C080(v2, v11, (_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 72);
  v6 = v4;
  if ( v5 >= v4 )
  {
LABEL_48:
    v12 = *(_DWORD *)(a1 + 96);
    if ( !v12 )
      return 0;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_BYTE *)(v7 + v5);
LABEL_11:
  if ( v8 == 73 )
  {
    *(_QWORD *)(a1 + 72) = v5 + 1;
    v88 = nullptr;
    v89 = 0;
    if ( !(unsigned __int8)sub_F1A0(a1, (__int64)&v88, (unsigned __int64 *)&v87) )
      return 0;
    v36 = sub_12C70((_QWORD *)a1, 1);
    *(_WORD *)(v36 + 16) = 110;
    v37 = v36;
    *(_BYTE *)(v36 + 18) = 0;
    sub_C080(v36, *v88, (_QWORD *)a1);
    if ( v87 )
      sub_C080(v37, v87, (_QWORD *)a1);
    sub_C080(v2, v37, (_QWORD *)a1);
    v12 = *(_DWORD *)(a1 + 96);
    v5 = *(_QWORD *)(a1 + 72);
    v6 = *(_QWORD *)(a1 + 64);
    if ( !v12 )
      goto LABEL_41;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 96);
    if ( !v12 )
    {
      v15 = *(_BYTE *)(v7 + v5);
      v14 = 0;
      goto LABEL_18;
    }
    v6 = v4;
  }
LABEL_14:
  v13 = (unsigned int)(v12 - 1);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v13);
  if ( *(_WORD *)(v14 + 16) != 40 )
  {
LABEL_41:
    v14 = 0;
    goto LABEL_42;
  }
  *(_DWORD *)(a1 + 96) = v13;
  if ( v14 )
  {
    if ( v5 >= v6 )
      return 0;
    v7 = *(_QWORD *)(a1 + 56);
    v15 = *(_BYTE *)(v7 + v5);
    if ( v15 != 80 )
    {
LABEL_18:
      if ( v15 == 101 )
        goto LABEL_19;
      goto LABEL_44;
    }
    *(_QWORD *)(a1 + 72) = v5 + 1;
    v46 = sub_12E00((_QWORD *)a1, v14, 43);
    v6 = *(_QWORD *)(a1 + 64);
    v14 = v46;
    v5 = *(_QWORD *)(a1 + 72);
  }
LABEL_42:
  if ( v5 >= v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v7 + v5) == 101 )
  {
LABEL_19:
    *(_QWORD *)(a1 + 72) = v5 + 1;
    v16 = sub_12C70((_QWORD *)a1, 1);
    *(_WORD *)(v16 + 16) = 102;
    *(_BYTE *)(v16 + 18) = 0;
    sub_C080(v2, v16, (_QWORD *)a1);
    v5 = *(_QWORD *)(a1 + 72);
    if ( v5 >= *(_QWORD *)(a1 + 64) )
      return 0;
    v17 = *(_QWORD *)(a1 + 56);
    v18 = (char *)(v17 + v5);
    v19 = *(unsigned __int8 *)(v17 + v5);
    v20 = (unsigned int)(v19 - 100);
    if ( (unsigned __int8)(v19 - 100) > 0xEu )
      goto LABEL_25;
    goto LABEL_21;
  }
LABEL_44:
  v18 = (char *)(v7 + v5);
  v38 = *(unsigned __int8 *)(v7 + v5);
  v20 = (unsigned int)(v38 - 100);
  if ( (unsigned __int8)(v38 - 100) <= 0xEu )
  {
LABEL_21:
    v21 = 16645;
    if ( _bittest64(&v21, v20) )
    {
      *(_QWORD *)(a1 + 72) = v5 + 1;
      v22 = *v18;
      v23 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v23 + 16) = 104;
      *(_BYTE *)(v23 + 18) = 2;
      *(_QWORD *)v23 = v22;
      sub_C080(v2, v23, (_QWORD *)a1);
      v5 = *(_QWORD *)(a1 + 72);
    }
  }
  if ( v5 >= *(_QWORD *)(a1 + 64) )
    return 0;
  v17 = *(_QWORD *)(a1 + 56);
LABEL_25:
  *(_QWORD *)(a1 + 72) = v5 + 1;
  v24 = *(_BYTE *)(v17 + v5);
  if ( v24 == 120 )
  {
    v25 = "@callee_owned";
  }
  else if ( v24 > 120 )
  {
    v25 = "@callee_unowned";
    if ( v24 != 121 )
      return 0;
  }
  else if ( v24 == 103 )
  {
    v25 = "@callee_guaranteed";
  }
  else
  {
    if ( v24 != 116 )
      return 0;
    v25 = "@convention(thin)";
  }
  v26 = sub_C650((_QWORD *)a1, 103, v25);
  sub_C080(v2, v26, (_QWORD *)a1);
  v27 = *(_QWORD *)(a1 + 72);
  v28 = *(_QWORD *)(a1 + 64);
  if ( v27 >= v28 )
    goto LABEL_58;
  v29 = *(_QWORD *)(a1 + 56);
  v30 = v27 + 1;
  *(_QWORD *)(a1 + 72) = v27 + 1;
  v31 = *(_BYTE *)(v29 + v27);
  if ( v31 <= 87 )
  {
    if ( v31 > 65 )
    {
      switch ( v31 )
      {
        case 'B':
          v80 = sub_12C70((_QWORD *)a1, 1);
          v81 = "block";
          *(_WORD *)(v80 + 16) = 107;
          v43 = v80;
          *(_BYTE *)(v80 + 18) = 0;
          goto LABEL_114;
        case 'C':
          v84 = (char *)&unk_38004;
          goto LABEL_126;
        case 'K':
          v84 = "closure";
          goto LABEL_126;
        case 'M':
          v84 = "method";
          goto LABEL_126;
        case 'O':
          v84 = "objc_method";
          goto LABEL_126;
        case 'W':
          v84 = "witness_method";
LABEL_126:
          v85 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v85 + 16) = 107;
          v43 = v85;
          v81 = v84;
          *(_BYTE *)(v85 + 18) = 0;
LABEL_114:
          v82 = sub_C650((_QWORD *)a1, 108, v81);
          sub_C080(v43, v82, (_QWORD *)a1);
          break;
        default:
          goto LABEL_59;
      }
      goto LABEL_115;
    }
LABEL_59:
    *(_QWORD *)(a1 + 72) = v27;
    goto LABEL_60;
  }
  if ( v31 != 122 )
    goto LABEL_59;
  if ( v28 <= v30 )
  {
LABEL_58:
    --v27;
    goto LABEL_59;
  }
  *(_QWORD *)(a1 + 72) = v27 + 2;
  v40 = *(_BYTE *)(v29 + v30);
  if ( v40 == 66 )
  {
    v86 = sub_12C70((_QWORD *)a1, 1);
    v42 = "block";
    v43 = v86;
    *(_WORD *)(v86 + 16) = 107;
    *(_BYTE *)(v86 + 18) = 0;
  }
  else
  {
    if ( v40 != 67 )
      goto LABEL_59;
    v41 = sub_12C70((_QWORD *)a1, 1);
    v42 = (const char *)&unk_38004;
    *(_WORD *)(v41 + 16) = 107;
    v43 = v41;
    *(_BYTE *)(v41 + 18) = 0;
  }
  v44 = sub_C650((_QWORD *)a1, 108, v42);
  sub_C080(v43, v44, (_QWORD *)a1);
  v45 = sub_F6D0((_QWORD *)a1);
  sub_CCF0((_QWORD *)a1, v43, v45);
LABEL_115:
  sub_C080(v2, v43, (_QWORD *)a1);
  v27 = *(_QWORD *)(a1 + 72);
  v28 = *(_QWORD *)(a1 + 64);
LABEL_60:
  if ( v27 >= v28 )
    goto LABEL_70;
  v47 = *(_QWORD *)(a1 + 56);
  v48 = *(_BYTE *)(v47 + v27);
  if ( v48 == 65 )
  {
    v49 = v27 + 1;
    v50 = "@yield_once";
LABEL_63:
    *(_QWORD *)(a1 + 72) = v49;
    v51 = sub_C650((_QWORD *)a1, 106, v50);
    sub_C080(v2, v51, (_QWORD *)a1);
    v27 = *(_QWORD *)(a1 + 72);
    if ( v27 >= *(_QWORD *)(a1 + 64) )
      goto LABEL_70;
    v47 = *(_QWORD *)(a1 + 56);
    v48 = *(_BYTE *)(v47 + v27);
    goto LABEL_65;
  }
  if ( v48 == 71 )
  {
    v49 = v27 + 1;
    v50 = "@yield_many";
    goto LABEL_63;
  }
LABEL_65:
  if ( v48 == 104 )
  {
    *(_QWORD *)(a1 + 72) = v27 + 1;
    v52 = sub_C650((_QWORD *)a1, 106, "@Sendable");
    sub_C080(v2, v52, (_QWORD *)a1);
    v53 = *(_QWORD *)(a1 + 72);
    if ( v53 >= *(_QWORD *)(a1 + 64) )
      goto LABEL_70;
    v47 = *(_QWORD *)(a1 + 56);
  }
  else
  {
    v53 = *(_QWORD *)(a1 + 72);
  }
  if ( *(_BYTE *)(v47 + v53) == 72 )
  {
    *(_QWORD *)(a1 + 72) = v53 + 1;
    v54 = sub_C650((_QWORD *)a1, 106, "@async");
    sub_C080(v2, v54, (_QWORD *)a1);
  }
LABEL_70:
  v55 = 0;
  sub_CCF0((_QWORD *)a1, v2, v14);
  while ( 1 )
  {
    v59 = sub_F4B0((_QWORD *)a1, 112);
    v60 = v59;
    if ( !v59 )
      break;
    if ( v2 )
      sub_C080(v2, v59, (_QWORD *)a1);
    v56 = *(_QWORD *)(a1 + 72);
    v57 = "";
    if ( v56 < *(_QWORD *)(a1 + 64) && *(_BYTE *)(*(_QWORD *)(a1 + 56) + v56) == 119 )
    {
      v57 = "@noDerivative";
      *(_QWORD *)(a1 + 72) = v56 + 1;
    }
    v58 = sub_C650((_QWORD *)a1, 105, v57);
    if ( v58 )
      sub_CCF0((_QWORD *)a1, v60, v58);
    ++v55;
  }
  while ( 1 )
  {
    v64 = sub_F5F0((_QWORD *)a1, 114);
    v65 = v64;
    if ( !v64 )
      break;
    if ( v2 )
      sub_C080(v2, v64, (_QWORD *)a1);
    v61 = *(_QWORD *)(a1 + 72);
    v62 = "";
    if ( v61 < *(_QWORD *)(a1 + 64) && *(_BYTE *)(*(_QWORD *)(a1 + 56) + v61) == 119 )
    {
      v62 = "@noDerivative";
      *(_QWORD *)(a1 + 72) = v61 + 1;
    }
    v63 = sub_C650((_QWORD *)a1, 105, v62);
    if ( v63 )
      sub_CCF0((_QWORD *)a1, v65, v63);
    ++v55;
  }
  v66 = *(_QWORD *)(a1 + 72);
  if ( v66 >= *(_QWORD *)(a1 + 64) )
    return 0;
  for ( i = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v66); i == 89; i = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v66) )
  {
    *(_QWORD *)(a1 + 72) = v66 + 1;
    v68 = sub_F4B0((_QWORD *)a1, 115);
    if ( !v68 )
      return 0;
    ++v55;
    v2 = sub_CCF0((_QWORD *)a1, v2, v68);
    v66 = *(_QWORD *)(a1 + 72);
    if ( v66 >= *(_QWORD *)(a1 + 64) )
      return 0;
  }
  if ( i == 122 )
  {
    *(_QWORD *)(a1 + 72) = v66 + 1;
    v69 = sub_F5F0((_QWORD *)a1, 116);
    if ( v69 )
    {
      ++v55;
      v2 = sub_CCF0((_QWORD *)a1, v2, v69);
      v66 = *(_QWORD *)(a1 + 72);
      goto LABEL_98;
    }
    return 0;
  }
LABEL_98:
  if ( v66 >= *(_QWORD *)(a1 + 64) || *(_BYTE *)(*(_QWORD *)(a1 + 56) + v66) != 95 )
    return 0;
  *(_QWORD *)(a1 + 72) = v66 + 1;
  if ( v55 > 0 )
  {
    v70 = 1;
    v71 = -(__int64)(unsigned int)(v55 - 1);
    while ( 1 )
    {
      v74 = *(_DWORD *)(a1 + 96);
      if ( !v74 )
        return 0;
      v75 = (unsigned int)(v74 - 1);
      v76 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v75);
      if ( *(_WORD *)(v76 + 16) != 221 )
        return 0;
      *(_DWORD *)(a1 + 96) = v75;
      if ( !v76 )
        return 0;
      v77 = *(_BYTE *)(v2 + 18);
      if ( v77 == 4 )
        break;
      if ( v77 == 5 )
      {
        v78 = *(unsigned int *)(v2 + 8);
        v73 = v70 - 1;
        v70 = v78 + v70 - 2;
        if ( v78 <= v70 )
          goto LABEL_133;
        v79 = *(_QWORD *)v2;
LABEL_112:
        v72 = *(_QWORD *)(v79 + 8 * v70);
        goto LABEL_104;
      }
      if ( v77 == 3 )
      {
        v73 = v70 - 1;
        v83 = 1;
        --v70;
        goto LABEL_117;
      }
      v72 = 0;
      v73 = v70 - 1;
LABEL_104:
      sub_C080(v72, v76, (_QWORD *)a1);
      v70 = v73;
      if ( v71 == v73 )
        return sub_CD20((_QWORD *)a1, 221, v2);
    }
    v83 = 2;
    v73 = v70 - 1;
LABEL_117:
    if ( v70 >= v83 )
    {
LABEL_133:
      v72 = 0;
      goto LABEL_104;
    }
    v79 = v2;
    goto LABEL_112;
  }
  return sub_CD20((_QWORD *)a1, 221, v2);
}
