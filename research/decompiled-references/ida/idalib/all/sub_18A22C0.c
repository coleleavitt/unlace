void __fastcall sub_18A22C0(__int64 *a1, __int64 a2, __int64 *a3, int a4, int a5, double a6)
{
  __m128i *v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rax
  _DWORD *v17; // rax
  _BOOL8 v18; // rdx
  __m128i *v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 *v33; // r12
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _BYTE *v58; // rdx
  __int64 v59; // rbp
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  char v79; // al
  unsigned __int64 v80; // rdi
  unsigned int v81; // eax
  unsigned __int64 v82; // rax
  char v83; // al
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // [rsp+0h] [rbp-118h]
  unsigned __int64 v86; // [rsp+0h] [rbp-118h]
  __int64 v87; // [rsp+8h] [rbp-110h]
  int v88; // [rsp+10h] [rbp-108h]
  __m128i *v89; // [rsp+10h] [rbp-108h]
  __int64 *v90; // [rsp+20h] [rbp-F8h]
  int v91; // [rsp+28h] [rbp-F0h]
  int v92; // [rsp+2Ch] [rbp-ECh]
  unsigned __int64 v93; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v94; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v96[200]; // [rsp+50h] [rbp-C8h] BYREF

  v9 = (__m128i *)a2;
  sub_168B6C0((__int64)a1);
  v15 = *(_QWORD *)(a2 + 88);
  if ( !v15 )
    return;
  v16 = *(_QWORD *)(v15 + 120);
  if ( v16 )
  {
    v17 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v17 )
      goto LABEL_4;
  }
  else
  {
    a2 = *(_QWORD *)(v15 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, v11, v12, v13, v14);
    v17 = (_DWORD *)(*(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v17 )
    {
LABEL_4:
      v18 = (*(_BYTE *)(v15 + 29) & 2) != 0;
      if ( (*(_BYTE *)(v15 + 29) & 2) != 0 )
        goto LABEL_5;
      goto LABEL_37;
    }
  }
  v18 = (*(_BYTE *)(*(_QWORD *)v17 + 29LL) & 2) != 0;
  if ( (*(_BYTE *)(*(_QWORD *)v17 + 29LL) & 2) != 0 )
  {
LABEL_5:
    v17[20] = a5;
    if ( a4 )
    {
      v19 = v9 + 3;
      v20 = v15 + 48;
      v21 = (__int64)&a3[(unsigned int)(a4 - 1) + 1];
      do
      {
        sub_B90130(*a3, (__int64)v19, v18, v12, v13, v14);
        v22 = sub_168B6E0((__int64)a1);
        v27 = *a3;
        if ( byte_26430D8[*(unsigned int *)(v22 + 368)] )
        {
          sub_B94A80(v20, v27, v23, v24, v25, v26);
          v27 = *a3;
        }
        ++a3;
        sub_B94AD0(v19, v27, v23, v24, v25, v26);
      }
      while ( a3 != (__int64 *)v21 );
    }
    return;
  }
LABEL_37:
  if ( !a4 )
    return;
  v54 = sub_168B6E0((__int64)a1);
  v58 = byte_26430D8;
  if ( !byte_26430D8[*(unsigned int *)(v54 + 368)] )
  {
    v32 = sub_1896F80(v15, a2, (__int64)byte_26430D8, v55, v56, v57);
    if ( !*(_QWORD *)(v15 + 120) )
      sub_A794E0((__int64 *)(*(_QWORD *)(v15 + 96) + 88LL), *(_QWORD *)(v15 + 96), v28, v29, v30, v31);
    if ( !v32 )
    {
LABEL_33:
      v53 = *(_DWORD *)(*a3 + 24);
LABEL_34:
      sub_168B9F0((__int64)v96, a1, v53, 0xF86u, 0);
      sub_15F7200(v96);
      return;
    }
    v33 = a3;
    v90 = a3;
    v88 = a4 + 1;
    v34 = v32;
    while ( 2 )
    {
      v35 = *v33;
      v36 = *(_QWORD *)(*v33 + 48);
      v91 = v88 - a4;
      v37 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
      v38 = *(_QWORD *)&byte_8[*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v36) = v37 | v36;
      v39 = v37 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v39 | v36 & 7) == (v38 & 0xFFFFFFFFFFFFFFF8LL
                             | ((unsigned __int8)v38 | (unsigned __int8)*(_QWORD *)(v34 + 48)) & 7) )
      {
        if ( (*(_BYTE *)(v35 + 68) & 1) == 0
          || (*(_BYTE *)(v34 + 68) & 1) == 0
          || (v92 = sub_B78170(v35), v92 == (unsigned int)sub_B78170(v34)) )
        {
LABEL_19:
          v44 = *(_QWORD *)(v35 + 40);
          v45 = *(_QWORD *)(v34 + 40) & 7LL;
          if ( (v44 & 7) != 0 )
          {
            v46 = 0;
            if ( (_DWORD)v45 )
              goto LABEL_28;
          }
          else
          {
            v46 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            v47 = 0;
            if ( (_DWORD)v45 )
              goto LABEL_22;
          }
          v47 = *(_QWORD *)(v34 + 40) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_22:
          if ( v47 != v46 )
          {
            sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v35 + 24), 0xD8Bu, 0);
            v48 = *(_QWORD *)(v35 + 40);
            v49 = v48 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v48 & 7) != 0 )
              v49 = 0;
            v94 = v49;
            v50 = sub_18175F0((__int64)v96, (__int64 *)&v94);
            v51 = *(_QWORD *)(v34 + 40) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v34 + 40) & 7) != 0 )
              v51 = 0;
            v95 = v51;
            sub_18175F0(v50, &v95);
            sub_15F7200(v96);
            sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v34 + 24), 0x71u, 0);
            sub_15F7200(v96);
          }
LABEL_28:
          --a4;
          do
          {
            v52 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v34 = v52;
            if ( !v52 )
            {
              if ( !a4 )
                return;
              a3 = &v90[v91];
              goto LABEL_33;
            }
          }
          while ( (*(_BYTE *)(v52 + 28) & 0x7F) != 0x32 );
          ++v33;
          if ( a4 )
            continue;
          v53 = *(_DWORD *)(v52 + 24);
          goto LABEL_34;
        }
        v79 = *(_BYTE *)(v35 + 68);
        if ( (v79 & 1) != 0 )
        {
          v80 = *(_QWORD *)(v35 + 72);
          if ( (v79 & 0xC) != 0xC && (v79 & 0xC) != 0 )
            v80 = *(_QWORD *)(v80 + 8);
        }
        else
        {
          v80 = 0;
        }
        v81 = sub_EEB7E0(v80, v39, a6);
        sub_168B9F0((__int64)v96, a1, v81, 0xD8Au, 0);
        v82 = *(_QWORD *)(v35 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v35 + 40) & 7) != 0 )
          v82 = 0;
        v95 = v82;
        sub_18175F0((__int64)v96, &v95);
        sub_15F7200(v96);
        v83 = *(_BYTE *)(v34 + 68);
        if ( (v83 & 1) != 0 )
        {
          v84 = *(_QWORD *)(v34 + 72);
          if ( (v83 & 0xC) != 0xC && (v83 & 0xC) != 0 )
            v84 = *(_QWORD *)(v84 + 8);
        }
        else
        {
          v84 = 0;
        }
        v43 = sub_EEB7E0(v84, (__int64)&v95, a6);
      }
      else
      {
        sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v35 + 24), 0xD8Cu, 0);
        v40 = *(_QWORD *)(v35 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v35 + 40) & 7) != 0 )
          v40 = 0;
        v93 = v40;
        v41 = sub_18175F0((__int64)v96, (__int64 *)&v93);
        v94 = *(_QWORD *)(v35 + 48);
        v42 = sub_162B6D0(v41, (__int64 *)&v94);
        v95 = *(_QWORD *)(v34 + 48);
        sub_162B6D0(v42, &v95);
        sub_15F7200(v96);
        v43 = *(_DWORD *)(v34 + 24);
      }
      break;
    }
    sub_168B9F0((__int64)v96, a1, v43, 0x71u, 0);
    sub_15F7200(v96);
    goto LABEL_19;
  }
  if ( v9[6].m128i_i64[0] )
  {
    sub_168B9F0((__int64)v96, a1, v9[1].m128i_u32[2], 0x1C3Cu, 0);
    sub_15F7200(v96);
  }
  v89 = v9;
  v87 = (__int64)&a3[(unsigned int)(a4 - 1) + 1];
  do
  {
    v59 = *a3;
    v60 = *(_QWORD *)(*a3 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*a3 + 40) & 7) != 0 )
      v60 = 0;
    v85 = sub_BA7A00(v15, v60, (__int64)v58, v55, v56, v57);
    if ( v85 )
    {
      sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v59 + 24), 0xE81u, 0);
      sub_15F7200(v96);
      sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v85 + 24), 0x71u, 0);
      sub_15F7200(v96);
    }
    else
    {
      v65 = *(_QWORD *)(v15 + 120);
      if ( !v65 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(v15 + 96) + 88LL), *(_QWORD *)(v15 + 96), v61, v62, v63, v64);
        v65 = *(_QWORD *)(v15 + 120);
      }
      v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v66 )
      {
        v61 = v66;
        if ( (*(_BYTE *)(v66 + 72) & 1) != 0 )
        {
          sub_BA8900(v15);
          v61 = *(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v67 = *(_QWORD *)(v61 + 56);
        if ( v67 )
        {
          while ( 1 )
          {
            if ( *(char *)(v67 + 28) >= 0 )
            {
              v68 = *(_QWORD *)(v67 + 40);
              if ( ((v68 & 7) != 0 || (v68 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v67 + 8) & 6) == 0 )
                break;
            }
            v67 = *(_QWORD *)(v67 + 128);
            if ( !v67 )
              goto LABEL_65;
          }
          v95 = v67;
          do
          {
            v69 = *(_QWORD *)(v59 + 40) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v59 + 40) & 7) != 0 )
              v69 = 0;
            v70 = sub_BA7A00(v67, v69, v61, v62, v63, v64);
            if ( v70 )
            {
              v86 = v70;
              sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v59 + 24), 0xE81u, 0);
              sub_15F7200(v96);
              sub_168B9F0((__int64)v96, a1, *(_DWORD *)(v86 + 24), 0x71u, 0);
              sub_15F7200(v96);
            }
            v95 = *(_QWORD *)(v95 + 128);
            sub_1894010(&v95);
            v67 = v95;
          }
          while ( v95 );
        }
      }
LABEL_65:
      sub_B90130(v59, (__int64)v89[3].m128i_i64, v61, v62, v63, v64);
      sub_B94A80(v15 + 48, v59, v71, v72, v73, v74);
      sub_B94AD0(v89 + 3, v59, v75, v76, v77, v78);
    }
    ++a3;
  }
  while ( (__int64 *)v87 != a3 );
}
