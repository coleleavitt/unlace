void __fastcall sub_1A9B550(__int64 *a1, char *a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  bool v17; // zf
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  char *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 *v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned __int64 *v45; // rax
  unsigned __int64 *v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // [rsp+0h] [rbp-ECh]
  char *v69; // [rsp+4h] [rbp-E8h]
  __int64 v70; // [rsp+4h] [rbp-E8h]
  __int64 v71; // [rsp+4h] [rbp-E8h]
  __int64 v72; // [rsp+Ch] [rbp-E0h]
  __int64 v73; // [rsp+1Ch] [rbp-D0h] BYREF
  _QWORD v74[2]; // [rsp+24h] [rbp-C8h] BYREF
  _QWORD *v75; // [rsp+34h] [rbp-B8h]
  unsigned __int8 *v76[11]; // [rsp+44h] [rbp-A8h] BYREF
  char v77; // [rsp+9Ch] [rbp-50h]
  unsigned int v78; // [rsp+A4h] [rbp-48h]
  char v79; // [rsp+A8h] [rbp-44h]

  if ( !a2 || a2[28] < 0 )
    return;
  v7 = (__int64)a2;
  v8 = (unsigned int *)a4;
  v9 = *(_DWORD *)a4;
  v68 = a5;
  v10 = *(_DWORD *)a4 & 9;
  if ( (*(_DWORD *)a4 & 9) != 9 )
  {
    v11 = *((_QWORD *)a2 + 7);
    if ( (v9 & 0x630) == 0 )
      goto LABEL_5;
    goto LABEL_49;
  }
  a2 = (char *)a1;
  sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
  if ( v77 )
  {
    a2 = "readonly";
    sub_AE9DF0(v76, (__int64)"readonly", 1u);
  }
  else
  {
    if ( !v79 )
      goto LABEL_69;
    a2 = "readonly";
    sub_1A939B0((__int64)v74, (__int64)"readonly");
  }
  if ( v77 )
  {
    a2 = "readwrite";
    sub_AE9DF0(v76, (__int64)"readwrite", 1u);
  }
  else if ( v79 )
  {
    a2 = "readwrite";
    sub_1A939B0((__int64)v74, (__int64)"readwrite");
  }
LABEL_69:
  sub_15F7200(v74);
  v9 = *v8;
  v11 = *(_QWORD *)(v7 + 56);
  if ( (*v8 & 0x630) == 0 )
  {
LABEL_5:
    v12 = v9 & 0x804;
    if ( (_DWORD)v12 != 4 )
      goto LABEL_6;
    goto LABEL_71;
  }
LABEL_49:
  if ( (unsigned __int8)sub_F6AE00(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v10, a4, a5) )
    goto LABEL_55;
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_51;
  v45 = sub_B8C3D0(v7, (__int64)a2, v25, a4, a5, v26);
  v46 = (unsigned __int64 *)*v45;
  a4 = *v45 + 8LL * *((unsigned int *)v45 + 2);
  if ( *v45 >= a4 )
  {
    if ( v46 == (unsigned __int64 *)a4 )
    {
LABEL_51:
      sub_168B9F0((__int64)v74, a1, a3, 0x111Bu, 0);
      v27 = "weak";
      if ( (*v8 & 0x200) == 0 )
      {
        v27 = "copy";
        if ( (*v8 & 0x20) == 0 )
          v27 = "retain (or strong)";
      }
      if ( v77 )
      {
        sub_AE9DF0(v76, (__int64)v27, 1u);
      }
      else if ( v79 )
      {
        v69 = v27;
        v38 = sub_168B9E0(v74);
        v41 = (__int64)v69;
        v42 = v38;
        v43 = (__int64)v75;
        if ( v75 )
        {
          v72 = v42;
          v43 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, char *))(*v75 + 32LL))(v75, *v75, v42, v69);
          v42 = v72;
          v41 = (__int64)v69;
        }
        v70 = v41;
        v73 = v43;
        v44 = sub_1587BC0(v42, &v73, v42, v41, v39, v40);
        sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v78 + 8), v70, 1u);
      }
      sub_15F7200(v74);
      *v8 &= 0xFFFFF9CF;
      a2 = (_BYTE *)(&dword_0 + 1);
      sub_B88650(v7, 1);
      goto LABEL_55;
    }
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 311 )
    {
      v55 = (unsigned __int64 *)(a4 + 8);
      while ( v46 != v55 )
      {
        a4 = *v55++;
        if ( *(_WORD *)(a4 + 36) == 311 )
        {
          v9 = *v8;
          goto LABEL_56;
        }
      }
      goto LABEL_51;
    }
LABEL_55:
    v9 = *v8;
    goto LABEL_56;
  }
  v47 = *v45;
  while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 311 )
  {
    v47 += 8LL;
    if ( a4 == v47 )
      goto LABEL_51;
  }
  if ( a4 == v47 )
    goto LABEL_51;
  v9 = *v8;
LABEL_56:
  v12 = v9 & 0x804;
  if ( (_DWORD)v12 != 4 )
  {
LABEL_6:
    v13 = v9 & 0x20;
    if ( (v9 & 4) != 0 )
      goto LABEL_7;
    goto LABEL_22;
  }
LABEL_71:
  if ( !(unsigned __int8)sub_F6AE00(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v12, a4, a5)
    || sub_F68080(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v9 = *v8;
  }
  else
  {
    a2 = (char *)a1;
    sub_168B9F0((__int64)v74, a1, a3, 0x1C1Au, 0);
    sub_15F7200(v74);
    v9 = *v8;
  }
  v13 = v9 & 0x20;
  if ( (v9 & 4) != 0 )
  {
LABEL_7:
    if ( v13 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      v36 = sub_162BBD0((__int64)v74, (__int64)"assign");
      a2 = "copy";
      sub_1A9AE40(v36, (__int64)"copy");
      sub_15F7200(v74);
      v9 = *v8 & 0xFFFFFFDF;
      *v8 = v9;
    }
    if ( (v9 & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      v35 = sub_162BBD0((__int64)v74, (__int64)"assign");
      a2 = "retain";
      sub_162BBD0(v35, (__int64)"retain");
      sub_15F7200(v74);
      v9 = *v8 & 0xFFFFFFEF;
      *v8 = v9;
    }
    if ( (v9 & 0x400) != 0 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      v34 = sub_162BBD0((__int64)v74, (__int64)"assign");
      a2 = "strong";
      sub_162BBD0(v34, (__int64)"strong");
      sub_15F7200(v74);
      *v8 &= ~0x400u;
    }
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
    {
      v9 = *v8;
      if ( (*v8 & 0x200) == 0 )
      {
        if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
          goto LABEL_16;
LABEL_75:
        v29 = sub_B8C3D0(v7, (__int64)a2, v14, a4, a5, v15);
        v30 = (__int64 *)*v29;
        a4 = *v29 + 8LL * *((unsigned int *)v29 + 2);
        if ( *v29 < a4 )
        {
          v37 = *v29;
          while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 235 )
          {
            v37 += 8LL;
            if ( a4 == v37 )
              goto LABEL_33;
          }
          if ( a4 == v37 )
            goto LABEL_33;
LABEL_123:
          a2 = (char *)a1;
          sub_168B9F0((__int64)v74, a1, a3, 0x1B42u, 0);
          sub_15F7200(v74);
          goto LABEL_33;
        }
        if ( v30 != (__int64 *)a4 )
        {
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 235 )
          {
            v31 = (__int64 *)(a4 + 8);
            while ( 1 )
            {
              a4 = (unsigned __int64)v31;
              if ( v30 == v31 )
                goto LABEL_33;
              v32 = *v31++;
              if ( *(_WORD *)(v32 + 36) == 235 )
                goto LABEL_123;
            }
          }
          goto LABEL_123;
        }
LABEL_33:
        v9 = *v8;
LABEL_34:
        v20 = v9 & 0x200;
        goto LABEL_35;
      }
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      v19 = sub_162BBD0((__int64)v74, (__int64)"assign");
      a2 = "weak";
      sub_1A9AE40(v19, (__int64)"weak");
      sub_15F7200(v74);
      *v8 &= ~0x200u;
    }
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      goto LABEL_33;
    goto LABEL_75;
  }
LABEL_22:
  if ( (v9 & 0x800) != 0 )
  {
    if ( v13 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      if ( v77 )
      {
        sub_AE9DF0(v76, (__int64)"unsafe_unretained", 1u);
      }
      else if ( v79 )
      {
        sub_1A939B0((__int64)v74, (__int64)"unsafe_unretained");
      }
      a2 = "copy";
      sub_1A9AE40((__int64)v74, (__int64)"copy");
      sub_15F7200(v74);
      v9 = *v8 & 0xFFFFFFDF;
      *v8 = v9;
    }
    if ( (v9 & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      if ( v77 )
      {
        sub_AE9DF0(v76, (__int64)"unsafe_unretained", 1u);
      }
      else if ( v79 )
      {
        sub_1A939B0((__int64)v74, (__int64)"unsafe_unretained");
      }
      a2 = "retain";
      sub_162BBD0((__int64)v74, (__int64)"retain");
      sub_15F7200(v74);
      v9 = *v8 & 0xFFFFFFEF;
      *v8 = v9;
    }
    if ( (v9 & 0x400) != 0 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      if ( v77 )
      {
        sub_AE9DF0(v76, (__int64)"unsafe_unretained", 1u);
      }
      else if ( v79 )
      {
        sub_1A939B0((__int64)v74, (__int64)"unsafe_unretained");
      }
      a2 = "strong";
      sub_162BBD0((__int64)v74, (__int64)"strong");
      sub_15F7200(v74);
      *v8 &= ~0x400u;
    }
    v17 = (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0;
    v9 = *v8;
    if ( v17 )
      goto LABEL_34;
    if ( (v9 & 0x200) == 0 )
      goto LABEL_16;
    sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
    if ( v77 )
    {
      sub_AE9DF0(v76, (__int64)"unsafe_unretained", 1u);
    }
    else if ( v79 )
    {
      v57 = sub_168B9E0(v74);
      v61 = (__int64)v75;
      if ( v75 )
      {
        v71 = v57;
        v61 = (*(__int64 (__fastcall **)(_QWORD *))(*v75 + 32LL))(v75);
        v57 = v71;
      }
      v73 = v61;
      v62 = sub_1587BC0(v57, &v73, v57, v58, v59, v60);
      sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v78 + 8), (__int64)"unsafe_unretained", 1u);
    }
    a2 = "weak";
    v18 = v74;
    goto LABEL_66;
  }
  if ( v13 )
  {
    if ( (v9 & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      v49 = sub_1A9AE40((__int64)v74, (__int64)"copy");
      a2 = "retain";
      sub_162BBD0(v49, (__int64)"retain");
      sub_15F7200(v74);
      v9 = *v8 & 0xFFFFFFEF;
      *v8 = v9;
    }
    if ( (v9 & 0x400) != 0 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
      v48 = sub_1A9AE40((__int64)v74, (__int64)"copy");
      a2 = "strong";
      sub_162BBD0(v48, (__int64)"strong");
      sub_15F7200(v74);
      v9 = *v8;
      BYTE1(v9) = BYTE1(*v8) & 0xFB;
      *v8 = v9;
    }
    if ( (v9 & 0x200) == 0 )
    {
LABEL_16:
      v16 = v9 & 0x140;
      if ( (_DWORD)v16 != 320 )
        goto LABEL_17;
      goto LABEL_40;
    }
    sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
    v28 = sub_1A9AE40((__int64)v74, (__int64)"copy");
    goto LABEL_65;
  }
  if ( (v9 & 0x210) != 0x210 )
  {
    if ( (v9 & 0x600) != 0x600 )
      goto LABEL_34;
    sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
    v28 = sub_162BBD0((__int64)v74, (__int64)"strong");
LABEL_65:
    a2 = "weak";
    v18 = (_QWORD *)v28;
LABEL_66:
    sub_1A9AE40((__int64)v18, (__int64)"weak");
    sub_15F7200(v74);
    v9 = *v8;
    BYTE1(v9) = BYTE1(*v8) & 0xFD;
    *v8 = v9;
    goto LABEL_16;
  }
  sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
  v56 = sub_162BBD0((__int64)v74, (__int64)"retain");
  a2 = "weak";
  sub_1A9AE40(v56, (__int64)"weak");
  sub_15F7200(v74);
  v20 = *v8 & 0x200;
  v9 = *v8 & 0xFFFFFFEF;
  *v8 = v9;
LABEL_35:
  if ( !(_DWORD)v20 )
    goto LABEL_16;
  LOWORD(v21) = sub_F6A600(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v20, a4, a5);
  a4 = v21;
  LOWORD(a4) = BYTE1(v21);
  if ( BYTE1(v21) && !(_BYTE)v21 )
  {
    sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
    if ( v77 )
    {
      sub_AE9DF0(v76, (__int64)"nonnull", 1u);
    }
    else if ( v79 )
    {
      sub_1A939B0((__int64)v74, (__int64)"nonnull");
    }
    a2 = "weak";
    sub_1A9AE40((__int64)v74, (__int64)"weak");
    sub_15F7200(v74);
    v9 = *v8;
  }
  else
  {
    v9 = *v8;
  }
  v16 = v9 & 0x140;
  if ( (_DWORD)v16 != 320 )
  {
LABEL_17:
    if ( (v9 & 0xE34) != 0 )
      goto LABEL_18;
    goto LABEL_44;
  }
LABEL_40:
  sub_168B9F0((__int64)v74, a1, a3, 0x111Au, 0);
  a2 = "atomic";
  v22 = sub_162BBD0((__int64)v74, (__int64)"atomic");
  if ( *(_BYTE *)(v22 + 120) )
  {
    a2 = "nonatomic";
    sub_AE9DF0((unsigned __int8 **)(v22 + 32), (__int64)"nonatomic", 1u);
  }
  else if ( *(_BYTE *)(v22 + 132) )
  {
    a2 = "nonatomic";
    sub_1A939B0(v22, (__int64)"nonatomic");
  }
  sub_15F7200(v74);
  v9 = *v8;
  BYTE1(v9) = BYTE1(*v8) & 0xFE;
  *v8 = v9;
  if ( (v9 & 0xE34) == 0 )
  {
LABEL_44:
    v23 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = (unsigned __int8)sub_F6AE00(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v16, a4, a5) == 0;
    v9 = *v8;
    if ( !v17 && (v9 & 1) == 0 )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
      {
        *(_WORD *)(v7 + 72) |= 0x400u;
        v9 = *v8;
      }
      else
      {
        v50 = *v23;
        v51 = *(_QWORD *)(*(_QWORD *)(*v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v51 + 16) != 34 )
          goto LABEL_139;
        if ( *(_BYTE *)(v50 + 16) == 34 || (v50 = sub_1A93160(v50, (__int64)a2, v51, v24)) != 0 )
        {
          v52 = *(_QWORD *)(*(_QWORD *)(v50 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v53 = (unsigned int)*(unsigned __int8 *)(v52 + 16) - 35;
          if ( (unsigned int)v53 > 1 )
            v52 = sub_F63050(v52, a2, v53, v24);
          if ( !(*(_BYTE *)(v52 + 19) >> 2) )
          {
            v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v54 + 16) == 13 && ((*(_WORD *)(v54 + 18) >> 3) & 0x1FF) == 0x1EA )
              goto LABEL_180;
          }
        }
        v63 = *v23;
        if ( *(_BYTE *)(*v23 + 16) == 34
          || (v67 = *(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v67 + 16) == 34)
          && (v63 = sub_F63050(*v23, a2, v67, v24)) != 0 )
        {
          v64 = *(_QWORD *)(*(_QWORD *)(v63 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v65 = (unsigned int)*(unsigned __int8 *)(v64 + 16) - 35;
          if ( (unsigned int)v65 > 1 )
            v64 = sub_F63050(v64, a2, v65, v24);
          if ( *(_BYTE *)(v64 + 19) >> 2 )
          {
            v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v66 + 16) == 13 && ((*(_WORD *)(v66 + 18) >> 3) & 0x1FF) == 0x1EA )
            {
LABEL_180:
              if ( !(*(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6) )
                goto LABEL_139;
            }
          }
        }
        if ( !v68 )
          goto LABEL_139;
        if ( *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6 != 1 )
        {
          sub_168B9F0((__int64)v74, a1, a3, 0x1C1Du, 0);
          sub_15F7200(v74);
        }
        if ( *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6 )
        {
LABEL_139:
          v9 = *v8;
        }
        else
        {
          sub_168B9F0((__int64)v74, a1, a3, 0x1C1Cu, 0);
          sub_15F7200(v74);
          v9 = *v8;
        }
      }
    }
  }
LABEL_18:
  if ( (v9 & 0x21) != 0 )
  {
    if ( (v9 & 0x411) != 0x10 )
      goto LABEL_20;
LABEL_84:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
    {
      v33 = 7198;
LABEL_86:
      sub_168B9F0((__int64)v74, a1, a3, v33, 0);
      sub_15F7200(v74);
      goto LABEL_87;
    }
LABEL_20:
    if ( (v9 & 0x81) != 0x81 )
      return;
LABEL_88:
    sub_168B9F0((__int64)v74, a1, a3, 0x1C1Fu, 0);
    sub_15F7200(v74);
    return;
  }
  if ( *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6 != 1 )
  {
    v9 = *v8;
    if ( (*v8 & 0x411) != 0x10 )
      goto LABEL_20;
    goto LABEL_84;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
  {
    v33 = 7195;
    goto LABEL_86;
  }
LABEL_87:
  if ( (*v8 & 0x81) == 0x81 )
    goto LABEL_88;
}
