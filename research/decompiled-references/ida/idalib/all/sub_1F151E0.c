void __fastcall sub_1F151E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // r12
  void (__fastcall *v9)(__int64, __int64, _QWORD *); // r13
  _QWORD *v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned int *v24; // rbx
  signed __int64 v25; // r12
  unsigned int *v26; // r13
  __int64 v27; // rax
  __int64 v28; // r12
  int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 *v33; // rbx
  __int64 *v34; // rax
  __int64 *v35; // rbx
  __int64 *v36; // rax
  __int64 *v37; // rbx
  __int64 *v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  size_t v49; // rax
  char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi

  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD **)(a1 + 144);
  if ( v7 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 48LL);
    v10 = sub_704780((__int64 *)(*(_QWORD *)(v8[283] + 80LL) + 72LL), *(_QWORD *)(v8[283] + 80LL), a3, a4, a5, a6);
    v9(v7, 1, v10);
  }
  if ( *(_DWORD *)(a1 + 7976) <= 7u )
    goto LABEL_20;
  v11 = *(unsigned __int64 **)(a1 + 7968);
  if ( *v11 && !v8[202] )
  {
    v45 = sub_1F0CF20((_QWORD *)a1, *v11);
    sub_A63880((__int64)v8, v45, v46, v47, v48);
    v11 = *(unsigned __int64 **)(a1 + 7968);
  }
  v12 = v11[1];
  if ( !v12 )
  {
LABEL_8:
    v13 = v11[2];
    if ( !v13 )
      goto LABEL_9;
    goto LABEL_37;
  }
  v32 = (__int64 *)(sub_1F0CF20((_QWORD *)a1, v12) & 0xFFFFFFFFFFFFFFF0LL);
  v33 = v32;
  if ( !v32 )
  {
    v49 = j__strlen("FILE type is NULL");
    v50 = "FILE type is NULL";
LABEL_49:
    sub_1EAD680(a1, v50, v49);
    return;
  }
  if ( !v8[206] )
  {
    v51 = sub_F6AC00(*v32);
    if ( v51 )
    {
      v8[206] = *(_QWORD *)(v51 + 32);
      v11 = *(unsigned __int64 **)(a1 + 7968);
      goto LABEL_8;
    }
    v66 = *v33;
    if ( (unsigned int)*(unsigned __int8 *)(*v33 + 16) - 47 > 1 )
    {
      v66 = sub_1EA8540(v66, v12, v52, v53);
      if ( !v66 )
      {
        v49 = j__strlen("Invalid FILE type in AST file");
        v50 = "Invalid FILE type in AST file";
        goto LABEL_49;
      }
    }
    v8[206] = sub_F60F10(v66, v12, v52, v53, v54, v55);
  }
  v11 = *(unsigned __int64 **)(a1 + 7968);
  v13 = v11[2];
  if ( !v13 )
    goto LABEL_9;
LABEL_37:
  v34 = (__int64 *)(sub_1F0CF20((_QWORD *)a1, v13) & 0xFFFFFFFFFFFFFFF0LL);
  v35 = v34;
  if ( !v34 )
  {
    v49 = j__strlen("jmp_buf type is NULL");
    v50 = (char *)"jmp_buf type is NULL";
    goto LABEL_49;
  }
  if ( v8[207] )
    goto LABEL_39;
  v56 = sub_F6AC00(*v34);
  if ( v56 )
  {
    v8[207] = *(_QWORD *)(v56 + 32);
    v11 = *(unsigned __int64 **)(a1 + 7968);
LABEL_9:
    v14 = v11[3];
    if ( !v14 )
      goto LABEL_10;
    goto LABEL_40;
  }
  v67 = *v35;
  if ( (unsigned int)*(unsigned __int8 *)(*v35 + 16) - 47 > 1 )
  {
    v67 = sub_1EA8540(v67, v13, v57, v58);
    if ( !v67 )
    {
      v49 = j__strlen("Invalid jmp_buf type in AST file");
      v50 = "Invalid jmp_buf type in AST file";
      goto LABEL_49;
    }
  }
  v8[207] = sub_F60F10(v67, v13, v57, v58, v59, v60);
LABEL_39:
  v11 = *(unsigned __int64 **)(a1 + 7968);
  v14 = v11[3];
  if ( !v14 )
    goto LABEL_10;
LABEL_40:
  v36 = (__int64 *)(sub_1F0CF20((_QWORD *)a1, v14) & 0xFFFFFFFFFFFFFFF0LL);
  v37 = v36;
  if ( !v36 )
  {
    v49 = j__strlen("sigjmp_buf type is NULL");
    v50 = "sigjmp_buf type is NULL";
    goto LABEL_49;
  }
  if ( v8[208] )
    goto LABEL_42;
  v61 = sub_F6AC00(*v36);
  if ( v61 )
  {
    v8[208] = *(_QWORD *)(v61 + 32);
    v11 = *(unsigned __int64 **)(a1 + 7968);
LABEL_10:
    v15 = v11[4];
    if ( !v15 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v68 = *v37;
  if ( (unsigned int)*(unsigned __int8 *)(*v37 + 16) - 47 > 1 )
    v68 = sub_1EA8540(v68, v14, v62, v63);
  v8[208] = sub_F60F10(v68, v14, v62, v63, v64, v65);
LABEL_42:
  v11 = *(unsigned __int64 **)(a1 + 7968);
  v15 = v11[4];
  if ( !v15 )
    goto LABEL_13;
LABEL_11:
  if ( (v8[190] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v8[190] = sub_1F0CF20((_QWORD *)a1, v15);
    v11 = *(unsigned __int64 **)(a1 + 7968);
  }
LABEL_13:
  v16 = v11[5];
  if ( v16 && (v8[191] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v8[191] = sub_1F0CF20((_QWORD *)a1, v16);
    v11 = *(unsigned __int64 **)(a1 + 7968);
  }
  v17 = v11[6];
  if ( v17 && (v8[192] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v8[192] = sub_1F0CF20((_QWORD *)a1, v17);
    v11 = *(unsigned __int64 **)(a1 + 7968);
  }
  v18 = v11[7];
  if ( !v18 )
    goto LABEL_20;
  v38 = (__int64 *)(sub_1F0CF20((_QWORD *)a1, v18) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = v38;
  if ( !v38 )
  {
    v49 = j__strlen("ucontext_t type is NULL");
    v50 = "ucontext_t type is NULL";
    goto LABEL_49;
  }
  if ( !v8[209] )
  {
    v40 = sub_F6AC00(*v38);
    if ( v40 )
    {
      v8[209] = *(_QWORD *)(v40 + 32);
    }
    else
    {
      v69 = *v39;
      if ( (unsigned int)*(unsigned __int8 *)(*v39 + 16) - 47 > 1 )
        v69 = sub_1EA8540(v69, v18, v41, v42);
      v8[209] = sub_F60F10(v69, v18, v41, v42, v43, v44);
    }
  }
LABEL_20:
  v19 = sub_A62AC0((__int64)v8);
  sub_1EEF2B0(a1, v19);
  v23 = *(unsigned int *)(a1 + 8120);
  if ( (_DWORD)v23 )
    v8[212] = sub_1EDB980((_QWORD *)a1, **(_QWORD **)(a1 + 8112), v23, v20, v21, v22);
  v24 = *(unsigned int **)(a1 + 9160);
  v25 = 8LL * *(unsigned int *)(a1 + 9168);
  v26 = &v24[(unsigned __int64)v25 / 4];
  if ( v24 != &v24[(unsigned __int64)v25 / 4] )
  {
    do
    {
      while ( 1 )
      {
        v27 = sub_1EAD760(a1, *v24);
        v28 = v27;
        if ( v27 )
        {
          sub_1EC5B60(a1, v27);
          if ( v24[1] )
            break;
        }
        v24 += 2;
        if ( v26 == v24 )
          goto LABEL_28;
      }
      v29 = v24[1];
      v24 += 2;
      sub_1464EA0(*(_QWORD *)(a1 + 136), v28, v29, 1);
    }
    while ( v26 != v24 );
LABEL_28:
    v26 = *(unsigned int **)(a1 + 9160);
    v25 = 8LL * *(unsigned int *)(a1 + 9168);
  }
  v30 = *(unsigned int *)(a1 + 9200);
  v31 = (v25 >> 3) + v30;
  if ( v31 > *(unsigned int *)(a1 + 9204) )
  {
    sub_2237220(a1 + 9192, a1 + 9208, v31, 8);
    v30 = *(unsigned int *)(a1 + 9200);
  }
  if ( v25 )
  {
    memcpy((void *)(*(_QWORD *)(a1 + 9192) + 8 * v30), v26, v25);
    LODWORD(v30) = *(_DWORD *)(a1 + 9200);
  }
  *(_DWORD *)(a1 + 9168) = 0;
  *(_DWORD *)(a1 + 9200) = v30 + (v25 >> 3);
}
