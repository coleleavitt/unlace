__int64 __fastcall sub_3F8AA0(
        _QWORD *a1,
        void *a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned int *a5,
        __int64 a6,
        char **a7)
{
  unsigned int *v7; // r15
  __int64 v8; // r14
  unsigned __int64 v10; // r12
  char **v12; // r11
  char **v13; // r11
  int *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  __int64 v18; // rsi
  int *v19; // rax
  __int64 v20; // rcx
  void **v22; // rax
  void **v23; // rdx
  void **v24; // rax
  void **v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // r10
  char **v28; // r11
  __int64 v29; // rsi
  __int64 v30; // rax
  char **v31; // r11
  __int64 v32; // rsi
  __int64 v33; // rsi
  void *v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rsi
  char **v41; // r11
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rsi
  int v45; // r8d
  int v46; // r9d
  int v47; // [rsp-8h] [rbp-C0h]
  char **v48; // [rsp+0h] [rbp-B8h]
  char **v49; // [rsp+0h] [rbp-B8h]
  char **v50; // [rsp+0h] [rbp-B8h]
  char **v51; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+8h] [rbp-B0h]
  char **v54; // [rsp+8h] [rbp-B0h]
  char **v55; // [rsp+8h] [rbp-B0h]
  char **v56; // [rsp+8h] [rbp-B0h]
  char **v57; // [rsp+8h] [rbp-B0h]
  char **v58; // [rsp+8h] [rbp-B0h]
  char **v59; // [rsp+8h] [rbp-B0h]
  char **v60; // [rsp+10h] [rbp-A8h]
  char **v61; // [rsp+10h] [rbp-A8h]
  char **v62; // [rsp+10h] [rbp-A8h]
  __int64 v63; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int128 v66; // [rsp+38h] [rbp-80h]
  _BYTE v67[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v7 = a5;
  v8 = a6;
  v10 = a4;
  v68 = __readfsqword(0x28u);
  v12 = a7;
  if ( a2 != (void *)a1[8] )
  {
    if ( a2 != (void *)a1[9] )
      goto LABEL_3;
    if ( a3 != 65 )
      goto LABEL_30;
    qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", a4, (_DWORD)a5, a6);
    v31 = a7;
    if ( v8 == 4 )
      goto LABEL_72;
LABEL_85:
    v49 = v31;
    sub_35A790(v31);
    v12 = v49;
LABEL_3:
    if ( a2 != (void *)a1[10] )
      goto LABEL_4;
    goto LABEL_55;
  }
  if ( a3 == 83 )
  {
    v19 = (int *)&unk_23ADA60;
    while ( 1 )
    {
      v20 = (unsigned int)*v19;
      if ( v10 == v20 )
        break;
      if ( ++v19 == &dword_23ADA88 )
        goto LABEL_27;
    }
    v10 = (int)v20;
    goto LABEL_27;
  }
  if ( a3 > 0x53u )
  {
    if ( a3 == 110 || (unsigned __int8)(a3 - 114) <= 2u )
    {
      if ( a4 )
        goto LABEL_15;
      v63 = a1[3];
      v64 = (unsigned __int64)a2;
      ptr = nullptr;
      v66 = 0;
      v30 = sub_7BEED0(&v64, v63, &ptr, 1, 0, a3);
      LODWORD(a6) = a3;
      v12 = a7;
      if ( v30 > 0 )
      {
        sub_7BEF30(&v64, v63, ptr, v66, 0, a3);
        v34 = ptr;
        if ( !ptr )
          return 1;
        goto LABEL_100;
      }
      if ( ptr )
      {
        *(_QWORD *)&v66 = 0;
        qfree(ptr);
        v12 = a7;
      }
      if ( a2 != (void *)a1[9] )
      {
LABEL_15:
        if ( a2 != (void *)a1[10] )
        {
          if ( a2 == (void *)a1[11] )
            goto LABEL_31;
          goto LABEL_5;
        }
LABEL_55:
        if ( a3 == 115 || a3 == 112 )
        {
          v26 = a1[3];
          ptr = a2;
          sub_7BE7C0(&ptr, v26, v10, v7, v8, a3);
          return 1;
        }
        goto LABEL_4;
      }
    }
LABEL_30:
    if ( a2 != (void *)a1[10] )
      goto LABEL_31;
    goto LABEL_55;
  }
  v14 = (int *)&unk_23ADA60;
  if ( a3 != 65 )
  {
    if ( a2 != (void *)a1[10] || a2 == (void *)a1[11] || a2 == (void *)a1[12] )
      goto LABEL_31;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v15 = (unsigned int)*v14;
    if ( a4 == v15 )
      break;
    if ( &dword_23ADA88 == ++v14 )
    {
      v16 = a4;
      goto LABEL_22;
    }
  }
  v16 = (int)v15;
LABEL_22:
  v52 = v16;
  qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v16, (_DWORD)a5, a6);
  v17 = v52;
  if ( v8 == 4 )
    goto LABEL_23;
  sub_35A790(a7);
  v12 = a7;
  if ( a2 == (void *)a1[9] )
  {
    qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, a6);
    v31 = a7;
    goto LABEL_85;
  }
  if ( a2 != (void *)a1[10] )
  {
    if ( a2 != (void *)a1[11] )
      goto LABEL_5;
    goto LABEL_63;
  }
LABEL_4:
  if ( a2 != (void *)a1[11] )
  {
LABEL_5:
    if ( a2 != (void *)a1[12] )
    {
LABEL_6:
      if ( a2 != (void *)a1[13] || a3 != 65 )
        goto LABEL_31;
      v51 = v12;
      qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, a6);
      v13 = v51;
      if ( v8 == 4 )
        goto LABEL_72;
      goto LABEL_69;
    }
    if ( a3 != 65 )
      goto LABEL_31;
    v54 = v12;
    qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, a6);
    v28 = v54;
    if ( v8 == 4 )
      goto LABEL_72;
    goto LABEL_123;
  }
  if ( a3 == 65 )
  {
LABEL_63:
    v27 = (int)v10;
    v60 = v12;
    if ( v10 <= 0xFFFFFFF9 )
      v27 = v10;
    v53 = v27;
    qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v27, (_DWORD)a5, a6);
    v17 = v53;
    if ( v8 != 4 )
    {
      sub_35A790(v60);
      v12 = v60;
      if ( a2 == (void *)a1[12] )
      {
        qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, a6);
        v28 = v60;
LABEL_123:
        v62 = v28;
        sub_35A790(v28);
        LODWORD(a6) = 4;
        v12 = v62;
        if ( a2 != (void *)a1[13] )
          goto LABEL_31;
        goto LABEL_68;
      }
      if ( a2 == (void *)a1[13] )
      {
LABEL_68:
        v61 = v12;
        qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, a6);
        v13 = v61;
LABEL_69:
        v48 = v13;
        sub_35A790(v13);
        LODWORD(a5) = v47;
        v12 = v48;
        goto LABEL_31;
      }
      goto LABEL_31;
    }
LABEL_23:
    ptr = a2;
    v18 = a1[3];
    v64 = *v7;
    sub_7BE7C0(&ptr, v18, v17, &v64, 8, 65);
    return 1;
  }
LABEL_31:
  v22 = (void **)a1[14];
  v23 = &v22[a1[15]];
  if ( v22 != v23 )
  {
    while ( a2 != *v22 )
    {
      if ( v23 == ++v22 )
        goto LABEL_38;
    }
    if ( v23 != v22 )
    {
      if ( a3 != 65 )
      {
        if ( a3 != 83 )
          goto LABEL_38;
LABEL_27:
        ptr = a2;
        sub_7BE7C0(&ptr, a1[3], v10, v7, v8, 83);
        return 1;
      }
      v56 = v12;
      qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, (unsigned int)v67);
      if ( v8 != 4 )
      {
        sub_35A790(v56);
        v12 = v56;
        goto LABEL_39;
      }
LABEL_72:
      ptr = a2;
      v29 = a1[3];
      v64 = *v7;
      sub_7BE7C0(&ptr, v29, v10, &v64, 8, 65);
      return 1;
    }
  }
LABEL_38:
  if ( a2 == (void *)a1[17] && a3 == 1 && v8 == 1 )
  {
    v33 = a1[3];
    ptr = a2;
    sub_7BE7C0(&ptr, v33, v10, v7, 1, 1);
    return 1;
  }
LABEL_39:
  v24 = (void **)a1[21];
  v25 = &v24[a1[22]];
  if ( v24 == v25 )
    goto LABEL_86;
  while ( a2 != *v24 )
  {
    if ( v25 == ++v24 )
      goto LABEL_86;
  }
  if ( v25 == v24 )
  {
LABEL_86:
    if ( a2 == (void *)a1[25] )
    {
      if ( a3 == 65 && v10 == 2 )
      {
        v57 = v12;
        qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", 2, (_DWORD)a5, (unsigned int)v67);
        if ( v8 == 4 )
        {
          v35 = *v7;
          v36 = a1[3];
          ptr = a2;
          v64 = v35;
          sub_7BE7C0(&ptr, v36, 2, &v64, 8, 65);
          return 1;
        }
        sub_35A790(v57);
        v12 = v57;
        if ( a2 == (void *)a1[26] || a2 == (void *)a1[27] )
          goto LABEL_91;
        if ( a2 != (void *)a1[28] )
          goto LABEL_90;
        goto LABEL_136;
      }
      if ( a3 == 83 && v10 == 1 )
      {
        v40 = a1[3];
        ptr = a2;
        sub_7BE7C0(&ptr, v40, 1, v7, v8, 83);
        return 1;
      }
    }
  }
  else
  {
    if ( a3 != 65 && a3 != 83 )
    {
      if ( a2 == (void *)a1[26] )
        goto LABEL_120;
      if ( a2 == (void *)a1[27] )
        goto LABEL_50;
      if ( a2 != (void *)a1[28] )
      {
        if ( a2 != (void *)a1[29] )
        {
LABEL_50:
          if ( a2 == (void *)a1[18] )
            goto LABEL_52;
          goto LABEL_51;
        }
LABEL_115:
        if ( a3 == 98 && !v10 )
        {
          v39 = a1[3];
          ptr = nullptr;
          v64 = (unsigned __int64)a2;
          v66 = 0;
          if ( sub_7BEED0(&v64, v39, &ptr, 1, 0, 98) <= 0 )
          {
            if ( ptr )
            {
              *(_QWORD *)&v66 = 0;
              qfree(ptr);
            }
LABEL_120:
            if ( a2 == (void *)a1[18] )
              return 0;
            goto LABEL_107;
          }
          sub_7BEF30(&v64, v39, ptr, v66, 0, 98);
          v34 = ptr;
          if ( !ptr )
            return 1;
LABEL_100:
          *(_QWORD *)&v66 = 0;
          qfree(v34);
          return 1;
        }
      }
LABEL_91:
      if ( a2 != (void *)a1[18] )
      {
LABEL_51:
        if ( a2 == (void *)a1[30] )
        {
          v59 = v12;
          if ( a3 == 65 && !v10 )
          {
            qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", 0, (_DWORD)a5, a6);
            v41 = v59;
            if ( v8 == 4 )
            {
              v42 = *v7;
              v43 = a1[3];
              ptr = a2;
              v64 = v42;
              sub_7BE7C0(&ptr, v43, 0, &v64, 8, 65);
              return 1;
            }
            goto LABEL_142;
          }
        }
LABEL_52:
        if ( (void *)a1[19] != a2 || a3 != 83 )
          return 0;
        goto LABEL_27;
      }
      if ( a3 != 65 )
        goto LABEL_52;
      v55 = v12;
      qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", -1, (_DWORD)a5, a6);
      if ( v8 != 4 )
      {
        sub_35A790(v55);
        if ( a2 == (void *)a1[30] && !v10 )
        {
          qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", 0, v45, v46);
          v41 = v55;
LABEL_142:
          sub_35A790(v41);
          return 0;
        }
        return 0;
      }
LABEL_94:
      ptr = a2;
      v32 = a1[3];
      v64 = *v7;
      sub_7BE7C0(&ptr, v32, -1, &v64, 8, 65);
      return 1;
    }
    v58 = v12;
    qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", v10, (_DWORD)a5, (unsigned int)v67);
    if ( v8 == 4 )
    {
      v37 = *v7;
      v38 = a1[3];
      ptr = a2;
      v64 = v37;
      sub_7BE7C0(&ptr, v38, v10, &v64, 8, a3);
      return 1;
    }
    sub_35A790(v58);
    v12 = v58;
  }
  if ( a2 != (void *)a1[26] && a2 != (void *)a1[27] && a2 != (void *)a1[28] )
  {
LABEL_90:
    if ( a2 == (void *)a1[29] )
      goto LABEL_115;
    goto LABEL_91;
  }
  if ( a3 != 65 || v10 != 0xFFFFFFFF )
  {
LABEL_136:
    if ( v10 == 4294967294 && a3 == 83 )
    {
      v44 = a1[3];
      ptr = a2;
      sub_7BE7C0(&ptr, v44, -2, v7, v8, 83);
      return 1;
    }
    goto LABEL_91;
  }
  v50 = v12;
  qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", -1, (_DWORD)a5, a6);
  if ( v8 == 4 )
    goto LABEL_94;
  sub_35A790(v50);
  if ( a2 != (void *)a1[18] )
  {
LABEL_107:
    if ( a2 != (void *)a1[30] )
      return 0;
    goto LABEL_52;
  }
  qsnprintf((unsigned int)v67, 32, (unsigned int)"%a", -1, 4, v47);
  sub_35A790(v50);
  return 0;
}
