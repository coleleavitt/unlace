__int64 __fastcall sub_E3980(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // r8
  __int64 v8; // rdi
  int v10; // r14d
  unsigned __int8 v11; // al
  int v12; // ecx
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // edx
  __int64 result; // rax
  unsigned int tinfo_size; // eax
  char v21; // al
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rax
  const char *v25; // rax
  const char *v26; // r13
  size_t v27; // rax
  size_t v28; // r14
  size_t v29; // rbx
  _QWORD *v30; // rbx
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
  __int64 v43; // [rsp+38h] [rbp-120h] BYREF
  int v44[4]; // [rsp+40h] [rbp-118h] BYREF
  void *v45; // [rsp+50h] [rbp-108h]
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
  if ( v7 == (unsigned __int8)sub_11A810(v8, v6, 0) )
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
  v11 = sub_11A810(v8, v6, 0);
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
  sub_D6330((__int64)v50, *(_QWORD *)(a2 + 480), 0x40u);
  v44[0] = 0;
  copy_argloc();
  sub_1C1D90(*(_QWORD *)(a2 + 480), v44, *(int *)(v15 + 4), v17 + 56, *(int *)(v17 + 4));
  sub_328E20(&v43, *(_QWORD *)(v6 + 112), (unsigned int)(*(_DWORD *)(v15 + 4) + *(_DWORD *)(v17 + 4)));
  if ( v44[0] != 1 || !sub_D2FF0(v56, (__int64)v44, &v43, -1, v55) )
  {
    tinfo_size = get_tinfo_size();
    if ( !(unsigned __int8)sub_DB880((__int64)v50, v44, tinfo_size, v47, 1) )
      goto LABEL_14;
  }
  if ( (unsigned __int8)sub_12E6A0(a2, a3, v15, a3, v17, 0) )
  {
    if ( !(unsigned __int8)sub_130900(a2, a3, v15, a3, v17, 8) )
      goto LABEL_14;
LABEL_37:
    copy_argloc();
    copy_tinfo_t();
    v25 = (const char *)sub_1B0060(v15, &v43);
    v45 = 0;
    v26 = v25;
    v46 = 0;
    if ( v25 )
    {
      v27 = strlen(v25);
      v28 = v27 + 1;
      v29 = v27;
      v45 = (void *)qvector_reserve();
      *(_QWORD *)&v46 = v28;
      memmove(v45, v26, v29);
      *((_BYTE *)v45 + v29) = 0;
    }
    v30 = (_QWORD *)(*(_QWORD *)(a1 + 24) + v42);
    cleanup_argloc();
    if ( v30[4] )
    {
      v30[5] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960(v30);
    memmove(v30, v30 + 10, *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - (_QWORD)v30 - 80);
    --*(_QWORD *)(a1 + 32);
    if ( (unsigned __int8)sub_317FF0(*(_QWORD *)(a2 + 480)) && (unsigned int)(*(_DWORD *)(a1 + 20) - 208) > 0x2F )
    {
      v34 = *(_QWORD *)(a2 + 64);
      v48 = 0;
      v47 = 0;
      v49 = 0;
      sub_DB760((__int64)v50, (__int64)&v47, v34, (_QWORD *)(a1 + 24));
    }
    v31 = *(_DWORD *)(a2 + 24);
    v32 = s1;
    BYTE1(v31) &= ~2u;
    LOBYTE(v31) = v31 | 0x80;
    v33 = (_QWORD)v46 == 0;
    *(_DWORD *)(a2 + 24) = v31;
    if ( !v33 )
      v32 = (const char *)v45;
    sub_A17A0(a2, (__int64)"combined partial callarg %s", v32);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree();
    }
    v21 = 1;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v15 + 4) == *(_DWORD *)(v17 + 4) )
  {
    v22 = *(_QWORD *)(a2 + 480);
    v23 = *(_QWORD *)(v22 + 112);
    if ( !(unsigned __int8)sub_11A810(v15, v22, 0)
      && *(_BYTE *)v17 == 4
      && (v35 = *(_QWORD *)(v17 + 8), *(_DWORD *)v35 == 11)
      && *(_BYTE *)(v35 + 32) == 1
      && *(_BYTE *)v15 == 1
      && *(_DWORD *)(v35 + 40) == *(_DWORD *)(v15 + 8)
      && (unsigned __int8)sub_11A8D0(v35 + 32, v23) )
    {
      sub_122C80(v15);
    }
    else
    {
      if ( !(unsigned __int8)sub_11A810(v17, v22, 0) )
        goto LABEL_14;
      if ( *(_BYTE *)v15 != 4 )
        goto LABEL_14;
      v24 = *(_QWORD *)(v15 + 8);
      if ( *(_DWORD *)v24 != 10
        || *(_BYTE *)(v24 + 32) != 1
        || *(_BYTE *)v17 != 1
        || *(_DWORD *)(v24 + 40) != *(_DWORD *)(v17 + 8)
        || !(unsigned __int8)sub_11A8D0(v24 + 32, v23) )
      {
        goto LABEL_14;
      }
      *(_QWORD *)&v48 = 0;
      v47 = 0xFFFFFFFF00000000LL;
      sub_11A5D0(&v47, *(_QWORD *)(v15 + 8) + 32LL);
      sub_11A5D0(v15, &v47);
      sub_11A960(&v47);
    }
    goto LABEL_37;
  }
LABEL_14:
  v21 = 0;
LABEL_15:
  v41 = v21;
  clear_tinfo_t();
  cleanup_argloc();
  result = v41;
  if ( v59 )
  {
    v60 = 0;
    qfree();
    result = v41;
  }
  if ( v57 )
  {
    v36 = result;
    v58 = 0;
    qfree();
    result = v36;
  }
  if ( v53 )
  {
    v37 = result;
    v54 = 0;
    qfree();
    result = v37;
  }
  if ( v51 )
  {
    v38 = result;
    v52 = 0;
    qfree();
    return v38;
  }
  return result;
}
