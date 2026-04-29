__int64 __fastcall sub_20DD40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  const char *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  const char *v9; // r13
  int v10; // r12d
  unsigned __int64 v11; // rbx
  char v12; // di
  unsigned __int64 v13; // rbp
  size_t v14; // rbx
  char *v15; // rdi
  char *v16; // rbp
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned __int64 v20; // r12
  unsigned int v21; // edx
  char tinfo_property; // al
  int v23; // ecx
  int v24; // eax
  bool v25; // cf
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // rax
  unsigned __int64 v31; // r13
  const char *v32; // r14
  char *v33; // rax
  unsigned __int64 v34; // rax
  char *v35; // rax
  signed __int64 v36; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rbp
  size_t v42; // rbx
  const void *v43; // rbp
  char *v44; // rdi
  __int64 v45; // rbx
  char *v46; // r12
  unsigned __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // rbx
  char *v52; // rbp
  unsigned __int64 v53; // r15
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  void *v58; // rdi
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  unsigned __int64 v63; // [rsp+8h] [rbp-C0h]
  unsigned int v64; // [rsp+10h] [rbp-B8h]
  __int64 v65; // [rsp+10h] [rbp-B8h]
  unsigned int v66; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v67; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v68; // [rsp+20h] [rbp-A8h]
  int v69; // [rsp+28h] [rbp-A0h]
  int v70; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v71; // [rsp+30h] [rbp-98h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  __int64 v74; // [rsp+48h] [rbp-80h]
  unsigned __int64 v75; // [rsp+50h] [rbp-78h]
  unsigned __int64 v76; // [rsp+58h] [rbp-70h]
  int v77; // [rsp+63h] [rbp-65h]
  char *s1; // [rsp+70h] [rbp-58h] BYREF
  __int128 v80; // [rsp+78h] [rbp-50h]
  unsigned __int64 v81; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v81 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = *(const char **)a2;
    v71 = v3 - 1;
    v35 = strrchr(*(const char **)a2, 58);
    if ( v35 )
    {
      v36 = v35 - v4;
      LODWORD(v4) = v36 + 1;
      if ( v36 == -1 )
        LODWORD(v4) = 0;
    }
    else
    {
      LODWORD(v4) = 0;
    }
  }
  else
  {
    v71 = 0;
    LODWORD(v4) = 0;
  }
  v76 = 0;
  v63 = 0;
  v68 = v71;
  v74 = 0;
  v69 = 0;
  v70 = 0;
  v75 = -1;
  v77 = a3 != 0;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_5;
    v7 = (int)v4;
    v8 = v3 - 1;
    v9 = *(const char **)a2;
    if ( (int)v4 >= v8 )
    {
      v10 = (_DWORD)v4 + 1;
      v11 = v10;
      if ( v10 < v8 )
        goto LABEL_19;
LABEL_43:
      v13 = v7;
      if ( v8 <= v7 )
        v13 = v8;
      v14 = v8 - v13;
      goto LABEL_24;
    }
    do
    {
      if ( v9[v7] != 95 )
        break;
      ++v7;
    }
    while ( v8 != v7 );
    v10 = v7 + 1;
    v11 = (int)v7 + 1;
    if ( v11 >= v8 )
      goto LABEL_43;
LABEL_19:
    while ( 1 )
    {
      v12 = v9[v11];
      if ( v12 == 95 )
        break;
      if ( (unsigned int)v12 <= 0x7F && isalpha(v12) && isupper(v12) )
      {
        v19 = v9[v10 - 1];
        if ( v19 > 0x7F || !isupper(v19) )
          break;
        v11 = ++v10;
        if ( v10 >= v8 )
          goto LABEL_43;
      }
      else
      {
        v11 = ++v10;
        if ( v10 >= v8 )
          goto LABEL_43;
      }
    }
    if ( v8 < v11 )
      goto LABEL_43;
    v13 = v7;
    if ( v11 <= v7 )
      v13 = v11;
    v14 = v11 - v13;
LABEL_24:
    s1 = nullptr;
    v80 = 0;
    if ( !v14 )
      goto LABEL_5;
    v15 = nullptr;
    if ( v14 != -1 )
    {
      s1 = (char *)qvector_reserve((__int64)&s1, 0, v14 + 1, 1);
      v15 = s1;
    }
    *(_QWORD *)&v80 = v14 + 1;
    memmove(v15, &v9[v13], v14);
    s1[v14] = 0;
    v16 = s1;
    v72 = *((_QWORD *)&v80 + 1);
    v17 = v80;
    if ( v7 == -1 || (unsigned __int64)v80 <= 1 )
      break;
    v4 = (const char *)(v80 + v7 - 1);
    *v16 = tolower((unsigned __int8)*s1);
    if ( !qword_4EEA80 )
      goto LABEL_32;
    v18 = 24;
    if ( (*(_QWORD *)qword_4EEA80 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_47;
    if ( (*(_BYTE *)(*(_QWORD *)qword_4EEA80 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_32:
      if ( v63 > 1 && v69 != v70 + 1 && v68 == v71 )
      {
        if ( (unsigned __int8)sub_32E540(v16) )
          v7 = v68;
        v68 = v7;
      }
      goto LABEL_35;
    }
    v65 = qword_4EEA80;
    v67 = v17;
    v31 = *(_QWORD *)qword_4EEA80 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      v32 = ::s1;
      if ( *(_QWORD *)(v31 + 32) )
        v32 = *(const char **)(v31 + 24);
      if ( strcmp(v16, v32) < 0 )
      {
        v31 = *(_QWORD *)(v31 + 8);
        goto LABEL_78;
      }
      if ( strcmp(v32, v16) >= 0 )
        break;
      v31 = *(_QWORD *)(v31 + 16);
LABEL_78:
      if ( (*(_BYTE *)v31 & 2) != 0 )
        goto LABEL_32;
    }
    v18 = v31 + 24;
    v20 = v31;
    v17 = v67;
    if ( v20 == v65 )
      goto LABEL_32;
LABEL_47:
    v21 = *(_DWORD *)(v18 + 24);
    if ( (v21 & 2) != 0 )
    {
      if ( v16 )
        qfree((__int64)v16);
      goto LABEL_105;
    }
    if ( (v21 & 0x80u) == 0
      || !a3
      || (v64 = v21, tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
      && (v21 = v64, (tinfo_property & 0xFu) <= 8) )
    {
      if ( v63 <= 1 )
      {
        if ( (v21 & 1) != 0 )
          goto LABEL_62;
        if ( v7 != 0 && (unsigned __int64)v4 < v71 && (v21 & 0x40) != 0 )
        {
          if ( (v21 & 0x10) == 0 || !a3 )
            goto LABEL_86;
LABEL_64:
          v27 = *(__int64 **)(a3 + 32);
          v28 = *v27;
          v29 = *v27 + 72 * v27[1];
          if ( v28 == v29 )
            goto LABEL_70;
          while ( 1 )
          {
            while ( *(_DWORD *)(v28 + 8) != 52 )
            {
              v28 += 72;
              if ( v29 == v28 )
                goto LABEL_70;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v28 + 24) + 8LL) == 65 )
              break;
            v28 += 72;
            if ( v29 == v28 )
              goto LABEL_70;
          }
        }
LABEL_35:
        if ( v16 )
          goto LABEL_36;
        goto LABEL_37;
      }
      v23 = v69;
      v24 = v70 + 1;
      if ( v70 + 1 == v69 )
      {
        if ( (v21 & 4) != 0 )
        {
          v63 = 0;
          goto LABEL_52;
        }
        if ( (v21 & 1) != 0 )
          goto LABEL_61;
        LOBYTE(v24) = v7 != 0;
        v25 = (unsigned __int64)v4 < v71;
LABEL_59:
        LOBYTE(v23) = v25;
        v26 = (v21 >> 6) & v23 & v24;
      }
      else
      {
        v23 = v71;
        if ( v68 != v71 )
        {
          if ( (v21 & 1) == 0 )
          {
            LOBYTE(v24) = v7 != 0;
            v25 = (unsigned __int64)v4 < v71;
            goto LABEL_59;
          }
LABEL_61:
          if ( (v21 & 0x20) == 0 )
          {
LABEL_62:
            if ( (v21 & 0x10) != 0 && a3 )
              goto LABEL_64;
LABEL_70:
            if ( (v21 & 0x40) == 0 )
            {
              v63 = v17;
              BYTE2(v77) = BYTE1(v21);
              v76 = v72;
              v30 = (char *)v74;
              v74 = (__int64)v16;
              v16 = v30;
              v75 = (unsigned __int64)v4;
              v70 = v69;
              v68 = v71;
              goto LABEL_35;
            }
LABEL_86:
            v63 = v17;
            BYTE2(v77) = BYTE1(v21);
            v76 = v72;
            v33 = (char *)v74;
            v74 = (__int64)v16;
            v16 = v33;
            v75 = v7;
            v70 = v69;
            v68 = v71;
          }
          goto LABEL_35;
        }
        if ( (v21 & 8) != 0 )
        {
          if ( (v21 & 1) == 0 )
          {
            v34 = v68;
            goto LABEL_93;
          }
LABEL_99:
          v68 = v7;
          goto LABEL_61;
        }
        v66 = v21;
        v59 = sub_32E540(v16);
        v21 = v66;
        v23 = v59;
        if ( (_BYTE)v59 )
        {
          if ( (v66 & 1) != 0 )
            goto LABEL_61;
          v61 = v71;
          LOBYTE(v61) = (unsigned __int64)v4 < v71;
          LOBYTE(v23) = v7 != 0;
          v26 = (v66 >> 6) & v23 & v61;
        }
        else
        {
          if ( (v66 & 1) != 0 )
            goto LABEL_99;
          v34 = v71;
LABEL_93:
          v68 = v7;
          LOBYTE(v34) = (unsigned __int64)v4 < v34;
          LOBYTE(v23) = v7 != 0;
          v26 = (v21 >> 6) & v23 & v34;
        }
      }
      if ( (_BYTE)v26 )
        goto LABEL_61;
      goto LABEL_35;
    }
LABEL_52:
    if ( v16 )
LABEL_36:
      qfree((__int64)v16);
LABEL_37:
    ++v69;
    v3 = *(_QWORD *)(a2 + 8);
  }
  if ( s1 )
    qfree((__int64)s1);
LABEL_5:
  if ( v63 <= 1 || v68 - v75 <= 1 )
  {
LABEL_105:
    v6 = 0;
  }
  else
  {
    if ( a1 )
    {
      if ( (v77 & 0x10000) != 0 )
      {
        v5 = *a1;
        *a1 = v74;
        a1[1] = v63;
        a1[2] = v76;
        if ( (v77 & 0x20000) == 0 )
        {
          v74 = v5;
          v6 = 1;
          goto LABEL_106;
        }
        v48 = v74;
        v74 = v5;
LABEL_141:
        v51 = 2;
        v52 = "ed";
        if ( *(_BYTE *)(v48 + v63 - 2) == 101 )
        {
          v51 = 1;
          v52 = "d";
        }
        goto LABEL_136;
      }
      v38 = *(_QWORD *)(a2 + 8);
      if ( !v38 )
        goto LABEL_125;
      v39 = v38 - 1;
      if ( v39 < v68 )
      {
        v57 = v75;
        if ( v75 > v39 )
          v57 = v39;
        v41 = v57;
        v42 = v39 - v57;
      }
      else
      {
        v40 = v75;
        if ( v75 > v68 )
          v40 = v68;
        v41 = v40;
        v42 = v68 - v40;
      }
      s1 = nullptr;
      v80 = 0;
      v43 = (const void *)(*(_QWORD *)a2 + v41);
      if ( v42 )
      {
        v44 = nullptr;
        if ( v42 != -1 )
        {
          s1 = (char *)qvector_reserve((__int64)&s1, 0, v42 + 1, 1);
          v44 = s1;
        }
        *(_QWORD *)&v80 = v42 + 1;
        memmove(v44, v43, v42);
        s1[v42] = 0;
        v45 = v80;
        v46 = s1;
        if ( (unsigned __int64)v80 > 1 )
        {
          v58 = (void *)*a1;
          if ( a1[2] < (unsigned __int64)v80 )
          {
            v60 = qvector_reserve((__int64)a1, *a1, v80, 1);
            *a1 = v60;
            v58 = (void *)v60;
          }
          a1[1] = v45;
          memmove(v58, v46, v45 - 1);
          *(_BYTE *)(*a1 + v45 - 1) = 0;
          v46 = s1;
        }
        else
        {
          a1[1] = 0;
        }
        if ( v46 )
        {
          *(_QWORD *)&v80 = 0;
          qfree((__int64)v46);
        }
      }
      else
      {
LABEL_125:
        a1[1] = 0;
      }
      if ( (v77 & 0x20000) != 0 )
      {
        v47 = a1[1];
        v76 = a1[2];
        v48 = *a1;
        v63 = v47;
        if ( v47 )
        {
          if ( v47 != 1 )
            goto LABEL_141;
          v51 = 2;
          v52 = "ed";
LABEL_136:
          v50 = --v63 + v51;
          v49 = v63 + v51 + 1;
        }
        else
        {
          v49 = 3;
          v50 = 2;
          LODWORD(v51) = 2;
          v52 = "ed";
        }
        if ( v76 < v49 )
        {
          v56 = qvector_reserve((__int64)a1, v48, v49, 1);
          *a1 = v56;
          v48 = v56;
        }
        a1[1] = v49;
        *(_BYTE *)(v48 + v50) = 0;
        v53 = *a1 + v63;
        v54 = 0;
        do
        {
          v55 = v54++;
          *(_BYTE *)(v53 + v55) = v52[v55];
        }
        while ( v54 < (unsigned int)v51 );
      }
    }
    v6 = 1;
  }
LABEL_106:
  if ( v74 )
    qfree(v74);
  return v6;
}
