__int64 __fastcall sub_21FE520(__int64 *a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  bool v10; // cc
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // ebp
  __int64 v16; // r10
  unsigned int v17; // r14d
  __int64 *v18; // r13
  __int64 *v19; // r15
  unsigned int v20; // r12d
  __int64 *v21; // r11
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 *v24; // rdx
  int v25; // r12d
  char v26; // r13
  char v27; // r13
  int v28; // r13d
  bool v29; // zf
  unsigned int v30; // r13d
  bool v31; // al
  int v32; // r12d
  _BOOL4 v33; // esi
  _BOOL4 v34; // edx
  int v35; // r12d
  unsigned __int64 v36; // rsi
  unsigned __int64 *v37; // rdx
  unsigned int v38; // r9d
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 *v44; // rdx
  unsigned int v45; // esi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned int v49; // esi
  int v50; // esi
  _QWORD *v51; // rdi
  int v52; // eax
  unsigned int v53; // ebx
  int v55; // eax
  int v56; // edx
  unsigned __int64 *v57; // rax
  unsigned __int64 *v58; // rax
  __int64 *v59; // [rsp+8h] [rbp-4C00h]
  __int64 *v60; // [rsp+10h] [rbp-4BF8h]
  __int64 v61; // [rsp+10h] [rbp-4BF8h]
  int v62; // [rsp+18h] [rbp-4BF0h]
  __int64 v63; // [rsp+28h] [rbp-4BE0h]
  int v64; // [rsp+30h] [rbp-4BD8h]
  unsigned int v65; // [rsp+34h] [rbp-4BD4h]
  bool v67; // [rsp+43h] [rbp-4BC5h]
  __int64 v71; // [rsp+60h] [rbp-4BA8h] BYREF
  unsigned __int64 *v72; // [rsp+68h] [rbp-4BA0h] BYREF
  int v73; // [rsp+70h] [rbp-4B98h]
  unsigned __int64 v74; // [rsp+80h] [rbp-4B88h] BYREF
  __int64 v75; // [rsp+88h] [rbp-4B80h]
  __int64 v76; // [rsp+90h] [rbp-4B78h]
  __int16 v77; // [rsp+98h] [rbp-4B70h]
  char v78; // [rsp+9Ah] [rbp-4B6Eh]
  _QWORD v79[600]; // [rsp+A0h] [rbp-4B68h] BYREF
  __int64 v80[600]; // [rsp+1360h] [rbp-38A8h] BYREF
  __int64 v81[1213]; // [rsp+2620h] [rbp-25E8h] BYREF

  v5 = (__int64)a1;
  v74 = 0xFFFF800100007FFFLL;
  v7 = *a1;
  v75 = 0;
  v76 = 0;
  v67 = a5 == 4 || a5 == 1;
  v8 = *(_DWORD *)(v7 + 8) + 74;
  v77 = 257;
  v9 = v8 >> 6;
  v10 = v8 <= 0x7F;
  v11 = 1;
  v78 = 1;
  v81[0] = 390625;
  if ( !v10 )
    v11 = v9;
  v64 = v11;
  v12 = abs32(a4);
  v13 = v12 & 7;
  v14 = v12 >> 3;
  v79[0] = qword_26F7AC0[v13];
  if ( !v14 )
  {
    v65 = 1;
    goto LABEL_34;
  }
  v15 = 0;
  v16 = 1;
  v17 = 1;
  v18 = v80;
  v19 = v81;
  v59 = v79;
  v20 = 1;
  while ( 1 )
  {
    if ( (v14 & 1) == 0 )
      goto LABEL_7;
    v61 = v16;
    sub_2209FD0(v18, v59, v19, v20, v17);
    v23 = v20 + v17;
    v16 = v61;
    v20 = v20 + v17 - 1;
    if ( v18[v20] )
      break;
    v44 = v59;
    v59 = v18;
    v18 = v44;
LABEL_7:
    ++v15;
    v14 >>= 1;
    v21 = &v19[v16];
    if ( !v14 )
      goto LABEL_13;
LABEL_8:
    if ( v15 )
    {
      v60 = v21;
      sub_2209FD0(v21, v19, v19, v17, v17);
      v22 = 2 * v17;
      v21 = v60;
      v17 = 2 * v17 - 1;
      v16 = v17;
      if ( v60[v17] )
      {
        v16 = v22;
        v17 = v22;
      }
    }
    v19 = v21;
  }
  v20 = v23;
  v24 = v59;
  ++v15;
  v14 >>= 1;
  v59 = v18;
  v21 = &v19[v61];
  v18 = v24;
  if ( v14 )
    goto LABEL_8;
LABEL_13:
  v5 = (__int64)a1;
  v65 = v20;
  if ( v59 != v79 )
    sub_2209710(v79, v59);
  v7 = *a1;
LABEL_34:
  while ( 2 )
  {
    LODWORD(v75) = (v64 << 6) - 1;
    v43 = v75 - *(_DWORD *)(v7 + 8);
    sub_21F9140(&v71, (__int64)&v74);
    if ( (_BYTE)v77 )
      sub_21FB9A0(&v71, 0);
    else
      sub_21FAB90(&v71, 0);
    sub_21FB9A0(&v71, (*(_BYTE *)(v5 + 20) & 8) != 0);
    sub_21F9140(v80, (__int64)&v74);
    if ( (_BYTE)v77 )
      sub_21FB9A0(v80, 0);
    else
      sub_21FAB90(v80, 0);
    v62 = sub_21FB340((__int64)&v71, a2, a3);
    v25 = sub_21FB340((__int64)v80, (__int64)v79, v65);
    v73 += a4;
    if ( a4 < 0 )
    {
      v30 = v43;
      v55 = sub_21F9970((__int64)&v71, (__int64)v80);
      v56 = *(_DWORD *)(*(_QWORD *)v5 + 4LL);
      if ( v73 < v56 )
      {
        v43 += v56 - v73;
        v30 = v43;
        if ( (unsigned int)v75 <= v43 )
          v43 = v75;
      }
      v34 = v62 != 0;
      v32 = v55 | v25;
      if ( !v32 )
      {
        v33 = 0;
        v31 = 0;
        goto LABEL_23;
      }
      v35 = v34 + 2;
      v31 = v55 != 0;
    }
    else
    {
      v26 = *(_BYTE *)(v71 + 24);
      v63 = v71;
      sub_21F9140(v81, v71);
      v27 = v26 ^ 1;
      if ( *(_BYTE *)(v63 + 24) )
        sub_21FB9A0(v81, 0);
      else
        sub_21FAB90(v81, 0);
      v28 = sub_21FE060((__int64)&v71, (__int64)v80, (__int64)v81, v27);
      sub_21F9170(v81);
      v29 = v28 == 0;
      v30 = v43;
      v31 = !v29;
      v32 = v25 != 0;
      v33 = !v29;
      v34 = v62 != 0;
LABEL_23:
      v35 = v34 + v32;
      if ( !v35 )
      {
        v36 = (unsigned int)(2 * v33);
        goto LABEL_25;
      }
    }
    v36 = (unsigned int)v31 + 2 * v35;
LABEL_25:
    v37 = (unsigned __int64 *)&v72;
    if ( (unsigned int)(*(_DWORD *)(v71 + 8) + 64) > 0x7F )
      v37 = v72;
    v38 = (v43 - 1) >> 6;
    v39 = v37[v38] & (0xFFFFFFFFFFFFFFFFLL >> (63 - ((v43 - 1) & 0x3F)));
    v40 = 1LL << ((v43 - 1) & 0x3F);
    if ( !v67 )
      v40 = 0;
    if ( v43 - 1 <= 0x3F )
    {
      v41 = v39 - v40;
      v42 = v40 - v39;
      if ( v41 <= v42 )
        v42 = v41;
LABEL_32:
      if ( v36 <= 2 * v42 )
        goto LABEL_39;
      sub_21F9170(v80);
      sub_21F9170(&v71);
      v7 = *(_QWORD *)v5;
      v64 *= 2;
      continue;
    }
    break;
  }
  if ( v39 == v40 )
  {
    v57 = &v37[v38 - 1];
    while ( v37 != v57 )
    {
      --v57;
      if ( v57[1] )
        goto LABEL_39;
    }
    v42 = *v37;
    goto LABEL_32;
  }
  if ( v39 == v40 - 1 )
  {
    v58 = &v37[v38 - 1];
    while ( v37 != v58 )
    {
      --v58;
      if ( v58[1] != -1 )
        goto LABEL_39;
    }
    v42 = -(__int64)*v37;
    goto LABEL_32;
  }
LABEL_39:
  v45 = *(_DWORD *)(*(_QWORD *)v5 + 8LL) + 64;
  if ( v45 > 0x7F )
  {
    v47 = v45 >> 6;
    v46 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    v46 = v5 + 8;
    v47 = 1;
  }
  sub_220AA50(v46, v47, v37, (unsigned int)v75 - v43, v43);
  v48 = v71;
  *(_DWORD *)(v5 + 16) = *(_DWORD *)(*(_QWORD *)v5 + 8LL) + v73 - v75 + v43;
  v49 = *(_DWORD *)(v48 + 8) + 64;
  if ( v49 > 0x7F )
  {
    v50 = v49 >> 6;
    v51 = v72;
  }
  else
  {
    v50 = 1;
    v51 = &v72;
  }
  v52 = sub_21F8B90((__int64)v51, v50, v30);
  v53 = sub_21FAF10(v5, a5, v52);
  sub_21F9170(v80);
  sub_21F9170(&v71);
  return v53;
}
