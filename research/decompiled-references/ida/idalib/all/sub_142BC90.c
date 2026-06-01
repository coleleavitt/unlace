__int64 __fastcall sub_142BC90(__int64 a1, void *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rdx
  unsigned int v4; // r13d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned int v17; // r13d
  unsigned __int8 v18; // r14
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rsi
  unsigned int v25; // r13d
  unsigned int v26; // eax
  unsigned int v27; // ebx
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // r13d
  __int64 v31; // rdx
  char v32; // cl
  int v33; // ebx
  int v34; // ebx
  unsigned int v35; // r13d
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned int v39; // r13d
  int v40; // ebx
  unsigned __int64 v41; // rsi
  unsigned int v42; // edx
  int v43; // eax
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  int v46; // eax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rsi
  unsigned __int64 v51; // rsi
  __int64 v52; // rsi
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rsi
  __int64 v55; // rsi
  int v56; // [rsp+Ch] [rbp-8Ch]
  int v57; // [rsp+Ch] [rbp-8Ch]
  int v58; // [rsp+Ch] [rbp-8Ch]
  int v59; // [rsp+Ch] [rbp-8Ch]
  void *v60; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v61; // [rsp+18h] [rbp-80h]
  unsigned __int8 v62; // [rsp+1Ch] [rbp-7Ch]
  void *v63; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+28h] [rbp-70h]
  unsigned __int8 v65; // [rsp+2Ch] [rbp-6Ch]
  void *v66; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v67; // [rsp+38h] [rbp-60h]
  char v68; // [rsp+3Ch] [rbp-5Ch]
  void *v69; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v70; // [rsp+48h] [rbp-50h]
  char v71; // [rsp+4Ch] [rbp-4Ch]
  void *v72; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v73; // [rsp+58h] [rbp-40h]
  char v74; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v75; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v76; // [rsp+68h] [rbp-30h]

  v3 = *(unsigned int *)(a1 + 8);
  v61 = 64;
  v60 = a2;
  v62 = 0;
  if ( (_DWORD)v3 == 64 )
  {
    v2 = *(unsigned __int8 *)(a1 + 12);
    if ( (_BYTE)v2 )
    {
      if ( (__int64)a2 >= 0 )
        LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v60) != 0;
    }
    else
    {
      LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v60) != 0;
    }
    return v2;
  }
  if ( (unsigned int)v3 <= 0x40 )
  {
    v2 = *(unsigned __int8 *)(a1 + 12);
    if ( (_BYTE)v2 )
    {
      sub_2206CD0(&v75, a1, 64);
      v10 = v76;
      v11 = v75;
      v65 = 1;
    }
    else
    {
      sub_2206B70(&v75, a1, 64);
      v10 = v76;
      v11 = v75;
      v65 = 0;
    }
    v64 = v76;
    v63 = (void *)v75;
    v12 = v61;
    if ( v61 == v10 )
    {
      if ( (_BYTE)v2 == v62 )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(&v63, &v60) != 0;
        goto LABEL_58;
      }
      goto LABEL_55;
    }
    if ( v61 >= v10 )
    {
      if ( v61 > v10 )
      {
        if ( (_BYTE)v2 )
        {
          sub_2206CD0(&v75, &v63, v61);
          v13 = v76;
          v14 = v75;
          v68 = 1;
        }
        else
        {
          sub_2206B70(&v75, &v63, v61);
          v13 = v76;
          v14 = v75;
          v68 = 0;
        }
        v67 = v76;
        v66 = (void *)v75;
        if ( v13 == v61 )
        {
          if ( v62 == (_BYTE)v2 )
          {
            if ( !(_BYTE)v2 )
            {
              LOBYTE(v2) = (unsigned int)sub_2205E20(&v66, &v60) != 0;
              goto LABEL_45;
            }
          }
          else if ( (_BYTE)v2 )
          {
            if ( ((unsigned __int64)v60 & (1LL << ((unsigned __int8)v61 - 1))) != 0 )
              goto LABEL_45;
          }
          else
          {
            v2 = 1;
            if ( ((1LL << ((unsigned __int8)v13 - 1)) & v14) != 0 )
              goto LABEL_48;
          }
          LOBYTE(v2) = (unsigned int)sub_2205DB0(&v66, &v60) != 0;
          goto LABEL_45;
        }
        if ( v13 <= v61 )
        {
          if ( (_BYTE)v2 )
          {
            sub_2206CD0(&v75, &v66, v61);
            v74 = 1;
          }
          else
          {
            sub_2206B70(&v75, &v66, v61);
            v74 = 0;
          }
          v73 = v76;
          v72 = (void *)v75;
          v15 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v60);
          if ( v73 > 0x40 && v72 )
          {
            v56 = v15;
            operator delete[](v72);
            v15 = v56;
          }
          v13 = v67;
          LOBYTE(v2) = v15 != 0;
LABEL_45:
          if ( v13 > 0x40 )
            goto LABEL_46;
LABEL_48:
          v10 = v64;
          goto LABEL_58;
        }
        v2 = v62;
        sub_2206B70(&v75, &v60, v13);
        v35 = v76;
        v71 = 0;
        v13 = v67;
        v70 = v76;
        v69 = (void *)v75;
        v42 = v67;
        if ( v76 == v67 )
        {
          if ( !v68 )
          {
            LOBYTE(v2) = (unsigned int)sub_2205E20(&v66, &v69) != 0;
            goto LABEL_181;
          }
        }
        else
        {
          if ( v76 < v67 )
          {
            sub_2206B70(&v75, &v69, v67);
            v74 = 0;
            v73 = v76;
            v72 = (void *)v75;
            v43 = sub_98E2D0((__int64 *)&v66, (__int64 *)&v72);
            if ( v73 > 0x40 && v72 )
            {
              v58 = v43;
              operator delete[](v72);
              v43 = v58;
            }
            v35 = v70;
            LOBYTE(v2) = v43 != 0;
            goto LABEL_181;
          }
          if ( v76 > v67 )
          {
            if ( v68 )
            {
              sub_2206CD0(&v75, &v66, v76);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v66, v76);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v34 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v69);
            if ( v73 > 0x40 && v72 )
              operator delete[](v72);
            v35 = v70;
            LOBYTE(v2) = v34 != 0;
            goto LABEL_181;
          }
          if ( !v68 )
          {
            v53 = (unsigned __int64)v66;
            if ( v67 > 0x40 )
              v53 = *((_QWORD *)v66 + ((v67 - 1) >> 6));
            v2 = 1;
            if ( (v53 & (1LL << ((unsigned __int8)v67 - 1))) != 0 )
            {
LABEL_181:
              if ( v35 <= 0x40 )
              {
LABEL_184:
                v13 = v67;
                goto LABEL_45;
              }
LABEL_182:
              if ( v69 )
                operator delete[](v69);
              goto LABEL_184;
            }
LABEL_323:
            LOBYTE(v2) = (unsigned int)sub_2205DB0(&v66, &v69) != 0;
            goto LABEL_181;
          }
          v42 = v76;
        }
        v52 = 1LL << ((unsigned __int8)v42 - 1);
        if ( v42 <= 0x40 )
        {
          v2 = 1;
          if ( (v75 & v52) != 0 )
            goto LABEL_45;
        }
        else if ( (v52 & *(_QWORD *)(v75 + 8LL * ((v42 - 1) >> 6))) != 0 )
        {
          v2 = 1;
          goto LABEL_182;
        }
        v35 = v42;
        goto LABEL_323;
      }
LABEL_55:
      if ( (_BYTE)v2 )
      {
        if ( ((unsigned __int64)v60 & (1LL << ((unsigned __int8)v61 - 1))) != 0 )
          goto LABEL_58;
      }
      else
      {
        v21 = 1LL << ((unsigned __int8)v10 - 1);
        if ( v10 <= 0x40 )
        {
          v2 = 1;
          if ( (v11 & v21) != 0 )
            goto LABEL_62;
        }
        else if ( (v21 & *(_QWORD *)(v11 + 8LL * ((v10 - 1) >> 6))) != 0 )
        {
          goto LABEL_95;
        }
      }
      LOBYTE(v2) = (unsigned int)sub_2205DB0(&v63, &v60) != 0;
LABEL_58:
      if ( v10 > 0x40 )
        goto LABEL_59;
      goto LABEL_61;
    }
    v2 = v62;
    sub_2206B70(&v75, &v60, v10);
    v68 = 0;
    v17 = v64;
    v67 = v76;
    v66 = (void *)v75;
    if ( v76 == v64 )
    {
      v10 = v64;
      if ( !v65 )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(&v63, &v66) != 0;
        goto LABEL_85;
      }
LABEL_186:
      if ( v17 <= 0x40 )
      {
        v2 = 1;
        if ( (v75 & (1LL << ((unsigned __int8)v17 - 1))) != 0 )
          goto LABEL_58;
      }
      else if ( ((1LL << ((unsigned __int8)v17 - 1)) & *(_QWORD *)(v75 + 8LL * ((v17 - 1) >> 6))) != 0 )
      {
        v2 = 1;
        goto LABEL_46;
      }
      goto LABEL_188;
    }
    if ( v76 >= v64 )
    {
      v18 = v65;
      if ( v76 > v64 )
      {
        if ( v65 )
        {
          sub_2206CD0(&v75, &v63, v76);
          v19 = v76;
          v20 = v75;
          v71 = 1;
        }
        else
        {
          sub_2206B70(&v75, &v63, v76);
          v19 = v76;
          v20 = v75;
          v71 = 0;
        }
        v70 = v76;
        v69 = (void *)v75;
        v17 = v67;
        if ( v19 == v67 )
        {
          if ( v18 == v68 )
          {
            if ( v18 )
              goto LABEL_238;
            v2 = sub_2205E20(&v69, &v66);
            goto LABEL_80;
          }
        }
        else
        {
          if ( v19 > v67 )
          {
            if ( v68 )
            {
              sub_2206CD0(&v75, &v66, v19);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v66, v19);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v2 = sub_98E2D0((__int64 *)&v69, (__int64 *)&v72);
            if ( v73 > 0x40 )
            {
LABEL_77:
              if ( v72 )
                operator delete[](v72);
            }
LABEL_79:
            v19 = v70;
            goto LABEL_80;
          }
          if ( v19 < v67 )
          {
            if ( v18 )
            {
              sub_2206CD0(&v75, &v69, v67);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v69, v67);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v2 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v66);
            if ( v73 > 0x40 )
              goto LABEL_77;
            goto LABEL_79;
          }
        }
        if ( !v18 )
        {
          if ( v19 <= 0x40 )
          {
            v2 = -1;
            if ( ((1LL << ((unsigned __int8)v19 - 1)) & v20) != 0 )
              goto LABEL_84;
          }
          else if ( ((1LL << ((unsigned __int8)v19 - 1)) & *(_QWORD *)(v20 + 8LL * ((v19 - 1) >> 6))) != 0 )
          {
            v2 = -1;
            goto LABEL_81;
          }
          goto LABEL_238;
        }
        if ( v68 )
          goto LABEL_238;
        v44 = (unsigned __int64)v66;
        if ( v67 > 0x40 )
          v44 = *((_QWORD *)v66 + ((v67 - 1) >> 6));
        v2 = 1;
        if ( (v44 & (1LL << ((unsigned __int8)v67 - 1))) == 0 )
LABEL_238:
          v2 = sub_2205DB0(&v69, &v66);
LABEL_80:
        if ( v19 <= 0x40 )
        {
LABEL_83:
          v17 = v67;
LABEL_84:
          LOBYTE(v2) = v2 != 0;
          goto LABEL_85;
        }
LABEL_81:
        if ( v69 )
          operator delete[](v69);
        goto LABEL_83;
      }
      if ( !v65 )
      {
        v17 = v76;
        v36 = (unsigned __int64)v63;
        if ( v64 > 0x40 )
          v36 = *((_QWORD *)v63 + ((v64 - 1) >> 6));
        v2 = 1;
        if ( (v36 & (1LL << ((unsigned __int8)v64 - 1))) == 0 )
LABEL_188:
          LOBYTE(v2) = (unsigned int)sub_2205DB0(&v63, &v66) != 0;
LABEL_85:
        if ( v17 <= 0x40 )
          goto LABEL_48;
LABEL_46:
        if ( v66 )
          operator delete[](v66);
        goto LABEL_48;
      }
      v10 = v64;
      v17 = v76;
      goto LABEL_186;
    }
    sub_2206B70(&v75, &v66, v64);
    v23 = v76;
    v71 = 0;
    v70 = v76;
    v69 = (void *)v75;
    if ( v64 == v76 )
    {
      if ( v65 )
      {
LABEL_274:
        if ( v76 <= 0x40 )
        {
          v2 = 1;
          if ( (v75 & (1LL << ((unsigned __int8)v76 - 1))) != 0 )
            goto LABEL_106;
        }
        else
        {
          v2 = 1;
          if ( ((1LL << ((unsigned __int8)v76 - 1)) & *(_QWORD *)(v75 + 8LL * ((v76 - 1) >> 6))) != 0 )
          {
LABEL_104:
            if ( v69 )
              operator delete[](v69);
            goto LABEL_106;
          }
        }
        goto LABEL_276;
      }
      LOBYTE(v2) = (unsigned int)sub_2205E20(&v63, &v69) != 0;
    }
    else
    {
      if ( v64 > v76 )
      {
        sub_2206B70(&v75, &v69, v64);
        v74 = 0;
        v73 = v76;
        v72 = (void *)v75;
        v22 = sub_98E2D0((__int64 *)&v63, (__int64 *)&v72);
        if ( v73 > 0x40 )
          goto LABEL_100;
        goto LABEL_102;
      }
      if ( v64 < v76 )
      {
        if ( v65 )
        {
          sub_2206CD0(&v75, &v63, v76);
          v74 = 1;
        }
        else
        {
          sub_2206B70(&v75, &v63, v76);
          v74 = 0;
        }
        v73 = v76;
        v72 = (void *)v75;
        v22 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v69);
        if ( v73 > 0x40 )
        {
LABEL_100:
          if ( v72 )
          {
            v57 = v22;
            operator delete[](v72);
            v22 = v57;
          }
        }
LABEL_102:
        v23 = v70;
        LOBYTE(v2) = v22 != 0;
        goto LABEL_103;
      }
      if ( v65 )
        goto LABEL_274;
      v48 = (unsigned __int64)v63;
      if ( v64 > 0x40 )
        v48 = *((_QWORD *)v63 + ((v64 - 1) >> 6));
      v2 = 1;
      if ( (v48 & (1LL << ((unsigned __int8)v64 - 1))) == 0 )
LABEL_276:
        LOBYTE(v2) = (unsigned int)sub_2205DB0(&v63, &v69) != 0;
    }
LABEL_103:
    if ( v23 > 0x40 )
      goto LABEL_104;
LABEL_106:
    v17 = v67;
    goto LABEL_85;
  }
  sub_2206B70(&v75, &v60, v3);
  v4 = v76;
  v65 = 0;
  v5 = *(unsigned int *)(a1 + 8);
  v64 = v76;
  v63 = (void *)v75;
  if ( (_DWORD)v5 == v76 )
  {
    if ( !*(_BYTE *)(a1 + 12) )
    {
      LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v63) != 0;
      goto LABEL_91;
    }
LABEL_88:
    if ( v76 <= 0x40 )
    {
      v2 = 1;
      if ( ((1LL << ((unsigned __int8)v76 - 1)) & v75) != 0 )
        goto LABEL_61;
      goto LABEL_90;
    }
    if ( ((1LL << ((unsigned __int8)v76 - 1)) & *(_QWORD *)(v75 + 8LL * ((v76 - 1) >> 6))) == 0 )
    {
LABEL_90:
      LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v63) != 0;
      goto LABEL_91;
    }
LABEL_95:
    v2 = 1;
    goto LABEL_59;
  }
  if ( (unsigned int)v5 > v76 )
  {
    sub_2206B70(&v75, &v63, v5);
    v25 = v76;
    v68 = 0;
    v26 = *(_DWORD *)(a1 + 8);
    v67 = v76;
    v66 = (void *)v75;
    if ( v26 == v76 )
    {
      if ( !*(_BYTE *)(a1 + 12) )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v66) != 0;
        goto LABEL_133;
      }
LABEL_144:
      if ( v76 <= 0x40 )
      {
        v2 = 1;
        if ( ((1LL << ((unsigned __int8)v76 - 1)) & v75) != 0 )
          goto LABEL_29;
      }
      else if ( ((1LL << ((unsigned __int8)v76 - 1)) & *(_QWORD *)(v75 + 8LL * ((v76 - 1) >> 6))) != 0 )
      {
LABEL_146:
        v2 = 1;
        goto LABEL_27;
      }
      goto LABEL_151;
    }
    if ( v26 <= v76 )
    {
      v2 = *(unsigned __int8 *)(a1 + 12);
      if ( v26 < v76 )
      {
        if ( (_BYTE)v2 )
        {
          sub_2206CD0(&v75, a1, v76);
          v27 = v76;
          v28 = v75;
          v71 = 1;
        }
        else
        {
          sub_2206B70(&v75, a1, v76);
          v27 = v76;
          v28 = v75;
          v71 = 0;
        }
        v70 = v76;
        v69 = (void *)v75;
        v25 = v67;
        if ( v67 == v27 )
        {
          if ( v68 == (_BYTE)v2 )
          {
            if ( (_BYTE)v2 )
              goto LABEL_272;
            v2 = sub_2205E20(&v69, &v66);
            goto LABEL_128;
          }
        }
        else
        {
          if ( v67 < v27 )
          {
            if ( v68 )
            {
              sub_2206CD0(&v75, &v66, v27);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v66, v27);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v2 = sub_98E2D0((__int64 *)&v69, (__int64 *)&v72);
            if ( v73 > 0x40 )
            {
LABEL_125:
              if ( v72 )
                operator delete[](v72);
            }
LABEL_127:
            v27 = v70;
            goto LABEL_128;
          }
          if ( v67 > v27 )
          {
            if ( (_BYTE)v2 )
            {
              sub_2206CD0(&v75, &v69, v67);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v69, v67);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v2 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v66);
            if ( v73 > 0x40 )
              goto LABEL_125;
            goto LABEL_127;
          }
        }
        if ( !(_BYTE)v2 )
        {
          if ( v27 <= 0x40 )
          {
            v2 = -1;
            if ( (v28 & (1LL << ((unsigned __int8)v27 - 1))) != 0 )
              goto LABEL_132;
          }
          else if ( ((1LL << ((unsigned __int8)v27 - 1)) & *(_QWORD *)(v28 + 8LL * ((v27 - 1) >> 6))) != 0 )
          {
            v2 = -1;
            goto LABEL_129;
          }
          goto LABEL_272;
        }
        if ( v68 )
          goto LABEL_272;
        v47 = (unsigned __int64)v66;
        if ( v67 > 0x40 )
          v47 = *((_QWORD *)v66 + ((v67 - 1) >> 6));
        v2 = 1;
        if ( (v47 & (1LL << ((unsigned __int8)v67 - 1))) == 0 )
LABEL_272:
          v2 = sub_2205DB0(&v69, &v66);
LABEL_128:
        if ( v27 <= 0x40 )
        {
LABEL_131:
          v25 = v67;
LABEL_132:
          LOBYTE(v2) = v2 != 0;
          goto LABEL_133;
        }
LABEL_129:
        if ( v69 )
          operator delete[](v69);
        goto LABEL_131;
      }
      if ( !(_BYTE)v2 )
      {
        v29 = *(_QWORD *)a1;
        if ( v26 > 0x40 )
          v29 = *(_QWORD *)(v29 + 8LL * ((v26 - 1) >> 6));
        v2 = 1;
        if ( (v29 & (1LL << ((unsigned __int8)v26 - 1))) == 0 )
LABEL_151:
          LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v66) != 0;
LABEL_133:
        if ( v25 <= 0x40 )
          goto LABEL_29;
LABEL_27:
        if ( v66 )
          operator delete[](v66);
        goto LABEL_29;
      }
      goto LABEL_144;
    }
    sub_2206B70(&v75, &v66, v26);
    v30 = v76;
    v71 = 0;
    v31 = *(unsigned int *)(a1 + 8);
    v70 = v76;
    v69 = (void *)v75;
    if ( (_DWORD)v31 == v76 )
    {
      if ( !*(_BYTE *)(a1 + 12) )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v69) != 0;
        goto LABEL_162;
      }
    }
    else
    {
      if ( (unsigned int)v31 > v76 )
      {
        sub_2206B70(&v75, &v69, v31);
        v74 = 0;
        v73 = v76;
        v72 = (void *)v75;
        v46 = sub_98E2D0((__int64 *)a1, (__int64 *)&v72);
        if ( v73 > 0x40 && v72 )
        {
          v59 = v46;
          operator delete[](v72);
          v46 = v59;
        }
        v30 = v70;
        LOBYTE(v2) = v46 != 0;
        goto LABEL_162;
      }
      v32 = *(_BYTE *)(a1 + 12);
      if ( (unsigned int)v31 < v76 )
      {
        if ( v32 )
        {
          sub_2206CD0(&v75, a1, v76);
          v74 = 1;
        }
        else
        {
          sub_2206B70(&v75, a1, v76);
          v74 = 0;
        }
        v73 = v76;
        v72 = (void *)v75;
        v33 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v69);
        if ( v73 > 0x40 && v72 )
          operator delete[](v72);
        v30 = v70;
        LOBYTE(v2) = v33 != 0;
        goto LABEL_162;
      }
      if ( !v32 )
      {
        v49 = *(_QWORD *)a1;
        if ( (unsigned int)v31 > 0x40 )
          v49 = *(_QWORD *)(v49 + 8LL * ((unsigned int)(v31 - 1) >> 6));
        v2 = 1;
        if ( (v49 & (1LL << ((unsigned __int8)v31 - 1))) == 0 )
LABEL_242:
          LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v69) != 0;
LABEL_162:
        if ( v30 > 0x40 )
          goto LABEL_163;
LABEL_165:
        v25 = v67;
        goto LABEL_133;
      }
    }
    v45 = 1LL << ((unsigned __int8)v76 - 1);
    if ( v76 <= 0x40 )
    {
      v2 = 1;
      if ( (v45 & v75) != 0 )
        goto LABEL_165;
    }
    else
    {
      v2 = 1;
      if ( (v45 & *(_QWORD *)(v75 + 8LL * ((v76 - 1) >> 6))) != 0 )
      {
LABEL_163:
        if ( v69 )
          operator delete[](v69);
        goto LABEL_165;
      }
    }
    goto LABEL_242;
  }
  v2 = *(unsigned __int8 *)(a1 + 12);
  if ( (unsigned int)v5 >= v76 )
  {
    if ( !(_BYTE)v2 )
    {
      v24 = *(_QWORD *)a1;
      if ( (unsigned int)v5 > 0x40 )
        v24 = *(_QWORD *)(v24 + 8LL * ((unsigned int)(v5 - 1) >> 6));
      v2 = 1;
      if ( (v24 & (1LL << ((unsigned __int8)v5 - 1))) != 0 )
        goto LABEL_91;
      goto LABEL_90;
    }
    goto LABEL_88;
  }
  if ( (_BYTE)v2 )
  {
    sub_2206CD0(&v75, a1, v76);
    v6 = v76;
    v7 = v75;
    v68 = 1;
  }
  else
  {
    sub_2206B70(&v75, a1, v76);
    v6 = v76;
    v7 = v75;
    v68 = 0;
  }
  v67 = v76;
  v66 = (void *)v75;
  v4 = v64;
  if ( v6 != v64 )
  {
    if ( v6 <= v64 )
    {
      if ( v6 < v64 )
      {
        if ( (_BYTE)v2 )
        {
          sub_2206CD0(&v75, &v66, v64);
          v8 = v76;
          v9 = v75;
          v71 = 1;
        }
        else
        {
          sub_2206B70(&v75, &v66, v64);
          v8 = v76;
          v9 = v75;
          v71 = 0;
        }
        v70 = v76;
        v69 = (void *)v75;
        if ( v64 == v8 )
        {
          if ( v65 == (_BYTE)v2 )
          {
            if ( (_BYTE)v2 )
              goto LABEL_309;
            v2 = sub_2205E20(&v69, &v63);
            goto LABEL_22;
          }
        }
        else
        {
          if ( v64 < v8 )
          {
            if ( v65 )
            {
              sub_2206CD0(&v75, &v63, v8);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v63, v8);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v2 = sub_98E2D0((__int64 *)&v69, (__int64 *)&v72);
            if ( v73 > 0x40 )
            {
LABEL_19:
              if ( v72 )
                operator delete[](v72);
            }
LABEL_21:
            v8 = v70;
            goto LABEL_22;
          }
          if ( v64 > v8 )
          {
            if ( (_BYTE)v2 )
            {
              sub_2206CD0(&v75, &v69, v64);
              v74 = 1;
            }
            else
            {
              sub_2206B70(&v75, &v69, v64);
              v74 = 0;
            }
            v73 = v76;
            v72 = (void *)v75;
            v2 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v63);
            if ( v73 > 0x40 )
              goto LABEL_19;
            goto LABEL_21;
          }
        }
        if ( !(_BYTE)v2 )
        {
          v50 = 1LL << ((unsigned __int8)v8 - 1);
          if ( v8 <= 0x40 )
          {
            v2 = -1;
            if ( (v9 & v50) != 0 )
              goto LABEL_25;
          }
          else if ( (v50 & *(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6))) != 0 )
          {
            v2 = -1;
LABEL_23:
            if ( v69 )
              operator delete[](v69);
            goto LABEL_25;
          }
          goto LABEL_309;
        }
        if ( v65 )
          goto LABEL_309;
        v51 = (unsigned __int64)v63;
        if ( v64 > 0x40 )
          v51 = *((_QWORD *)v63 + ((v64 - 1) >> 6));
        v2 = 1;
        if ( (v51 & (1LL << ((unsigned __int8)v64 - 1))) == 0 )
LABEL_309:
          v2 = sub_2205DB0(&v69, &v63);
LABEL_22:
        if ( v8 > 0x40 )
          goto LABEL_23;
LABEL_25:
        v6 = v67;
        LOBYTE(v2) = v2 != 0;
        goto LABEL_26;
      }
      goto LABEL_169;
    }
    v2 = v65;
    if ( v65 )
    {
      sub_2206CD0(&v75, &v63, v6);
      v37 = v76;
      v38 = v75;
      v71 = 1;
      v39 = v67;
      v70 = v76;
      v69 = (void *)v75;
      v6 = v67;
      if ( v76 == v67 )
      {
        if ( v68 )
          goto LABEL_336;
LABEL_333:
        v54 = (unsigned __int64)v66;
        if ( v6 > 0x40 )
          v54 = *((_QWORD *)v66 + ((v6 - 1) >> 6));
        v2 = 1;
        if ( (v54 & (1LL << ((unsigned __int8)v6 - 1))) == 0 )
          goto LABEL_336;
LABEL_206:
        if ( v39 <= 0x40 )
        {
LABEL_209:
          v6 = v67;
          goto LABEL_26;
        }
LABEL_207:
        if ( v69 )
          operator delete[](v69);
        goto LABEL_209;
      }
      if ( v76 >= v67 )
      {
LABEL_199:
        if ( (unsigned int)v37 > v6 )
        {
          if ( v68 )
          {
            sub_2206CD0(&v75, &v66, v37);
            v74 = 1;
          }
          else
          {
            sub_2206B70(&v75, &v66, v37);
            v74 = 0;
          }
          v73 = v76;
          v72 = (void *)v75;
          v40 = sub_98E2D0((__int64 *)&v72, (__int64 *)&v69);
          if ( v73 > 0x40 )
          {
LABEL_203:
            if ( v72 )
              operator delete[](v72);
          }
LABEL_205:
          v39 = v70;
          LOBYTE(v2) = v40 != 0;
          goto LABEL_206;
        }
        v39 = v37;
        if ( v68 )
        {
          if ( !(_BYTE)v2 )
          {
LABEL_338:
            v55 = 1LL << ((unsigned __int8)v39 - 1);
            if ( v39 <= 0x40 )
            {
              v2 = 1;
              if ( (v38 & v55) != 0 )
                goto LABEL_26;
            }
            else if ( (v55 & *(_QWORD *)(v38 + 8LL * ((v39 - 1) >> 6))) != 0 )
            {
              v2 = 1;
              goto LABEL_207;
            }
          }
LABEL_336:
          LOBYTE(v2) = (unsigned int)sub_2205DB0(&v66, &v69) != 0;
          goto LABEL_206;
        }
        goto LABEL_333;
      }
      sub_2206CD0(&v75, &v69, v67);
      v74 = 1;
      v73 = v76;
      v72 = (void *)v75;
    }
    else
    {
      sub_2206B70(&v75, &v63, v6);
      v37 = v76;
      v38 = v75;
      v71 = 0;
      v39 = v67;
      v70 = v76;
      v69 = (void *)v75;
      v6 = v67;
      if ( v76 == v67 )
      {
        if ( v68 )
          goto LABEL_338;
        LOBYTE(v2) = (unsigned int)sub_2205E20(&v66, &v69) != 0;
        goto LABEL_206;
      }
      if ( v76 >= v67 )
        goto LABEL_199;
      sub_2206B70(&v75, &v69, v67);
      v74 = 0;
      v73 = v76;
      v72 = (void *)v75;
    }
    v40 = sub_98E2D0((__int64 *)&v66, (__int64 *)&v72);
    if ( v73 > 0x40 )
      goto LABEL_203;
    goto LABEL_205;
  }
  if ( (_BYTE)v2 == v65 )
  {
    if ( (_BYTE)v2 )
      goto LABEL_172;
    LOBYTE(v2) = (unsigned int)sub_2205E20(&v66, &v63) != 0;
LABEL_26:
    if ( v6 > 0x40 )
      goto LABEL_27;
LABEL_29:
    v4 = v64;
    goto LABEL_91;
  }
LABEL_169:
  if ( (_BYTE)v2 )
  {
    if ( v65 )
      goto LABEL_172;
    v41 = (unsigned __int64)v63;
    if ( v64 > 0x40 )
      v41 = *((_QWORD *)v63 + ((v64 - 1) >> 6));
    if ( (v41 & (1LL << ((unsigned __int8)v64 - 1))) == 0 )
      goto LABEL_172;
    goto LABEL_26;
  }
  if ( v6 > 0x40 )
  {
    if ( ((1LL << ((unsigned __int8)v6 - 1)) & *(_QWORD *)(v7 + 8LL * ((v6 - 1) >> 6))) == 0 )
    {
LABEL_172:
      LOBYTE(v2) = (unsigned int)sub_2205DB0(&v66, &v63) != 0;
      goto LABEL_26;
    }
    goto LABEL_146;
  }
  v2 = 1;
  if ( ((1LL << ((unsigned __int8)v6 - 1)) & v7) == 0 )
    goto LABEL_172;
LABEL_91:
  if ( v4 > 0x40 )
  {
LABEL_59:
    if ( v63 )
      operator delete[](v63);
  }
LABEL_61:
  v12 = v61;
LABEL_62:
  if ( v12 <= 0x40 || !v60 )
    return v2;
  operator delete[](v60);
  return v2;
}
