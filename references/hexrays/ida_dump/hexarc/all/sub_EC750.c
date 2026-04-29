__int64 __fastcall sub_EC750(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // r8
  __int64 v8; // rdi
  int v10; // r14d
  unsigned __int8 v11; // al
  int v12; // ecx
  int v13; // r15d
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // edx
  __int64 result; // rax
  char v20; // al
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rax
  const char *v24; // rax
  const char *v25; // r13
  size_t v26; // rax
  size_t v27; // r14
  size_t v28; // rbx
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  int v31; // eax
  const char *v32; // rdx
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 v36; // [rsp+0h] [rbp-158h]
  unsigned __int8 v37; // [rsp+0h] [rbp-158h]
  unsigned __int8 v38; // [rsp+0h] [rbp-158h]
  char v39; // [rsp+8h] [rbp-150h]
  unsigned __int8 v41; // [rsp+10h] [rbp-148h]
  __int64 v42; // [rsp+18h] [rbp-140h]
  _DWORD *v43; // [rsp+38h] [rbp-120h] BYREF
  __int64 v44[2]; // [rsp+40h] [rbp-118h] BYREF
  void *v45; // [rsp+50h] [rbp-108h] BYREF
  __int128 v46; // [rsp+58h] [rbp-100h]
  unsigned __int64 v47; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+78h] [rbp-E0h]
  int v49; // [rsp+88h] [rbp-D0h]
  _BYTE v50[8]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+98h] [rbp-C0h]
  __int64 v52; // [rsp+A0h] [rbp-B8h]
  __int64 v53; // [rsp+B0h] [rbp-A8h]
  __int64 v54; // [rsp+B8h] [rbp-A0h]
  unsigned int v55; // [rsp+D8h] [rbp-80h]
  int *v56; // [rsp+E0h] [rbp-78h]
  __int64 v57; // [rsp+E8h] [rbp-70h]
  __int64 v58; // [rsp+F0h] [rbp-68h]
  __int64 v59; // [rsp+100h] [rbp-58h]
  __int64 v60; // [rsp+108h] [rbp-50h]
  unsigned __int64 v61; // [rsp+118h] [rbp-40h]

  v5 = 80LL * a4;
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_BYTE *)(v6 + 145);
  v8 = v5 + *(_QWORD *)(a1 + 24);
  v61 = __readfsqword(0x28u);
  v39 = v7;
  if ( v7 == (unsigned __int8)sub_116590(v8, v6, 0) )
  {
    v10 = a4;
    if ( !v39 )
    {
      v10 = a4 - 1;
      v5 = 80LL * (a4 - 1);
    }
  }
  else
  {
    v10 = a4 + 1;
    v5 = 80LL * (a4 + 1);
  }
  v11 = sub_116590(v8, v6, 0);
  v12 = v10;
  v13 = a4 - v11;
  if ( v10 > v13 )
    v12 = v13;
  if ( *(_DWORD *)(a1 + 8) > v12 )
    return 0;
  if ( (unsigned __int64)(v12 + 1) >= *(_QWORD *)(a1 + 32) )
    return 0;
  v14 = *(_QWORD *)(a1 + 24);
  v15 = v14 + v5;
  if ( ((*(_DWORD *)(v15 + 56) - 2) & 0xFFFFFFFD) == 0 )
    return 0;
  v16 = 80LL * v13;
  v17 = v14 + v16;
  v42 = v16;
  v18 = *(_DWORD *)(v14 + v16 + 56) - 2;
  result = 0;
  if ( (v18 & 0xFFFFFFFD) == 0 )
    return result;
  sub_CA9F0((__int64)v50, *(_QWORD *)(a2 + 480), 0x40u);
  LODWORD(v44[0]) = 0;
  copy_argloc(v44, v15 + 56);
  sub_1BDFB0(*(_QWORD *)(a2 + 480), v44, *(int *)(v15 + 4), v17 + 56, *(int *)(v17 + 4));
  sub_324D40(&v43, *(_QWORD *)(v6 + 112), (unsigned int)(*(_DWORD *)(v15 + 4) + *(_DWORD *)(v17 + 4)));
  if ( !sub_D0100(v56, v44, &v43, 0xFFFFFFFFLL, v55)
    && !(unsigned __int8)sub_D0090((__int64)v50, v44, (__int64 *)&v43, 1) )
  {
    goto LABEL_12;
  }
  if ( (unsigned __int8)sub_12A500(a2, a3, v15, a3, v17, 0) )
  {
    if ( !(unsigned __int8)sub_12C760(a2, a3, v15, a3, v17, 8) )
      goto LABEL_12;
LABEL_35:
    copy_argloc(v15 + 56, v44);
    copy_tinfo_t(v15 + 24, &v43);
    v24 = (const char *)sub_1AC0E0(v15);
    v45 = nullptr;
    v25 = v24;
    v46 = 0;
    if ( v24 )
    {
      v26 = strlen(v24);
      v27 = v26 + 1;
      v28 = v26;
      v45 = (void *)qvector_reserve(&v45, 0, v26 + 1, 1);
      *(_QWORD *)&v46 = v27;
      memmove(v45, v25, v28);
      *((_BYTE *)v45 + v28) = 0;
    }
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 24) + v42);
    cleanup_argloc(v29 + 7);
    v30 = v29[4];
    if ( v30 )
    {
      v29[5] = 0;
      qfree(v30);
    }
    clear_tinfo_t(v29 + 3);
    sub_1166E0(v29);
    memmove(v29, v29 + 10, *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - (_QWORD)v29 - 80);
    --*(_QWORD *)(a1 + 32);
    if ( (unsigned __int8)sub_3141F0(*(_QWORD *)(a2 + 480)) && (unsigned int)(*(_DWORD *)(a1 + 20) - 208) > 0x2F )
    {
      v34 = *(_QWORD *)(a2 + 64);
      v48 = 0;
      v47 = 0;
      v49 = 0;
      sub_CFBE0((__int64)v50, (unsigned int *)&v47, v34, (_QWORD *)(a1 + 24));
    }
    v31 = *(_DWORD *)(a2 + 24);
    v32 = s1;
    BYTE1(v31) &= ~2u;
    LOBYTE(v31) = v31 | 0x80;
    v33 = (_QWORD)v46 == 0;
    *(_DWORD *)(a2 + 24) = v31;
    if ( !v33 )
      v32 = (const char *)v45;
    sub_9BE60(a2, (__int64)"combined partial callarg %s", v32);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    v20 = 1;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v15 + 4) == *(_DWORD *)(v17 + 4) )
  {
    v21 = *(_QWORD *)(a2 + 480);
    v22 = *(_QWORD *)(v21 + 112);
    if ( !(unsigned __int8)sub_116590(v15, v21, 0)
      && *(_BYTE *)v17 == 4
      && (v35 = *(_QWORD *)(v17 + 8), *(_DWORD *)v35 == 11)
      && *(_BYTE *)(v35 + 32) == 1
      && *(_BYTE *)v15 == 1
      && *(_DWORD *)(v35 + 40) == *(_DWORD *)(v15 + 8)
      && (unsigned __int8)sub_116650(v35 + 32, v22) )
    {
      sub_11EAC0(v15);
    }
    else
    {
      if ( !(unsigned __int8)sub_116590(v17, v21, 0) )
        goto LABEL_12;
      if ( *(_BYTE *)v15 != 4 )
        goto LABEL_12;
      v23 = *(_QWORD *)(v15 + 8);
      if ( *(_DWORD *)v23 != 10
        || *(_BYTE *)(v23 + 32) != 1
        || *(_BYTE *)v17 != 1
        || *(_DWORD *)(v23 + 40) != *(_DWORD *)(v17 + 8)
        || !(unsigned __int8)sub_116650(v23 + 32, v22) )
      {
        goto LABEL_12;
      }
      *(_QWORD *)&v48 = 0;
      v47 = 0xFFFFFFFF00000000LL;
      sub_116350(&v47, *(_QWORD *)(v15 + 8) + 32LL);
      sub_116350(v15, &v47);
      sub_1166E0(&v47);
    }
    goto LABEL_35;
  }
LABEL_12:
  v20 = 0;
LABEL_13:
  v41 = v20;
  clear_tinfo_t(&v43);
  cleanup_argloc(v44);
  result = v41;
  if ( v59 )
  {
    v60 = 0;
    qfree(v59);
    result = v41;
  }
  if ( v57 )
  {
    v36 = result;
    v58 = 0;
    qfree(v57);
    result = v36;
  }
  if ( v53 )
  {
    v37 = result;
    v54 = 0;
    qfree(v53);
    result = v37;
  }
  if ( v51 )
  {
    v38 = result;
    v52 = 0;
    qfree(v51);
    return v38;
  }
  return result;
}
