__int64 __fastcall sub_8B0700(__int64 a1, char a2)
{
  __int64 v3; // rbp
  unsigned int *v4; // r13
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r14
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rbp
  int *v26; // rax
  int v27; // esi
  int v28; // edx
  int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned int *v32; // r12
  unsigned int v33; // ecx
  int v34; // edx
  int v35; // r10d
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // r13d
  __int64 v40; // rax
  unsigned int *v41; // r11
  unsigned int v42; // r8d
  unsigned int v43; // edx
  __int64 v45; // rdi
  __int64 v46; // r9
  unsigned int v47; // ecx
  unsigned int *v48; // rdi
  size_t v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // [rsp+10h] [rbp-118h]
  __int64 v52; // [rsp+20h] [rbp-108h]
  __int64 v53; // [rsp+28h] [rbp-100h]
  __int64 v54; // [rsp+28h] [rbp-100h]
  __int64 v55; // [rsp+30h] [rbp-F8h]
  __int64 v56; // [rsp+30h] [rbp-F8h]
  unsigned int v57; // [rsp+4Ch] [rbp-DCh] BYREF
  __int64 v58; // [rsp+50h] [rbp-D8h]
  _QWORD v59[2]; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v60[2]; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v61[2]; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD v62[3]; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-88h]
  _QWORD v64[2]; // [rsp+A8h] [rbp-80h] BYREF
  _QWORD v65[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v66[2]; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v67[10]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = a1 + 736;
  v58 = a1 + 736;
  v59[0] = 0;
  v59[1] = 0;
  v60[0] = 1;
  v60[1] = 0;
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 1;
  v62[1] = 0;
  v63 = a1 + 736;
  v64[0] = 0;
  v64[1] = 0;
  v65[0] = 1;
  v65[1] = 0;
  v66[0] = 0;
  v66[1] = 0;
  v67[0] = 1;
  v67[1] = 0;
  v4 = *(unsigned int **)(a1 + 1576);
  v5 = v4 + 1;
  if ( v4 )
  {
    v6 = *(v4 - 1);
    v4 += v6;
    if ( 4 * v6 == 4 )
      goto LABEL_111;
  }
  v51 = -1;
  if ( !a2 )
  {
    while ( 1 )
    {
      v8 = *v5;
      v9 = 232 * v8 + *(_QWORD *)(a1 + 1592);
      v10 = *(_BYTE *)(v9 + 3);
      if ( (v10 & 0x40) == 0 )
        break;
      v55 = v9 + 72;
      v53 = v9 + 8;
      if ( sub_8AEDF0(v3, v9 + 8, v9 + 72) )
      {
        if ( (*(_BYTE *)(v9 + 92) & 1) != 0
          || *(_DWORD *)(v9 + 88) != 1
          || (*(_BYTE *)(v9 + 28) & 1) != 0
          || *(_DWORD *)(v9 + 24) != 1 )
        {
          sub_1854300(v3, v55, v53, v64);
        }
        else
        {
          sub_183A580(v3, v55, v53, v64);
          sub_182EF00(v3, v65);
          BYTE4(v65[0]) &= ~1u;
          LODWORD(v65[0]) = 1;
        }
        v13 = v9 + 40;
        v14 = v9 + 104;
        if ( (*(_BYTE *)(v9 + 124) & 1) != 0
          || *(_DWORD *)(v9 + 120) != 1
          || (*(_BYTE *)(v9 + 60) & 1) != 0
          || *(_DWORD *)(v9 + 56) != 1 )
        {
          goto LABEL_72;
        }
LABEL_105:
        sub_183A580(v3, v14, v13, v66);
        sub_182EF00(v3, v67);
        BYTE4(v67[0]) &= ~1u;
        LODWORD(v67[0]) = 1;
LABEL_73:
        if ( v51 == -1 || sub_8AEDF0(v63, (__int64)v59, (__int64)v64) )
        {
          v45 = v58;
          if ( (v64[0] & 0x100000000LL) != 0 )
          {
            sub_182EA00(v58, v59, v64);
            v45 = v58;
          }
          else
          {
            BYTE4(v59[0]) &= ~1u;
            LODWORD(v59[0]) = v64[0];
          }
          if ( (v65[0] & 0x100000000LL) != 0 )
          {
            sub_182EA00(v45, v60, v65);
          }
          else
          {
            BYTE4(v60[0]) &= ~1u;
            LODWORD(v60[0]) = v65[0];
          }
          if ( (v66[0] & 0x100000000LL) != 0 )
          {
            sub_182EA00(v45, v61, v66);
          }
          else
          {
            BYTE4(v61[0]) &= ~1u;
            LODWORD(v61[0]) = v66[0];
          }
          if ( (v67[0] & 0x100000000LL) != 0 )
          {
            sub_182EA00(v45, v62, v67);
          }
          else
          {
            BYTE4(v62[0]) &= ~1u;
            LODWORD(v62[0]) = v67[0];
          }
          v51 = v8;
        }
        goto LABEL_6;
      }
      v7 = *(_QWORD *)(a1 + 1592) + 232 * v8;
      if ( *(char *)(v7 + 3) < 0 )
        goto LABEL_10;
LABEL_6:
      if ( v4 == ++v5 )
        goto LABEL_51;
    }
    v7 = 232 * v8 + *(_QWORD *)(a1 + 1592);
    if ( v10 >= 0 )
      goto LABEL_6;
LABEL_10:
    if ( sub_8AEDF0(v3, v7 + 136, v7 + 8) )
    {
      v11 = v9 + 72;
      v12 = v9 + 8;
      if ( (*(_BYTE *)(v9 + 28) & 1) != 0
        || *(_DWORD *)(v9 + 24) != 1
        || (*(_BYTE *)(v9 + 92) & 1) != 0
        || *(_DWORD *)(v9 + 88) != 1 )
      {
        sub_1854300(v3, v12, v11, v64);
      }
      else
      {
        sub_183A580(v3, v12, v11, v64);
        sub_182EF00(v3, v65);
        BYTE4(v65[0]) &= ~1u;
        LODWORD(v65[0]) = 1;
      }
      v13 = v9 + 104;
      v14 = v9 + 40;
      if ( (*(_BYTE *)(v9 + 60) & 1) == 0
        && *(_DWORD *)(v9 + 56) == 1
        && (*(_BYTE *)(v9 + 124) & 1) == 0
        && *(_DWORD *)(v9 + 120) == 1 )
      {
        goto LABEL_105;
      }
LABEL_72:
      sub_1854300(v3, v14, v13, v66);
      goto LABEL_73;
    }
    goto LABEL_6;
  }
  do
  {
    while ( 1 )
    {
      v15 = *v5;
      v16 = 232LL * *v5 + *(_QWORD *)(a1 + 1592);
      v17 = *(_BYTE *)(v16 + 3);
      v18 = v16;
      if ( (v17 & 0x40) == 0 )
      {
        if ( v17 >= 0 )
          goto LABEL_21;
        goto LABEL_25;
      }
      v56 = 232LL * *v5;
      v54 = v16 + 72;
      v52 = v16 + 8;
      if ( sub_8AEDF0(v3, v16 + 8, v16 + 72) )
        break;
      v18 = *(_QWORD *)(a1 + 1592) + v56;
      if ( *(char *)(v18 + 3) >= 0 )
        goto LABEL_21;
LABEL_25:
      if ( sub_8AEDF0(v3, v18 + 136, v18 + 8) )
      {
        v19 = v16 + 72;
        v20 = v16 + 8;
        if ( (*(_BYTE *)(v16 + 28) & 1) != 0
          || *(_DWORD *)(v16 + 24) != 1
          || (*(_BYTE *)(v16 + 92) & 1) != 0
          || *(_DWORD *)(v16 + 88) != 1 )
        {
          sub_1854300(v3, v20, v19, v64);
        }
        else
        {
          sub_183A580(v3, v20, v19, v64);
          sub_182EF00(v3, v65);
          BYTE4(v65[0]) &= ~1u;
          LODWORD(v65[0]) = 1;
        }
        v21 = v16 + 104;
        v22 = v16 + 40;
        if ( (*(_BYTE *)(v16 + 60) & 1) == 0
          && *(_DWORD *)(v16 + 56) == 1
          && (*(_BYTE *)(v16 + 124) & 1) == 0
          && *(_DWORD *)(v16 + 120) == 1 )
        {
          goto LABEL_108;
        }
        goto LABEL_39;
      }
LABEL_21:
      if ( v4 == ++v5 )
        goto LABEL_51;
    }
    if ( (*(_BYTE *)(v16 + 92) & 1) != 0
      || *(_DWORD *)(v16 + 88) != 1
      || (*(_BYTE *)(v16 + 28) & 1) != 0
      || *(_DWORD *)(v16 + 24) != 1 )
    {
      sub_1854300(v3, v54, v52, v64);
    }
    else
    {
      sub_183A580(v3, v54, v52, v64);
      sub_182EF00(v3, v65);
      BYTE4(v65[0]) &= ~1u;
      LODWORD(v65[0]) = 1;
    }
    v21 = v16 + 40;
    v22 = v16 + 104;
    if ( (*(_BYTE *)(v16 + 124) & 1) == 0
      && *(_DWORD *)(v16 + 120) == 1
      && (*(_BYTE *)(v16 + 60) & 1) == 0
      && *(_DWORD *)(v16 + 56) == 1 )
    {
LABEL_108:
      sub_183A580(v3, v22, v21, v66);
      sub_182EF00(v3, v67);
      BYTE4(v67[0]) &= ~1u;
      LODWORD(v67[0]) = 1;
      goto LABEL_40;
    }
LABEL_39:
    sub_1854300(v3, v22, v21, v66);
LABEL_40:
    if ( v51 != -1 && !sub_8AEDF0(v63, (__int64)v64, (__int64)v59) )
      goto LABEL_21;
    v23 = v58;
    if ( (v64[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v58, v59, v64);
      v23 = v58;
    }
    else
    {
      BYTE4(v59[0]) &= ~1u;
      LODWORD(v59[0]) = v64[0];
    }
    if ( (v65[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v23, v60, v65);
    }
    else
    {
      BYTE4(v60[0]) &= ~1u;
      LODWORD(v60[0]) = v65[0];
    }
    if ( (v66[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v23, v61, v66);
    }
    else
    {
      BYTE4(v61[0]) &= ~1u;
      LODWORD(v61[0]) = v66[0];
    }
    if ( (v67[0] & 0x100000000LL) != 0 )
    {
      sub_182EA00(v23, v62, v67);
    }
    else
    {
      BYTE4(v62[0]) &= ~1u;
      LODWORD(v62[0]) = v67[0];
    }
    ++v5;
    v51 = v15;
  }
  while ( v4 != v5 );
LABEL_51:
  v24 = *(_QWORD *)(a1 + 1576);
  if ( v51 == -1 )
  {
    if ( !v24 )
      goto LABEL_112;
    LODWORD(v6) = *(_DWORD *)(v24 - 4);
LABEL_111:
    if ( (_DWORD)v6 == 1 )
    {
LABEL_117:
      v51 = -1;
      goto LABEL_66;
    }
LABEL_112:
    v48 = *(unsigned int **)(a1 + 1584);
    if ( v48 )
      v49 = 4LL * *(v48 - 1);
    else
      v49 = 0;
    memset(v48, 0, v49);
    v50 = *(_QWORD *)(a1 + 1576);
    if ( v50 )
      *(_DWORD *)(v50 - 4) = 0;
    v57 = -1;
    sub_893B90((unsigned int **)(a1 + 1576), &v57);
    goto LABEL_117;
  }
  v25 = *(_QWORD *)(a1 + 1584);
  v26 = (int *)(v25 + 4LL * v51);
  v27 = *v26;
  if ( v24 )
  {
    v28 = *(_DWORD *)(v24 - 4);
    v29 = v28 - 1;
  }
  else
  {
    v29 = -1;
    v28 = 0;
  }
  if ( v27 == v29 )
  {
    *v26 = 0;
    --*(_DWORD *)(v24 - 4);
  }
  else
  {
    v30 = (unsigned int)v27;
    v31 = *(unsigned int *)(v24 + 4LL * (unsigned int)(v28 - 1));
    v32 = (unsigned int *)(v24 + 4LL * (unsigned int)v27);
    *v32 = v31;
    v33 = v31;
    *(_DWORD *)(v25 + 4 * v31) = v27;
    *v26 = 0;
    v34 = v27 >> 1;
    v35 = *(_DWORD *)(v24 - 4) - 1;
    *(_DWORD *)(v24 - 4) = v35;
    v36 = *v32;
    if ( v27 >> 1 && (v37 = *(unsigned int *)(v24 + 4LL * (unsigned int)v34), v33 < (unsigned int)v37) )
    {
      while ( 1 )
      {
        v46 = 4 * v30;
        if ( (unsigned int)v36 >= (unsigned int)v37 )
          break;
        *(_DWORD *)(v24 + v46) = v37;
        v47 = v34 >> 1;
        *(_DWORD *)(v25 + 4 * v37) = v27;
        if ( !(v34 >> 1) )
        {
          v46 = 4;
          v27 = 1;
          break;
        }
        v30 = (unsigned int)v34;
        v34 >>= 1;
        v37 = *(unsigned int *)(v24 + 4LL * v47);
        v27 = v30;
      }
      *(_DWORD *)(v24 + v46) = v36;
      *(_DWORD *)(v25 + 4 * v36) = v27;
    }
    else
    {
      v38 = 2 * v27;
      if ( 2 * v27 < v35 )
      {
        while ( 1 )
        {
          v43 = v38 + 1;
          v41 = (unsigned int *)(v24 + 4LL * v38);
          v42 = *v41;
          v40 = *v41;
          if ( v35 <= (int)(v38 + 1) || (v39 = *(_DWORD *)(v24 + 4LL * v43), v39 >= v42) )
          {
            v43 = v38;
            v32 = (unsigned int *)(v24 + 4 * v30);
            if ( (unsigned int)v40 >= (unsigned int)v36 )
              goto LABEL_65;
          }
          else
          {
            v40 = v39;
            v41 = (unsigned int *)(v24 + 4LL * v43);
            v32 = (unsigned int *)(v24 + 4 * v30);
            v42 = *v41;
            if ( v39 >= (unsigned int)v36 )
              goto LABEL_65;
          }
          v38 = 2 * v43;
          *v32 = v42;
          *(_DWORD *)(v25 + 4 * v40) = v27;
          if ( v35 <= (int)(2 * v43) )
            break;
          v30 = v43;
          v27 = v43;
        }
        v32 = v41;
        v27 = v43;
      }
LABEL_65:
      *v32 = v36;
      *(_DWORD *)(v25 + 4 * v36) = v27;
    }
  }
LABEL_66:
  sub_8AD4E0(v63, (__int64)v64);
  sub_8AD4E0(v58, (__int64)v59);
  return v51;
}

