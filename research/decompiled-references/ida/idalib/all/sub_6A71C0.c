__int64 __fastcall sub_6A71C0(__int64 a1, __int64 a2, __int64 *a3, char **a4, __int64 a5, int a6, double a7, double a8)
{
  _BYTE *v9; // rdx
  int v10; // eax
  char *v13; // rcx
  unsigned int v14; // r10d
  char v15; // al
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int8 v19; // al
  int v20; // r15d
  int v21; // r15d
  char j; // al
  int v23; // r9d
  const char *v24; // r8
  char v25; // ah
  unsigned int v26; // eax
  void *v27; // rdi
  char *v28; // rsi
  char *v29; // rax
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34; // r13
  int v35; // r9d
  char v36; // r13
  int v37; // eax
  void *v38; // rdx
  void *v39; // rax
  _BYTE *v40; // rax
  int v41; // r9d
  int v42; // r12d
  __int64 v43; // rcx
  int i; // r15d
  unsigned int v45; // eax
  int v46; // r15d
  char v47; // al
  int v48; // r9d
  const char *v49; // r8
  unsigned int v50; // eax
  char v51; // dl
  int v52; // [rsp+0h] [rbp-98h]
  int v53; // [rsp+0h] [rbp-98h]
  void **v54; // [rsp+8h] [rbp-90h]
  void **v55; // [rsp+8h] [rbp-90h]
  unsigned int v56; // [rsp+8h] [rbp-90h]
  int v57; // [rsp+8h] [rbp-90h]
  unsigned int v58; // [rsp+8h] [rbp-90h]
  unsigned int v59; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+10h] [rbp-88h]
  int v61; // [rsp+10h] [rbp-88h]
  int v62; // [rsp+10h] [rbp-88h]
  unsigned int v63; // [rsp+10h] [rbp-88h]
  unsigned int v64; // [rsp+10h] [rbp-88h]
  int v65; // [rsp+18h] [rbp-80h]
  int v66; // [rsp+18h] [rbp-80h]
  int v67; // [rsp+1Ch] [rbp-7Ch]
  int v68; // [rsp+20h] [rbp-78h]
  int v69; // [rsp+20h] [rbp-78h]
  char v70; // [rsp+27h] [rbp-71h] BYREF
  int v71; // [rsp+28h] [rbp-70h] BYREF
  int v72; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v73; // [rsp+30h] [rbp-68h] BYREF
  void *v74; // [rsp+38h] [rbp-60h] BYREF
  void *v75; // [rsp+40h] [rbp-58h] BYREF
  __int128 v76; // [rsp+48h] [rbp-50h]
  void *v77; // [rsp+58h] [rbp-40h]

  v77 = (void *)__readfsqword(0x28u);
  v9 = (_BYTE *)*a3;
  v73 = (__int64)v9;
  if ( !v9 || !*v9 )
    return (unsigned int)-1;
  v10 = *(_DWORD *)(a2 + 520);
  if ( v10 )
  {
    *(_DWORD *)(a2 + 520) = v10 + 1;
  }
  else
  {
    v13 = nullptr;
    if ( a4 )
      v13 = *a4;
    v14 = (**(__int64 (__fastcall ***)(__int64, __int64, _BYTE *, char *))a2)(a2, a5, v9, v13);
    if ( v14 )
      goto LABEL_12;
    v9 = (_BYTE *)v73;
  }
  v15 = *v9 & 0xF;
  switch ( v15 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      v16 = (__int64)(v9 + 1);
      v73 = (__int64)(v9 + 1);
      if ( !v15 || v9[1] != 0xFE )
        goto LABEL_11;
      if ( (unsigned __int8)sub_5383A0((unsigned __int8 **)&v73, nullptr, nullptr) )
        goto LABEL_55;
      goto LABEL_18;
    case 10:
      v40 = v9 + 1;
      LODWORD(v74) = 0;
      v75 = v9 + 1;
      if ( (~*v9 & 0x30) == 0 )
      {
        v40 = v9 + 2;
        v75 = v9 + 2;
        if ( v9[1] == 0xFF )
        {
          v40 = v9 + 3;
          v75 = v9 + 3;
        }
      }
      if ( *v40 == 0xFE )
      {
        v51 = sub_5383A0((unsigned __int8 **)&v75, &v74, nullptr);
        LODWORD(v40) = 0;
        if ( v51 )
          LODWORD(v40) = (_DWORD)v75;
      }
      v14 = sub_6A71C0(
              a1,
              a2,
              (int)&v73,
              (int)a4,
              0,
              a6,
              v52,
              (int)v54,
              v60,
              v65,
              v68,
              v71,
              (int)v40,
              v74,
              (__int64)v75,
              v76,
              *((__int64 *)&v76 + 1));
      if ( v14 )
        goto LABEL_12;
      if ( (char)v74 >= 0 )
        goto LABEL_55;
      v14 = sub_6A71C0(
              a1,
              a2,
              (int)&v73,
              (int)a4,
              0,
              v41,
              v53,
              v57,
              v62,
              v66,
              v69,
              v71,
              v73,
              v74,
              (__int64)v75,
              v76,
              *((__int64 *)&v76 + 1));
      if ( v14 )
        goto LABEL_12;
      sub_6B37B0(&v73, 0);
      goto LABEL_55;
    case 11:
      v75 = v9 + 1;
      if ( (*v9 & 0x10) != 0 )
      {
        v54 = &v75;
        if ( (int)sub_6B3760(&v75) < 0 )
          goto LABEL_63;
      }
      else
      {
        v54 = &v75;
        if ( !(unsigned __int8)sub_568510((char **)&v75, &v72, (int *)&v74) )
          goto LABEL_63;
      }
      v39 = v75;
      if ( v75 )
      {
        if ( *(_BYTE *)v75 != 0xFE )
          goto LABEL_52;
        if ( (unsigned __int8)sub_5383A0((unsigned __int8 **)&v75, nullptr, nullptr) )
        {
          v39 = v75;
LABEL_52:
          v73 = (__int64)v39;
          v38 = &v73;
LABEL_53:
          v14 = sub_6A71C0(
                  a1,
                  a2,
                  (int)v38,
                  (int)a4,
                  0,
                  v35,
                  v52,
                  (int)v54,
                  v60,
                  v65,
                  v68,
                  v71,
                  v73,
                  v74,
                  (__int64)v75,
                  v76,
                  *((__int64 *)&v76 + 1));
LABEL_54:
          if ( v14 )
            goto LABEL_12;
          goto LABEL_55;
        }
      }
LABEL_63:
      v39 = nullptr;
      goto LABEL_52;
    case 12:
      v29 = sub_567180(v9 + 1, nullptr, nullptr);
      v28 = v29 + 1;
      v73 = (__int64)(v29 + 1);
      LOBYTE(v29) = *v29 & 0xF0;
      if ( (_BYTE)v29 == 0xC0 )
      {
        if ( !(unsigned __int8)sub_6B37B0(&v73, &v71) )
          goto LABEL_18;
        LODWORD(v29) = v71;
        v28 = (char *)v73;
      }
      else
      {
        LODWORD(v29) = (unsigned __int8)v29;
      }
      v71 = (int)v29;
      if ( *v28 == -2 )
      {
        if ( !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v73, nullptr, nullptr) )
          goto LABEL_18;
        v28 = (char *)v73;
      }
      v30 = resolve_typedef(a1, v28);
      if ( v30 )
      {
        v34 = *v30;
        v74 = (void *)v73;
        v73 = (__int64)sub_56C090(a1, (char *)v73, v31, v32, v33, a7, a8);
        v36 = v34 & 0x3F;
        if ( !v73 )
          goto LABEL_18;
        if ( v36 == 1 )
          goto LABEL_45;
      }
      else
      {
        v74 = (void *)v73;
        v73 = (__int64)sub_56C090(a1, (char *)v73, v31, v32, v33, a7, a8);
        if ( !v73 )
          goto LABEL_18;
      }
      v37 = v71;
      if ( (unsigned int)(v71 - 208) > 0x2F )
      {
LABEL_46:
        if ( v37 != 32 )
        {
          v75 = nullptr;
          v76 = 0;
          v45 = sub_6B3760(&v73);
          LODWORD(v54) = v45;
          if ( v45 > 0xFF )
          {
            if ( v75 )
            {
              *(_QWORD *)&v76 = 0;
              qfree(v75);
            }
            goto LABEL_18;
          }
          v46 = 0;
          if ( v45 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)v73 == 0xFF )
              {
                ++v73;
                if ( !(unsigned __int8)sub_6B37B0(&v73, &v72) )
                  goto LABEL_98;
              }
              v47 = sub_567540((__int64)&v75, a4);
              LODWORD(v49) = 0;
              if ( v47 )
              {
                v49 = haystack;
                if ( (_QWORD)v76 )
                  LODWORD(v49) = (_DWORD)v75;
              }
              v50 = sub_6A71C0(
                      a1,
                      a2,
                      (int)&v73,
                      (int)a4,
                      (int)v49,
                      v48,
                      v52,
                      (int)v54,
                      v60,
                      v65,
                      v68,
                      v71,
                      v73,
                      v74,
                      (__int64)v75,
                      v76,
                      *((__int64 *)&v76 + 1));
              v14 = v50;
              if ( v50 )
                break;
              if ( (unsigned int)(v71 - 208) <= 0x2F )
                extract_argloc(0, &v73, 0);
              if ( (_DWORD)v54 == ++v46 )
                goto LABEL_98;
            }
            if ( v75 )
            {
              v58 = v50;
              *(_QWORD *)&v76 = 0;
              qfree(v75);
              v14 = v58;
            }
            goto LABEL_12;
          }
LABEL_98:
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75);
          }
        }
        v38 = &v74;
        goto LABEL_53;
      }
      extract_argloc(0, &v73, 0);
LABEL_45:
      v37 = v71;
      goto LABEL_46;
    case 13:
      v16 = (__int64)(v9 + 1);
      v73 = (__int64)(v9 + 1);
      v19 = *v9 & 0x30;
      if ( v19 == 32 )
      {
        v70 = 0;
        v42 = sub_6B38E0(&v73, &v70);
        if ( v42 )
        {
          v43 = v73;
          if ( *(_BYTE *)v73 != 0xFE )
          {
LABEL_82:
            v16 = v43 + 1;
            v73 = v16;
            if ( v42 <= 0 )
              goto LABEL_11;
            for ( i = 0; i != v42; ++i )
            {
              sub_567540(0, a4);
              sub_6B37B0(&v73, &v75);
            }
            goto LABEL_55;
          }
        }
        else
        {
          if ( !v70 )
            goto LABEL_65;
          if ( *(_BYTE *)v73 != 0xFE )
          {
            v16 = v73 + 1;
            goto LABEL_11;
          }
        }
        if ( !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v73, nullptr, nullptr) )
          goto LABEL_18;
        v43 = v73;
        goto LABEL_82;
      }
      if ( v19 > 0x20u )
      {
        if ( v19 != 48 )
          goto LABEL_11;
        goto LABEL_65;
      }
      v70 = 0;
      v20 = sub_6B38E0(&v73, &v70);
      if ( !v20 )
      {
        if ( v70 )
        {
          v16 = v73;
          v71 = 0;
          if ( (*(_BYTE *)v73 & 0xCF ^ 0xC0u) > 1 )
            goto LABEL_11;
          if ( !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v73, &v71, nullptr) )
            goto LABEL_18;
          v75 = nullptr;
          v76 = 0;
          goto LABEL_113;
        }
LABEL_65:
        sub_567540(0, (char **)&v73);
        v16 = v73;
        goto LABEL_11;
      }
      v71 = 0;
      if ( (*(_BYTE *)v73 & 0xCF ^ 0xC0u) <= 1 && !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v73, &v71, nullptr) )
        goto LABEL_18;
      v75 = nullptr;
      v76 = 0;
      if ( v20 >> 3 <= 0 )
      {
LABEL_113:
        if ( (v71 & 0x400) != 0 )
        {
          sub_6B3810(&v73, &v74);
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree(v75);
          }
        }
LABEL_55:
        v16 = v73;
LABEL_11:
        *a3 = v16;
        v14 = 0;
        goto LABEL_12;
      }
      v21 = 0;
      v55 = &v75;
      for ( j = sub_567540((__int64)&v75, a4); ; j = sub_567540((__int64)v55, a4) )
      {
        LODWORD(v24) = 0;
        if ( j )
        {
          v24 = haystack;
          if ( (_QWORD)v76 )
            LODWORD(v24) = (_DWORD)v75;
        }
        v14 = sub_6A71C0(
                a1,
                a2,
                (int)&v73,
                (int)a4,
                (int)v24,
                v23,
                v52,
                (int)v55,
                (int)v24,
                v65,
                v68,
                v71,
                v73,
                v74,
                (__int64)v75,
                v76,
                *((__int64 *)&v76 + 1));
        v25 = BYTE1(v71);
        if ( v14 )
          goto LABEL_36;
        if ( (v71 & 0x200) != 0 )
        {
          v26 = sub_581710(a1, a2, (char **)&v73, (int)a4, v61);
          v14 = 0;
          if ( v26 )
          {
            v14 = v26;
            v25 = BYTE1(v71);
LABEL_36:
            if ( (v25 & 4) == 0 )
            {
              v27 = v75;
              if ( !v75 )
                goto LABEL_12;
              goto LABEL_38;
            }
LABEL_123:
            v59 = v14;
            sub_6B3810(&v73, &v74);
            v14 = v59;
LABEL_121:
            v27 = v75;
            if ( !v75 )
              goto LABEL_54;
LABEL_38:
            v56 = v14;
            *(_QWORD *)&v76 = 0;
            qfree(v27);
            v14 = v56;
            goto LABEL_54;
          }
        }
        v72 = 0;
        if ( (*(_BYTE *)v73 & 0xCF ^ 0xC0u) > 1 )
        {
          if ( (v71 & 0x400) == 0 )
            goto LABEL_27;
LABEL_76:
          v64 = v14;
          sub_6B3810(&v73, &v74);
          v14 = v64;
          goto LABEL_27;
        }
        v63 = v14;
        if ( !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v73, &v72, nullptr) )
          break;
        v14 = v63;
        if ( (v71 & 0x400) != 0 && (v72 & 0x200) == 0 )
          goto LABEL_76;
LABEL_27:
        if ( v67 == ++v21 )
        {
          if ( (v71 & 0x400) == 0 )
            goto LABEL_121;
          goto LABEL_123;
        }
      }
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree(v75);
      }
LABEL_18:
      v14 = -1;
LABEL_12:
      v17 = *(_DWORD *)(a2 + 520);
      if ( v17 )
        *(_DWORD *)(a2 + 520) = v17 - 1;
      return v14;
    case 14:
      v73 = (__int64)(v9 + 1);
      sub_6B3760(&v73);
      v16 = v73;
      goto LABEL_11;
    default:
      goto LABEL_18;
  }
}
