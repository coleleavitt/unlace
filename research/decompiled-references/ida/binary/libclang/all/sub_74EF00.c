__int64 __fastcall sub_74EF00(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rdx
  size_t v8; // rsi
  const char *v9; // rdx
  size_t v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  char v14; // bp
  const char *v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rdx
  size_t v20; // rsi
  const char *v21; // rdx
  size_t v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int *v28; // rdx
  size_t v29; // rsi
  const char *v30; // rdx
  size_t v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r14
  char v35; // bp
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int *v38; // rdx
  size_t v39; // rsi
  const char *v40; // rdx
  size_t v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int *v47; // rdx
  size_t v48; // rsi
  const char *v49; // rdx
  size_t v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned int *v56; // rdx
  size_t v57; // rsi
  const char *v58; // rdx
  size_t v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int *v65; // rdx
  size_t v66; // rsi
  const char *v67; // rdx
  size_t v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r13
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned int *v74; // rdx
  size_t v75; // rsi
  const char *v76; // rdx
  size_t v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned int *v83; // rdx
  size_t v84; // rsi
  const char *v85; // rdx
  size_t v86; // rcx
  __int64 v87; // rax
  __int64 v88; // r13
  __int64 v89; // r14
  _BYTE v90[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v90[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  switch ( v4 )
  {
    case 0:
      sub_5FF0F0(a2, "__attribute__((ownership_holds");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v26 = sub_5FF0F0(a2, &byte_3B9466E);
      v27 = *(_QWORD *)(a1 + 40);
      if ( v27 )
      {
        v28 = *(unsigned int **)(v27 + 16);
        v29 = *v28;
        v30 = (const char *)(v28 + 4);
        v31 = v29;
      }
      else
      {
        v30 = &byte_3B9466E;
        v31 = 0;
      }
      v32 = sub_722320(v26, v30, v31);
      sub_5FF0F0(v32, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v33 = *(_QWORD *)(a1 + 56);
      v34 = v33 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v33 == v34 )
        goto LABEL_55;
      do
      {
        v33 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v33 - 4) & 0x3FFFFFFF);
      }
      while ( v33 != v34 );
      goto LABEL_21;
    case 1:
      sub_5FF0F0(a2, "[[clang::ownership_holds");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v45 = sub_5FF0F0(a2, &byte_3B9466E);
      v46 = *(_QWORD *)(a1 + 40);
      if ( v46 )
      {
        v47 = *(unsigned int **)(v46 + 16);
        v48 = *v47;
        v49 = (const char *)(v47 + 4);
        v50 = v48;
      }
      else
      {
        v49 = &byte_3B9466E;
        v50 = 0;
      }
      v51 = sub_722320(v45, v49, v50);
      sub_5FF0F0(v51, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v52 = *(_QWORD *)(a1 + 56);
      v53 = v52 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v53 == v52 )
        goto LABEL_53;
      do
      {
        v52 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v52 - 4) & 0x3FFFFFFF);
      }
      while ( v52 != v53 );
      goto LABEL_9;
    case 2:
      sub_5FF0F0(a2, "[[clang::ownership_holds");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v54 = sub_5FF0F0(a2, &byte_3B9466E);
      v55 = *(_QWORD *)(a1 + 40);
      if ( v55 )
      {
        v56 = *(unsigned int **)(v55 + 16);
        v57 = *v56;
        v58 = (const char *)(v56 + 4);
        v59 = v57;
      }
      else
      {
        v58 = &byte_3B9466E;
        v59 = 0;
      }
      v60 = sub_722320(v54, v58, v59);
      sub_5FF0F0(v60, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v61 = *(_QWORD *)(a1 + 56);
      v62 = v61 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v61 == v62 )
        goto LABEL_53;
      do
      {
        v61 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v61 - 4) & 0x3FFFFFFF);
      }
      while ( v61 != v62 );
      goto LABEL_9;
    case 3:
      sub_5FF0F0(a2, "__attribute__((ownership_returns");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v36 = sub_5FF0F0(a2, &byte_3B9466E);
      v37 = *(_QWORD *)(a1 + 40);
      if ( v37 )
      {
        v38 = *(unsigned int **)(v37 + 16);
        v39 = *v38;
        v40 = (const char *)(v38 + 4);
        v41 = v39;
      }
      else
      {
        v40 = &byte_3B9466E;
        v41 = 0;
      }
      v42 = sub_722320(v36, v40, v41);
      sub_5FF0F0(v42, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v43 = *(_QWORD *)(a1 + 56);
      v44 = v43 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v43 == v44 )
        goto LABEL_55;
      do
      {
        v43 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v43 - 4) & 0x3FFFFFFF);
      }
      while ( v43 != v44 );
      goto LABEL_21;
    case 4:
      sub_5FF0F0(a2, "[[clang::ownership_returns");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v81 = sub_5FF0F0(a2, &byte_3B9466E);
      v82 = *(_QWORD *)(a1 + 40);
      if ( v82 )
      {
        v83 = *(unsigned int **)(v82 + 16);
        v84 = *v83;
        v85 = (const char *)(v83 + 4);
        v86 = v84;
      }
      else
      {
        v85 = &byte_3B9466E;
        v86 = 0;
      }
      v87 = sub_722320(v81, v85, v86);
      sub_5FF0F0(v87, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v88 = *(_QWORD *)(a1 + 56);
      v89 = v88 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v88 == v89 )
        goto LABEL_53;
      do
      {
        v88 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v88 - 4) & 0x3FFFFFFF);
      }
      while ( v88 != v89 );
      goto LABEL_9;
    case 5:
      sub_5FF0F0(a2, "[[clang::ownership_returns");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v63 = sub_5FF0F0(a2, &byte_3B9466E);
      v64 = *(_QWORD *)(a1 + 40);
      if ( v64 )
      {
        v65 = *(unsigned int **)(v64 + 16);
        v66 = *v65;
        v67 = (const char *)(v65 + 4);
        v68 = v66;
      }
      else
      {
        v67 = &byte_3B9466E;
        v68 = 0;
      }
      v69 = sub_722320(v63, v67, v68);
      sub_5FF0F0(v69, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v70 = *(_QWORD *)(a1 + 56);
      v71 = v70 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v70 == v71 )
        goto LABEL_53;
      do
      {
        v70 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v70 - 4) & 0x3FFFFFFF);
      }
      while ( v70 != v71 );
      goto LABEL_9;
    case 6:
      sub_5FF0F0(a2, "__attribute__((ownership_takes");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v72 = sub_5FF0F0(a2, &byte_3B9466E);
      v73 = *(_QWORD *)(a1 + 40);
      if ( v73 )
      {
        v74 = *(unsigned int **)(v73 + 16);
        v75 = *v74;
        v76 = (const char *)(v74 + 4);
        v77 = v75;
      }
      else
      {
        v76 = &byte_3B9466E;
        v77 = 0;
      }
      v78 = sub_722320(v72, v76, v77);
      sub_5FF0F0(v78, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v79 = *(_QWORD *)(a1 + 56);
      v80 = v79 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v79 == v80 )
      {
LABEL_55:
        sub_5FF0F0(a2, &byte_3B9466E);
      }
      else
      {
        do
        {
          v79 += 4;
          sub_722380(a2, v90);
          sub_26238A0(a2, *(_DWORD *)(v79 - 4) & 0x3FFFFFFF);
        }
        while ( v79 != v80 );
LABEL_21:
        v35 = v90[0];
        sub_5FF0F0(a2, &byte_3B9466E);
        if ( v35 )
        {
LABEL_22:
          v15 = "))";
          return sub_5FF0F0(a2, v15);
        }
      }
      sub_5FF0F0(a2, ")");
      goto LABEL_22;
    case 7:
      sub_5FF0F0(a2, "[[clang::ownership_takes");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v5 = sub_5FF0F0(a2, &byte_3B9466E);
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
      {
        v7 = *(unsigned int **)(v6 + 16);
        v8 = *v7;
        v9 = (const char *)(v7 + 4);
        v10 = v8;
      }
      else
      {
        v9 = &byte_3B9466E;
        v10 = 0;
      }
      v11 = sub_722320(v5, v9, v10);
      sub_5FF0F0(v11, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v12 = *(_QWORD *)(a1 + 56);
      v13 = v12 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v12 == v13 )
        goto LABEL_53;
      do
      {
        v12 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v12 - 4) & 0x3FFFFFFF);
      }
      while ( v13 != v12 );
      goto LABEL_9;
    case 8:
      sub_5FF0F0(a2, "[[clang::ownership_takes");
      v90[0] = 0;
      sub_5FF0F0(a2, "(");
      v17 = sub_5FF0F0(a2, &byte_3B9466E);
      v18 = *(_QWORD *)(a1 + 40);
      if ( v18 )
      {
        v19 = *(unsigned int **)(v18 + 16);
        v20 = *v19;
        v21 = (const char *)(v19 + 4);
        v22 = v20;
      }
      else
      {
        v21 = &byte_3B9466E;
        v22 = 0;
      }
      v23 = sub_722320(v17, v21, v22);
      sub_5FF0F0(v23, &byte_3B9466E);
      sub_5FF0F0(a2, &byte_3B9466E);
      v24 = *(_QWORD *)(a1 + 56);
      v25 = v24 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v24 == v25 )
      {
LABEL_53:
        sub_5FF0F0(a2, &byte_3B9466E);
LABEL_54:
        sub_5FF0F0(a2, ")");
        goto LABEL_10;
      }
      do
      {
        v24 += 4;
        sub_722380(a2, v90);
        sub_26238A0(a2, *(_DWORD *)(v24 - 4) & 0x3FFFFFFF);
      }
      while ( v25 != v24 );
LABEL_9:
      v14 = v90[0];
      sub_5FF0F0(a2, &byte_3B9466E);
      if ( !v14 )
        goto LABEL_54;
LABEL_10:
      v15 = "]]";
      return sub_5FF0F0(a2, v15);
  }
}

