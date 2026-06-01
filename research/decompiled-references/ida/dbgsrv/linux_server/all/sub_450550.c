/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450550
// Address: 0x0000000000450550

//----- (0000000000450550) ----------------------------------------------------
__int64 __fastcall sub_450550(__int64 a1, char a2, char a3)
{
  char v5; // al
  _BYTE *v7; // rcx
  char *v8; // rdi
  char v9; // al
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rsi
  size_t v16; // r9
  char v17; // r12
  char *v18; // r8
  unsigned __int64 v19; // rdx
  void *v20; // rsi
  char v21; // r12
  __int64 v22; // r8
  size_t v23; // r10
  _BYTE *v24; // rsi
  unsigned __int64 v25; // rdx
  int v26; // r12d
  const char *v27; // rdi
  char *v28; // rax
  size_t v29; // rax
  size_t v30; // r13
  size_t v31; // r12
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // r13
  const char *v35; // rsi
  const char *v36; // rdi
  FILE *v37; // r12
  __int64 v38; // rax
  char *v39; // rsi
  unsigned __int64 v40; // rdx
  char *v41; // rax
  char *v42; // rax
  void *v43; // [rsp+0h] [rbp-10E8h]
  void *v44; // [rsp+0h] [rbp-10E8h]
  char *v45; // [rsp+0h] [rbp-10E8h]
  void *v46; // [rsp+0h] [rbp-10E8h]
  char *sa; // [rsp+8h] [rbp-10E0h]
  char *s; // [rsp+8h] [rbp-10E0h]
  char *sb; // [rsp+8h] [rbp-10E0h]
  __int64 v50; // [rsp+10h] [rbp-10D8h]
  size_t v51; // [rsp+18h] [rbp-10D0h]
  void *v52; // [rsp+20h] [rbp-10C8h] BYREF
  __int128 v53; // [rsp+28h] [rbp-10C0h]
  void *v54; // [rsp+40h] [rbp-10A8h] BYREF
  __int128 v55; // [rsp+48h] [rbp-10A0h]
  void *ptr; // [rsp+60h] [rbp-1088h] BYREF
  __int128 v57; // [rsp+68h] [rbp-1080h]
  __int64 v58; // [rsp+78h] [rbp-1070h]
  __int64 v59; // [rsp+80h] [rbp-1068h]
  __int64 v60; // [rsp+88h] [rbp-1060h]
  __int128 v61; // [rsp+90h] [rbp-1058h]
  char v62[4104]; // [rsp+A0h] [rbp-1048h] BYREF
  unsigned __int64 v63; // [rsp+10A8h] [rbp-40h]

  v5 = *(_BYTE *)(a1 + 580);
  v63 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v5 - 9) > 4u && v5 != 32 )
  {
    v7 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    *(_QWORD *)(a1 + 8) = v7;
    *v7 = v5;
  }
  v8 = *(char **)(a1 + 8);
  v52 = nullptr;
  v53 = 0;
  v9 = *v8;
  if ( *v8 == 34 || v9 == 60 )
    goto LABEL_55;
  while ( 1 )
  {
    v57 = 0;
    ptr = nullptr;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v10 = sub_44DDC0(a1, (__int64)&ptr, 0, nullptr);
    v11 = v10;
    if ( *(_QWORD *)(a1 + 64) )
    {
      if ( v10 )
        goto LABEL_8;
      v11 = sub_44ED20(a1, (__int64)&ptr);
    }
    if ( v11 )
    {
LABEL_8:
      if ( ptr )
      {
        *(_QWORD *)&v57 = 0;
        j__free(ptr);
        v8 = (char *)v52;
        goto LABEL_10;
      }
      v8 = (char *)v52;
      if ( !v52 )
        return v11;
      goto LABEL_53;
    }
    if ( (_WORD)v58 == 1 )
      break;
    if ( (unsigned __int16)v58 > 0x3Eu )
      goto LABEL_43;
    if ( ((1LL << v58) & 0x5400C00000000000LL) != 0 )
    {
      v17 = v58;
      goto LABEL_26;
    }
    if ( ((1LL << v58) & 0x44) != 0 )
    {
      if ( !(_QWORD)v57 )
        goto LABEL_31;
      v16 = v57 - 1;
      if ( (_QWORD)v57 == 1 )
        goto LABEL_31;
      v21 = 0;
    }
    else
    {
      if ( (_WORD)v58 != 4 )
      {
LABEL_43:
        if ( ptr )
        {
          *(_QWORD *)&v57 = 0;
          j__free(ptr);
        }
LABEL_45:
        v8 = (char *)v52;
        v11 = 30;
        if ( !v52 )
          return v11;
LABEL_53:
        *(_QWORD *)&v53 = 0;
        j__free(v8);
        return v11;
      }
      v13 = v53;
      v14 = 2;
      if ( (_QWORD)v53 )
      {
        v14 = v53 + 1;
        v13 = v53 - 1;
      }
      v15 = v52;
      if ( *((_QWORD *)&v53 + 1) < v14 )
      {
        v43 = (void *)v14;
        v52 = sub_481540((__int64)&v52, v52, v14, 1u);
        v14 = (unsigned __int64)v43;
        v15 = v52;
      }
      *(_QWORD *)&v53 = v14;
      v15[v13] = 34;
      *((_BYTE *)v52 + v13 + 1) = 0;
      if ( !(_QWORD)v57 || (v16 = v57 - 1, (_QWORD)v57 == 1) )
      {
LABEL_25:
        v17 = 34;
LABEL_26:
        v18 = (char *)v53;
        v19 = 2;
        if ( (_QWORD)v53 )
        {
          v19 = v53 + 1;
          v18 = (char *)(v53 - 1);
        }
        v20 = v52;
        if ( *((_QWORD *)&v53 + 1) < v19 )
        {
          sa = v18;
          v44 = (void *)v19;
          v52 = sub_481540((__int64)&v52, v52, v19, 1u);
          v18 = sa;
          v20 = v52;
          v19 = (unsigned __int64)v44;
        }
        *(_QWORD *)&v53 = v19;
        v18[(_QWORD)v20] = v17;
        v18[(_QWORD)v52 + 1] = 0;
        goto LABEL_31;
      }
      v21 = 34;
    }
    v22 = v53;
    v23 = v16;
    if ( (_QWORD)v53 )
    {
      v22 = v53 - 1;
      v23 = v16 + v53 - 1;
    }
    v24 = v52;
    v25 = v23 + 1;
    if ( *((_QWORD *)&v53 + 1) < v23 + 1 )
    {
      v51 = v23;
      v50 = v22;
      sb = (char *)v16;
      v46 = (void *)(v23 + 1);
      v52 = sub_481540((__int64)&v52, v52, v25, 1u);
      v23 = v51;
      v24 = v52;
      v22 = v50;
      v16 = (size_t)sb;
      v25 = (unsigned __int64)v46;
    }
    *(_QWORD *)&v53 = v25;
    v24[v23] = 0;
    memcpy((char *)v52 + v22, ptr, v16);
    if ( v21 )
      goto LABEL_25;
LABEL_31:
    if ( ptr )
    {
      *(_QWORD *)&v57 = 0;
      j__free(ptr);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v57 = 0;
    j__free(ptr);
  }
  v8 = (char *)v52;
  v11 = 30;
  *(_QWORD *)(a1 + 8) = v52;
  if ( !v8 )
    return v11;
  v9 = *v8;
  if ( *v8 != 60 && v9 != 34 )
  {
    v11 = 30;
    goto LABEL_53;
  }
LABEL_55:
  v26 = 62;
  if ( v9 != 60 )
    v26 = 34;
  v27 = v8 + 1;
  *(_QWORD *)(a1 + 8) = v27;
  v28 = strchr(v27, v26);
  if ( !v28 )
    goto LABEL_45;
  *v28 = 0;
  if ( *(_QWORD *)(a1 + 272) > 0x7Fu )
  {
    v8 = (char *)v52;
    v11 = 31;
    if ( !v52 )
      return v11;
    goto LABEL_53;
  }
  s = sub_44A570(a1, v62, 4096, *(char **)(a1 + 8), v26, a3);
  v54 = nullptr;
  v55 = 0;
  if ( s )
  {
    v29 = strlen(s);
    v30 = v29 + 1;
    v31 = v29;
    v54 = sub_481540((__int64)&v54, nullptr, v29 + 1, 1u);
    *(_QWORD *)&v55 = v30;
    memmove(v54, s, v31);
    *((_BYTE *)v54 + v31) = 0;
    v32 = *(_QWORD *)(a1 + 240);
    v45 = (char *)v54;
    v33 = v32 + 24LL * *(_QWORD *)(a1 + 248);
    if ( v32 == v33 )
    {
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        j__free(v54);
      }
      goto LABEL_82;
    }
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 240);
    v45 = nullptr;
    v33 = v32 + 24LL * *(_QWORD *)(a1 + 248);
    if ( v32 == v33 )
      goto LABEL_74;
  }
  v34 = v55;
  while ( 2 )
  {
    if ( *(_QWORD *)(v32 + 8) )
    {
      v35 = *(const char **)v32;
      v36 = s1;
      if ( v34 )
        goto LABEL_72;
      goto LABEL_67;
    }
    if ( v34 )
    {
      v35 = s1;
LABEL_72:
      v36 = v45;
LABEL_67:
      if ( !strcmp(v36, v35) )
        break;
      v32 += 24;
      if ( v32 == v33 )
      {
        if ( !v45 )
          goto LABEL_81;
        goto LABEL_79;
      }
      continue;
    }
    break;
  }
  if ( !v45 )
    goto LABEL_80;
LABEL_79:
  *(_QWORD *)&v55 = 0;
  j__free(v45);
LABEL_80:
  if ( v32 != v33 )
    goto LABEL_76;
LABEL_81:
  if ( s )
  {
LABEL_82:
    v37 = sub_47FA20(s);
    if ( v37 )
    {
      v38 = *(_QWORD *)(a1 + 272);
      v39 = *(char **)(a1 + 264);
      v40 = v38 + 1;
      if ( *(_QWORD *)(a1 + 280) < (unsigned __int64)(v38 + 1) )
      {
        v42 = (char *)sub_481540(a1 + 264, v39, v40, 0x28u);
        *(_QWORD *)(a1 + 264) = v42;
        v39 = v42;
        v38 = *(_QWORD *)(a1 + 272);
        v40 = v38 + 1;
      }
      *(_QWORD *)(a1 + 272) = v40;
      v41 = &v39[40 * v38];
      *((_QWORD *)v41 + 1) = *(_QWORD *)(a1 + 288);
      *((_DWORD *)v41 + 8) = *(_DWORD *)(a1 + 304);
      *(_QWORD *)v41 = *(_QWORD *)(a1 + 296);
      v41[36] = *(_BYTE *)(a1 + 144);
      *((_QWORD *)v41 + 2) = *(_QWORD *)(a1 + 216);
      *((_QWORD *)v41 + 3) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a1 + 288) = v37;
      *(_QWORD *)(a1 + 296) = sub_481490(s);
      *(_DWORD *)(a1 + 304) = 0;
      *(_QWORD *)(a1 + 216) = sub_4492A0;
      *(_QWORD *)(a1 + 224) = a1;
      *(_BYTE *)(a1 + 144) = 0;
LABEL_77:
      v8 = (char *)v52;
      v11 = 0;
      goto LABEL_10;
    }
  }
LABEL_74:
  if ( a2 )
  {
LABEL_76:
    sub_479EB0(0);
    goto LABEL_77;
  }
  sub_479F30(0, *(const char **)(a1 + 8));
  v8 = (char *)v52;
  v11 = 32;
LABEL_10:
  if ( v8 )
    goto LABEL_53;
  return v11;
}
