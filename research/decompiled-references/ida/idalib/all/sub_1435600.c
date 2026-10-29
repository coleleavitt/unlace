__int64 __fastcall sub_1435600(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        bool *a5,
        char a6,
        __m128i a7,
        __m128 a8)
{
  char v11; // al
  char v12; // r13
  bool v13; // r13
  unsigned int v14; // eax
  int v15; // r15d
  int v16; // eax
  unsigned int v17; // ebx
  bool v18; // al
  char v19; // r13
  unsigned int v20; // ebx
  int v21; // r13d
  char v22; // r13
  void *v23; // rdi
  char v24; // al
  bool v25; // cc
  unsigned int v26; // eax
  bool v28; // al
  char v29; // al
  unsigned int v30; // edx
  char v31; // al
  void *v32; // rdx
  __int64 v33; // rax
  char v34; // r15
  int v35; // eax
  void *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ebx
  unsigned int v39; // eax
  int v40; // r13d
  __int64 v41; // rsi
  __int64 v42; // rsi
  unsigned __int64 v43; // rsi
  unsigned int v44; // ebx
  int v45; // r13d
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // rsi
  char v50; // [rsp+13h] [rbp-115h]
  void *v53; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v54; // [rsp+28h] [rbp-100h]
  char v55; // [rsp+2Ch] [rbp-FCh]
  void *v56; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v57; // [rsp+38h] [rbp-F0h]
  char v58; // [rsp+3Ch] [rbp-ECh]
  void *v59; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-E0h]
  char v61; // [rsp+4Ch] [rbp-DCh]
  void *v62; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-D0h]
  char v64; // [rsp+5Ch] [rbp-CCh]
  int v65; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+68h] [rbp-C0h]
  char v67[16]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v68[2]; // [rsp+80h] [rbp-A8h] BYREF
  void *v69; // [rsp+90h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+98h] [rbp-90h]
  char v71; // [rsp+9Ch] [rbp-8Ch]
  __int64 v72; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v73; // [rsp+A8h] [rbp-80h]

  v11 = *(_BYTE *)(a2 + 546);
  *(_BYTE *)(a2 + 546) = 1;
  v50 = v11;
  v12 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v12 & 0xDF;
  v13 = (v12 & 0x20) != 0;
  do
    sub_14634E0(a2, a4);
  while ( *(_WORD *)(a4 + 16) == 4 );
  v14 = sub_102DB30(*(unsigned __int8 **)(a2 + 64), *(_DWORD *)(*(_QWORD *)(a2 + 64) + 140LL));
  v68[0] = 0;
  v68[1] = 0;
  v70 = v14;
  if ( v14 > 0x40 )
    sub_2205470(&v69, 0, 0);
  else
    v69 = nullptr;
  v15 = *(_DWORD *)a4;
  v71 = 1;
  v67[0] = 0;
  if ( v15 < 0 )
    v15 = sub_10212A0(*(_QWORD *)(a2 + 88), v15);
  if ( (unsigned __int8)sub_1431530((__int64)v68, (unsigned int *)a4, (__int64)&v65, 1u, a2, a7, *(double *)a8.m128_u64) )
    goto LABEL_26;
  v16 = v65;
  *a5 = v65 != 2;
  if ( *(_WORD *)(a4 + 16) == 2 )
  {
    if ( v16 == 1 )
      *a3 = v66;
    v17 = v70;
    v54 = 64;
    v18 = v13;
    v19 = *(_BYTE *)(a2 + 544);
    v55 = 0;
    v53 = nullptr;
    *(_BYTE *)(a2 + 544) = (32 * v18) | v19 & 0xDF;
    if ( v17 == 64 )
    {
      v34 = v71;
      if ( v71 )
        v35 = sub_2205DB0(&v69, &v53);
      else
        v35 = sub_2205E20(&v69, &v53);
      v22 = v35 != 0;
LABEL_42:
      v36 = v69;
      *(_DWORD *)(a1 + 8) = v17;
      *(_BYTE *)(a1 + 12) = v34;
      *(_QWORD *)a1 = v36;
      LOBYTE(v36) = v67[0];
      *(_BYTE *)(a1 + 16) = 1;
      *(_BYTE *)(a1 + 25) = (_BYTE)v36;
      v37 = v68[0];
      *(_BYTE *)(a1 + 24) = v22;
      *(_QWORD *)(a1 + 28) = v37;
      goto LABEL_31;
    }
    if ( v17 > 0x40 )
    {
      sub_2206B70(&v72, &v53, v17);
      v20 = v73;
      v58 = 0;
      v57 = v73;
      v56 = (void *)v72;
      if ( v70 == v73 )
      {
        if ( !v71 )
        {
          v22 = (unsigned int)sub_2205E20(&v69, &v56) != 0;
          goto LABEL_22;
        }
        goto LABEL_64;
      }
      if ( v70 <= v73 )
      {
        if ( v70 < v73 )
        {
          if ( v71 )
          {
            sub_2206CD0(&v72, &v69, v73);
            v64 = 1;
          }
          else
          {
            sub_2206B70(&v72, &v69, v73);
            v64 = 0;
          }
          v63 = v73;
          v62 = (void *)v72;
          v21 = sub_98E2D0((__int64 *)&v62, (__int64 *)&v56);
          if ( v63 > 0x40 && v62 )
            operator delete[](v62);
          v20 = v57;
          v22 = v21 != 0;
          goto LABEL_22;
        }
        if ( !v71 )
        {
          v43 = (unsigned __int64)v69;
          if ( v70 > 0x40 )
            v43 = *((_QWORD *)v69 + ((v70 - 1) >> 6));
          v22 = 1;
          if ( (v43 & (1LL << ((unsigned __int8)v70 - 1))) != 0 )
          {
LABEL_22:
            if ( v20 > 0x40 )
              goto LABEL_23;
LABEL_57:
            v39 = v54;
            goto LABEL_58;
          }
LABEL_83:
          v22 = (unsigned int)sub_2205DB0(&v69, &v56) != 0;
          goto LABEL_22;
        }
LABEL_64:
        v41 = 1LL << ((unsigned __int8)v73 - 1);
        if ( v73 <= 0x40 )
        {
          v22 = 1;
          if ( (v41 & v72) != 0 )
            goto LABEL_57;
        }
        else if ( (v41 & *(_QWORD *)(v72 + 8LL * ((v73 - 1) >> 6))) != 0 )
        {
          v22 = 1;
LABEL_23:
          v23 = v56;
          if ( !v56 )
            goto LABEL_57;
          goto LABEL_56;
        }
        goto LABEL_83;
      }
      sub_2206B70(&v72, &v56, v70);
      v44 = v73;
      v61 = 0;
      v60 = v73;
      v59 = (void *)v72;
      if ( v70 == v73 )
      {
        if ( !v71 )
        {
          v22 = (unsigned int)sub_2205E20(&v69, &v59) != 0;
          goto LABEL_93;
        }
      }
      else
      {
        if ( v70 > v73 )
        {
          sub_2206B70(&v72, &v59, v70);
          v64 = 0;
          v63 = v73;
          v62 = (void *)v72;
          v45 = sub_98E2D0((__int64 *)&v69, (__int64 *)&v62);
          if ( v63 > 0x40 )
            goto LABEL_90;
          goto LABEL_92;
        }
        if ( v70 < v73 )
        {
          if ( v71 )
          {
            sub_2206CD0(&v72, &v69, v73);
            v64 = 1;
          }
          else
          {
            sub_2206B70(&v72, &v69, v73);
            v64 = 0;
          }
          v63 = v73;
          v62 = (void *)v72;
          v45 = sub_98E2D0((__int64 *)&v62, (__int64 *)&v59);
          if ( v63 > 0x40 )
          {
LABEL_90:
            if ( v62 )
              operator delete[](v62);
          }
LABEL_92:
          v44 = v60;
          v22 = v45 != 0;
          goto LABEL_93;
        }
        if ( !v71 )
        {
          v48 = (unsigned __int64)v69;
          if ( v70 > 0x40 )
            v48 = *((_QWORD *)v69 + ((v70 - 1) >> 6));
          v22 = 1;
          if ( (v48 & (1LL << ((unsigned __int8)v70 - 1))) == 0 )
LABEL_117:
            v22 = (unsigned int)sub_2205DB0(&v69, &v59) != 0;
LABEL_93:
          if ( v44 > 0x40 )
            goto LABEL_94;
LABEL_96:
          v20 = v57;
          goto LABEL_22;
        }
      }
      v47 = 1LL << ((unsigned __int8)v73 - 1);
      if ( v73 <= 0x40 )
      {
        v22 = 1;
        if ( (v47 & v72) != 0 )
          goto LABEL_96;
      }
      else if ( (v47 & *(_QWORD *)(v72 + 8LL * ((v73 - 1) >> 6))) != 0 )
      {
        v22 = 1;
LABEL_94:
        if ( v59 )
          operator delete[](v59);
        goto LABEL_96;
      }
      goto LABEL_117;
    }
    v22 = v71;
    if ( v71 )
    {
      sub_2206CD0(&v72, &v69, 64);
      v38 = v73;
      v61 = 1;
    }
    else
    {
      sub_2206B70(&v72, &v69, 64);
      v38 = v73;
      v61 = 0;
    }
    v60 = v73;
    v59 = (void *)v72;
    v39 = v54;
    if ( v54 == v38 )
    {
      if ( v22 == v55 )
      {
        if ( v22 )
          goto LABEL_70;
        v22 = (unsigned int)sub_2205E20(&v59, &v53) != 0;
        goto LABEL_54;
      }
    }
    else
    {
      if ( v54 < v38 )
      {
        if ( v55 )
        {
          sub_2206CD0(&v72, &v53, v38);
          v64 = 1;
        }
        else
        {
          sub_2206B70(&v72, &v53, v38);
          v64 = 0;
        }
        v63 = v73;
        v62 = (void *)v72;
        v40 = sub_98E2D0((__int64 *)&v59, (__int64 *)&v62);
        if ( v63 > 0x40 )
        {
LABEL_51:
          if ( v62 )
            operator delete[](v62);
        }
LABEL_53:
        v38 = v60;
        v22 = v40 != 0;
        goto LABEL_54;
      }
      if ( v54 > v38 )
      {
        if ( v22 )
        {
          sub_2206CD0(&v72, &v59, v54);
          v64 = 1;
        }
        else
        {
          sub_2206B70(&v72, &v59, v54);
          v64 = 0;
        }
        v63 = v73;
        v62 = (void *)v72;
        v40 = sub_98E2D0((__int64 *)&v62, (__int64 *)&v53);
        if ( v63 > 0x40 )
          goto LABEL_51;
        goto LABEL_53;
      }
    }
    if ( !v22 )
    {
      v42 = 1LL << ((unsigned __int8)v38 - 1);
      if ( v38 <= 0x40 )
      {
        v22 = 1;
        if ( (v72 & v42) != 0 )
        {
LABEL_58:
          if ( v39 > 0x40 && v53 )
            operator delete[](v53);
          v34 = v71;
          v17 = v70;
          goto LABEL_42;
        }
      }
      else
      {
        v22 = 1;
        if ( (v42 & *(_QWORD *)(v72 + 8LL * ((v38 - 1) >> 6))) != 0 )
        {
LABEL_55:
          v23 = v59;
          if ( v59 )
          {
LABEL_56:
            operator delete[](v23);
            goto LABEL_57;
          }
          goto LABEL_57;
        }
      }
      goto LABEL_70;
    }
    if ( v55 )
      goto LABEL_70;
    v46 = (unsigned __int64)v53;
    if ( v54 > 0x40 )
      v46 = *((_QWORD *)v53 + ((v54 - 1) >> 6));
    if ( (v46 & (1LL << ((unsigned __int8)v54 - 1))) == 0 )
LABEL_70:
      v22 = (unsigned int)sub_2205DB0(&v59, &v53) != 0;
LABEL_54:
    if ( v38 <= 0x40 )
      goto LABEL_57;
    goto LABEL_55;
  }
  if ( (unsigned __int8)sub_1432A50(v68, 4u, a4, 1u, v67, a2, a7, a8) )
  {
LABEL_26:
    if ( *(_WORD *)(a4 + 16) != 2 )
      sub_141A820(a2, (unsigned int *)a4);
    v24 = v67[0];
    v25 = v70 <= 0x40;
    *(_BYTE *)(a2 + 544) = (32 * v13) | *(_BYTE *)(a2 + 544) & 0xDF;
    *(_OWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_OWORD *)a1 = 0;
    *(_BYTE *)(a1 + 25) = v24;
    v26 = *(_DWORD *)a4;
    *(_DWORD *)(a1 + 28) = v15;
    *(_DWORD *)(a1 + 32) = v26;
    if ( !v25 && v69 )
      operator delete[](v69);
  }
  else
  {
    if ( a6 && *(_WORD *)(a4 + 16) != 2 )
    {
      sub_FC70B0((__int64)&v72, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1122);
      sub_AEA040((__int64)&v72);
      sub_141A820(a2, (unsigned int *)a4);
    }
    v28 = *a5;
    if ( !*a5 )
      v28 = v65 != 2;
    *a5 = v28;
    *(_BYTE *)(a2 + 544) = *(_BYTE *)(a2 + 544) & 0xDF | (32 * v13);
    v29 = sub_142BC90((__int64)&v69, nullptr);
    v30 = v70;
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 24) = v29;
    v31 = v67[0];
    *(_DWORD *)(a1 + 8) = v30;
    v32 = v69;
    *(_BYTE *)(a1 + 25) = v31;
    v33 = v68[0];
    *(_QWORD *)a1 = v32;
    LOBYTE(v32) = v71;
    *(_QWORD *)(a1 + 28) = v33;
    *(_BYTE *)(a1 + 12) = (_BYTE)v32;
  }
LABEL_31:
  *(_BYTE *)(a2 + 546) = v50;
  return a1;
}
