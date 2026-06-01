__int64 __fastcall sub_B16A80(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int *v7; // rax
  size_t v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int *v17; // rax
  size_t v18; // rdx
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned int *v26; // rax
  size_t v27; // rdx
  const char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned int *v35; // rax
  size_t v36; // rdx
  const char *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // rax
  unsigned int *v44; // rax
  size_t v45; // rdx
  const char *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rax
  unsigned int *v53; // rax
  size_t v54; // rdx
  const char *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r13
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 v61; // rax
  unsigned int *v62; // rax
  size_t v63; // rdx
  const char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 v69; // r13
  __int64 v70; // rax
  unsigned int *v71; // rax
  size_t v72; // rdx
  const char *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // r12
  __int64 v78; // r13
  __int64 v79; // rax
  unsigned int *v80; // rax
  size_t v81; // rdx
  const char *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r12
  _BYTE v87[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v87[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  switch ( v4 )
  {
    case 0:
      sub_995540(a2, "__attribute__((ownership_holds");
      sub_AFB8E0(a2, v87);
      v78 = sub_995540(a2, &byte_22F0C30);
      v79 = *(_QWORD *)(a1 + 40);
      if ( v79 )
      {
        v80 = *(unsigned int **)(v79 + 16);
        v81 = *v80;
        v82 = (const char *)(v80 + 4);
      }
      else
      {
        v82 = &byte_22F0C30;
        v81 = j__strlen(&byte_22F0C30);
      }
      v83 = sub_9954E0(v78, v82, v81);
      sub_995540(v83, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v84 = *(_QWORD *)(a1 + 56);
      v85 = v84 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v85 != v84 )
      {
        v86 = *(_QWORD *)(a1 + 56);
        do
        {
          v86 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v86 - 4) & 0x3FFFFFFF);
        }
        while ( v85 != v86 );
      }
      goto LABEL_24;
    case 1:
      sub_995540(a2, "[[clang::ownership_holds");
      sub_AFB8E0(a2, v87);
      v60 = sub_995540(a2, &byte_22F0C30);
      v61 = *(_QWORD *)(a1 + 40);
      if ( v61 )
      {
        v62 = *(unsigned int **)(v61 + 16);
        v63 = *v62;
        v64 = (const char *)(v62 + 4);
      }
      else
      {
        v64 = &byte_22F0C30;
        v63 = j__strlen(&byte_22F0C30);
      }
      v65 = sub_9954E0(v60, v64, v63);
      sub_995540(v65, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v66 = *(_QWORD *)(a1 + 56);
      v67 = v66 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v67 != v66 )
      {
        v68 = *(_QWORD *)(a1 + 56);
        do
        {
          v68 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v68 - 4) & 0x3FFFFFFF);
        }
        while ( v67 != v68 );
      }
      goto LABEL_10;
    case 2:
      sub_995540(a2, "[[clang::ownership_holds");
      sub_AFB8E0(a2, v87);
      v69 = sub_995540(a2, &byte_22F0C30);
      v70 = *(_QWORD *)(a1 + 40);
      if ( v70 )
      {
        v71 = *(unsigned int **)(v70 + 16);
        v72 = *v71;
        v73 = (const char *)(v71 + 4);
      }
      else
      {
        v73 = &byte_22F0C30;
        v72 = j__strlen(&byte_22F0C30);
      }
      v74 = sub_9954E0(v69, v73, v72);
      sub_995540(v74, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v75 = *(_QWORD *)(a1 + 56);
      v76 = v75 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v75 != v76 )
      {
        v77 = *(_QWORD *)(a1 + 56);
        do
        {
          v77 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v77 - 4) & 0x3FFFFFFF);
        }
        while ( v76 != v77 );
      }
      goto LABEL_10;
    case 3:
      sub_995540(a2, "__attribute__((ownership_returns");
      sub_AFB8E0(a2, v87);
      v24 = sub_995540(a2, &byte_22F0C30);
      v25 = *(_QWORD *)(a1 + 40);
      if ( v25 )
      {
        v26 = *(unsigned int **)(v25 + 16);
        v27 = *v26;
        v28 = (const char *)(v26 + 4);
      }
      else
      {
        v28 = &byte_22F0C30;
        v27 = j__strlen(&byte_22F0C30);
      }
      v29 = sub_9954E0(v24, v28, v27);
      sub_995540(v29, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v30 = *(_QWORD *)(a1 + 56);
      v31 = v30 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v30 != v31 )
      {
        v32 = *(_QWORD *)(a1 + 56);
        do
        {
          v32 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v32 - 4) & 0x3FFFFFFF);
        }
        while ( v32 != v31 );
      }
      goto LABEL_24;
    case 4:
      sub_995540(a2, "[[clang::ownership_returns");
      sub_AFB8E0(a2, v87);
      v33 = sub_995540(a2, &byte_22F0C30);
      v34 = *(_QWORD *)(a1 + 40);
      if ( v34 )
      {
        v35 = *(unsigned int **)(v34 + 16);
        v36 = *v35;
        v37 = (const char *)(v35 + 4);
      }
      else
      {
        v37 = &byte_22F0C30;
        v36 = j__strlen(&byte_22F0C30);
      }
      v38 = sub_9954E0(v33, v37, v36);
      sub_995540(v38, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v39 = *(_QWORD *)(a1 + 56);
      v40 = v39 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v39 != v40 )
      {
        v41 = *(_QWORD *)(a1 + 56);
        do
        {
          v41 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v41 - 4) & 0x3FFFFFFF);
        }
        while ( v41 != v40 );
      }
      goto LABEL_10;
    case 5:
      sub_995540(a2, "[[clang::ownership_returns");
      sub_AFB8E0(a2, v87);
      v42 = sub_995540(a2, &byte_22F0C30);
      v43 = *(_QWORD *)(a1 + 40);
      if ( v43 )
      {
        v44 = *(unsigned int **)(v43 + 16);
        v45 = *v44;
        v46 = (const char *)(v44 + 4);
      }
      else
      {
        v46 = &byte_22F0C30;
        v45 = j__strlen(&byte_22F0C30);
      }
      v47 = sub_9954E0(v42, v46, v45);
      sub_995540(v47, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v48 = *(_QWORD *)(a1 + 56);
      v49 = v48 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v48 != v49 )
      {
        v50 = *(_QWORD *)(a1 + 56);
        do
        {
          v50 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v50 - 4) & 0x3FFFFFFF);
        }
        while ( v50 != v49 );
      }
      goto LABEL_10;
    case 6:
      sub_995540(a2, "__attribute__((ownership_takes");
      sub_AFB8E0(a2, v87);
      v51 = sub_995540(a2, &byte_22F0C30);
      v52 = *(_QWORD *)(a1 + 40);
      if ( v52 )
      {
        v53 = *(unsigned int **)(v52 + 16);
        v54 = *v53;
        v55 = (const char *)(v53 + 4);
      }
      else
      {
        v55 = &byte_22F0C30;
        v54 = j__strlen(&byte_22F0C30);
      }
      v56 = sub_9954E0(v51, v55, v54);
      sub_995540(v56, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v57 = *(_QWORD *)(a1 + 56);
      v58 = v57 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v57 != v58 )
      {
        v59 = *(_QWORD *)(a1 + 56);
        do
        {
          v59 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v59 - 4) & 0x3FFFFFFF);
        }
        while ( v59 != v58 );
      }
LABEL_24:
      sub_995540(a2, &byte_22F0C30);
      if ( !v87[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "))");
    case 7:
      sub_995540(a2, "[[clang::ownership_takes");
      sub_AFB8E0(a2, v87);
      v5 = sub_995540(a2, &byte_22F0C30);
      v6 = *(_QWORD *)(a1 + 40);
      if ( v6 )
      {
        v7 = *(unsigned int **)(v6 + 16);
        v8 = *v7;
        v9 = (const char *)(v7 + 4);
      }
      else
      {
        v9 = &byte_22F0C30;
        v8 = j__strlen(&byte_22F0C30);
      }
      v10 = sub_9954E0(v5, v9, v8);
      sub_995540(v10, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v11 = *(_QWORD *)(a1 + 56);
      v12 = v11 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v11 != v12 )
      {
        v13 = *(_QWORD *)(a1 + 56);
        do
        {
          v13 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v13 - 4) & 0x3FFFFFFF);
        }
        while ( v13 != v12 );
      }
      goto LABEL_10;
    case 8:
      sub_995540(a2, "[[clang::ownership_takes");
      sub_AFB8E0(a2, v87);
      v15 = sub_995540(a2, &byte_22F0C30);
      v16 = *(_QWORD *)(a1 + 40);
      if ( v16 )
      {
        v17 = *(unsigned int **)(v16 + 16);
        v18 = *v17;
        v19 = (const char *)(v17 + 4);
      }
      else
      {
        v19 = &byte_22F0C30;
        v18 = j__strlen(&byte_22F0C30);
      }
      v20 = sub_9954E0(v15, v19, v18);
      sub_995540(v20, &byte_22F0C30);
      sub_995540(a2, &byte_22F0C30);
      v21 = *(_QWORD *)(a1 + 56);
      v22 = v21 + 4LL * *(unsigned int *)(a1 + 48);
      if ( v21 != v22 )
      {
        v23 = *(_QWORD *)(a1 + 56);
        do
        {
          v23 += 4;
          sub_AFB8E0(a2, v87);
          sub_227B910(a2, *(_DWORD *)(v23 - 4) & 0x3FFFFFFF);
        }
        while ( v23 != v22 );
      }
LABEL_10:
      sub_995540(a2, &byte_22F0C30);
      if ( !v87[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "]]");
  }
}
