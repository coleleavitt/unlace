unsigned __int64 __fastcall sub_1AC7380(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        int a6,
        char a7,
        const void *a8,
        __int64 a9,
        int a10)
{
  __int64 *v10; // rbp
  __int64 *v11; // rbx
  __int64 v12; // r15
  __int64 *v13; // rsi
  _QWORD *v14; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // r15d
  _WORD *v19; // rsi
  unsigned int v20; // r8d
  int v21; // eax
  __int64 *v22; // rax
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned int v29; // esi
  char v30; // al
  bool v31; // cf
  bool v32; // cc
  unsigned int v33; // edx
  __int64 v34; // r8
  unsigned __int64 v35; // rdi
  __int64 v36; // rdi
  unsigned __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  void *v43; // rax
  _QWORD *v44; // rax
  char v48; // [rsp+28h] [rbp-110h]
  int v49; // [rsp+28h] [rbp-110h]
  int v50; // [rsp+28h] [rbp-110h]
  int v51; // [rsp+28h] [rbp-110h]
  int v52; // [rsp+28h] [rbp-110h]
  int v53; // [rsp+28h] [rbp-110h]
  int v54; // [rsp+28h] [rbp-110h]
  unsigned int v55; // [rsp+28h] [rbp-110h]
  int v56; // [rsp+28h] [rbp-110h]
  unsigned int v57; // [rsp+28h] [rbp-110h]
  void *v59; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-100h]
  char v61; // [rsp+3Ch] [rbp-FCh]
  void *v62; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-F0h]
  char v64; // [rsp+4Ch] [rbp-ECh]
  void *v65; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-E0h]
  char v67; // [rsp+5Ch] [rbp-DCh]
  void *v68; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v69; // [rsp+68h] [rbp-D0h]
  char v70; // [rsp+6Ch] [rbp-CCh]
  unsigned __int64 v71; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v72; // [rsp+78h] [rbp-C0h]

  if ( a4 != 7 && (unsigned __int8)(a4 - 9) > 2u )
    goto LABEL_8;
  v10 = &a2[a3];
  v11 = a2;
  if ( v10 == a2 )
    goto LABEL_8;
  v12 = *a2;
  if ( *(_BYTE *)(*a2 + 8) != 29 )
  {
    v13 = a2 + 1;
    while ( 1 )
    {
      v11 = v13;
      if ( v10 == v13 )
        break;
      v12 = *v13++;
      if ( *(_BYTE *)(v12 + 8) == 29 )
        goto LABEL_9;
    }
LABEL_8:
    v14 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EB2700(v14, a5, a6, a7, a8, a9, a10);
  }
LABEL_9:
  v16 = v12;
LABEL_10:
  while ( 1 )
  {
    v17 = *(_QWORD *)(v16 + 32);
    v18 = 0;
    if ( (_DWORD)v17 )
      break;
LABEL_27:
    if ( v10 == v11 + 1 )
      goto LABEL_8;
    v16 = v11[1];
    if ( *(_BYTE *)(v16 + 8) != 29 )
    {
      v22 = v11 + 2;
      while ( 1 )
      {
        v11 = v22;
        if ( v10 == v22 )
          goto LABEL_8;
        v16 = *v22++;
        if ( *(_BYTE *)(v16 + 8) == 29 )
          goto LABEL_10;
      }
    }
    ++v11;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v18 + v16 + 8LL * (unsigned int)v17 + 40) != 1 )
      goto LABEL_26;
    v19 = *(_WORD **)(*(_QWORD *)(v16 + 24) + 8LL * v18);
    if ( (*v19 & 0x1FF) != 0x3D )
      goto LABEL_26;
    sub_BF7A50((__int64)&v59, (__int64)v19);
    v64 = 0;
    v63 = 64;
    v62 = &dword_0 + 1;
    if ( v60 == 64 )
    {
      if ( v61 )
        v23 = sub_2205DB0(&v59, &v62);
      else
        v23 = sub_2205E20(&v59, &v62);
      if ( v23 > 0 )
      {
        v24 = v16;
        goto LABEL_37;
      }
      goto LABEL_25;
    }
    if ( v60 > 0x40 )
    {
      sub_2206B70(&v71, &v62, v60);
      v20 = v72;
      v67 = 0;
      v66 = v72;
      v65 = (void *)v71;
      if ( v60 == v72 )
      {
        if ( !v61 )
        {
          v57 = v72;
          v21 = sub_2205E20(&v59, &v65);
          v20 = v57;
          goto LABEL_74;
        }
      }
      else
      {
        if ( v60 > v72 )
        {
          sub_2206B70(&v71, &v65, v60);
          v70 = 0;
          v69 = v72;
          v68 = (void *)v71;
          v21 = sub_98E2D0((__int64 *)&v59, (__int64 *)&v68);
          if ( v69 > 0x40 )
            goto LABEL_71;
          goto LABEL_73;
        }
        if ( v60 < v72 )
        {
          if ( v61 )
          {
            sub_2206CD0(&v71, &v59, v72);
            v70 = 1;
          }
          else
          {
            sub_2206B70(&v71, &v59, v72);
            v70 = 0;
          }
          v69 = v72;
          v68 = (void *)v71;
          v21 = sub_98E2D0((__int64 *)&v68, (__int64 *)&v65);
          if ( v69 > 0x40 )
          {
LABEL_71:
            if ( v68 )
            {
              v52 = v21;
              operator delete[](v68);
              v21 = v52;
            }
          }
LABEL_73:
          v20 = v66;
          goto LABEL_74;
        }
        if ( !v61 )
        {
          v37 = (unsigned __int64)v59;
          if ( v60 > 0x40 )
            v37 = *((_QWORD *)v59 + ((v60 - 1) >> 6));
          v21 = -1;
          if ( (v37 & (1LL << ((unsigned __int8)v60 - 1))) == 0 )
          {
LABEL_89:
            v55 = v72;
            v21 = sub_2205DB0(&v59, &v65);
            v20 = v55;
          }
LABEL_74:
          if ( v20 > 0x40 )
            goto LABEL_75;
LABEL_77:
          v29 = v63;
          goto LABEL_53;
        }
      }
      v36 = 1LL << ((unsigned __int8)v72 - 1);
      if ( v72 > 0x40 )
      {
        v21 = 1;
        if ( (v36 & *(_QWORD *)(v71 + 8LL * ((v72 - 1) >> 6))) != 0 )
        {
LABEL_75:
          if ( v65 )
          {
            v53 = v21;
            operator delete[](v65);
            v21 = v53;
          }
          goto LABEL_77;
        }
      }
      else
      {
        v21 = 1;
        if ( (v36 & v71) != 0 )
          goto LABEL_77;
      }
      goto LABEL_89;
    }
    v48 = v61;
    if ( v61 )
    {
      sub_2206CD0(&v71, &v59, 64);
      v27 = v72;
      v28 = v71;
      v67 = 1;
      v29 = v63;
      v30 = v48;
      v66 = v72;
      v65 = (void *)v71;
      v31 = v63 < v72;
      v32 = v63 <= v72;
      if ( v63 != v72 )
        goto LABEL_42;
    }
    else
    {
      sub_2206B70(&v71, &v59, 64);
      v27 = v72;
      v28 = v71;
      v67 = 0;
      v29 = v63;
      v30 = 0;
      v66 = v72;
      v65 = (void *)v71;
      v31 = v63 < v72;
      v32 = v63 <= v72;
      if ( v63 != v72 )
      {
LABEL_42:
        if ( v31 )
        {
          if ( v64 )
          {
            sub_2206CD0(&v71, &v62, v27);
            v70 = 1;
          }
          else
          {
            sub_2206B70(&v71, &v62, v27);
            v70 = 0;
          }
          v69 = v72;
          v68 = (void *)v71;
          v21 = sub_98E2D0((__int64 *)&v65, (__int64 *)&v68);
          if ( v69 > 0x40 )
          {
LABEL_47:
            if ( v68 )
            {
              v49 = v21;
              operator delete[](v68);
              v21 = v49;
            }
          }
LABEL_49:
          LODWORD(v27) = v66;
          goto LABEL_50;
        }
        if ( !v32 )
        {
          if ( v30 )
          {
            sub_2206CD0(&v71, &v65, v29);
            v70 = 1;
          }
          else
          {
            sub_2206B70(&v71, &v65, v29);
            v70 = 0;
          }
          v69 = v72;
          v68 = (void *)v71;
          v21 = sub_98E2D0((__int64 *)&v68, (__int64 *)&v62);
          if ( v69 > 0x40 )
            goto LABEL_47;
          goto LABEL_49;
        }
        goto LABEL_62;
      }
    }
    if ( v30 == v64 )
    {
      if ( v30 )
        goto LABEL_84;
      v56 = v27;
      v21 = sub_2205E20(&v65, &v62);
      LODWORD(v27) = v56;
      goto LABEL_50;
    }
LABEL_62:
    if ( !v30 )
    {
      v34 = 1LL << ((unsigned __int8)v27 - 1);
      if ( (unsigned int)v27 <= 0x40 )
      {
        v21 = -1;
        if ( (v34 & v28) != 0 )
          goto LABEL_53;
      }
      else if ( (v34 & *(_QWORD *)(v28 + 8LL * ((unsigned int)(v27 - 1) >> 6))) != 0 )
      {
        v21 = -1;
        goto LABEL_51;
      }
LABEL_84:
      v54 = v27;
      v21 = sub_2205DB0(&v65, &v62);
      LODWORD(v27) = v54;
      goto LABEL_50;
    }
    if ( v64 )
      goto LABEL_84;
    v35 = (unsigned __int64)v62;
    if ( v29 > 0x40 )
      v35 = *((_QWORD *)v62 + ((v29 - 1) >> 6));
    v21 = 1;
    if ( (v35 & (1LL << ((unsigned __int8)v29 - 1))) == 0 )
      goto LABEL_84;
LABEL_50:
    if ( (unsigned int)v27 <= 0x40 )
      goto LABEL_77;
LABEL_51:
    if ( !v65 )
      goto LABEL_77;
    v50 = v21;
    operator delete[](v65);
    v29 = v63;
    v21 = v50;
LABEL_53:
    if ( v29 > 0x40 && v62 )
    {
      v51 = v21;
      operator delete[](v62);
      v33 = v60;
      v21 = v51;
    }
    else
    {
      v33 = v60;
    }
    if ( v21 > 0 )
      break;
    if ( v33 > 0x40 && v59 )
      operator delete[](v59);
LABEL_25:
    v17 = *(_QWORD *)(v16 + 32);
LABEL_26:
    if ( ++v18 >= (unsigned int)v17 )
      goto LABEL_27;
  }
  v24 = v16;
  if ( v33 > 0x40 && v59 )
    operator delete[](v59);
LABEL_37:
  sub_168B9F0((__int64)&v71, a1, a5, 0xB52u, 0);
  LODWORD(v65) = 1;
  v25 = sub_1587D10((__int64)&v71, (int *)&v65);
  v26 = v25;
  if ( *(_BYTE *)(v25 + 120) )
  {
    sub_1AA2FB0((unsigned __int8 **)(v25 + 32), a4);
  }
  else if ( *(_BYTE *)(v25 + 132) )
  {
    v42 = sub_168B9E0((_QWORD *)v25);
    v43 = *(void **)(v26 + 16);
    if ( v43 )
      v43 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v43 + 32LL))(*(_QWORD *)(v26 + 16));
    v68 = v43;
    v44 = sub_1587BC0(v42, (__int64 *)&v68, v38, v39, v40, v41);
    sub_1AA2FB0((unsigned __int8 **)(*v44 + 32LL * *(unsigned int *)(v26 + 128) + 8), a4);
  }
  sub_15F7200(&v71);
  sub_168B9F0((__int64)&v71, a1, *(_DWORD *)(v24 + 12), 0x1675u, 0);
  LOBYTE(v68) = *(_BYTE *)(v24 + 8);
  sub_1AA5620((__int64)&v71, (char *)&v68);
  sub_15F7200(&v71);
  return 0;
}
