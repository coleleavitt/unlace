__int64 __fastcall sub_1830010(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bp
  __int64 v15; // rax
  __int64 v16; // r12
  char v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  void *v21; // rdx
  __int64 v22; // r12
  unsigned __int8 v24; // al
  bool v25; // cl
  bool v26; // dl
  unsigned int v27; // eax
  int v28; // ebp
  char v29; // al
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+8h] [rbp-120h]
  unsigned __int8 v48; // [rsp+8h] [rbp-120h]
  unsigned int v49; // [rsp+18h] [rbp-110h]
  bool v50; // [rsp+27h] [rbp-101h]
  int v51; // [rsp+28h] [rbp-100h]
  unsigned int v52; // [rsp+2Ch] [rbp-FCh] BYREF
  __int64 v53; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-F0h] BYREF
  void *v55[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-D8h]
  void *v57; // [rsp+60h] [rbp-C8h] BYREF
  int v58; // [rsp+68h] [rbp-C0h]
  char v59; // [rsp+6Ch] [rbp-BCh]
  __int64 v60; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v61[11]; // [rsp+80h] [rbp-A8h] BYREF
  char v62; // [rsp+D8h] [rbp-50h]
  unsigned int v63; // [rsp+E0h] [rbp-48h]
  char v64; // [rsp+E4h] [rbp-44h]

  v52 = a4;
  v11 = sub_B8DC30(a2, 1);
  if ( v11 )
  {
    v14 = *(_BYTE *)(v11 + 16);
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    {
      v49 = 0;
      v50 = 0;
      LOBYTE(v47) = 0;
      if ( v14 != 26 )
        goto LABEL_4;
    }
    else
    {
      LOBYTE(v47) = 0;
      v50 = !sub_B979F0((_QWORD *)a2);
      v49 = v50;
      if ( v14 != 26 )
        goto LABEL_4;
    }
  }
  else
  {
    v24 = *(_BYTE *)(a2 + 28) & 0x7F;
    v25 = v24 == 18;
    v26 = v24 == 8;
    v27 = v24 - 35;
    LOBYTE(v47) = v26 || v25;
    if ( !v26 && !v25 )
    {
      if ( v27 > 3 )
      {
        v50 = 0;
        v49 = 0;
      }
      else
      {
        v50 = !sub_B979F0((_QWORD *)a2);
        v49 = v50;
      }
      goto LABEL_4;
    }
    if ( v27 > 3 )
    {
      v49 = 0;
      v50 = 0;
    }
    else
    {
      v50 = !sub_B979F0((_QWORD *)a2);
      v49 = v50;
    }
  }
  v18 = sub_B8DC30(a2, 1);
  if ( v18 )
  {
    LOBYTE(v47) = (unsigned __int8)BYTE3(*(_QWORD *)(v18 + 16)) >> 7;
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    LOBYTE(v47) = (*(_BYTE *)(a2 + 49) & 0x20) != 0;
  }
  else
  {
    v47 = (*(_QWORD *)(a2 + 56) >> 18) & 1LL;
  }
  v19 = sub_B8DC30(a2, 1);
  if ( v19 )
  {
    v49 += *(unsigned __int16 *)(v19 + 22);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
      v31 = *(_DWORD *)(a2 + 80);
    else
      v31 = *(_DWORD *)(a2 + 104);
    v49 += v31;
  }
LABEL_4:
  v56 = 0;
  *(_OWORD *)v55 = 0;
  if ( (*a5 & 0x10000) != 0 )
  {
LABEL_5:
    sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0xC53u, 0);
    if ( v62 )
    {
      sub_AE9DF0(v61, a3, 0x10u);
    }
    else if ( v64 )
    {
      v44 = sub_168B9E0(&v57);
      v45 = v60;
      if ( v60 )
        v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
      v54 = v45;
      v46 = sub_1587BC0(v44, &v54, v40, v41, v42, v43);
      sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v63 + 8), a3, 0x10u);
    }
    v15 = sub_1588370((__int64)&v57, &v52);
    LODWORD(v53) = 1;
    v16 = sub_180A710(v15, (int *)&v53);
    v54 = sub_EEC8C0((unsigned __int64)a5, (__int64)&v53, 0.0);
    sub_1587DB0(v16, &v54);
    sub_15F7200(&v57);
    v17 = 0;
    goto LABEL_20;
  }
  sub_C3EB00((__int64)&v57, (unsigned __int64)a5, *(_QWORD *)(a1 + 248), nullptr, v12, v13);
  if ( !(_BYTE)v60 )
  {
    sub_98E4B0((__int64)&v57);
    goto LABEL_5;
  }
  v20 = v58;
  LOBYTE(v56) = 1;
  v58 = 0;
  LODWORD(v55[1]) = v20;
  v55[0] = v57;
  BYTE4(v55[1]) = v59;
  sub_98E4B0((__int64)&v57);
  if ( LODWORD(v55[1]) > 0x40 )
  {
    v51 = (int)v55[1];
    if ( v51 - (unsigned int)sub_2206780(v55) <= 0x40 )
    {
      v21 = *(void **)v55[0];
      if ( *(_QWORD *)v55[0] <= 0xFFFFFFFF )
      {
LABEL_16:
        if ( v21 && (((unsigned int)v21 > v49) & ((unsigned __int8)(a8 & v47) ^ 1)) == 0 )
        {
          if ( ((a7 ^ 1) & v50) != 0 && (_DWORD)v21 == 1 )
          {
            sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0xC73u, 0);
            v53 = a3;
            v39 = sub_1810CD0((__int64)&v57, &v53);
            v54 = sub_EEC8C0((unsigned __int64)a5, (__int64)&v53, 0.0);
            sub_1587DB0(v39, &v54);
            sub_15F7200(&v57);
            v17 = 0;
            goto LABEL_20;
          }
          v28 = (unsigned int)v21 & 0x3FFFFFFF;
          goto LABEL_33;
        }
        goto LABEL_17;
      }
    }
  }
  else
  {
    v21 = v55[0];
    if ( v55[0] <= (void *)0xFFFFFFFFLL )
      goto LABEL_16;
  }
  if ( (a8 & (unsigned __int8)v47) != 0 || v49 == -1 )
  {
    v28 = 0x3FFFFFFF;
LABEL_33:
    v29 = 0;
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
      v29 = sub_B72F20(a2);
    v17 = 1;
    v30 = v28 | *(_DWORD *)a6 & 0xC0000000;
    *(_DWORD *)a6 = v30;
    *(_BYTE *)(a6 + 3) = ((v29 & 1) << 6) | HIBYTE(v30) & 0xBF | 0x80;
    goto LABEL_20;
  }
LABEL_17:
  sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0xC54u, 0);
  if ( v62 )
  {
    sub_AE9DF0(v61, a3, 0x10u);
  }
  else if ( v64 )
  {
    v36 = sub_168B9E0(&v57);
    v37 = v60;
    if ( v60 )
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
    v54 = v37;
    v38 = sub_1587BC0(v36, &v54, v32, v33, v34, v35);
    sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v63 + 8), a3, 0x10u);
  }
  v22 = sub_1588370((__int64)&v57, &v52);
  v54 = sub_EEC8C0((unsigned __int64)a5, (__int64)&v52, 0.0);
  sub_1587DB0(v22, &v54);
  sub_15F7200(&v57);
  v17 = 0;
LABEL_20:
  v48 = v17;
  sub_98E4B0((__int64)v55);
  return v48;
}
