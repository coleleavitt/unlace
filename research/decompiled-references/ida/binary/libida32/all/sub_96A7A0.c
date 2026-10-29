void __fastcall sub_96A7A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // r10
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  unsigned __int64 v26; // rsi
  char v27; // cl
  unsigned int v28; // edx
  int v29; // r12d
  void *v30; // rdi
  __int64 v31; // rax
  char v32; // r15
  unsigned int v33; // r14d
  unsigned __int64 v34; // rax
  unsigned int v35; // r14d
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // r15d
  __int64 v39; // rsi
  __int64 v40; // rsi
  unsigned int v41; // r14d
  void *v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  __int64 v47; // rsi
  unsigned __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdx
  char v52; // [rsp+Fh] [rbp-B9h]
  void *v53; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+18h] [rbp-B0h]
  char v55; // [rsp+1Ch] [rbp-ACh]
  void *v56; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+28h] [rbp-A0h]
  char v58; // [rsp+2Ch] [rbp-9Ch]
  void *v59; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-90h]
  char v61; // [rsp+3Ch] [rbp-8Ch]
  void *v62; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-80h]
  char v64; // [rsp+4Ch] [rbp-7Ch]
  void *v65; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-70h]
  char v67; // [rsp+5Ch] [rbp-6Ch]
  unsigned __int64 v68; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v69; // [rsp+68h] [rbp-60h]
  __int64 v70; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v71; // [rsp+78h] [rbp-50h]
  char v72; // [rsp+7Ch] [rbp-4Ch]
  char v73; // [rsp+80h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 24);
  LOBYTE(v70) = 0;
  v4 = sub_969060(&v70, v3);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x2B )
    {
      v6 = *(_QWORD **)(a1 + 80);
      v7 = *(unsigned int *)(a1 + 88);
      v70 = v5;
      v8 = sub_966D20(v6, (__int64)&v6[v7], &v70);
      if ( v10 != v8 )
      {
        v11 = *(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(((__int64)v8 - v9) >> 3);
        if ( *(_DWORD *)v11 != 15 && *(int *)v11 > 3 )
        {
          *(_DWORD *)v11 = 1;
          *(_QWORD *)(v11 + 8) = 0;
        }
      }
    }
  }
  v12 = *(_QWORD *)(a2 + 16);
  LOBYTE(v70) = 0;
  v13 = sub_969060(&v70, v12);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x2B )
    {
      v15 = *(_QWORD **)(a1 + 80);
      v16 = *(unsigned int *)(a1 + 88);
      v70 = v14;
      v17 = sub_966D20(v15, (__int64)&v15[v16], &v70);
      if ( v19 != v17 )
      {
        v20 = ((__int64)v17 - v18) >> 3;
        v21 = sub_BD9810(*(_QWORD *)(a2 + 24));
        v22 = sub_B685F0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
        sub_C1ADC0(&v70, v21, v22, 0);
        if ( !v73 )
        {
LABEL_11:
          sub_96A770((__int64)&v70);
          return;
        }
        v23 = *(_QWORD *)(a1 + 32);
        v54 = 64;
        v53 = nullptr;
        v55 = 0;
        if ( v71 == 64 )
        {
          if ( v72 )
            v29 = sub_21E2070(&v70, &v53);
          else
            v29 = sub_21E20E0(&v70, &v53);
LABEL_40:
          if ( !v29 )
          {
            v31 = v23 + 16LL * (unsigned int)v20;
            if ( (*(_DWORD *)v31 & 3) == 3 && *(_DWORD *)v31 != 15 )
            {
              *(_DWORD *)v31 = 15;
              *(_QWORD *)(v31 + 8) = 0;
            }
          }
          goto LABEL_11;
        }
        if ( v71 > 0x40 )
        {
          sub_21E2E30(&v68, &v53, v71);
          v24 = v69;
          v58 = 0;
          v57 = v69;
          v56 = (void *)v68;
          if ( v71 == v69 )
          {
            if ( !v72 )
            {
              v29 = sub_21E20E0(&v70, &v56);
              goto LABEL_34;
            }
LABEL_91:
            v39 = 1LL << ((unsigned __int8)v69 - 1);
            if ( v69 <= 0x40 )
            {
              if ( (v39 & v68) != 0 )
              {
                if ( v54 > 0x40 && v53 )
                  operator delete[](v53);
                goto LABEL_11;
              }
            }
            else if ( (v39 & *(_QWORD *)(v68 + 8LL * ((v69 - 1) >> 6))) != 0 )
            {
              v29 = 1;
LABEL_35:
              v30 = v56;
              if ( v56 )
LABEL_36:
                operator delete[](v30);
LABEL_37:
              if ( v54 > 0x40 && v53 )
                operator delete[](v53);
              goto LABEL_40;
            }
            goto LABEL_98;
          }
          if ( v71 <= v69 )
          {
            if ( v71 < v69 )
            {
              v52 = v72;
              if ( v72 )
              {
                sub_21E2F90(&v68, &v70, v69);
                v25 = v69;
                v26 = v68;
                v64 = 1;
                v27 = v52;
              }
              else
              {
                sub_21E2E30(&v68, &v70, v69);
                v25 = v69;
                v26 = v68;
                v64 = 0;
                v27 = 0;
              }
              v63 = v69;
              v62 = (void *)v68;
              v28 = v57;
              if ( v57 == v25 )
              {
                if ( v58 == v27 )
                {
                  if ( v27 )
                    goto LABEL_154;
                  v29 = sub_21E20E0(&v62, &v56);
                  goto LABEL_29;
                }
              }
              else
              {
                if ( v57 < v25 )
                {
                  if ( v58 )
                  {
                    sub_21E2F90(&v68, &v56, v25);
                    v67 = 1;
                  }
                  else
                  {
                    sub_21E2E30(&v68, &v56, v25);
                    v67 = 0;
                  }
                  v66 = v69;
                  v65 = (void *)v68;
                  v29 = sub_96A590((__int64 *)&v62, (__int64 *)&v65);
                  if ( v66 > 0x40 )
                  {
LABEL_26:
                    if ( v65 )
                      operator delete[](v65);
                  }
LABEL_28:
                  v25 = v63;
                  goto LABEL_29;
                }
                if ( v57 > v25 )
                {
                  if ( v27 )
                  {
                    sub_21E2F90(&v68, &v62, v57);
                    v67 = 1;
                  }
                  else
                  {
                    sub_21E2E30(&v68, &v62, v57);
                    v67 = 0;
                  }
                  v66 = v69;
                  v65 = (void *)v68;
                  v29 = sub_96A590((__int64 *)&v65, (__int64 *)&v56);
                  if ( v66 > 0x40 )
                    goto LABEL_26;
                  goto LABEL_28;
                }
              }
              if ( !v27 )
              {
                v45 = 1LL << ((unsigned __int8)v25 - 1);
                if ( v25 <= 0x40 )
                {
                  v29 = -1;
                  if ( (v26 & v45) != 0 )
                    goto LABEL_33;
                }
                else if ( (v45 & *(_QWORD *)(v26 + 8LL * ((v25 - 1) >> 6))) != 0 )
                {
                  v29 = -1;
                  goto LABEL_30;
                }
                goto LABEL_154;
              }
              if ( v58 )
                goto LABEL_154;
              v46 = (unsigned __int64)v56;
              if ( v57 > 0x40 )
                v46 = *((_QWORD *)v56 + ((v57 - 1) >> 6));
              v29 = 1;
              if ( (v46 & (1LL << ((unsigned __int8)v57 - 1))) == 0 )
LABEL_154:
                v29 = sub_21E2070(&v62, &v56);
LABEL_29:
              if ( v25 <= 0x40 )
              {
LABEL_32:
                v28 = v57;
LABEL_33:
                v24 = v28;
                goto LABEL_34;
              }
LABEL_30:
              if ( v62 )
                operator delete[](v62);
              goto LABEL_32;
            }
            if ( !v72 )
            {
              v40 = v70;
              if ( v71 > 0x40 )
                v40 = *(_QWORD *)(v70 + 8LL * ((v71 - 1) >> 6));
              v29 = -1;
              if ( (v40 & (1LL << ((unsigned __int8)v71 - 1))) == 0 )
LABEL_98:
                v29 = sub_21E2070(&v70, &v56);
LABEL_34:
              if ( v24 <= 0x40 )
                goto LABEL_37;
              goto LABEL_35;
            }
            goto LABEL_91;
          }
          sub_21E2E30(&v68, &v56, v71);
          v41 = v69;
          v61 = 0;
          v60 = v69;
          v59 = (void *)v68;
          if ( v71 == v69 )
          {
            if ( !v72 )
            {
              v29 = sub_21E20E0(&v70, &v59);
              goto LABEL_108;
            }
LABEL_127:
            v44 = 1LL << ((unsigned __int8)v69 - 1);
            if ( v69 <= 0x40 )
            {
              v29 = 1;
              if ( (v44 & v68) != 0 )
                goto LABEL_111;
            }
            else
            {
              v29 = 1;
              if ( (v44 & *(_QWORD *)(v68 + 8LL * ((v69 - 1) >> 6))) != 0 )
              {
LABEL_109:
                if ( v59 )
                  operator delete[](v59);
                goto LABEL_111;
              }
            }
            goto LABEL_129;
          }
          if ( v71 <= v69 )
          {
            if ( v71 < v69 )
            {
              if ( v72 )
              {
                sub_21E2F90(&v68, &v70, v69);
                v67 = 1;
              }
              else
              {
                sub_21E2E30(&v68, &v70, v69);
                v67 = 0;
              }
              v66 = v69;
              v65 = (void *)v68;
              v29 = sub_96A590((__int64 *)&v65, (__int64 *)&v59);
              if ( v66 <= 0x40 )
                goto LABEL_107;
              v42 = v65;
              if ( !v65 )
                goto LABEL_107;
LABEL_106:
              operator delete[](v42);
LABEL_107:
              v41 = v60;
              goto LABEL_108;
            }
            if ( !v72 )
            {
              v49 = v70;
              if ( v71 > 0x40 )
                v49 = *(_QWORD *)(v70 + 8LL * ((v71 - 1) >> 6));
              v29 = -1;
              if ( (v49 & (1LL << ((unsigned __int8)v71 - 1))) == 0 )
LABEL_129:
                v29 = sub_21E2070(&v70, &v59);
LABEL_108:
              if ( v41 > 0x40 )
                goto LABEL_109;
LABEL_111:
              v24 = v57;
              goto LABEL_34;
            }
            goto LABEL_127;
          }
          sub_21E2E30(&v68, &v59, v71);
          v64 = 0;
          v63 = v69;
          v62 = (void *)v68;
          if ( v71 == v69 )
          {
            if ( !v72 )
            {
              v29 = sub_21E20E0(&v70, &v62);
              goto LABEL_138;
            }
          }
          else
          {
            if ( v71 > v69 )
            {
              sub_21E2E30(&v68, &v62, v71);
              v67 = 0;
              v66 = v69;
              v65 = (void *)v68;
              v29 = sub_96A590(&v70, (__int64 *)&v65);
              if ( v66 <= 0x40 )
                goto LABEL_138;
LABEL_136:
              if ( v65 )
                operator delete[](v65);
              goto LABEL_138;
            }
            if ( v71 < v69 )
            {
              if ( v72 )
              {
                sub_21E2F90(&v68, &v70, v69);
                v67 = 1;
              }
              else
              {
                sub_21E2E30(&v68, &v70, v69);
                v67 = 0;
              }
              v66 = v69;
              v65 = (void *)v68;
              v29 = sub_96A590((__int64 *)&v65, (__int64 *)&v62);
              if ( v66 <= 0x40 )
                goto LABEL_138;
              goto LABEL_136;
            }
            if ( !v72 )
            {
              v51 = v70;
              if ( v71 > 0x40 )
                v51 = *(_QWORD *)(v70 + 8LL * ((v71 - 1) >> 6));
              v29 = -1;
              if ( (v51 & (1LL << ((unsigned __int8)v71 - 1))) != 0 )
              {
LABEL_138:
                if ( v63 <= 0x40 )
                  goto LABEL_107;
                goto LABEL_139;
              }
LABEL_192:
              v29 = sub_21E2070(&v70, &v62);
              goto LABEL_138;
            }
          }
          v50 = 1LL << ((unsigned __int8)v69 - 1);
          if ( v69 <= 0x40 )
          {
            v29 = 1;
            if ( (v50 & v68) != 0 )
              goto LABEL_107;
          }
          else
          {
            v29 = 1;
            if ( (v50 & *(_QWORD *)(v68 + 8LL * ((v69 - 1) >> 6))) != 0 )
            {
LABEL_139:
              v42 = v62;
              if ( !v62 )
                goto LABEL_107;
              goto LABEL_106;
            }
          }
          goto LABEL_192;
        }
        v32 = v72;
        if ( v72 )
        {
          sub_21E2F90(&v68, &v70, 64);
          v33 = v69;
          v34 = v68;
          v61 = 1;
        }
        else
        {
          sub_21E2E30(&v68, &v70, 64);
          v33 = v69;
          v34 = v68;
          v61 = 0;
        }
        v60 = v69;
        v59 = (void *)v68;
        if ( v54 == v33 )
        {
          if ( v55 != v32 )
            goto LABEL_70;
          if ( v32 )
          {
LABEL_75:
            v29 = sub_21E2070(&v59, &v53);
            goto LABEL_64;
          }
          v29 = sub_21E20E0(&v59, &v53);
          goto LABEL_64;
        }
        if ( v54 >= v33 )
        {
          if ( v54 > v33 )
          {
            if ( v32 )
            {
              sub_21E2F90(&v68, &v59, v54);
              v35 = v69;
              v36 = v68;
              v64 = 1;
            }
            else
            {
              sub_21E2E30(&v68, &v59, v54);
              v35 = v69;
              v36 = v68;
              v64 = 0;
            }
            v63 = v69;
            v62 = (void *)v68;
            if ( v54 == v35 )
            {
              if ( v55 == v32 )
              {
                if ( v32 )
                  goto LABEL_124;
                v29 = sub_21E20E0(&v62, &v53);
                goto LABEL_60;
              }
            }
            else
            {
              if ( v54 < v35 )
              {
                sub_21E2E30(&v68, &v53, v35);
                v67 = 0;
                v66 = v69;
                v65 = (void *)v68;
                v29 = sub_96A590((__int64 *)&v62, (__int64 *)&v65);
                if ( v66 > 0x40 )
                  goto LABEL_57;
                goto LABEL_59;
              }
              if ( v54 > v35 )
              {
                if ( v32 )
                {
                  sub_21E2F90(&v68, &v62, v54);
                  v67 = 1;
                }
                else
                {
                  sub_21E2E30(&v68, &v62, v54);
                  v67 = 0;
                }
                v66 = v69;
                v65 = (void *)v68;
                v29 = sub_96A590((__int64 *)&v65, (__int64 *)&v53);
                if ( v66 > 0x40 )
                {
LABEL_57:
                  if ( v65 )
                    operator delete[](v65);
                }
LABEL_59:
                v35 = v63;
                goto LABEL_60;
              }
            }
            if ( !v32 )
            {
              v43 = 1LL << ((unsigned __int8)v35 - 1);
              if ( v35 <= 0x40 )
              {
                v29 = -1;
                if ( (v36 & v43) != 0 )
                  goto LABEL_63;
                goto LABEL_124;
              }
              v29 = -1;
              if ( (v43 & *(_QWORD *)(v36 + 8LL * ((v35 - 1) >> 6))) == 0 )
              {
LABEL_124:
                v29 = sub_21E2070(&v62, &v53);
                goto LABEL_60;
              }
LABEL_61:
              if ( v62 )
                operator delete[](v62);
              goto LABEL_63;
            }
            v29 = 1;
            if ( ((unsigned __int64)v53 & (1LL << ((unsigned __int8)v54 - 1))) == 0 )
              goto LABEL_124;
LABEL_60:
            if ( v35 > 0x40 )
              goto LABEL_61;
LABEL_63:
            v33 = v60;
            goto LABEL_64;
          }
LABEL_70:
          if ( v32 )
          {
            v29 = 1;
            if ( ((unsigned __int64)v53 & (1LL << ((unsigned __int8)v54 - 1))) != 0 )
              goto LABEL_64;
          }
          else
          {
            v37 = 1LL << ((unsigned __int8)v33 - 1);
            if ( v33 <= 0x40 )
            {
              if ( (v34 & v37) != 0 )
                goto LABEL_11;
            }
            else if ( (v37 & *(_QWORD *)(v34 + 8LL * ((v33 - 1) >> 6))) != 0 )
            {
              v29 = -1;
LABEL_65:
              v30 = v59;
              if ( !v59 )
                goto LABEL_37;
              goto LABEL_36;
            }
          }
          goto LABEL_75;
        }
        sub_21E2E30(&v68, &v53, v33);
        v38 = v69;
        v64 = 0;
        v33 = v60;
        v63 = v69;
        v62 = (void *)v68;
        if ( v69 == v60 )
        {
          if ( v61 )
            goto LABEL_156;
          v29 = sub_21E20E0(&v59, &v62);
        }
        else
        {
          if ( v69 < v60 )
          {
            sub_21E2E30(&v68, &v62, v60);
            v67 = 0;
            v66 = v69;
            v65 = (void *)v68;
            v29 = sub_96A590((__int64 *)&v59, (__int64 *)&v65);
            if ( v66 > 0x40 )
              goto LABEL_85;
            goto LABEL_87;
          }
          if ( v69 > v60 )
          {
            if ( v61 )
            {
              sub_21E2F90(&v68, &v59, v69);
              v67 = 1;
            }
            else
            {
              sub_21E2E30(&v68, &v59, v69);
              v67 = 0;
            }
            v66 = v69;
            v65 = (void *)v68;
            v29 = sub_96A590((__int64 *)&v65, (__int64 *)&v62);
            if ( v66 > 0x40 )
            {
LABEL_85:
              if ( v65 )
                operator delete[](v65);
            }
LABEL_87:
            v38 = v63;
            goto LABEL_88;
          }
          if ( v61 )
          {
LABEL_156:
            v47 = 1LL << ((unsigned __int8)v69 - 1);
            if ( v69 > 0x40 )
            {
              if ( (v47 & *(_QWORD *)(v68 + 8LL * ((v69 - 1) >> 6))) != 0 )
              {
                v29 = 1;
                goto LABEL_61;
              }
              goto LABEL_162;
            }
            v29 = 1;
            if ( (v68 & v47) == 0 )
            {
LABEL_162:
              v29 = sub_21E2070(&v59, &v62);
              goto LABEL_88;
            }
LABEL_64:
            if ( v33 <= 0x40 )
              goto LABEL_37;
            goto LABEL_65;
          }
          v48 = (unsigned __int64)v59;
          if ( v60 > 0x40 )
            v48 = *((_QWORD *)v59 + ((v60 - 1) >> 6));
          v29 = -1;
          if ( (v48 & (1LL << ((unsigned __int8)v60 - 1))) == 0 )
            goto LABEL_162;
        }
LABEL_88:
        if ( v38 <= 0x40 )
          goto LABEL_63;
        goto LABEL_61;
      }
    }
  }
}

