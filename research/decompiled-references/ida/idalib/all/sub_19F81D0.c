void __fastcall sub_19F81D0(__int64 a1, __int64 a2)
{
  unsigned __int64 p_src; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  char v19; // al
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rdx
  _BYTE *v23; // r11
  signed __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r11
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rdx
  __int64 i; // rax
  _QWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  char *v51; // rdx
  char *v52; // rcx
  char *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdi
  __int64 v65; // rbx
  unsigned __int64 v66; // rsi
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 *v76; // rdi
  char *v77; // rdx
  __int64 v78; // rsi
  char *v79; // rax
  char *v80; // rcx
  char *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rsi
  char *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // [rsp+18h] [rbp-170h]
  __int64 v87; // [rsp+18h] [rbp-170h]
  __int64 v88; // [rsp+18h] [rbp-170h]
  __int64 v89; // [rsp+18h] [rbp-170h]
  __int64 v90; // [rsp+18h] [rbp-170h]
  __int64 v91; // [rsp+18h] [rbp-170h]
  __int64 v92; // [rsp+18h] [rbp-170h]
  _BYTE *v93; // [rsp+20h] [rbp-168h]
  __int64 v94; // [rsp+28h] [rbp-160h]
  void *ptr; // [rsp+30h] [rbp-158h] BYREF
  __int64 v96; // [rsp+38h] [rbp-150h]
  _BYTE v97[128]; // [rsp+40h] [rbp-148h] BYREF
  void *src; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-C0h]
  _BYTE v100[184]; // [rsp+D0h] [rbp-B8h] BYREF

  p_src = a1;
  v96 = 0x1000000000LL;
  ptr = v97;
  sub_A6A4A0((__int64)&ptr, a1);
  v7 = v96;
  v8 = ptr;
  if ( (_DWORD)v96 )
  {
    v94 = a2 + 16;
    while ( 1 )
    {
      v9 = v8[v7 - 1];
      LODWORD(v96) = v7 - 1;
      v10 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v9) = v10 | v9;
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v11 | v9 & 7;
      v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v13 + 8) & 0xF) != 0 )
        v13 = sub_F64F00(v12, p_src, v11, v4, v5);
      v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)v14;
      v16 = v14;
      v17 = *(unsigned __int8 *)(*(_QWORD *)v14 + 16LL);
      v18 = (unsigned int)(v17 - 2);
      v19 = *(_BYTE *)(*(_QWORD *)v14 + 16LL);
      if ( (unsigned int)v18 <= 1 )
        break;
      v26 = (unsigned int)(v17 - 57);
      if ( (unsigned int)v26 > 1 )
      {
        if ( v19 != 48 )
          goto LABEL_36;
        v32 = sub_F63270(v15, p_src, v26, v18, v5, v6);
        v33 = v32[13];
        v87 = (__int64)v32;
        sub_7052B0((__int64 *)(v33 + 96), v33, v34, v35, v36, v37);
        v41 = v87;
        if ( (*(_BYTE *)(*(_QWORD *)(v87 + 128) + 1LL) & 0x10) != 0 )
          v41 = sub_B96CF0(v87, v33, v38, v39, v40, v87);
        if ( *(_BYTE *)(v41 + 73) >> 5 == 2
          || (v42 = *(_QWORD *)(v41 + 104),
              v88 = v41,
              sub_7052B0((__int64 *)(v42 + 96), v42, v38, v39, v40, v41),
              **(char **)(v88 + 128) >= 0) )
        {
LABEL_36:
          p_src = v16;
          sub_A6A4A0(a2, v16);
          goto LABEL_19;
        }
        src = v100;
        v99 = 0x1000000000LL;
        v46 = sub_B7E900(v88, v42, v43, v44, v45, v88);
        v47 = v88;
        v48 = v46;
        if ( v46 )
        {
LABEL_38:
          while ( 1 )
          {
            v89 = v47;
            sub_A6A4A0((__int64)&src, *(_QWORD *)(v48 + 48));
            v47 = v89;
            v49 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v48 = v49;
            if ( !v49 )
              break;
            if ( (*(_BYTE *)(v49 + 28) & 0x7Fu) - 49 > 2 )
            {
              while ( 1 )
              {
                v50 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v48 = v50;
                if ( !v50 )
                  goto LABEL_43;
                if ( (*(_BYTE *)(v50 + 28) & 0x7Fu) - 49 <= 2 )
                  goto LABEL_38;
              }
            }
          }
        }
LABEL_43:
        v51 = (char *)src;
        v52 = (char *)src + 8 * (unsigned int)v99;
        if ( src != v52 )
        {
          v53 = v52 - 8;
          if ( v52 - 8 > src )
          {
            do
            {
              v54 = *(_QWORD *)v51;
              v55 = *(_QWORD *)v53;
              v51 += 8;
              v53 -= 8;
              *((_QWORD *)v51 - 1) = v55;
              *((_QWORD *)v53 + 1) = v54;
            }
            while ( v51 < v53 );
            v51 = (char *)src;
            v52 = (char *)src + 8 * (unsigned int)v99;
          }
        }
        v90 = v47;
        sub_19F7B80((__int64 *)&ptr, (char *)ptr + 8 * (unsigned int)v96, v51, v52);
        p_src = *(_QWORD *)(v90 + 104);
        sub_7052B0((__int64 *)(p_src + 96), p_src, v56, v57, v58, v90);
        v6 = v90;
        if ( (*(_BYTE *)(*(_QWORD *)(v90 + 128) + 1LL) & 0x10) == 0 )
        {
          LODWORD(v99) = 0;
          sub_7052B0((__int64 *)(*(_QWORD *)(v90 + 104) + 96LL), *(_QWORD *)(v90 + 104), v59, v4, v5, v90);
          v63 = v90;
          v64 = *(_QWORD *)(v90 + 128);
          if ( (*(_BYTE *)(v64 + 24) & 1) != 0 )
          {
            v85 = sub_B96980(v64);
            v63 = v90;
            v65 = v85;
          }
          else
          {
            v65 = *(_QWORD *)(v64 + 24);
          }
          v92 = v63;
          sub_7052B0((__int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104), v60, v61, v62, v63);
          v66 = *(_QWORD *)(v92 + 104);
          v67 = v65 + 24LL * *(unsigned int *)(*(_QWORD *)(v92 + 128) + 16LL);
          sub_7052B0((__int64 *)(v66 + 96), v66, v68, v69, v70, v92);
          v74 = *(_QWORD *)(v92 + 128);
          if ( (*(_BYTE *)(v74 + 24) & 1) != 0 )
            v75 = sub_B96980(v74);
          else
            v75 = *(_QWORD *)(v74 + 24);
          while ( v75 != v67 )
          {
            v76 = *(__int64 **)(v75 + 16);
            v75 += 24;
            v66 = sub_19F6590(v76, v66, v71, v72, v73);
            sub_A6A4A0((__int64)&src, v66);
          }
          v77 = (char *)src;
          v78 = (unsigned int)v99;
          v79 = (char *)src + 8 * (unsigned int)v99;
          v80 = (char *)src;
          if ( src != v79 )
          {
            v81 = v79 - 8;
            if ( v81 > src )
            {
              do
              {
                v82 = *(_QWORD *)v80;
                v83 = *(_QWORD *)v81;
                v80 += 8;
                v81 -= 8;
                *((_QWORD *)v80 - 1) = v83;
                *((_QWORD *)v81 + 1) = v82;
              }
              while ( v80 < v81 );
              v77 = (char *)src;
              v78 = (unsigned int)v99;
            }
          }
          v84 = &v77[8 * v78];
          p_src = (unsigned __int64)ptr + 8 * (unsigned int)v96;
          sub_19F7B80((__int64 *)&ptr, (char *)p_src, v77, v84);
        }
        if ( src != v100 )
          free(src);
      }
      else
      {
        v4 = *(unsigned int *)(a2 + 8);
        v27 = *(_QWORD *)(v15 + 32);
        v28 = *(unsigned int *)(v15 + 20);
        p_src = *(unsigned int *)(a2 + 12);
        v29 = *(_DWORD *)(a2 + 8);
        if ( v28 + v4 > p_src )
        {
          p_src = a2 + 16;
          v91 = v27;
          sub_2237220(a2, v94, v28 + v4, 8);
          v4 = *(unsigned int *)(a2 + 8);
          v27 = v91;
          v29 = *(_DWORD *)(a2 + 8);
        }
        v30 = *(_QWORD *)a2 + 8 * v4;
        if ( v28 )
        {
          for ( i = 0; i != v28; ++i )
            *(_QWORD *)(v30 + 8 * i) = v27;
          v29 = *(_DWORD *)(a2 + 8);
        }
        *(_DWORD *)(a2 + 8) = v29 + v28;
      }
LABEL_19:
      v7 = v96;
      v8 = ptr;
      if ( !(_DWORD)v96 )
        goto LABEL_20;
    }
    src = v100;
    v20 = 0;
    p_src = (unsigned __int64)&src;
    v99 = 0x1000000000LL;
    sub_19F81D0(*(_QWORD *)(v15 + 32), &src);
    while ( 1 )
    {
      v21 = *(_QWORD *)(v15 + 40);
      if ( (*(_BYTE *)(v15 + 19) & 2) == 0 )
        goto LABEL_13;
      v22 = *(unsigned __int64 **)v21;
      if ( *(_DWORD *)(v21 + 8) > 0x40u )
        break;
      v23 = src;
      if ( v20 >= (unsigned __int64)v22 )
      {
LABEL_17:
        if ( v23 != v100 )
          free(v23);
        goto LABEL_19;
      }
LABEL_14:
      v4 = *(unsigned int *)(a2 + 8);
      p_src = *(unsigned int *)(a2 + 12);
      v24 = 8LL * (unsigned int)v99;
      v25 = v24 >> 3;
      if ( v4 + (v24 >> 3) > p_src )
      {
        p_src = a2 + 16;
        v93 = v23;
        v86 = 8LL * (unsigned int)v99;
        sub_2237220(a2, v94, v4 + v25, 8);
        v4 = *(unsigned int *)(a2 + 8);
        v23 = v93;
        v24 = v86;
      }
      if ( v24 )
      {
        p_src = (unsigned __int64)v23;
        memcpy((void *)(*(_QWORD *)a2 + 8 * v4), v23, v24);
        v4 = *(unsigned int *)(a2 + 8);
      }
      ++v20;
      *(_DWORD *)(a2 + 8) = v4 + v25;
    }
    v21 = *v22;
LABEL_13:
    v23 = src;
    if ( v20 >= v21 )
      goto LABEL_17;
    goto LABEL_14;
  }
LABEL_20:
  if ( v8 != (_QWORD *)v97 )
    free(v8);
}
