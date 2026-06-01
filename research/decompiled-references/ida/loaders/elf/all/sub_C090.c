unsigned __int64 __fastcall sub_C090(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int8 *v12; // rdi
  char *v14; // r12
  int v15; // eax
  char *v16; // rbp
  char *v17; // rax
  __int64 v18; // r15
  const char *v19; // rsi
  int v20; // eax
  char *v21; // r12
  __int64 v22; // rcx
  const char *v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // r9
  const char *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r9
  const char *v29; // rdx
  const char *v30; // rax
  char *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rcx
  const char *v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rsi
  char *s1; // [rsp+0h] [rbp-128h]
  __int64 v40; // [rsp+8h] [rbp-120h]
  char *v41; // [rsp+10h] [rbp-118h]
  __int64 v42; // [rsp+20h] [rbp-108h]
  __int64 v43; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v44; // [rsp+40h] [rbp-E8h]
  char *v45; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+88h] [rbp-A0h] BYREF
  unsigned __int8 *v53; // [rsp+90h] [rbp-98h] BYREF
  __int128 v54; // [rsp+98h] [rbp-90h]
  const char *v55; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-70h]
  const char *v57; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v59; // [rsp+E8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( !a2 )
    return v59 - __readfsqword(0x28u);
  v3 = a3;
  if ( !a3 )
    return v59 - __readfsqword(0x28u);
  v4 = a1[61] - a1[60];
  if ( v4 < (unsigned __int64)a2 + a3 )
  {
    if ( a2 >= v4 )
      return v59 - __readfsqword(0x28u);
    v3 = v4 - a2;
  }
  v6 = a1[59];
  v53 = nullptr;
  v54 = 0;
  v53 = (unsigned __int8 *)qvector_reserve(&v53, 0, v3, 1);
  memset(&v53[v54], 0, v3 - v54);
  v7 = a1[59];
  *(_QWORD *)&v54 = v3;
  v8 = qlseek(v7, 0, 1);
  v9 = a1[60];
  v40 = v8 - v9;
  if ( qlseek(a1[59], a2 + v9, 0) == -1 )
  {
    sub_BFC0((__int64)"Truncated file.");
  }
  else if ( qlread(v6, v53, v3) == v3 )
  {
    v10 = (unsigned __int64)&v53[v54];
    v45 = (char *)v53;
    if ( v53 >= &v53[(unsigned __int64)v54] )
    {
      v11 = 0;
LABEL_10:
      sub_BFC0((__int64)"Unexpected attribute section format ('%c'), section ignored.", v11);
      goto LABEL_11;
    }
    v11 = *v53;
    v45 = (char *)(v53 + 1);
    if ( (_BYTE)v11 != 65 )
      goto LABEL_10;
    v46 = -1;
    netnode_check(&v46, "$ attributes", 0, 1);
    v14 = nullptr;
    v47 = -1;
    if ( (unsigned __int64)v45 >= v10 )
    {
LABEL_95:
      qlseek(a1[59], a1[60] + v40, 0);
      v12 = v53;
      if ( !v53 )
        return v59 - __readfsqword(0x28u);
      goto LABEL_12;
    }
    while ( 1 )
    {
      v15 = sub_BD90((__int64)a1, (unsigned __int8 **)&v45, v10);
      v16 = &v45[v15 - 4];
      if ( v16 < v45 )
        break;
      if ( (unsigned __int64)v16 > v10 )
        v16 = (char *)v10;
      sub_BE50((__int64)&v57, (const void **)&v45, v16);
      v17 = (char *)v57;
      v18 = v58;
      v57 = nullptr;
      v58 = 0;
      s1 = v17;
      if ( v14 )
      {
        qfree(v14);
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57);
        }
      }
      netnode_check(&v47, 0, 0, 1);
      v19 = &::s1;
      if ( v18 )
        v19 = s1;
      v50 = v47;
      v41 = (char *)v19;
      netnode_hashset(v46, v19, &v50, 8, 72);
      if ( strcmp(v19, "aeabi") && strcmp(v19, "gnu") && strcmp(v19, "ARM") )
        goto LABEL_17;
      if ( !(unsigned __int8)unpack_xleb128(&v48, 64, 0, &v45, v10) )
      {
        v38 = v10 - (_QWORD)v45;
        if ( (__int64)(v10 - (_QWORD)v45) > 9 )
          v38 = 9;
        sub_BF10((__int64)v45, v38, (__int64)"Wrong ULEB128 encoding\n");
LABEL_88:
        v14 = s1;
        break;
      }
      v20 = sub_BD90((__int64)a1, (unsigned __int8 **)&v45, (unsigned __int64)v16);
      v21 = &v45[v20 - 4];
      if ( v21 < v45 )
        goto LABEL_88;
      if ( v48 == 1 )
      {
        if ( (unsigned __int64)v21 > v10 )
          v21 = (char *)v10;
        v42 = v47;
        while ( v45 < v21 )
        {
          if ( !(unsigned __int8)unpack_xleb128(&v49, 64, 0, &v45, v21) )
          {
            v37 = v21 - v45;
            if ( v21 - v45 > 9 )
              v37 = 9;
            sub_BF10((__int64)v45, v37, (__int64)"Wrong ULEB128 encoding\n");
            break;
          }
          v24 = v49;
          if ( v49 == 32 )
          {
            if ( !(unsigned __int8)unpack_xleb128(&v52, 64, 0, &v45, v21) )
              goto LABEL_69;
            v25 = v52;
            if ( v52 )
            {
              sub_BE50((__int64)&v57, (const void **)&v45, v21);
              v26 = v57;
              v25 = v58;
              v27 = v52;
            }
            else
            {
              v27 = 0;
              v26 = nullptr;
            }
            v43 = v25;
            v55 = (const char *)(v27 + 1);
            netnode_supset(v42, 32, &v55, 8, 65);
            v28 = v43;
            v29 = &::s1;
            if ( v43 )
            {
              v28 = v43 - 1;
              v29 = v26;
            }
            netnode_supset(v42, 32, v29, v28, 83);
            if ( v26 )
              qfree(v26);
          }
          else
          {
            if ( v49 == 65 )
            {
              if ( !strcmp(v41, "aeabi") )
              {
                sub_BE50((__int64)&v55, (const void **)&v45, v21);
                v30 = &::s1;
                if ( v56 )
                  v30 = v55;
                v31 = (char *)&v30[v56];
                v50 = (__int64)v30;
                if ( (unsigned __int8)unpack_xleb128(&v51, 64, 0, &v50, &v30[v56]) )
                {
                  v32 = v51 + 1;
                }
                else
                {
                  v51 = -1;
                  v32 = 0;
                }
                v52 = v32;
                netnode_supset(v42, 65, &v52, 8, 65);
                v44 = v51;
                if ( strcmp(v41, "aeabi") )
                  goto LABEL_77;
                if ( v44 - 4 <= 1 )
                  goto LABEL_78;
                if ( v44 <= 0x20 )
                  goto LABEL_64;
LABEL_77:
                if ( (v44 & 1) != 0 )
                {
LABEL_78:
                  sub_BE50((__int64)&v57, (const void **)&v50, v31);
                  v35 = v58;
                  v36 = &::s1;
                  if ( (_QWORD)v58 )
                  {
                    v36 = v57;
                    v35 = v58 - 1;
                  }
                  netnode_supset(v42, 65, v36, v35, 99);
                  if ( v57 )
                  {
                    *(_QWORD *)&v58 = 0;
                    qfree(v57);
                  }
                }
                else
                {
LABEL_64:
                  if ( (unsigned __int8)unpack_xleb128(&v52, 64, 0, &v50, v31) )
                  {
                    v33 = v52;
                  }
                  else
                  {
                    v52 = -1;
                    v33 = -1;
                  }
                  v57 = (const char *)v33;
                  netnode_supset(v42, 65, &v57, 8, 99);
                }
                if ( v55 )
                {
                  v56 = 0;
                  qfree(v55);
                }
                continue;
              }
LABEL_40:
              sub_BE50((__int64)&v57, (const void **)&v45, v21);
              v22 = v58;
              v23 = &::s1;
              if ( (_QWORD)v58 )
              {
                v23 = v57;
                v22 = v58 - 1;
              }
              netnode_supset(v42, v49, v23, v22, 83);
              if ( v57 )
              {
                *(_QWORD *)&v58 = 0;
                qfree(v57);
              }
              continue;
            }
            if ( strcmp(v41, "aeabi") )
              goto LABEL_73;
            if ( v24 - 4 <= 1 )
              goto LABEL_40;
            if ( v24 > 0x20 )
            {
LABEL_73:
              if ( (v24 & 1) != 0 )
                goto LABEL_40;
            }
            if ( !(unsigned __int8)unpack_xleb128(&v57, 64, 0, &v45, v21) )
            {
LABEL_69:
              v34 = v21 - v45;
              if ( v21 - v45 > 9 )
                v34 = 9;
              sub_BF10((__int64)v45, v34, (__int64)"Wrong ULEB128 encoding\n");
              continue;
            }
            v51 = (__int64)(v57 + 1);
            netnode_supset(v42, v49, &v51, 8, 65);
          }
        }
      }
LABEL_17:
      v45 = v16;
      if ( (unsigned __int64)v16 >= v10 )
      {
        if ( s1 )
          qfree(s1);
        goto LABEL_95;
      }
      v14 = s1;
    }
    if ( v14 )
      qfree(v14);
  }
  else
  {
    sub_BFC0((__int64)"File error when trying to read attributes section");
  }
LABEL_11:
  qlseek(a1[59], a1[60] + v40, 0);
  v12 = v53;
  if ( v53 )
  {
LABEL_12:
    *(_QWORD *)&v54 = 0;
    qfree(v12);
  }
  return v59 - __readfsqword(0x28u);
}

