__int64 __fastcall sub_BFA6A0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v11; // eax
  char v12; // bp
  __int64 v13; // rdx
  void *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  int v18; // r15d
  unsigned int v19; // eax
  unsigned int v20; // edx
  bool v21; // al
  void *v22; // rdi
  char v23; // r14
  unsigned __int64 v24; // rsi
  unsigned int v25; // eax
  void *v26; // rdi
  unsigned __int64 v27; // r15
  unsigned int v28; // r14d
  int v29; // r15d
  char v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rdx
  void *v33; // rdx
  unsigned __int64 v34; // r15
  unsigned int v35; // r14d
  int v36; // r15d
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  bool v40; // zf
  unsigned __int64 v41; // rdx
  unsigned int v42; // r14d
  unsigned int v43; // r14d
  void **v44; // rsi
  unsigned int v45; // eax
  bool v46; // si
  char v47; // al
  __int64 v48; // rdx
  __int64 v49; // rdx
  char v50; // r14
  unsigned __int64 v51; // rsi
  unsigned int v52; // eax
  void *v53; // rdi
  __int64 *v54; // rbx
  void *v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdx
  void *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rax
  bool v63; // cc
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned int v68; // eax
  void *v69; // rax
  __int64 v70; // r15
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v74; // [rsp+10h] [rbp-D8h]
  void *v75; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v76; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v77; // [rsp+2Ch] [rbp-BCh]
  void *v78; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v79; // [rsp+38h] [rbp-B0h]
  void *v80; // [rsp+40h] [rbp-A8h] BYREF
  signed __int64 v81; // [rsp+48h] [rbp-A0h]
  __int64 v82; // [rsp+50h] [rbp-98h] BYREF
  void *v83; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v84; // [rsp+68h] [rbp-80h]
  char v85; // [rsp+6Ch] [rbp-7Ch]

  switch ( a4 )
  {
    case 2:
      LOBYTE(v15) = sub_BF7B20(a1, a2, a3, a5, 2 * *(_DWORD *)(a3 + 8), a6);
      return v15;
    case 3:
    case 4:
      v84 = 64;
      v85 = 0;
      v83 = nullptr;
      v18 = sub_96A590((__int64 *)a5, (__int64 *)&v83);
      if ( v84 > 0x40 && v83 )
        operator delete[](v83);
      if ( !v18 )
      {
        v54 = (__int64 *)sub_E0FED0(a1, a2, 2508, 0);
        v55 = (void *)sub_EC8B80(*(_QWORD *)(a2 + 24));
        if ( v54 )
        {
          v83 = v55;
          LOBYTE(v84) = 1;
          sub_AC88D0(v54, (__int64 *)&v83);
        }
        return 0;
      }
      v16 = *(unsigned __int8 *)(a5 + 12);
      if ( !(_BYTE)v16 )
      {
        LOBYTE(v19) = sub_BEC670((__int64 *)a5);
        v16 = v19;
        if ( (_BYTE)v19 )
        {
          v20 = *(_DWORD *)(a5 + 8);
          if ( !v20
            || (v20 <= 0x40
              ? (v21 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v20) == *(_QWORD *)a5)
              : (v74 = *(_DWORD *)(a5 + 8), v21 = v74 == (unsigned int)sub_21E2C40()),
                v21) )
          {
            if ( *(_BYTE *)(a3 + 12) )
            {
              v16 = *(unsigned __int8 *)(a3 + 12);
            }
            else if ( sub_BF27F0((__int64 *)a3) )
            {
              v70 = *(_QWORD *)(a2 + 8);
              sub_BF2AD0((__int64)&v80, a3, (unsigned int)(*(_DWORD *)(a3 + 8) + 1));
              sub_BF2C20((__int64)&v83, (__int64)&v80);
              v16 = sub_BF7400(a1, a2, (__int64)&v83, v70);
              if ( v84 > 0x40 && v83 )
                operator delete[](v83);
              if ( (unsigned int)v81 > 0x40 && v80 )
                operator delete[](v80);
            }
          }
        }
        else
        {
          v16 = 1;
        }
      }
      if ( a4 == 4 )
      {
        if ( *(_BYTE *)(a3 + 12) )
        {
          sub_21E4190(&v83, a3, a5);
          BYTE4(v81) = 1;
        }
        else
        {
          sub_21E43D0(&v83, a3, a5);
          BYTE4(v81) = 0;
        }
        LODWORD(v81) = v84;
        v80 = v83;
      }
      else
      {
        sub_BF2B90((__int64)&v80, a3);
      }
      sub_BF5070(a6, (__int64)&v80);
      if ( (unsigned int)v81 <= 0x40 )
        return v16;
      goto LABEL_20;
    case 5:
      return (unsigned int)sub_BFA5E0(a1, a2, a3, a5, *(_DWORD *)(a3 + 8) + 1, a6);
    case 6:
      v16 = *(unsigned __int8 *)(a3 + 12);
      v42 = *(_DWORD *)(a3 + 8);
      if ( (_BYTE)v16 )
      {
        v84 = *(_DWORD *)(a3 + 8);
        if ( v42 > 0x40 )
          sub_21E17D0(&v83);
        else
          v83 = *(void **)a3;
        sub_21E1D30(&v83, a5);
        BYTE4(v81) = 1;
        LODWORD(v81) = v84;
        v80 = v83;
        sub_BF5070(a6, (__int64)&v80);
        if ( (unsigned int)v81 <= 0x40 )
          return v16;
LABEL_20:
        v22 = v80;
        if ( !v80 )
          return v16;
      }
      else
      {
        v43 = v42 + 1;
        sub_BF2AD0((__int64)&v78, a5, v43);
        sub_BF2AD0((__int64)&v80, a3, v43);
        v84 = v81;
        if ( (unsigned int)v81 > 0x40 )
          sub_21E17D0(&v83);
        else
          v83 = v80;
        sub_21E1D30(&v83, &v78);
        v77 = 0;
        v76 = v84;
        v75 = v83;
        if ( (unsigned int)v81 > 0x40 && v80 )
          operator delete[](v80);
        if ( v79 > 0x40 && v78 )
          operator delete[](v78);
        v16 = v77;
        sub_21E2D00(&v83, &v75);
        BYTE4(v81) = v16;
        LODWORD(v81) = v84;
        v80 = v83;
        sub_BF5070(a6, (__int64)&v80);
        if ( (unsigned int)v81 > 0x40 && v80 )
          operator delete[](v80);
        v44 = (void **)a6;
        sub_BF2AD0((__int64)&v83, a6, v43);
        if ( v84 <= 0x40 )
        {
          LOBYTE(v16) = v83 == v75;
        }
        else
        {
          v44 = &v75;
          v16 = sub_21E2030(&v83, &v75);
          if ( v83 )
            operator delete[](v83);
        }
        if ( !(_BYTE)v16 )
        {
          if ( *(_BYTE *)(a1 + 915) )
          {
            v64 = sub_A3ED80(*(_QWORD *)(a1 + 16));
            v68 = sub_BDCD00(a2, (__int64)v44, v65, v66, v67);
            sub_FA3370(&v83, v64, v68, 2561);
            sub_BFA170(&v80, a6, 10, *(_BYTE *)(a6 + 12) ^ 1, 0, 1u, 1u);
            sub_AC84E0((unsigned __int8 **)&v83, v80, v81);
            sub_AC60B0((unsigned __int8 **)&v83, *(_QWORD *)(a2 + 8), 8u);
            v69 = (void *)sub_EC8B80(a2);
            LOBYTE(v79) = 1;
            v78 = v69;
            sub_AC88D0((__int64 *)&v83, (__int64 *)&v78);
            if ( v80 != &v82 )
              operator delete(v80);
            sub_AC6300((__int64)&v83);
          }
          v16 = sub_BF7400(a1, a2, (__int64)&v75, *(_QWORD *)(a2 + 8));
        }
        if ( v76 <= 0x40 )
          return v16;
        v22 = v75;
        if ( !v75 )
          return v16;
      }
      operator delete[](v22);
      return v16;
    case 7:
      if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0 )
      {
        v23 = *(_BYTE *)(a5 + 12);
        v24 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
        v25 = *(_DWORD *)(a5 + 8);
        LODWORD(v81) = v25;
        if ( v25 > 0x40 )
        {
          sub_21E1730(&v80, v24, 0);
          v25 = v81;
          v24 = (unsigned __int64)v80;
          LODWORD(v81) = 0;
          v63 = *(_DWORD *)(a5 + 8) <= 0x40u;
          v85 = v23;
          v84 = v25;
          v83 = v80;
          if ( !v63 )
          {
            sub_21E1E20(a5, &v83);
            v25 = v84;
            goto LABEL_27;
          }
        }
        else
        {
          v80 = (void *)v24;
          v84 = v25;
          v83 = (void *)v24;
          LODWORD(v81) = 0;
          v85 = v23;
        }
        *(_QWORD *)a5 &= v24;
LABEL_27:
        if ( v25 > 0x40 && v83 )
          operator delete[](v83);
        if ( (unsigned int)v81 > 0x40 )
        {
          v26 = v80;
          if ( v80 )
LABEL_32:
            operator delete[](v26);
        }
LABEL_33:
        v27 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
        v28 = *(_DWORD *)(a3 + 8) - 1;
        if ( !sub_9C8900(a5, v27) )
        {
          v27 = *(_QWORD *)a5;
          if ( *(_DWORD *)(a5 + 8) > 0x40u )
            v27 = *(_QWORD *)v27;
          v28 = v27;
          v27 = (unsigned int)v27;
        }
        v83 = (void *)v27;
        v84 = 64;
        v85 = 0;
        v29 = sub_96A590((__int64 *)a5, (__int64 *)&v83);
        if ( v84 > 0x40 && v83 )
          operator delete[](v83);
        if ( v29 )
        {
          v83 = (void *)sub_E0FF50(a1, a2, 2422, 0);
          if ( v83 )
          {
            sub_BF6570((unsigned __int8 ***)&v83, a5);
            if ( v83 )
            {
              sub_AC60B0((unsigned __int8 **)v83, *(_QWORD *)(a2 + 8), 8u);
              if ( v83 )
                sub_AC60B0((unsigned __int8 **)v83, *(unsigned int *)(a3 + 8), 3u);
            }
          }
          goto LABEL_166;
        }
        v30 = *(_BYTE *)(a3 + 12);
        if ( !v30 )
        {
          v62 = sub_E0E500(a1);
          v30 = *(_BYTE *)(a3 + 12);
          if ( *(char *)(v62 + 1) >= 0 )
          {
            if ( !v30 && sub_BEC670((__int64 *)a3) )
            {
              v83 = (void *)sub_E0FF50(a1, a2, 2427, 0);
              if ( v83 )
                sub_BF6570((unsigned __int8 ***)&v83, a3);
              goto LABEL_166;
            }
            if ( (unsigned int)sub_BF2A20(a3) < v28 )
            {
              sub_E0FF50(a1, a2, 2426, 0);
LABEL_166:
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
              v61 = *(_DWORD *)(a1 + 916);
              if ( v61 <= 1 )
              {
                if ( *(_BYTE *)(a1 + 915) )
                {
LABEL_168:
                  v30 = *(_BYTE *)(a3 + 12);
                  goto LABEL_42;
                }
                return 0;
              }
              if ( v61 <= 3 )
                goto LABEL_168;
LABEL_231:
              *(_QWORD *)&dword_0 = v37;
              BUG();
            }
          }
        }
LABEL_42:
        v31 = *(_DWORD *)(a3 + 8);
        v84 = v31;
        if ( v31 > 0x40 )
        {
          sub_21E17D0(&v83);
          v31 = v84;
          if ( v84 > 0x40 )
          {
            sub_21E63F0(&v83, v28);
            v33 = v83;
            v31 = v84;
LABEL_48:
            LODWORD(v81) = v31;
            v80 = v33;
            BYTE4(v81) = v30;
            goto LABEL_115;
          }
        }
        else
        {
          v83 = *(void **)a3;
        }
        v32 = 0;
        if ( v31 != v28 )
          v32 = (_QWORD)v83 << v28;
        v33 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v31) & v32);
        if ( !v31 )
          v33 = nullptr;
        goto LABEL_48;
      }
      if ( *(_BYTE *)(a5 + 12) || !sub_BEC670((__int64 *)a5) )
        goto LABEL_33;
      v83 = (void *)sub_E0FF50(a1, a2, 2444, 0);
      if ( v83 )
        sub_BF6570((unsigned __int8 ***)&v83, a5);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
      v71 = *(_DWORD *)(a1 + 916);
      if ( v71 > 1 )
      {
        if ( v71 > 3 )
          goto LABEL_231;
      }
      else if ( !*(_BYTE *)(a1 + 915) )
      {
        return 0;
      }
      sub_BF2C20((__int64)&v83, a5);
      sub_BF5070(a5, (__int64)&v83);
      if ( v84 <= 0x40 )
        goto LABEL_52;
      v53 = v83;
      if ( !v83 )
        goto LABEL_52;
      goto LABEL_132;
    case 8:
      if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
      {
        if ( !*(_BYTE *)(a5 + 12) && sub_BEC670((__int64 *)a5) )
        {
          v83 = (void *)sub_E0FF50(a1, a2, 2444, 0);
          if ( v83 )
            sub_BF6570((unsigned __int8 ***)&v83, a5);
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
          v72 = *(_DWORD *)(a1 + 916);
          if ( v72 > 1 )
          {
            if ( v72 > 3 )
              goto LABEL_231;
          }
          else if ( !*(_BYTE *)(a1 + 915) )
          {
            return 0;
          }
          sub_BF2C20((__int64)&v83, a5);
          sub_BF5070(a5, (__int64)&v83);
          if ( v84 > 0x40 )
          {
            v26 = v83;
            if ( v83 )
              goto LABEL_32;
          }
          goto LABEL_33;
        }
        goto LABEL_52;
      }
      v50 = *(_BYTE *)(a5 + 12);
      v51 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
      v52 = *(_DWORD *)(a5 + 8);
      LODWORD(v81) = v52;
      if ( v52 <= 0x40 )
      {
        v80 = (void *)v51;
        v84 = v52;
        v83 = (void *)v51;
        LODWORD(v81) = 0;
        v85 = v50;
LABEL_126:
        *(_QWORD *)a5 &= v51;
        goto LABEL_127;
      }
      sub_21E1730(&v80, v51, 0);
      v52 = v81;
      v51 = (unsigned __int64)v80;
      LODWORD(v81) = 0;
      v63 = *(_DWORD *)(a5 + 8) <= 0x40u;
      v85 = v50;
      v84 = v52;
      v83 = v80;
      if ( v63 )
        goto LABEL_126;
      sub_21E1E20(a5, &v83);
      v52 = v84;
LABEL_127:
      if ( v52 > 0x40 && v83 )
        operator delete[](v83);
      if ( (unsigned int)v81 <= 0x40 )
        goto LABEL_52;
      v53 = v80;
      if ( !v80 )
        goto LABEL_52;
LABEL_132:
      operator delete[](v53);
LABEL_52:
      v34 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
      v35 = *(_DWORD *)(a3 + 8) - 1;
      if ( !sub_9C8900(a5, v34) )
      {
        v34 = *(_QWORD *)a5;
        if ( *(_DWORD *)(a5 + 8) > 0x40u )
          v34 = *(_QWORD *)v34;
        v35 = v34;
        v34 = (unsigned int)v34;
      }
      v83 = (void *)v34;
      v84 = 64;
      v85 = 0;
      v36 = sub_96A590((__int64 *)a5, (__int64 *)&v83);
      if ( v84 > 0x40 && v83 )
        operator delete[](v83);
      if ( v36 )
      {
        v83 = (void *)sub_E0FF50(a1, a2, 2422, 0);
        if ( v83 )
        {
          sub_BF6570((unsigned __int8 ***)&v83, a5);
          if ( v83 )
          {
            sub_AC60B0((unsigned __int8 **)v83, *(_QWORD *)(a2 + 8), 8u);
            if ( v83 )
              sub_AC60B0((unsigned __int8 **)v83, *(unsigned int *)(a3 + 8), 3u);
          }
        }
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
        v38 = *(_DWORD *)(a1 + 916);
        if ( v38 > 1 )
        {
          if ( v38 > 3 )
            goto LABEL_231;
        }
        else if ( !*(_BYTE *)(a1 + 915) )
        {
          return 0;
        }
      }
      v39 = *(_DWORD *)(a3 + 8);
      v40 = *(_BYTE *)(a3 + 12) == 0;
      v84 = v39;
      if ( !v40 )
      {
        if ( v39 > 0x40 )
        {
          sub_21E17D0(&v83);
          v39 = v84;
          if ( v84 > 0x40 )
          {
            sub_21E6E90(&v83, v35);
            v41 = (unsigned __int64)v83;
LABEL_71:
            v80 = (void *)v41;
            BYTE4(v81) = 1;
            LODWORD(v81) = v84;
            goto LABEL_115;
          }
        }
        else
        {
          v83 = *(void **)a3;
        }
        v41 = 0;
        if ( v35 != v39 )
          v41 = (unsigned __int64)v83 >> v35;
        goto LABEL_71;
      }
      if ( v39 > 0x40 )
      {
        sub_21E17D0(&v83);
        v39 = v84;
        if ( v84 > 0x40 )
        {
          sub_21E31B0(&v83, v35);
          v60 = v83;
          v39 = v84;
          goto LABEL_161;
        }
        v56 = (__int64)v83;
      }
      else
      {
        v56 = *(_QWORD *)a3;
      }
      v57 = 0;
      if ( v39 )
        v57 = v56 << (64 - (unsigned __int8)v39) >> (64 - (unsigned __int8)v39);
      v58 = v57 >> 63;
      v59 = v57 >> v35;
      if ( v35 == v39 )
        v59 = v58;
      v60 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v39) & v59);
      if ( !v39 )
        v60 = nullptr;
LABEL_161:
      LODWORD(v81) = v39;
      v80 = v60;
      BYTE4(v81) = 0;
      goto LABEL_115;
    case 10:
      if ( *(_BYTE *)(a3 + 12) )
        v45 = (unsigned int)sub_21E2070(a3, a5) >> 31;
      else
        v45 = (unsigned int)sub_21E20E0(a3, a5) >> 31;
      goto LABEL_107;
    case 11:
      if ( *(_BYTE *)(a3 + 12) )
        v46 = (int)sub_21E2070(a3, a5) > 0;
      else
        v46 = (int)sub_21E20E0(a3, a5) > 0;
      goto LABEL_101;
    case 12:
      if ( *(_BYTE *)(a3 + 12) )
        v46 = (int)sub_21E2070(a3, a5) <= 0;
      else
        v46 = (int)sub_21E20E0(a3, a5) <= 0;
      goto LABEL_101;
    case 13:
      if ( *(_BYTE *)(a3 + 12) )
        v46 = (int)sub_21E2070(a3, a5) >= 0;
      else
        v46 = (int)sub_21E20E0(a3, a5) >= 0;
LABEL_101:
      v16 = 1;
      sub_BF2840((_DWORD *)a6, v46);
      return v16;
    case 14:
      if ( *(_DWORD *)(a3 + 8) <= 0x40u )
        LOBYTE(v45) = *(_QWORD *)a3 == *(_QWORD *)a5;
      else
        LOBYTE(v45) = sub_21E2030(a3, a5);
      goto LABEL_107;
    case 15:
      if ( *(_DWORD *)(a3 + 8) <= 0x40u )
        v47 = *(_QWORD *)a3 == *(_QWORD *)a5;
      else
        v47 = sub_21E2030(a3, a5);
      LOBYTE(v45) = v47 ^ 1;
LABEL_107:
      sub_BF2840((_DWORD *)a6, (unsigned __int8)v45);
      return 1;
    case 16:
      v11 = *(_DWORD *)(a3 + 8);
      v12 = *(_BYTE *)(a3 + 12);
      v84 = v11;
      if ( v11 <= 0x40 )
      {
        v48 = *(_QWORD *)a3;
LABEL_110:
        v14 = (void *)(*(_QWORD *)a5 & v48);
        goto LABEL_114;
      }
      sub_21E17D0(&v83);
      v11 = v84;
      if ( v84 <= 0x40 )
      {
        v48 = (__int64)v83;
        goto LABEL_110;
      }
      sub_21E1E20(&v83, a5);
      v14 = v83;
      v11 = v84;
      goto LABEL_114;
    case 17:
      v11 = *(_DWORD *)(a3 + 8);
      v12 = *(_BYTE *)(a3 + 12);
      v84 = v11;
      if ( v11 <= 0x40 )
      {
        v49 = *(_QWORD *)a3;
LABEL_113:
        v14 = (void *)(*(_QWORD *)a5 ^ v49);
        goto LABEL_114;
      }
      sub_21E17D0(&v83);
      v11 = v84;
      if ( v84 <= 0x40 )
      {
        v49 = (__int64)v83;
        goto LABEL_113;
      }
      sub_21E1F80(&v83, a5);
      v14 = v83;
      v11 = v84;
      goto LABEL_114;
    case 18:
      v11 = *(_DWORD *)(a3 + 8);
      v12 = *(_BYTE *)(a3 + 12);
      v84 = v11;
      if ( v11 <= 0x40 )
      {
        v13 = *(_QWORD *)a3;
LABEL_4:
        v14 = (void *)(*(_QWORD *)a5 | v13);
        goto LABEL_114;
      }
      sub_21E17D0(&v83);
      v11 = v84;
      if ( v84 <= 0x40 )
      {
        v13 = (__int64)v83;
        goto LABEL_4;
      }
      sub_21E1ED0(&v83, a5);
      v14 = v83;
      v11 = v84;
LABEL_114:
      LODWORD(v81) = v11;
      v80 = v14;
      BYTE4(v81) = v12;
LABEL_115:
      sub_BF5070(a6, (__int64)&v80);
      if ( (unsigned int)v81 > 0x40 && v80 )
        operator delete[](v80);
      return 1;
    default:
      v16 = 0;
      sub_E0FED0(a1, a2, 108, 0);
      return v16;
  }
}

