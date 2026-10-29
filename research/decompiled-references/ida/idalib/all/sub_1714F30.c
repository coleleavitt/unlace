__int64 __fastcall sub_1714F30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        _QWORD *a9,
        unsigned __int8 a10,
        bool a11)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // r15
  unsigned __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 *v27; // r15
  __int64 *v28; // rbp
  __int64 *v29; // r15
  __int64 v30; // rdi
  unsigned int v31; // eax
  unsigned int v32; // r14d
  __int64 v33; // r12
  unsigned __int64 v34; // rax
  bool v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // al
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 *v43; // rbp
  __int64 *v44; // r15
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int64 i; // rbp
  __int64 *v48; // r13
  __int64 *v49; // r12
  __int64 *v50; // rbp
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  unsigned int v59; // [rsp+8h] [rbp-140h]
  int v60; // [rsp+18h] [rbp-130h]
  __int64 v61; // [rsp+20h] [rbp-128h]
  __int64 v62; // [rsp+28h] [rbp-120h]
  __int64 v63; // [rsp+28h] [rbp-120h]
  unsigned __int8 v64; // [rsp+38h] [rbp-110h]
  bool v65; // [rsp+49h] [rbp-FFh]
  unsigned int v66[4]; // [rsp+50h] [rbp-F8h] BYREF
  int v67; // [rsp+60h] [rbp-E8h]
  __int64 v68; // [rsp+64h] [rbp-E4h]
  int v69; // [rsp+70h] [rbp-D8h]
  __m128 v70; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+88h] [rbp-C0h]
  char v72; // [rsp+90h] [rbp-B8h]
  __int64 v73; // [rsp+98h] [rbp-B0h]
  __int64 v74; // [rsp+A0h] [rbp-A8h]
  __int64 v75; // [rsp+A8h] [rbp-A0h]
  __m128 v76; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-88h]
  __int64 v78; // [rsp+D8h] [rbp-70h] BYREF

  v64 = a2;
  v60 = a3;
  v59 = a5;
  v65 = a11;
  v61 = 0;
  v16 = sub_1714190(a1, a2, a3, a4, a5, a6);
  if ( (*(_BYTE *)(v16 + 28) & 0x7F) == 0x14 )
  {
    v61 = v16;
    if ( !a11 )
    {
      v61 = v16;
      v65 = sub_BAB630(v16, a2, v12, v13, v14, v15) == 0;
    }
  }
  v17 = sub_B8E970(v16 + 48);
  v22 = (_QWORD *)v17;
  if ( !v17 )
    goto LABEL_9;
  if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x12 )
  {
LABEL_21:
    v62 = v16;
    v31 = v59;
    LOBYTE(v31) = v59 != 0;
    v18 = v31 & (a8 ^ 1);
LABEL_22:
    if ( (_BYTE)a2 != ((v22[7] & 0x20000LL) != 0) && (v65 & ((unsigned __int8)a2 ^ 1)) == 0 )
      goto LABEL_34;
    v76.m128_u64[0] = v22[5];
    if ( v59 > (unsigned int)sub_FDE930((__int64 *)&v76) )
      goto LABEL_34;
    if ( v60 == 1 )
    {
      v35 = (v76.m128_i8[0] & 3) == 1;
    }
    else
    {
      if ( v60 != 2 )
      {
        if ( ((v59 != 0) & (a8 ^ 1)) != 0 )
        {
          if ( v59 == (unsigned int)sub_FDE930((__int64 *)&v76) )
            goto LABEL_34;
        }
        else if ( !v59 )
        {
          goto LABEL_38;
        }
        v32 = 0;
        do
        {
          v33 = *(_QWORD *)(a4 + 8LL * v32);
          if ( v33 != sub_FDE960((__int64 *)&v76, v32) )
            goto LABEL_34;
          ++v32;
        }
        while ( v59 != v32 );
LABEL_38:
        sub_1706730(&v76, a7, v22[5]);
        if ( (_BYTE)v77 )
        {
          v77 = 0;
          v76 = 0;
          v67 = sub_16FE9F0((__int64)a9, (__int64)v22);
          *(_QWORD *)v66 = v22;
          v70 = v76;
          v68 = 0;
          v76 = 0;
          v71 = v77;
          v69 = 0;
          v77 = 0;
          v73 = 0;
          v72 = v72 & 0x80 | 0x40;
          v74 = 0;
          v75 = 0;
          sub_15A3440(v66, 1, v36, v37, v38, v39);
          sub_1705410((__int64)&v76);
          LODWORD(v68) = v59;
          v40 = (16 * (v60 != 0)) | v72 & 0xEF;
          v72 = v40;
          if ( !a10 )
          {
            v67 += 2;
            v72 = v40 | 2;
          }
          sub_17048E0((__int64)&v76, (__int64)v66);
          sub_17143A0(a9, &v76, a6);
          sub_1705410((__int64)&v78);
          sub_1705410((__int64)&v70);
        }
LABEL_34:
        while ( 1 )
        {
          v34 = v22[1] & 0xFFFFFFFFFFFFFFF8LL;
          v22 = (_QWORD *)v34;
          if ( !v34 )
            break;
          if ( (*(_BYTE *)(v34 + 28) & 0x7F) == 0x12 )
            goto LABEL_22;
        }
        v16 = v62;
        goto LABEL_9;
      }
      v35 = (unsigned int)sub_FDE930((__int64 *)&v76) == 1;
    }
    if ( !v35 )
      goto LABEL_34;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v23 = v22[1] & 0xFFFFFFFFFFFFFFF8LL;
    v22 = (_QWORD *)v23;
    if ( !v23 )
      break;
    if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x12 )
      goto LABEL_21;
  }
LABEL_9:
  result = *(_BYTE *)(v16 + 28) & 0x7F;
  if ( (_BYTE)result == 19 )
  {
    v25 = *(_QWORD *)(v16 + 104);
    if ( v25 )
    {
      result = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        goto LABEL_12;
    }
    else
    {
      sub_A79820((__int64 *)(*(_QWORD *)(v16 + 96) + 88LL), *(_QWORD *)(v16 + 96), v18, v19, v20, v21);
      result = *(_QWORD *)(v16 + 104) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        goto LABEL_12;
    }
    v27 = *(__int64 **)(result + 8);
    result = *(unsigned int *)(result + 16);
    if ( v27 != &v27[result] )
    {
      v28 = v27;
      v29 = &v27[result];
      do
      {
        v30 = *v28++;
        result = sub_1714F30(v30, (unsigned __int8)a2, v60, a4, v59, a6, a7, a8, (__int64)a9, 0, v65);
      }
      while ( v28 != v29 );
    }
  }
LABEL_12:
  if ( !v61 )
    return result;
  result = *(_QWORD *)(v61 + 120);
  if ( !result )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(v61 + 96) + 88LL), *(_QWORD *)(v61 + 96), v18, v19, v20, v21);
    result = *(_QWORD *)(v61 + 120);
  }
  v26 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return result;
  if ( (*(_BYTE *)(v26 + 72) & 1) != 0 )
  {
    sub_BA8900(v61);
    result = *(_QWORD *)(v61 + 120);
    v26 = result & 0xFFFFFFFFFFFFFFF8LL;
    v41 = *(unsigned int *)((result & 0xFFFFFFFFFFFFFFF8LL) + 24);
    v42 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v43 = (__int64 *)(v42 + 8 * v41);
    if ( !result )
    {
      v41 = *(_QWORD *)(v61 + 96);
      sub_A794E0((__int64 *)(v41 + 88), v41, v26, v42, v20, v21);
      result = *(_QWORD *)(v61 + 120);
      v26 = result & 0xFFFFFFFFFFFFFFF8LL;
    }
    v44 = nullptr;
    if ( !v26 )
      goto LABEL_48;
  }
  else
  {
    v41 = *(unsigned int *)(v26 + 24);
    v42 = *(_QWORD *)(v26 + 16);
    v43 = (__int64 *)(v42 + 8 * v41);
  }
  if ( (*(_BYTE *)(v26 + 72) & 1) != 0 )
  {
    sub_BA8900(v61);
    result = *(_QWORD *)(v61 + 120);
    v26 = result & 0xFFFFFFFFFFFFFFF8LL;
  }
  v44 = *(__int64 **)(v26 + 16);
LABEL_48:
  if ( v43 != v44 )
  {
    do
    {
      v45 = *v44;
      v41 = v64;
      ++v44;
      sub_1714F30(v45, v64, v60, a4, v59, a6, a7, a8, (__int64)a9, 0, v65);
    }
    while ( v43 != v44 );
    result = *(_QWORD *)(v61 + 120);
  }
  if ( !result )
  {
    v41 = *(_QWORD *)(v61 + 96);
    sub_A794E0((__int64 *)(v41 + 88), v41, v26, v42, v20, v21);
    result = *(_QWORD *)(v61 + 120);
  }
  v46 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( v46 )
  {
    if ( (*(_BYTE *)(v46 + 72) & 1) != 0 )
    {
      sub_BA8900(v61);
      v46 = *(_QWORD *)(v61 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    for ( i = *(_QWORD *)(v46 + 56); i; i = *(_QWORD *)(i + 128) )
    {
      while ( 1 )
      {
        v41 = v64;
        sub_1714F30(i, v64, v60, a4, v59, a6, a7, a8, (__int64)a9, a10, v65);
        v48 = *(__int64 **)(i + 104);
        v49 = &v48[*(unsigned int *)(i + 112)];
        if ( v48 != v49 )
        {
          v63 = i;
          v50 = *(__int64 **)(i + 104);
          do
          {
            v51 = *v50++;
            v41 = v64;
            sub_1714F30(v51, v64, v60, a4, v59, a6, a7, a8, (__int64)a9, 0, v65);
          }
          while ( v50 != v49 );
          i = v63;
        }
        v52 = sub_BA8FC0(i);
        if ( !v52 )
          break;
        v41 = v64;
        sub_1714F30(v52, v64, v60, a4, v59, a6, a7, a8, (__int64)a9, a10, v65);
        i = *(_QWORD *)(i + 128);
        if ( !i )
          goto LABEL_63;
      }
    }
  }
LABEL_63:
  if ( sub_BAB630(v61, v41, v26, v42, v20, v21) )
  {
    v57 = sub_BAB630(v61, v41, v53, v54, v55, v56);
    v41 = v64;
    sub_1714F30(v57, v64, v60, a4, v59, a6, a7, a8, (__int64)a9, 0, 0);
  }
  result = sub_BAC6C0(v61, v41, v53, v54, v55, v56);
  if ( result )
    return sub_1714F30(result, v64, v60, a4, v59, a6, a7, a8, (__int64)a9, a10, v65);
  return result;
}
