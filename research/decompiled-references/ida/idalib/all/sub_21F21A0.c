__int64 __fastcall sub_21F21A0(__int64 a1, __int64 a2, bool *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  bool v8; // dl
  __int64 v9; // rdi
  unsigned int v10; // r15d
  char v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  bool v15; // zf
  bool v16; // r12
  int v17; // eax
  unsigned int v19; // eax
  unsigned int v20; // r13d
  unsigned int v21; // eax
  bool v22; // cc
  unsigned int v23; // edx
  char v24; // al
  void *v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rdx
  char v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rsi
  int v31; // r15d
  void *v32; // rdi
  void *v33; // rdi
  __int64 v34; // rsi
  char v35; // r15
  unsigned int v36; // r12d
  __int64 v37; // rax
  unsigned int v38; // r12d
  __int64 v39; // rdx
  void *v40; // rdi
  unsigned int v41; // r12d
  __int64 *v42; // rsi
  unsigned int v43; // edx
  __int64 v44; // rsi
  unsigned int v45; // r12d
  __int64 v46; // rdx
  char v47; // cl
  void *v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rsi
  unsigned int v51; // eax
  void *v52; // rdi
  __int64 v53; // rdi
  unsigned __int64 v54; // rsi
  int v55; // eax
  int v56; // eax
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rdx
  int v76; // [rsp+Ch] [rbp-ACh]
  int v77; // [rsp+Ch] [rbp-ACh]
  void *v78; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v79; // [rsp+18h] [rbp-A0h]
  char v80; // [rsp+1Ch] [rbp-9Ch]
  void *v81; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v82; // [rsp+28h] [rbp-90h]
  char v83; // [rsp+2Ch] [rbp-8Ch]
  _QWORD *v84; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v85; // [rsp+38h] [rbp-80h]
  char v86; // [rsp+3Ch] [rbp-7Ch]
  void *v87; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v88; // [rsp+48h] [rbp-70h]
  char v89; // [rsp+4Ch] [rbp-6Ch]
  void *v90; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v91; // [rsp+58h] [rbp-60h]
  char v92; // [rsp+5Ch] [rbp-5Ch]
  void *v93; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v94; // [rsp+68h] [rbp-50h]
  char v95; // [rsp+6Ch] [rbp-4Ch]
  __int64 v96; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v97; // [rsp+78h] [rbp-40h]

  v6 = *(_DWORD *)(a2 + 16);
  if ( (v6 & 0x40000000) != 0 )
  {
    if ( a3 )
      *a3 = 0;
    v19 = HIBYTE(v6);
    if ( (v19 & 0x20) == 0 )
    {
      v23 = *(unsigned __int16 *)(a2 + 16);
      v94 = v23;
      if ( v23 > 0x40 )
      {
        sub_2205470(&v93, 0, (v19 >> 5) & 1);
        v23 = v94;
        v16 = (*(_BYTE *)(a2 + 19) & 0x20) == 0;
        v24 = v16;
        v97 = v94;
        if ( v94 > 0x40 )
          goto LABEL_26;
      }
      else
      {
        v93 = nullptr;
        v24 = 1;
      }
      *(_DWORD *)(a1 + 8) = v23;
      v25 = v93;
      *(_BYTE *)(a1 + 12) = v24;
      *(_QWORD *)a1 = v25;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
      return a1;
    }
    v7 = *(_DWORD *)(a2 + 8);
    v12 = *(_QWORD *)a2;
    v20 = v7 - 1;
    if ( v7 <= 0x40 )
    {
      if ( v12 != 1LL << v20 )
      {
        v11 = *(_BYTE *)(a2 + 12);
        v97 = *(_DWORD *)(a2 + 8);
        goto LABEL_11;
      }
    }
    else if ( ((1LL << v20) & *(_QWORD *)(v12 + 8LL * (v20 >> 6))) == 0 || (unsigned int)sub_22068B0(a2) != v20 )
    {
      v97 = v7;
      v11 = *(_BYTE *)(a2 + 12);
      goto LABEL_24;
    }
    sub_21EEC90(a1, (unsigned __int16 *)(a2 + 16));
    return a1;
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( a3 )
  {
    if ( (v6 & 0x20000000) != 0 )
      goto LABEL_4;
    v79 = 64;
    v78 = nullptr;
    v80 = 0;
    if ( v7 == 64 )
    {
      if ( *(_BYTE *)(a2 + 12) )
        v31 = sub_2205DB0(a2, &v78);
      else
        v31 = sub_2205E20(a2, &v78);
      goto LABEL_69;
    }
    if ( v7 > 0x40 )
    {
      sub_2206B70(&v96, &v78, v7);
      v26 = v97;
      v83 = 0;
      v27 = *(unsigned int *)(a2 + 8);
      v82 = v97;
      v81 = (void *)v96;
      if ( (_DWORD)v27 == v97 )
      {
        if ( !*(_BYTE *)(a2 + 12) )
        {
          v31 = sub_2205E20(a2, &v81);
          goto LABEL_62;
        }
        goto LABEL_75;
      }
      if ( (unsigned int)v27 <= v97 )
      {
        v28 = *(_BYTE *)(a2 + 12);
        if ( (unsigned int)v27 < v97 )
        {
          if ( v28 )
          {
            sub_2206CD0(&v96, a2, v97);
            v29 = v97;
            v30 = v96;
            v89 = 1;
          }
          else
          {
            sub_2206B70(&v96, a2, v97);
            v29 = v97;
            v30 = v96;
            v89 = 0;
          }
          v88 = v97;
          v87 = (void *)v96;
          v26 = v82;
          if ( v82 == (_DWORD)v29 )
          {
            if ( v83 == v28 )
            {
              if ( v28 )
                goto LABEL_216;
              v77 = v29;
              v56 = sub_2205E20(&v87, &v81);
              LODWORD(v29) = v77;
              v31 = v56;
              goto LABEL_58;
            }
LABEL_208:
            if ( !v28 )
            {
              v53 = 1LL << ((unsigned __int8)v29 - 1);
              if ( (unsigned int)v29 > 0x40 )
              {
                if ( (v53 & *(_QWORD *)(v30 + 8LL * ((unsigned int)(v29 - 1) >> 6))) != 0 )
                {
                  v31 = -1;
LABEL_59:
                  v32 = v87;
                  if ( v87 )
LABEL_60:
                    operator delete[](v32);
LABEL_61:
                  v26 = v82;
                  goto LABEL_62;
                }
                goto LABEL_216;
              }
              v31 = -1;
              if ( (v30 & v53) == 0 )
              {
LABEL_216:
                v76 = v29;
                v55 = sub_2205DB0(&v87, &v81);
                LODWORD(v29) = v76;
                v31 = v55;
                goto LABEL_58;
              }
LABEL_62:
              if ( v26 <= 0x40 )
                goto LABEL_65;
LABEL_63:
              v33 = v81;
              if ( !v81 )
                goto LABEL_65;
              goto LABEL_64;
            }
            if ( v83 )
              goto LABEL_216;
            v54 = (unsigned __int64)v81;
            if ( v82 > 0x40 )
              v54 = *((_QWORD *)v81 + ((v82 - 1) >> 6));
            v31 = 1;
            if ( (v54 & (1LL << ((unsigned __int8)v82 - 1))) == 0 )
              goto LABEL_216;
LABEL_58:
            if ( (unsigned int)v29 <= 0x40 )
              goto LABEL_61;
            goto LABEL_59;
          }
          if ( v82 >= (unsigned int)v29 )
          {
            if ( v82 > (unsigned int)v29 )
            {
              if ( v28 )
              {
                sub_2206CD0(&v96, &v87, v82);
                v92 = 1;
              }
              else
              {
                sub_2206B70(&v96, &v87, v82);
                v92 = 0;
              }
              v91 = v97;
              v90 = (void *)v96;
              if ( v97 == v82 )
              {
                if ( v92 == v83 )
                {
                  if ( !v92 )
                  {
                    v31 = sub_2205E20(&v90, &v81);
                    goto LABEL_54;
                  }
                  goto LABEL_359;
                }
              }
              else
              {
                if ( v91 > v82 )
                {
                  if ( v83 )
                  {
                    sub_2206CD0(&v96, &v81, v97);
                    v95 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v96, &v81, v97);
                    v95 = 0;
                  }
                  v94 = v97;
                  v93 = (void *)v96;
                  v31 = sub_98E2D0((__int64 *)&v90, (__int64 *)&v93);
                  if ( v94 <= 0x40 )
                    goto LABEL_54;
                  goto LABEL_52;
                }
                if ( v91 < v82 )
                {
                  if ( v92 )
                  {
                    sub_2206CD0(&v96, &v90, v82);
                    v95 = 1;
                  }
                  else
                  {
                    sub_2206B70(&v96, &v90, v82);
                    v95 = 0;
                  }
                  v94 = v97;
                  v93 = (void *)v96;
                  v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v81);
                  if ( v94 <= 0x40 )
                    goto LABEL_54;
LABEL_52:
                  if ( v93 )
                    operator delete[](v93);
LABEL_54:
                  if ( v91 > 0x40 )
                    goto LABEL_55;
LABEL_57:
                  LODWORD(v29) = v88;
                  goto LABEL_58;
                }
              }
              if ( v92 )
              {
                if ( !v83 )
                {
                  v72 = (unsigned __int64)v81;
                  if ( v82 > 0x40 )
                    v72 = *((_QWORD *)v81 + ((v82 - 1) >> 6));
                  if ( (v72 & (1LL << ((unsigned __int8)v82 - 1))) != 0 )
                  {
                    v31 = 1;
                    goto LABEL_54;
                  }
                }
              }
              else
              {
                v68 = 1LL << ((unsigned __int8)v97 - 1);
                if ( v97 <= 0x40 )
                {
                  v31 = -1;
                  if ( (v68 & (unsigned __int64)v90) != 0 )
                    goto LABEL_57;
                }
                else if ( (v68 & *((_QWORD *)v90 + ((v97 - 1) >> 6))) != 0 )
                {
                  v31 = -1;
LABEL_55:
                  if ( v90 )
                    operator delete[](v90);
                  goto LABEL_57;
                }
              }
LABEL_359:
              v31 = sub_2205DB0(&v90, &v81);
              goto LABEL_54;
            }
            goto LABEL_208;
          }
          if ( v83 )
          {
            sub_2206CD0(&v96, &v81, v29);
            v92 = 1;
          }
          else
          {
            sub_2206B70(&v96, &v81, v29);
            v92 = 0;
          }
          v91 = v97;
          v90 = (void *)v96;
          if ( v88 == v97 )
          {
            if ( v89 == v92 )
            {
              if ( !v89 )
              {
                v31 = sub_2205E20(&v87, &v90);
                goto LABEL_243;
              }
              goto LABEL_283;
            }
          }
          else
          {
            if ( v88 > v91 )
            {
              if ( v92 )
              {
                sub_2206CD0(&v96, &v90, v88);
                v95 = 1;
              }
              else
              {
                sub_2206B70(&v96, &v90, v88);
                v95 = 0;
              }
              v94 = v97;
              v93 = (void *)v96;
              v31 = sub_98E2D0((__int64 *)&v87, (__int64 *)&v93);
              if ( v94 <= 0x40 )
                goto LABEL_243;
              goto LABEL_241;
            }
            if ( v88 < v91 )
            {
              if ( v89 )
              {
                sub_2206CD0(&v96, &v87, v97);
                v95 = 1;
              }
              else
              {
                sub_2206B70(&v96, &v87, v97);
                v95 = 0;
              }
              v94 = v97;
              v93 = (void *)v96;
              v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v90);
              if ( v94 <= 0x40 )
                goto LABEL_243;
LABEL_241:
              if ( v93 )
                operator delete[](v93);
              goto LABEL_243;
            }
          }
          if ( v89 )
          {
            if ( !v92 )
            {
              v71 = 1LL << ((unsigned __int8)v97 - 1);
              if ( v97 <= 0x40 )
              {
                v31 = 1;
                if ( (v71 & (unsigned __int64)v90) != 0 )
                {
                  LODWORD(v29) = v88;
                  goto LABEL_58;
                }
              }
              else if ( (v71 & *((_QWORD *)v90 + ((v97 - 1) >> 6))) != 0 )
              {
                v31 = 1;
                goto LABEL_244;
              }
            }
          }
          else
          {
            v63 = (unsigned __int64)v87;
            if ( v88 > 0x40 )
              v63 = *((_QWORD *)v87 + ((v88 - 1) >> 6));
            v31 = -1;
            if ( (v63 & (1LL << ((unsigned __int8)v88 - 1))) != 0 )
            {
LABEL_243:
              if ( v91 <= 0x40 )
              {
LABEL_246:
                LODWORD(v29) = v88;
                goto LABEL_58;
              }
LABEL_244:
              if ( v90 )
                operator delete[](v90);
              goto LABEL_246;
            }
          }
LABEL_283:
          v31 = sub_2205DB0(&v87, &v90);
          goto LABEL_243;
        }
        if ( !v28 )
        {
          v44 = *(_QWORD *)a2;
          if ( (unsigned int)v27 > 0x40 )
            v44 = *(_QWORD *)(v44 + 8LL * ((unsigned int)(v27 - 1) >> 6));
          v31 = -1;
          if ( (v44 & (1LL << ((unsigned __int8)v27 - 1))) != 0 )
            goto LABEL_62;
LABEL_136:
          v31 = sub_2205DB0(a2, &v81);
          goto LABEL_62;
        }
LABEL_75:
        v34 = 1LL << ((unsigned __int8)v97 - 1);
        if ( v97 <= 0x40 )
        {
          v31 = 1;
          if ( (v34 & v96) != 0 )
          {
LABEL_65:
            if ( v79 > 0x40 && v78 )
              operator delete[](v78);
            v7 = *(_DWORD *)(a2 + 8);
LABEL_69:
            v8 = 1;
            if ( !v31 )
            {
              v6 = *(_DWORD *)(a2 + 16);
LABEL_4:
              v8 = 0;
              if ( (v6 & 0x20000000) != 0 )
              {
                v9 = *(_QWORD *)a2;
                v10 = v7 - 1;
                if ( v7 <= 0x40 )
                {
                  v8 = 1LL << v10 == v9;
                }
                else if ( ((1LL << v10) & *(_QWORD *)(v9 + 8LL * (v10 >> 6))) != 0 )
                {
                  v8 = v10 == (unsigned int)sub_22068B0(a2);
                }
              }
            }
LABEL_8:
            *a3 = v8;
            goto LABEL_9;
          }
        }
        else if ( (v34 & *(_QWORD *)(v96 + 8LL * ((v97 - 1) >> 6))) != 0 )
        {
          v31 = 1;
          goto LABEL_63;
        }
        goto LABEL_136;
      }
      sub_2206B70(&v96, &v81, v27);
      v45 = v97;
      v86 = 0;
      v46 = *(unsigned int *)(a2 + 8);
      v85 = v97;
      v84 = (_QWORD *)v96;
      if ( (_DWORD)v46 == v97 )
      {
        if ( !*(_BYTE *)(a2 + 12) )
        {
          v31 = sub_2205E20(a2, &v84);
          goto LABEL_154;
        }
        goto LABEL_175;
      }
      if ( (unsigned int)v46 <= v97 )
      {
        v47 = *(_BYTE *)(a2 + 12);
        if ( (unsigned int)v46 < v97 )
        {
          if ( v47 )
          {
            sub_2206CD0(&v96, a2, v97);
            v92 = 1;
          }
          else
          {
            sub_2206B70(&v96, a2, v97);
            v92 = 0;
          }
          v91 = v97;
          v90 = (void *)v96;
          v45 = v85;
          if ( v97 == v85 )
          {
            if ( v92 == v86 )
            {
              if ( !v92 )
              {
                v31 = sub_2205E20(&v90, &v84);
                goto LABEL_150;
              }
              goto LABEL_308;
            }
          }
          else
          {
            if ( v91 > v85 )
            {
              if ( v86 )
              {
                sub_2206CD0(&v96, &v84, v97);
                v95 = 1;
              }
              else
              {
                sub_2206B70(&v96, &v84, v97);
                v95 = 0;
              }
              v94 = v97;
              v93 = (void *)v96;
              v31 = sub_98E2D0((__int64 *)&v90, (__int64 *)&v93);
              if ( v94 <= 0x40 )
                goto LABEL_150;
              goto LABEL_148;
            }
            if ( v91 < v85 )
            {
              if ( v92 )
              {
                sub_2206CD0(&v96, &v90, v85);
                v95 = 1;
              }
              else
              {
                sub_2206B70(&v96, &v90, v85);
                v95 = 0;
              }
              v94 = v97;
              v93 = (void *)v96;
              v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v84);
              if ( v94 <= 0x40 )
                goto LABEL_150;
LABEL_148:
              if ( v93 )
                operator delete[](v93);
LABEL_150:
              if ( v91 <= 0x40 )
                goto LABEL_153;
              goto LABEL_151;
            }
          }
          if ( v92 )
          {
            if ( !v86 )
            {
              v74 = (__int64)v84;
              if ( v85 > 0x40 )
                v74 = v84[(v85 - 1) >> 6];
              if ( (v74 & (1LL << ((unsigned __int8)v85 - 1))) != 0 )
              {
                v31 = 1;
                goto LABEL_150;
              }
            }
            goto LABEL_308;
          }
          v65 = 1LL << ((unsigned __int8)v97 - 1);
          if ( v97 > 0x40 )
          {
            if ( (v65 & *((_QWORD *)v90 + ((v97 - 1) >> 6))) != 0 )
            {
              v31 = -1;
LABEL_151:
              v48 = v90;
              if ( v90 )
LABEL_152:
                operator delete[](v48);
LABEL_153:
              v45 = v85;
              goto LABEL_154;
            }
            goto LABEL_308;
          }
          v31 = -1;
          if ( (v65 & (unsigned __int64)v90) == 0 )
          {
LABEL_308:
            v31 = sub_2205DB0(&v90, &v84);
            goto LABEL_150;
          }
LABEL_154:
          if ( v45 <= 0x40 )
            goto LABEL_61;
          goto LABEL_155;
        }
        if ( !v47 )
        {
          v50 = *(_QWORD *)a2;
          if ( (unsigned int)v46 > 0x40 )
            v50 = *(_QWORD *)(v50 + 8LL * ((unsigned int)(v46 - 1) >> 6));
          v31 = -1;
          if ( (v50 & (1LL << ((unsigned __int8)v46 - 1))) != 0 )
            goto LABEL_154;
LABEL_182:
          v31 = sub_2205DB0(a2, &v84);
          goto LABEL_154;
        }
LABEL_175:
        v49 = 1LL << ((unsigned __int8)v97 - 1);
        if ( v97 <= 0x40 )
        {
          v31 = 1;
          if ( (v49 & v96) != 0 )
            goto LABEL_61;
        }
        else if ( (v49 & *(_QWORD *)(v96 + 8LL * ((v97 - 1) >> 6))) != 0 )
        {
          v31 = 1;
LABEL_155:
          v32 = v84;
          if ( !v84 )
            goto LABEL_61;
          goto LABEL_60;
        }
        goto LABEL_182;
      }
      sub_2206B70(&v96, &v84, v46);
      v89 = 0;
      v51 = *(_DWORD *)(a2 + 8);
      v88 = v97;
      v87 = (void *)v96;
      if ( v51 == v97 )
      {
        if ( !*(_BYTE *)(a2 + 12) )
        {
          v31 = sub_2205E20(a2, &v87);
          goto LABEL_191;
        }
        goto LABEL_262;
      }
      if ( v51 <= v97 )
      {
        if ( v51 < v97 )
        {
          if ( *(_BYTE *)(a2 + 12) )
          {
            sub_2206CD0(&v96, a2, v97);
            v95 = 1;
          }
          else
          {
            sub_2206B70(&v96, a2, v97);
            v95 = 0;
          }
          v94 = v97;
          v93 = (void *)v96;
          v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v87);
          if ( v94 > 0x40 )
          {
            v52 = v93;
            if ( v93 )
              goto LABEL_190;
          }
          goto LABEL_191;
        }
        if ( !*(_BYTE *)(a2 + 12) )
        {
          v62 = *(_QWORD *)a2;
          if ( v51 > 0x40 )
            v62 = *(_QWORD *)(v62 + 8LL * ((v51 - 1) >> 6));
          v31 = -1;
          if ( (v62 & (1LL << ((unsigned __int8)v51 - 1))) != 0 )
            goto LABEL_191;
LABEL_271:
          v31 = sub_2205DB0(a2, &v87);
          goto LABEL_191;
        }
LABEL_262:
        v61 = 1LL << ((unsigned __int8)v97 - 1);
        if ( v97 <= 0x40 )
        {
          v31 = 1;
          if ( (v61 & v96) != 0 )
            goto LABEL_153;
        }
        else if ( (v61 & *(_QWORD *)(v96 + 8LL * ((v97 - 1) >> 6))) != 0 )
        {
          v31 = 1;
LABEL_192:
          v48 = v87;
          if ( !v87 )
            goto LABEL_153;
          goto LABEL_152;
        }
        goto LABEL_271;
      }
      sub_2206B70(&v96, &v87, v51);
      v92 = 0;
      v64 = *(_DWORD *)(a2 + 8);
      v91 = v97;
      v90 = (void *)v96;
      if ( v64 == v97 )
      {
        if ( !*(_BYTE *)(a2 + 12) )
        {
          v31 = sub_2205E20(a2, &v90);
          goto LABEL_294;
        }
      }
      else
      {
        if ( v64 > v97 )
        {
          sub_2206B70(&v96, &v90, v64);
          v95 = 0;
          v94 = v97;
          v93 = (void *)v96;
          v31 = sub_98E2D0((__int64 *)a2, (__int64 *)&v93);
          if ( v94 <= 0x40 )
            goto LABEL_294;
LABEL_292:
          if ( v93 )
            operator delete[](v93);
          goto LABEL_294;
        }
        if ( v64 < v97 )
        {
          if ( *(_BYTE *)(a2 + 12) )
          {
            sub_2206CD0(&v96, a2, v97);
            v95 = 1;
          }
          else
          {
            sub_2206B70(&v96, a2, v97);
            v95 = 0;
          }
          v94 = v97;
          v93 = (void *)v96;
          v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v90);
          if ( v94 <= 0x40 )
            goto LABEL_294;
          goto LABEL_292;
        }
        if ( !*(_BYTE *)(a2 + 12) )
        {
          v75 = *(_QWORD *)a2;
          if ( v64 > 0x40 )
            v75 = *(_QWORD *)(v75 + 8LL * ((v64 - 1) >> 6));
          v31 = -1;
          if ( (v75 & (1LL << ((unsigned __int8)v64 - 1))) != 0 )
          {
LABEL_294:
            if ( v91 <= 0x40 )
              goto LABEL_191;
            goto LABEL_295;
          }
LABEL_395:
          v31 = sub_2205DB0(a2, &v90);
          goto LABEL_294;
        }
      }
      v73 = 1LL << ((unsigned __int8)v97 - 1);
      if ( v97 <= 0x40 )
      {
        v31 = 1;
        if ( (v73 & v96) != 0 )
          goto LABEL_191;
      }
      else if ( (v73 & *(_QWORD *)(v96 + 8LL * ((v97 - 1) >> 6))) != 0 )
      {
        v31 = 1;
LABEL_295:
        v52 = v90;
        if ( v90 )
LABEL_190:
          operator delete[](v52);
LABEL_191:
        if ( v88 <= 0x40 )
          goto LABEL_153;
        goto LABEL_192;
      }
      goto LABEL_395;
    }
    v35 = *(_BYTE *)(a2 + 12);
    if ( v35 )
    {
      sub_2206CD0(&v96, a2, 64);
      v36 = v97;
      v37 = v96;
      v86 = 1;
    }
    else
    {
      sub_2206B70(&v96, a2, 64);
      v36 = v97;
      v37 = v96;
      v86 = 0;
    }
    v85 = v97;
    v84 = (_QWORD *)v96;
    if ( v36 == v79 )
    {
      if ( v80 == v35 )
      {
        if ( !v35 )
        {
          v31 = sub_2205E20(&v84, &v78);
          goto LABEL_99;
        }
      }
      else if ( v35 )
      {
        v31 = 1;
        if ( ((unsigned __int64)v78 & (1LL << ((unsigned __int8)v79 - 1))) != 0 )
          goto LABEL_99;
      }
      else if ( ((1LL << ((unsigned __int8)v36 - 1)) & v37) != 0 )
      {
        v7 = *(_DWORD *)(a2 + 8);
        v8 = 1;
        goto LABEL_8;
      }
      v31 = sub_2205DB0(&v84, &v78);
LABEL_99:
      if ( v36 <= 0x40 )
        goto LABEL_65;
      v33 = v84;
      if ( !v84 )
        goto LABEL_65;
LABEL_64:
      operator delete[](v33);
      goto LABEL_65;
    }
    if ( v36 <= v79 )
    {
      if ( v35 )
      {
        sub_2206CD0(&v96, &v84, v79);
        v38 = v97;
        v39 = v96;
        v89 = 1;
      }
      else
      {
        sub_2206B70(&v96, &v84, v79);
        v38 = v97;
        v39 = v96;
        v89 = 0;
      }
      v88 = v97;
      v87 = (void *)v96;
      if ( v38 == v79 )
      {
        if ( v80 == v35 )
        {
          if ( !v35 )
          {
            v31 = sub_2205E20(&v87, &v78);
            goto LABEL_95;
          }
        }
        else if ( v35 )
        {
          v31 = 1;
          if ( ((unsigned __int64)v78 & (1LL << ((unsigned __int8)v79 - 1))) != 0 )
            goto LABEL_95;
        }
        else
        {
          v31 = -1;
          if ( (v39 & (1LL << ((unsigned __int8)v38 - 1))) != 0 )
          {
LABEL_98:
            v36 = v85;
            goto LABEL_99;
          }
        }
        v31 = sub_2205DB0(&v87, &v78);
        goto LABEL_95;
      }
      if ( v38 <= v79 )
      {
        if ( v35 )
        {
          sub_2206CD0(&v96, &v87, v79);
          v95 = 1;
        }
        else
        {
          sub_2206B70(&v96, &v87, v79);
          v95 = 0;
        }
        v94 = v97;
        v93 = (void *)v96;
        v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v78);
        if ( v94 <= 0x40 )
          goto LABEL_94;
        v40 = v93;
        if ( !v93 )
          goto LABEL_94;
LABEL_93:
        operator delete[](v40);
LABEL_94:
        v38 = v88;
LABEL_95:
        if ( v38 > 0x40 && v87 )
          operator delete[](v87);
        goto LABEL_98;
      }
      sub_2206B70(&v96, &v78, v38);
      v92 = 0;
      v91 = v97;
      v90 = (void *)v96;
      v38 = v88;
      if ( v88 == v97 )
      {
        if ( v89 == v92 )
        {
          v31 = sub_2205E20(&v87, &v90);
          goto LABEL_205;
        }
      }
      else
      {
        if ( v88 > v91 )
        {
          sub_2206B70(&v96, &v90, v88);
          v95 = 0;
          v94 = v97;
          v93 = (void *)v96;
          v31 = sub_98E2D0((__int64 *)&v87, (__int64 *)&v93);
          if ( v94 <= 0x40 )
            goto LABEL_205;
LABEL_203:
          if ( v93 )
            operator delete[](v93);
          goto LABEL_205;
        }
        if ( v88 < v91 )
        {
          if ( v89 )
          {
            sub_2206CD0(&v96, &v87, v91);
            v95 = 1;
          }
          else
          {
            sub_2206B70(&v96, &v87, v91);
            v95 = 0;
          }
          v94 = v97;
          v93 = (void *)v96;
          v31 = sub_98E2D0((__int64 *)&v93, (__int64 *)&v90);
          if ( v94 <= 0x40 )
            goto LABEL_205;
          goto LABEL_203;
        }
      }
      if ( v89 )
      {
        v69 = 1LL << ((unsigned __int8)v91 - 1);
        if ( v91 <= 0x40 )
        {
          v31 = 1;
          if ( (v69 & (unsigned __int64)v90) != 0 )
            goto LABEL_95;
        }
        else if ( (v69 & *((_QWORD *)v90 + ((v91 - 1) >> 6))) != 0 )
        {
          v31 = 1;
LABEL_206:
          v40 = v90;
          if ( !v90 )
            goto LABEL_94;
          goto LABEL_93;
        }
      }
      else
      {
        v60 = (unsigned __int64)v87;
        if ( v88 > 0x40 )
          v60 = *((_QWORD *)v87 + ((v88 - 1) >> 6));
        v31 = -1;
        if ( (v60 & (1LL << ((unsigned __int8)v88 - 1))) != 0 )
        {
LABEL_205:
          if ( v91 <= 0x40 )
            goto LABEL_94;
          goto LABEL_206;
        }
      }
      v31 = sub_2205DB0(&v87, &v90);
      goto LABEL_205;
    }
    sub_2206B70(&v96, &v78, v36);
    v41 = v97;
    v89 = 0;
    v43 = v85;
    v88 = v97;
    v87 = (void *)v96;
    if ( v97 == v85 )
    {
      if ( !v86 )
      {
        v31 = sub_2205E20(&v84, &v87);
        goto LABEL_127;
      }
    }
    else
    {
      if ( v97 < v85 )
      {
        sub_2206B70(&v96, &v87, v85);
        v92 = 0;
        v91 = v97;
        v90 = (void *)v96;
        if ( v97 == v85 )
        {
          if ( !v86 )
          {
            v31 = sub_2205E20(&v84, &v90);
            goto LABEL_123;
          }
        }
        else
        {
          if ( v97 < v85 )
          {
            sub_2206B70(&v96, &v90, v85);
            v95 = 0;
            v94 = v97;
            v93 = (void *)v96;
            v31 = sub_98E2D0((__int64 *)&v84, (__int64 *)&v93);
            if ( v94 <= 0x40 )
              goto LABEL_123;
            goto LABEL_121;
          }
          if ( v97 > v85 )
          {
            if ( v86 )
            {
              sub_2206CD0(&v96, &v84, v97);
              v95 = 1;
            }
            else
            {
              sub_2206B70(&v96, &v84, v97);
              v95 = 0;
            }
            v94 = v97;
            v93 = (void *)v96;
            v42 = (__int64 *)&v90;
            goto LABEL_120;
          }
          if ( !v86 )
          {
            v67 = (__int64)v84;
            if ( v85 > 0x40 )
              v67 = v84[(v85 - 1) >> 6];
            v31 = -1;
            if ( (v67 & (1LL << ((unsigned __int8)v85 - 1))) != 0 )
            {
LABEL_123:
              if ( v91 > 0x40 )
                goto LABEL_124;
LABEL_126:
              v41 = v88;
              goto LABEL_127;
            }
            goto LABEL_324;
          }
        }
        v66 = 1LL << ((unsigned __int8)v97 - 1);
        if ( v97 <= 0x40 )
        {
          v31 = 1;
          if ( (v66 & v96) != 0 )
            goto LABEL_126;
        }
        else if ( (v66 & *(_QWORD *)(v96 + 8LL * ((v97 - 1) >> 6))) != 0 )
        {
          v31 = 1;
LABEL_124:
          if ( v90 )
            operator delete[](v90);
          goto LABEL_126;
        }
LABEL_324:
        v31 = sub_2205DB0(&v84, &v90);
        goto LABEL_123;
      }
      if ( v97 > v85 )
      {
        if ( v86 )
        {
          sub_2206CD0(&v96, &v84, v97);
          v92 = 1;
        }
        else
        {
          sub_2206B70(&v96, &v84, v97);
          v92 = 0;
        }
        v91 = v97;
        v90 = (void *)v96;
        v41 = v88;
        if ( v97 == v88 )
        {
          if ( v92 == v89 )
          {
            if ( !v92 )
            {
              v31 = sub_2205E20(&v90, &v87);
              goto LABEL_123;
            }
            goto LABEL_266;
          }
        }
        else
        {
          if ( v91 > v88 )
          {
            if ( v89 )
            {
              sub_2206CD0(&v96, &v87, v97);
              v95 = 1;
            }
            else
            {
              sub_2206B70(&v96, &v87, v97);
              v95 = 0;
            }
            v94 = v97;
            v93 = (void *)v96;
            v31 = sub_98E2D0((__int64 *)&v90, (__int64 *)&v93);
            if ( v94 <= 0x40 )
              goto LABEL_123;
            goto LABEL_121;
          }
          if ( v91 < v88 )
          {
            if ( v92 )
            {
              sub_2206CD0(&v96, &v90, v88);
              v95 = 1;
            }
            else
            {
              sub_2206B70(&v96, &v90, v88);
              v95 = 0;
            }
            v94 = v97;
            v93 = (void *)v96;
            v42 = (__int64 *)&v87;
LABEL_120:
            v31 = sub_98E2D0((__int64 *)&v93, v42);
            if ( v94 <= 0x40 )
              goto LABEL_123;
LABEL_121:
            if ( v93 )
              operator delete[](v93);
            goto LABEL_123;
          }
        }
        if ( v92 )
        {
          if ( !v89 )
          {
            v70 = (unsigned __int64)v87;
            if ( v88 > 0x40 )
              v70 = *((_QWORD *)v87 + ((v88 - 1) >> 6));
            if ( (v70 & (1LL << ((unsigned __int8)v88 - 1))) != 0 )
            {
              v31 = 1;
              goto LABEL_123;
            }
          }
          goto LABEL_266;
        }
        v59 = 1LL << ((unsigned __int8)v97 - 1);
        if ( v97 > 0x40 )
        {
          if ( (v59 & *((_QWORD *)v90 + ((v97 - 1) >> 6))) != 0 )
          {
            v31 = -1;
            goto LABEL_124;
          }
LABEL_266:
          v31 = sub_2205DB0(&v90, &v87);
          goto LABEL_123;
        }
        v31 = -1;
        if ( (v59 & (unsigned __int64)v90) == 0 )
          goto LABEL_266;
LABEL_127:
        if ( v41 <= 0x40 )
        {
LABEL_130:
          v43 = v85;
LABEL_131:
          v36 = v43;
          goto LABEL_99;
        }
LABEL_128:
        if ( v87 )
          operator delete[](v87);
        goto LABEL_130;
      }
      if ( !v86 )
      {
        v58 = (__int64)v84;
        if ( v85 > 0x40 )
          v58 = v84[(v85 - 1) >> 6];
        v31 = -1;
        if ( (v58 & (1LL << ((unsigned __int8)v85 - 1))) != 0 )
          goto LABEL_127;
LABEL_228:
        v31 = sub_2205DB0(&v84, &v87);
        goto LABEL_127;
      }
    }
    v57 = 1LL << ((unsigned __int8)v97 - 1);
    if ( v97 <= 0x40 )
    {
      v31 = 1;
      if ( (v96 & v57) != 0 )
        goto LABEL_131;
    }
    else if ( (v57 & *(_QWORD *)(v96 + 8LL * ((v97 - 1) >> 6))) != 0 )
    {
      v31 = 1;
      goto LABEL_128;
    }
    goto LABEL_228;
  }
LABEL_9:
  v11 = *(_BYTE *)(a2 + 12);
  v97 = v7;
  if ( v7 <= 0x40 )
  {
    v12 = *(_QWORD *)a2;
    goto LABEL_11;
  }
LABEL_24:
  sub_2205510(&v96);
  v7 = v97;
  if ( v97 > 0x40 )
  {
    sub_2205FC0(&v96, a2);
    goto LABEL_14;
  }
  v12 = v96;
LABEL_11:
  v13 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v7) & ~v12;
  if ( !v7 )
    v13 = 0;
  v96 = v13;
LABEL_14:
  sub_2205900(&v96);
  v14 = v96;
  v95 = v11;
  v15 = (*(_BYTE *)(a2 + 19) & 0x20) == 0;
  v94 = v97;
  v16 = v15;
  v93 = (void *)v96;
  if ( v97 <= 0x40 )
  {
    *(_DWORD *)(a1 + 8) = v97;
    *(_QWORD *)a1 = v14;
    v17 = *(_DWORD *)(a2 + 16);
    *(_BYTE *)(a1 + 12) = v15;
    *(_DWORD *)(a1 + 16) = v17;
    return a1;
  }
LABEL_26:
  sub_2205510(&v96);
  v21 = v97;
  v22 = v94 <= 0x40;
  *(_BYTE *)(a1 + 12) = v16;
  *(_DWORD *)(a1 + 8) = v21;
  *(_QWORD *)a1 = v96;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  if ( !v22 && v93 )
    operator delete[](v93);
  return a1;
}
