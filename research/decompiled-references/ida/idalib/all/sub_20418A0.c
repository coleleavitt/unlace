void __fastcall sub_20418A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int8 v10; // si
  __int64 v11; // rdi
  char v12; // al
  unsigned __int8 v13; // al
  char v14; // dl
  unsigned __int8 v15; // al
  bool v16; // cc
  const char *v17; // rax
  size_t v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // r14d
  char v21; // al
  const char *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  _BYTE *v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // r12d
  __int64 v31; // rdi
  __int16 v32; // r12
  size_t v33; // rax
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdi
  _BYTE *v43; // rax
  int v44; // r12d
  __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdi
  _BYTE *v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdi
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE *v58; // rdx
  __int64 v59; // rdx
  _QWORD v60[4]; // [rsp+0h] [rbp-98h] BYREF
  __m128i ptr; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v62[104]; // [rsp+30h] [rbp-68h] BYREF

  if ( (unsigned __int8)sub_208DE40(a2) )
    sub_995540(*a1, "; Materializable\n");
  v6 = a1[4];
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *a1;
  v60[1] = a1 + 5;
  v60[2] = v6;
  v60[0] = off_2BE5D20;
  v60[3] = v7;
  sub_2038AA0(v8, a2, (__int64)v60, (__int64)off_2BE5D20, v4, v5);
  sub_995540(*a1, " = ");
  if ( !(unsigned __int8)sub_208F2E0(a2) )
    goto LABEL_4;
  v9 = *a1;
  v10 = *(_BYTE *)(a2 + 32) & 0xF;
  if ( (*(_BYTE *)(a2 + 32) & 0xF) == 0 )
  {
    sub_995540(*a1, "external ");
LABEL_4:
    v9 = *a1;
    v10 = *(_BYTE *)(a2 + 32) & 0xF;
  }
  sub_2033420(&ptr, v10);
  sub_227BF10(v9, ptr.m128i_i64[0], ptr.m128i_i64[1]);
  if ( (_BYTE *)ptr.m128i_i64[0] != v62 )
    operator delete((void *)ptr.m128i_i64[0]);
  v11 = *a1;
  if ( (*(_BYTE *)(a2 + 33) & 0x40) == 0 )
  {
    v12 = (*(_BYTE *)(a2 + 32) >> 4) & 3;
    if ( v12 != 1 )
      goto LABEL_9;
LABEL_45:
    sub_995540(v11, "hidden ");
    v13 = *(_BYTE *)(a2 + 33);
    v11 = *a1;
    v14 = v13 & 3;
    if ( (v13 & 3) != 1 )
      goto LABEL_12;
    goto LABEL_46;
  }
  sub_2030100(a2, *a1);
  v11 = *a1;
  v12 = (*(_BYTE *)(a2 + 32) >> 4) & 3;
  if ( v12 == 1 )
    goto LABEL_45;
LABEL_9:
  if ( v12 == 2 )
  {
    sub_995540(v11, "protected ");
    v11 = *a1;
  }
  v13 = *(_BYTE *)(a2 + 33);
  v14 = v13 & 3;
  if ( (v13 & 3) != 1 )
  {
LABEL_12:
    if ( v14 == 2 )
    {
      sub_995540(v11, "dllexport ");
      v11 = *a1;
      v13 = *(_BYTE *)(a2 + 33);
    }
    v15 = (v13 >> 2) & 7;
    v16 = v15 <= 2u;
    if ( v15 != 2 )
      goto LABEL_15;
LABEL_47:
    sub_995540(v11, "thread_local(localdynamic) ");
    goto LABEL_19;
  }
LABEL_46:
  sub_995540(v11, "dllimport ");
  v11 = *a1;
  v15 = (*(_BYTE *)(a2 + 33) >> 2) & 7;
  v16 = v15 <= 2u;
  if ( v15 == 2 )
    goto LABEL_47;
LABEL_15:
  if ( v16 )
  {
    if ( v15 == 1 )
      sub_995540(v11, "thread_local ");
  }
  else if ( v15 == 3 )
  {
    sub_995540(v11, "thread_local(initialexec) ");
  }
  else if ( v15 == 4 )
  {
    sub_995540(v11, "thread_local(localexec) ");
  }
LABEL_19:
  v17 = sub_202F6B0(*(_BYTE *)(a2 + 32) >> 6);
  if ( v18 )
  {
    v57 = sub_9954E0(*a1, v17, v18);
    v58 = *(_BYTE **)(v57 + 32);
    if ( (unsigned __int64)v58 >= *(_QWORD *)(v57 + 24) )
    {
      sub_227BA10(v57, 32);
    }
    else
    {
      *(_QWORD *)(v57 + 32) = v58 + 1;
      *v58 = 32;
    }
  }
  v19 = *a1;
  v20 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 8LL) >> 8;
  if ( v20 )
  {
    v55 = sub_995540(v19, "addrspace(");
    v56 = sub_227B910(v55, v20);
    sub_995540(v56, ") ");
    v19 = *a1;
  }
  v21 = *(_BYTE *)(a2 + 80);
  if ( (v21 & 2) != 0 )
  {
    sub_995540(v19, "externally_initialized ");
    v19 = *a1;
    v21 = *(_BYTE *)(a2 + 80);
  }
  v22 = "constant ";
  if ( (v21 & 1) == 0 )
    v22 = "global ";
  sub_995540(v19, v22);
  sub_2034FF0((__int64)(a1 + 5), *(_QWORD *)(a2 + 24), *a1);
  if ( !(unsigned __int8)sub_208F2E0(a2) )
  {
    v26 = *a1;
    v27 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v27 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v26, 32);
    }
    else
    {
      v28 = (__int64)(v27 + 1);
      *(_QWORD *)(v26 + 32) = v27 + 1;
      *v27 = 32;
    }
    sub_2040820(a1, *(_QWORD *)(a2 - 32), v28, v23, v24, v25);
  }
  if ( (*(_BYTE *)(a2 + 35) & 4) != 0 )
  {
    sub_995540(*a1, ", section \"");
    v45 = *a1;
    v46 = 0;
    v47 = 0;
    if ( (*(_BYTE *)(a2 + 35) & 4) != 0 )
    {
      v47 = sub_208EC10(a2, 0);
      v46 = v59;
    }
    sub_22449A0(v47, v46, v45);
    v48 = *a1;
    v49 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v49 < *(_QWORD *)(*a1 + 24) )
    {
      *(_QWORD *)(v48 + 32) = v49 + 1;
      *v49 = 34;
      if ( *(char *)(a2 + 33) >= 0 )
        goto LABEL_32;
      goto LABEL_64;
    }
    sub_227BA10(v48, 34);
  }
  if ( *(char *)(a2 + 33) >= 0 )
    goto LABEL_32;
LABEL_64:
  sub_995540(*a1, ", partition \"");
  v50 = *a1;
  v51 = sub_208DEF0(a2);
  sub_22449A0(v51, v52, v50);
  v53 = *a1;
  v54 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v54 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v53, 34);
  }
  else
  {
    *(_QWORD *)(v53 + 32) = v54 + 1;
    *v54 = 34;
  }
LABEL_32:
  v29 = *(unsigned __int16 *)(a2 + 34);
  LOWORD(v29) = (unsigned __int16)v29 >> 1;
  v30 = (v29 >> 6) & 7;
  if ( v30 )
  {
    sub_995540(*a1, ", code_model \"");
    switch ( v30 )
    {
      case 1:
        sub_995540(*a1, "tiny");
        break;
      case 2:
        sub_995540(*a1, "small");
        break;
      case 3:
        sub_995540(*a1, "kernel");
        break;
      case 4:
        sub_995540(*a1, "medium");
        break;
      case 5:
        sub_995540(*a1, "large");
        break;
      default:
        break;
    }
    v42 = *a1;
    v43 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v43 < *(_QWORD *)(*a1 + 24) )
    {
      *(_QWORD *)(v42 + 32) = v43 + 1;
      *v43 = 34;
      if ( (*(_BYTE *)(a2 + 34) & 1) == 0 )
        goto LABEL_34;
      goto LABEL_54;
    }
    sub_227BA10(v42, 34);
  }
  if ( (*(_BYTE *)(a2 + 34) & 1) == 0 )
  {
LABEL_34:
    v31 = *a1;
    goto LABEL_35;
  }
LABEL_54:
  v44 = *(_DWORD *)sub_208E5A0(a2);
  if ( (v44 & 1) != 0 )
    sub_995540(*a1, ", no_sanitize_address");
  v31 = *a1;
  if ( (v44 & 2) != 0 )
  {
    sub_995540(v31, ", no_sanitize_hwaddress");
    v31 = *a1;
    if ( (v44 & 4) == 0 )
      goto LABEL_58;
  }
  else if ( (v44 & 4) == 0 )
  {
    goto LABEL_58;
  }
  sub_995540(v31, ", sanitize_memtag");
  v31 = *a1;
LABEL_58:
  if ( (v44 & 8) != 0 )
  {
    sub_995540(v31, ", sanitize_address_dyninit");
    goto LABEL_34;
  }
LABEL_35:
  sub_20324E0(v31, a2);
  v32 = (*(_WORD *)(a2 + 34) >> 1) & 0x3F;
  if ( v32 )
  {
    v41 = sub_995540(*a1, ", align ");
    sub_227B910(v41, 1LL << ((unsigned __int8)v32 - 1));
  }
  ptr.m128i_i64[0] = (__int64)v62;
  ptr.m128i_i64[1] = 0x400000000LL;
  sub_20B4C70(a2, &ptr);
  v33 = j__strlen(", ");
  sub_203E590(a1, (int **)&ptr, ", ", v33);
  v34 = *(_QWORD *)(a2 + 72);
  if ( v34 )
  {
    v35 = sub_995540(*a1, " #");
    v40 = sub_2041740(a1[4], v34, v36, v37, v38, v39);
    sub_227B930(v35, v40);
  }
  sub_2040CA0(a1, a2);
  if ( (_BYTE *)ptr.m128i_i64[0] != v62 )
    free((void *)ptr.m128i_i64[0]);
}
