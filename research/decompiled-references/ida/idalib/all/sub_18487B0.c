void __fastcall sub_18487B0(__int64 a1)
{
  __int64 v1; // rax
  void (*v3)(); // rdx
  char *v4; // r8
  unsigned __int64 v5; // r15
  __int64 v6; // r9
  char *v7; // r13
  signed __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rcx
  char *v15; // rbp
  unsigned __int64 v16; // r10
  char *v17; // r14
  __int64 v18; // r12
  unsigned int v19; // r15d
  char *v20; // rax
  __int64 v21; // rsi
  int v22; // edx
  __int64 v23; // r15
  char *v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  char *v28; // rdx
  __int64 v29; // rdi
  int v30; // esi
  __int64 v31; // rdx
  char *v32; // r9
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rbp
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 *v41; // rsi
  __int64 v42; // r9
  unsigned __int64 v43; // r15
  _QWORD *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned int v47; // esi
  char *v48; // rcx
  __int64 v49; // r9
  __int64 v50; // r10
  unsigned int v51; // edx
  __int64 *v52; // rax
  __int64 v53; // rdi
  _BYTE *v54; // rax
  unsigned __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 *v58; // rax
  int v59; // esi
  int v60; // r9d
  int v61; // edi
  bool v62; // zf
  char *v63; // rcx
  __int64 *v64; // r15
  unsigned __int64 v65; // [rsp+0h] [rbp-118h]
  signed __int64 v66; // [rsp+0h] [rbp-118h]
  signed __int64 v67; // [rsp+0h] [rbp-118h]
  signed __int64 v68; // [rsp+0h] [rbp-118h]
  char *v69; // [rsp+18h] [rbp-100h]
  signed __int64 v70; // [rsp+18h] [rbp-100h]
  __int64 v71; // [rsp+18h] [rbp-100h]
  __int64 *v72; // [rsp+18h] [rbp-100h]
  char *v73; // [rsp+18h] [rbp-100h]
  __int64 v74; // [rsp+18h] [rbp-100h]
  int v75; // [rsp+18h] [rbp-100h]
  unsigned __int64 v76; // [rsp+20h] [rbp-F8h]
  char *v77; // [rsp+20h] [rbp-F8h]
  char v78; // [rsp+20h] [rbp-F8h]
  __int64 v79; // [rsp+20h] [rbp-F8h]
  __int64 v80; // [rsp+28h] [rbp-F0h]
  __m128 v81; // [rsp+30h] [rbp-E8h] BYREF
  void *v82; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+48h] [rbp-D0h]
  _BYTE v84[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v86; // [rsp+98h] [rbp-80h]
  _BYTE src[120]; // [rsp+A0h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 552);
  if ( !v1 )
    return;
  v83 = 0x400000000LL;
  v82 = v84;
  v3 = *(void (**)())(*(_QWORD *)v1 + 360LL);
  if ( v3 == nullsub_212 )
  {
    v4 = src;
    v86 = 0x400000000LL;
    v5 = 0;
    v6 = 0;
    ptr = src;
    v7 = src;
    v8 = 0;
    goto LABEL_4;
  }
  ((void (__fastcall *)(__int64, void **))v3)(v1, &v82);
  v4 = src;
  ptr = src;
  v86 = 0x400000000LL;
  if ( (_DWORD)v83 )
  {
    v35 = 0;
    v36 = 16 * ((unsigned int)(v83 - 1) + 1LL);
    while ( 1 )
    {
      v37 = *(_QWORD *)(a1 + 3560);
      v38 = *(_QWORD *)((char *)v82 + v35);
      v39 = *(unsigned int *)(a1 + 3576);
      if ( !(_DWORD)v39 )
        break;
      v40 = (v39 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
      v41 = (__int64 *)(v37 + 16LL * v40);
      v42 = *v41;
      if ( v38 != *v41 )
      {
        v59 = 1;
        if ( v42 == -4096 )
          break;
        while ( 1 )
        {
          v60 = v59 + 1;
          v40 = (v39 - 1) & (v40 + v59);
          v41 = (__int64 *)(v37 + 16LL * v40);
          if ( v38 == *v41 )
            break;
          if ( *v41 == -4096 )
            goto LABEL_50;
          v59 = v60;
        }
      }
      sub_18411D0(&v81, v41, (_QWORD *)(16 * v39 + v37), a1 + 3560, 1);
      v43 = v81.m128_u64[0];
LABEL_42:
      v44 = (_QWORD *)(*(_QWORD *)(a1 + 3560) + 16LL * *(unsigned int *)(a1 + 3576));
      sub_18411D0(&v81, v44, v44, a1 + 3560, 1);
      if ( v81.m128_u64[0] == v43 )
      {
        v47 = *(_DWORD *)(a1 + 3576);
        v48 = (char *)v82 + v35;
        v49 = *((unsigned __int8 *)v82 + v35 + 12);
        if ( !v47 )
        {
          v81.m128_u64[0] = 0;
          goto LABEL_67;
        }
        v46 = *(_QWORD *)v48;
        v50 = *(_QWORD *)(a1 + 3560);
        v51 = (v47 - 1) & (((unsigned int)*(_QWORD *)v48 >> 9) ^ ((unsigned int)*(_QWORD *)v48 >> 4));
        v52 = (__int64 *)(v50 + 16LL * v51);
        v53 = *v52;
        if ( *(_QWORD *)v48 != *v52 )
        {
          if ( v53 == -4096 )
          {
LABEL_61:
            v61 = *(_DWORD *)(a1 + 3568);
            v81.m128_u64[0] = (unsigned __int64)v52;
            v45 = (unsigned int)(v61 + 1);
            if ( 4 * (int)v45 < 3 * v47 )
            {
              if ( v47 - *(_DWORD *)(a1 + 3572) - (unsigned int)v45 > v47 >> 3 )
              {
LABEL_63:
                v62 = *v52 == -4096;
                *(_DWORD *)(a1 + 3568) = v45;
                if ( !v62 )
                  --*(_DWORD *)(a1 + 3572);
                *v52 = v46;
                v63 = (char *)v82;
                v54 = v52 + 1;
                *v54 = 0;
                v48 = &v63[v35];
                v46 = *(_QWORD *)v48;
                goto LABEL_46;
              }
              v72 = (__int64 *)((char *)v82 + v35);
              v78 = v49;
LABEL_68:
              sub_18485A0((__int64 *)(a1 + 3560), v47, v45, (__int64)v48, v46, v49);
              sub_18401F0((__int64 *)(a1 + 3560), v72, &v81);
              LOBYTE(v49) = v78;
              LODWORD(v45) = *(_DWORD *)(a1 + 3568) + 1;
              v46 = *v72;
              v52 = (__int64 *)v81.m128_u64[0];
              goto LABEL_63;
            }
LABEL_67:
            v72 = (__int64 *)((char *)v82 + v35);
            v47 *= 2;
            v78 = v49;
            goto LABEL_68;
          }
          v75 = 1;
          v64 = nullptr;
          while ( 1 )
          {
            if ( v53 == -8192 && !v64 )
              v64 = v52;
            v51 = (v47 - 1) & (v75 + v51);
            v52 = (__int64 *)(v50 + 16LL * v51);
            v53 = *v52;
            if ( v46 == *v52 )
              break;
            if ( v53 == -4096 )
            {
              if ( v64 )
                v52 = v64;
              goto LABEL_61;
            }
            ++v75;
          }
        }
        v54 = v52 + 1;
LABEL_46:
        *v54 = v49;
        v55 = *((unsigned int *)v48 + 2) | v65 & 0xFFFFFFFF00000000LL;
        v56 = (unsigned int)v86;
        v65 = v55;
        v57 = (unsigned int)v86 + 1LL;
        if ( v57 > HIDWORD(v86) )
        {
          v71 = v46;
          sub_2237220(&ptr, src, v57, 16);
          v56 = (unsigned int)v86;
          v46 = v71;
        }
        v35 += 16;
        v58 = (__int64 *)((char *)ptr + 16 * v56);
        *v58 = v46;
        v58[1] = v55;
        LODWORD(v86) = v86 + 1;
        if ( v36 == v35 )
          goto LABEL_49;
      }
      else
      {
        if ( !*(_BYTE *)(v43 + 8) && *((_BYTE *)v82 + v35 + 12) )
          *(_BYTE *)(v43 + 8) = 1;
        v35 += 16;
        if ( v36 == v35 )
        {
LABEL_49:
          v7 = (char *)ptr;
          v8 = 16LL * (unsigned int)v86;
          v4 = (char *)ptr + v8;
          v6 = v8 >> 4;
          v5 = v8 >> 4;
          goto LABEL_4;
        }
      }
    }
LABEL_50:
    sub_18411D0(
      &v81,
      (_QWORD *)(v37 + 16LL * (unsigned int)v39),
      (_QWORD *)(v37 + 16LL * (unsigned int)v39),
      a1 + 3560,
      1);
    v43 = v81.m128_u64[0];
    goto LABEL_42;
  }
  v5 = 0;
  v6 = 0;
  v8 = 0;
  v7 = src;
LABEL_4:
  v9 = *(unsigned int *)(a1 + 3296);
  v10 = a1 + 3288;
  v11 = *(unsigned int *)(a1 + 3300);
  v12 = v9;
  v13 = v9 + v5;
  v14 = 16 * v9;
  if ( !(16 * v9) )
  {
    if ( v13 > v11 )
    {
      v73 = v4;
      v67 = v8;
      sub_2237220(a1 + 3288, a1 + 3304, v13, 16);
      v9 = *(unsigned int *)(a1 + 3296);
      v4 = v73;
      v8 = v67;
    }
    if ( v7 != v4 )
    {
      memcpy((void *)(*(_QWORD *)(a1 + 3288) + 16 * v9), v7, v8);
      LODWORD(v9) = *(_DWORD *)(a1 + 3296);
    }
    *(_DWORD *)(a1 + 3296) = v5 + v9;
    goto LABEL_15;
  }
  if ( v13 > v11 )
  {
    v80 = v6;
    v77 = v4;
    v70 = v8;
    sub_2237220(a1 + 3288, a1 + 3304, v13, 16);
    v12 = *(unsigned int *)(a1 + 3296);
    v6 = v80;
    v15 = *(char **)(a1 + 3288);
    v4 = v77;
    v8 = v70;
    v10 = a1 + 3288;
    v14 = 16 * v12;
    v17 = &v15[16 * v12];
    v16 = (16 * v12) >> 4;
    v18 = v16;
    if ( v16 < v5 )
      goto LABEL_7;
LABEL_21:
    v23 = v14 - v8;
    v24 = &v15[v14 - v8];
    v25 = (v8 >> 4) + v12;
    v26 = v8 >> 4;
    v27 = (__int64)v17;
    if ( v25 > *(unsigned int *)(a1 + 3300) )
    {
      v79 = v8 >> 4;
      v74 = v6;
      v68 = v8;
      sub_2237220(v10, a1 + 3304, v25, 16);
      LODWORD(v12) = *(_DWORD *)(a1 + 3296);
      LODWORD(v26) = v79;
      v6 = v74;
      v8 = v68;
      v27 = *(_QWORD *)(a1 + 3288) + 16LL * (unsigned int)v12;
    }
    if ( v24 != v17 )
    {
      v28 = v24;
      do
      {
        v29 = *(_QWORD *)v28;
        v30 = *((_DWORD *)v28 + 2);
        v28 += 16;
        v27 += 16;
        *(_QWORD *)(v27 - 16) = v29;
        *(_DWORD *)(v27 - 8) = v30;
      }
      while ( v17 != v28 );
      LODWORD(v12) = *(_DWORD *)(a1 + 3296);
    }
    *(_DWORD *)(a1 + 3296) = v26 + v12;
    v31 = v23 >> 4;
    if ( v23 > 0 )
    {
      do
      {
        v24 -= 16;
        v17 -= 16;
        *(_QWORD *)v17 = *(_QWORD *)v24;
        *((_DWORD *)v17 + 2) = *((_DWORD *)v24 + 2);
        --v31;
      }
      while ( v31 );
    }
    v32 = &v7[16 * v6];
    if ( v8 )
    {
      do
      {
        v33 = *(_QWORD *)v7;
        v34 = *((_DWORD *)v7 + 2);
        v7 += 16;
        v15 += 16;
        *((_QWORD *)v15 - 2) = v33;
        *((_DWORD *)v15 - 2) = v34;
      }
      while ( v7 != v32 );
    }
    goto LABEL_15;
  }
  v15 = *(char **)(a1 + 3288);
  v16 = v14 >> 4;
  v17 = &v15[v14];
  v18 = v14 >> 4;
  if ( v14 >> 4 >= v5 )
    goto LABEL_21;
LABEL_7:
  v19 = v12 + v5;
  *(_DWORD *)(a1 + 3296) = v19;
  if ( v15 != v17 )
  {
    v76 = v16;
    v69 = v4;
    v66 = v14;
    memcpy(&v15[16LL * v19 - v14], v15, v14);
    v16 = v76;
    v4 = v69;
    v14 = v66;
  }
  if ( v16 )
  {
    v20 = v7;
    do
    {
      v21 = *(_QWORD *)v20;
      v22 = *((_DWORD *)v20 + 2);
      v15 += 16;
      v20 += 16;
      *((_QWORD *)v15 - 2) = v21;
      *((_DWORD *)v15 - 2) = v22;
      --v18;
    }
    while ( v18 );
    v7 += v14;
  }
  if ( v7 != v4 )
    memcpy(v17, v7, v4 - v7);
LABEL_15:
  if ( ptr != src )
    free(ptr);
  if ( v82 != v84 )
    free(v82);
}
