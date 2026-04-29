__int64 *__fastcall sub_259120(__int64 *a1, _QWORD *a2, __int64 a3, char a4)
{
  const char *v7; // rdx
  unsigned __int8 v8; // r15
  __int64 v9; // rsi
  char *v10; // rax
  size_t v11; // rax
  size_t v12; // r9
  _BYTE *v13; // rsi
  size_t v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rax
  char *v18; // rdi
  unsigned __int64 v19; // r15
  const char *v20; // rax
  char v21; // dl
  signed int v22; // ecx
  _DWORD *v23; // rdi
  const char *v24; // rax
  char v25; // dl
  int v26; // eax
  size_t v27; // rax
  __int64 v28; // rbp
  size_t v29; // r12
  size_t v30; // r14
  _BYTE *v31; // rsi
  size_t v33; // r10
  bool v34; // zf
  __int64 v35; // r11
  __int64 v36; // r8
  _BYTE *v37; // rax
  char *v38; // r15
  _BYTE *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  char *v46; // rdx
  char v47; // cl
  size_t v49; // [rsp+10h] [rbp-488h]
  __int64 v50; // [rsp+10h] [rbp-488h]
  unsigned __int64 v51; // [rsp+10h] [rbp-488h]
  char *v52; // [rsp+10h] [rbp-488h]
  size_t v53; // [rsp+18h] [rbp-480h]
  size_t v54; // [rsp+20h] [rbp-478h]
  size_t v55; // [rsp+28h] [rbp-470h]
  char *v56; // [rsp+30h] [rbp-468h] BYREF
  __int128 v57; // [rsp+38h] [rbp-460h]
  char s[1023]; // [rsp+50h] [rbp-448h] BYREF
  char v59; // [rsp+44Fh] [rbp-49h] BYREF
  _BYTE v60[8]; // [rsp+450h] [rbp-48h] BYREF
  unsigned __int64 v61; // [rsp+458h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_37B760(50117);
    goto LABEL_83;
  }
  *a1 = 0;
  v7 = s1;
  *(_OWORD *)(a1 + 1) = 0;
  if ( *(_QWORD *)(a3 + 40) )
    v7 = *(const char **)(a3 + 32);
  v8 = 18;
  if ( (unsigned __int8)sub_3242C0(a1, a3 + 80, v7, 64) )
  {
    v8 = 16;
    if ( (*(_DWORD *)(a3 + 24) & 0x400) == 0 )
      v8 = (*(_DWORD *)(a3 + 24) & 2) == 0 ? 23 : 33;
  }
  v9 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2[54]) >> 3);
  if ( (int)v9 < 0 )
  {
    v10 = s;
  }
  else
  {
    v10 = s;
    if ( (unsigned __int64)(int)v9 < a2[55] )
    {
      v57 = 0;
      v56 = nullptr;
      tag_addr(&v56, (int)(v9 | 0x40000000), 0);
      v45 = (__int64)v56;
      v10 = s;
      v46 = v56;
      while ( 1 )
      {
        v47 = *v46++;
        *v10 = v47;
        if ( !v47 )
          break;
        if ( ++v10 == &v59 )
        {
          v59 = 0;
          break;
        }
      }
      if ( v45 )
      {
        v52 = v10;
        *(_QWORD *)&v57 = 0;
        qfree(v45);
        v10 = v52;
      }
    }
  }
  *(_BYTE *)tag_on(v10, v60, v8) = 0;
  v11 = strlen(s);
  v12 = a1[1];
  v13 = (_BYTE *)*a1;
  v14 = v11;
  v15 = a1[2];
  if ( v12 )
  {
    --v12;
    v33 = v14 + v12;
    v16 = v14 + v12 + 1;
    if ( v15 >= v16 )
      goto LABEL_44;
  }
  else
  {
    v16 = v14 + 1;
    if ( v15 >= v14 + 1 )
    {
      a1[1] = v16;
      v13[v14] = 0;
      goto LABEL_12;
    }
    v33 = v14;
  }
  v55 = v14;
  v54 = v33;
  v53 = v12;
  v51 = v16;
  v43 = qvector_reserve(a1, v13, v16, 1);
  v14 = v55;
  v33 = v54;
  *a1 = v43;
  v13 = (_BYTE *)v43;
  v12 = v53;
  v16 = v51;
LABEL_44:
  a1[1] = v16;
  v13[v33] = 0;
  if ( v12 )
  {
    v49 = v14;
    memmove((void *)(*a1 + v14), (const void *)*a1, v12);
    v14 = v49;
  }
LABEL_12:
  memmove((void *)*a1, s, v14);
  v17 = &s[(int)qsnprintf(s, 1024, byte_3F0068, v8)];
  if ( v17 >= v60 )
  {
    if ( !under_debugger )
      sub_37B760(518);
    goto LABEL_83;
  }
  v18 = v17 + 1;
  *v17 = 32;
  if ( v17 + 1 >= v60 )
  {
    v59 = 0;
    v18 = &v59;
  }
  v19 = tag_on(v18, v60, 24);
  if ( v19 >= (unsigned __int64)v60 )
  {
    if ( !under_debugger )
      sub_37B760(520);
    goto LABEL_83;
  }
  v20 = "// ";
  if ( (char *)v19 == &v59 )
  {
LABEL_46:
    v34 = *(_DWORD *)a3 == 1;
    v59 = 0;
    v19 = (unsigned __int64)&v59;
    if ( v34 )
    {
LABEL_47:
      v35 = sub_1C8E30(a2, *(_QWORD *)(a3 + 8));
      v36 = 43;
      if ( v35 < 0 )
        v36 = 45;
      v50 = v35;
      v37 = (_BYTE *)(v19 + (int)qsnprintf(v19, &v60[-v19], "[%s%c%ah]", *(const char **)(a2[188] + 32LL), v36, 0.0));
      if ( v37 < v60 )
      {
        v38 = v37 + 1;
        *v37 = 32;
        if ( v37 + 1 >= v60 )
        {
          v59 = 0;
          v39 = &byte_1;
          v38 = &v59;
        }
        else
        {
          v39 = (_BYTE *)(v60 - v38);
        }
        v40 = a2[11];
        v41 = 43;
        v42 = v50 + a2[13] - v40;
        if ( v42 < 0 )
        {
          v41 = 45;
          v42 = v40 - a2[13] - v50;
        }
        v19 = (unsigned __int64)&v38[(int)qsnprintf(v38, v39, "[%s%c%ah]", *(_QWORD *)(a2[188] + 40LL), v41, v42)];
        v26 = *(_DWORD *)(a3 + 24);
        if ( (v26 & 0x100) != 0 )
          goto LABEL_55;
LABEL_31:
        if ( (v26 & 0x400) != 0 )
          goto LABEL_56;
LABEL_32:
        if ( (v26 & 0x2000) != 0 )
          goto LABEL_57;
LABEL_33:
        if ( (v26 & 0x10000) != 0 )
          goto LABEL_58;
        goto LABEL_34;
      }
      if ( !under_debugger )
        sub_37B760(518);
LABEL_83:
      BUG();
    }
  }
  else
  {
    while ( 1 )
    {
      v21 = *v20++;
      *(_BYTE *)v19 = v21;
      if ( !v21 )
        break;
      if ( (char *)++v19 == &v59 )
        goto LABEL_46;
    }
    if ( *(_DWORD *)a3 == 1 )
      goto LABEL_47;
  }
  v22 = *(_DWORD *)(a3 + 88);
  v23 = (_DWORD *)a2[188];
  v57 = 0;
  v56 = nullptr;
  sub_1C17C0(v23, (__int64 *)&v56, a3, v22);
  if ( v19 >= (unsigned __int64)v60 )
  {
    if ( !under_debugger )
      sub_37B760(520);
    goto LABEL_83;
  }
  v24 = s1;
  if ( (_QWORD)v57 )
    v24 = v56;
  if ( (char *)v19 == &v59 )
  {
LABEL_61:
    v59 = 0;
    v19 = (unsigned __int64)&v59;
  }
  else
  {
    while ( 1 )
    {
      v25 = *v24++;
      *(_BYTE *)v19 = v25;
      if ( !v25 )
        break;
      if ( (char *)++v19 == &v59 )
        goto LABEL_61;
    }
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  v26 = *(_DWORD *)(a3 + 24);
  if ( (v26 & 0x100) == 0 )
    goto LABEL_31;
LABEL_55:
  v19 += (int)qsnprintf(v19, &v60[-v19], " ISARG");
  v26 = *(_DWORD *)(a3 + 24);
  if ( (v26 & 0x400) == 0 )
    goto LABEL_32;
LABEL_56:
  v19 += (int)qsnprintf(v19, &v60[-v19], " OVERLAPPED");
  v26 = *(_DWORD *)(a3 + 24);
  if ( (v26 & 0x2000) == 0 )
    goto LABEL_33;
LABEL_57:
  v19 += (int)qsnprintf(v19, &v60[-v19], " MAPDST");
  v26 = *(_DWORD *)(a3 + 24);
  if ( (v26 & 0x10000) != 0 )
  {
LABEL_58:
    v19 += (int)qsnprintf(v19, &v60[-v19], " SPLIT");
    v26 = *(_DWORD *)(a3 + 24);
    if ( (v26 & 0x400000) == 0 )
      goto LABEL_35;
    goto LABEL_59;
  }
LABEL_34:
  if ( (v26 & 0x400000) == 0 )
    goto LABEL_35;
LABEL_59:
  v19 += (int)qsnprintf(v19, &v60[-v19], " BYREF");
  v26 = *(_DWORD *)(a3 + 24);
LABEL_35:
  if ( (v26 & 0x8000000) != 0 )
    v19 += (int)qsnprintf(v19, &v60[-v19], " NOPROP");
  tag_off(v19, v60, 24);
  v27 = strlen(s);
  v28 = a1[1];
  v29 = v27;
  v30 = v27;
  if ( v28 )
  {
    --v28;
    v30 = v27 + v28;
  }
  v31 = (_BYTE *)*a1;
  if ( a1[2] < v30 + 1 )
  {
    v44 = qvector_reserve(a1, v31, v30 + 1, 1);
    *a1 = v44;
    v31 = (_BYTE *)v44;
  }
  a1[1] = v30 + 1;
  v31[v30] = 0;
  memmove((void *)(v28 + *a1), s, v29);
  if ( a4 && (unsigned __int64)a1[1] > 1 )
    tag_remove(a1, *a1, 0);
  return a1;
}
