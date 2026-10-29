__int64 __fastcall sub_E82CE0(__int64 *a1, __int64 a2, int a3)
{
  int v3; // r13d
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  bool v16; // cc
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  _BYTE *v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // rdi
  _BYTE *v33; // rax
  _BYTE *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdi
  _BYTE *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  char v49; // bl
  const char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  _BYTE *v62; // rax

  while ( 1 )
  {
    v3 = a3;
    v4 = a1;
    v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) == 16 )
      break;
    v6 = (__int64 *)a2;
    v7 = *(_QWORD *)(*v4 + 8);
    v10 = sub_F6B0C0(v6, v7);
    v12 = 0;
    if ( (v10 & 8) != 0 )
      v12 = *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
    v13 = v12 | v10 & 7;
    if ( v3 == 1 )
    {
      v7 = v12 | v10 & 7;
      v6 = v4;
      sub_E78230((__int64)v4, v7, 0);
      v14 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *(_BYTE *)(v14 + 16);
      v16 = v15 <= 0x2Au;
      if ( v15 != 42 )
        goto LABEL_8;
LABEL_29:
      v40 = *(_QWORD *)(v14 + 32);
      sub_E78530(v4[1], v13);
      sub_E783C0((__int64)v4, v13, v40);
      v43 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v43 + 16) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && (v43 = sub_F63050(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL), v13, v41, v42)) != 0 )
      {
        v44 = v4[1];
        v45 = *(_BYTE **)(v44 + 32);
        if ( (unsigned __int64)v45 >= *(_QWORD *)(v44 + 24) )
        {
          sub_227BA10(v44, 54);
        }
        else
        {
          *(_QWORD *)(v44 + 32) = v45 + 1;
          *v45 = 54;
        }
        return sub_E83120(v4, v43, 0, 0, 1);
      }
      a3 = 1;
      a2 = v40;
LABEL_48:
      a1 = v4;
    }
    else
    {
      if ( v3 && v3 != 3 )
        return sub_E83120(v6, v7, v8, v9, v11);
      v14 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *(_BYTE *)(v14 + 16);
      v16 = v15 <= 0x2Au;
      if ( v15 == 42 )
        goto LABEL_29;
LABEL_8:
      if ( v16 )
      {
        if ( v15 != 33 )
          return sub_E83120(v6, v7, v8, v9, v11);
        v26 = *(_QWORD *)(v14 + 32);
        sub_E78530(v4[1], v13);
        v27 = v13;
        sub_E783C0((__int64)v4, v13, v26);
        v31 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v31 + 16) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && (v31 = sub_F63050(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL), v27, v28, v29)) != 0 )
        {
          v32 = v4[1];
          v33 = *(_BYTE **)(v32 + 32);
          if ( (unsigned __int64)v33 >= *(_QWORD *)(v32 + 24) )
          {
            v27 = 56;
            sub_227BA10(v32, 56);
          }
          else
          {
            v34 = v33 + 1;
            *(_QWORD *)(v32 + 32) = v33 + 1;
            *v33 = 56;
          }
          v35 = sub_F61C10(v14, v27, v34, v29, v30);
          sub_E82590(v4, v35, 0, v36, v37, v38);
          return sub_E83120(v4, v31, 0, 1, 1);
        }
        v51 = *(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        v52 = 0;
        if ( (v51 & 8) != 0 )
          v52 = *(__int64 *)((char *)&qword_18 + (v51 & 0xFFFFFFFFFFFFFFF0LL));
        v53 = v52 | ((unsigned __int8)v26 | (unsigned __int8)v51) & 7;
        sub_E78230((__int64)v4, v53, 1);
        v57 = sub_F61C10(v14, v53, v54, v55, v56);
        sub_E82590(v4, v57, 0, v58, v59, v60);
        a3 = 0;
        a2 = v26;
        goto LABEL_48;
      }
      if ( v15 == 43 )
      {
        v17 = v14;
        while ( 1 )
        {
          v18 = *(_QWORD *)(v17 + 32);
          if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
            v17 = *(_QWORD *)v19;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43 <= 1 )
              break;
            v20 = sub_F63050(v17, v7, v8, v9);
            v18 = *(_QWORD *)(v20 + 32);
            if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
              goto LABEL_14;
          }
        }
LABEL_14:
        v21 = v4[1];
        v22 = *(_BYTE **)(v21 + 32);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
        {
          sub_227BA10(v21, 65);
        }
        else
        {
          *(_QWORD *)(v21 + 32) = v22 + 1;
          *v22 = 65;
        }
      }
      else
      {
        if ( v15 != 44 )
          return sub_E83120(v6, v7, v8, v9, v11);
        v23 = v14;
        while ( 1 )
        {
          v18 = *(_QWORD *)(v23 + 32);
          if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v24 = v18 & 0xFFFFFFFFFFFFFFF0LL;
            v23 = *(_QWORD *)v24;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v24 + 16LL) - 43 <= 1 )
              break;
            v25 = sub_F63050(v23, v7, v8, v9);
            v18 = *(_QWORD *)(v25 + 32);
            if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
              goto LABEL_22;
          }
        }
LABEL_22:
        sub_995540(v4[1], "$$Q");
      }
      sub_E783C0((__int64)v4, v13, v18);
      a2 = v18;
      a1 = v4;
      a3 = 1;
    }
  }
  v46 = sub_F57E80(v5);
  v47 = v46;
  if ( v46 && *(_BYTE *)(v46 + 16) != 16 )
    v47 = 0;
  LOBYTE(v48) = 0;
  if ( (a2 & 8) != 0 )
    v48 = *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
  v49 = v48 | a2 & 7;
  if ( v3 == 3 )
  {
    v61 = v4[1];
    v62 = *(_BYTE **)(v61 + 32);
    if ( (unsigned __int64)v62 >= *(_QWORD *)(v61 + 24) )
    {
      sub_227BA10(v61, 63);
    }
    else
    {
      *(_QWORD *)(v61 + 32) = v62 + 1;
      *v62 = 63;
    }
    goto LABEL_51;
  }
  if ( v3 )
LABEL_51:
    sub_E78230((__int64)v4, v49, 0);
  v50 = "_T";
  if ( ((*(_BYTE *)(v47 + 18) >> 3) & 3) != 1 )
    v50 = "_P";
  return sub_995540(v4[1], v50);
}
