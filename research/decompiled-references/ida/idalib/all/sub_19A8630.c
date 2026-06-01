__int64 __fastcall sub_19A8630(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  _QWORD *v10; // r13
  __int64 *v11; // rbp
  _QWORD *v12; // r15
  _BYTE *v13; // r14
  unsigned __int8 v14; // al
  int v15; // r12d
  __int64 v16; // rax
  int v17; // edx
  _QWORD *v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  char v23; // dl
  _QWORD *v24; // rdi
  __int64 v25; // r11
  __int64 *v26; // r10
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdi
  unsigned __int8 v31; // dl
  __int64 v32; // r12
  unsigned __int8 v33; // al
  _QWORD *v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rdi
  unsigned __int64 v41; // rdi
  __int64 v42; // rbp
  __m128 *v43; // rdi
  unsigned __int64 v44; // rbp
  __int64 v45; // r12
  _QWORD *v46; // r13
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // r13
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  unsigned __int8 v57; // dl
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rdi
  unsigned __int8 v63; // al
  int v64; // ecx
  unsigned __int64 v65; // rax
  unsigned int v66; // edx
  __int64 *v67; // rsi
  __int64 v68; // rsi
  int v69; // [rsp+8h] [rbp-100h]
  __int64 v70; // [rsp+8h] [rbp-100h]
  __int64 v71; // [rsp+10h] [rbp-F8h]
  _QWORD *v73; // [rsp+18h] [rbp-F0h]
  char v74; // [rsp+2Fh] [rbp-D9h]
  unsigned __int64 v75; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v76[200]; // [rsp+40h] [rbp-C8h] BYREF

  v8 = a2;
  v10 = *(_QWORD **)(a2 + 8);
  v11 = *(__int64 **)a1;
  v69 = 0;
  v71 = *(_QWORD *)(a1 + 8);
  if ( v10 == &v10[*(unsigned int *)(a2 + 16)] )
  {
LABEL_92:
    v29 = *(_DWORD *)v8;
    goto LABEL_34;
  }
  v12 = &v10[*(unsigned int *)(a2 + 16)];
  do
  {
    v13 = (_BYTE *)(*v10 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = v13[28] & 0x7F;
    v15 = v14;
    if ( (unsigned int)v14 - 53 > 1 && ((v14 + 52) & 0x7Fu) > 1 )
    {
      v17 = v14;
      v16 = *v10 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v16 = sub_B72ED0(*v10 & 0xFFFFFFFFFFFFFFF8LL);
      v17 = *(_BYTE *)(v16 + 28) & 0x7F;
    }
    if ( (unsigned int)(v17 - 58) <= 9 )
    {
      if ( (v18 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL)) == nullptr
        || (*(_BYTE *)(*v18 + 17LL) & 4) != 0
        || ((v19 = *(_QWORD *)(v16 + 48)) == 0
          ? (v20 = sub_A7AA70(*(_QWORD *)(v71 + 248), v16, (__int64)v18, a6, a7, a8) & 0xFFFFFFFFFFFFFFF0LL,
             v18 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL),
             v15 = v13[28] & 0x7F)
          : (v20 = v19 & 0xFFFFFFFFFFFFFFF0LL),
            *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(v18[1] & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        ++v69;
      }
    }
    if ( (unsigned int)(v15 - 59) <= 2 && sub_B97450((__int64)v13) )
    {
      v40 = *(_QWORD *)(sub_B8C1B0((__int64)(v13 + 64)) + 16);
      if ( (v40 & 4) != 0 )
        v41 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v41 = v40 & 0xFFFFFFFFFFFFFFF8LL;
      v22 = sub_B8C1B0(v41);
      v21 = *(_QWORD *)(a1 + 16);
      if ( !v22 )
      {
        v13 = nullptr;
        goto LABEL_16;
      }
      v13 = (_BYTE *)v22;
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 16);
    }
    v22 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 32LL))(v13);
LABEL_16:
    v23 = *(_BYTE *)(v21 + 20);
    if ( !v23 )
      goto LABEL_48;
    v24 = *(_QWORD **)v21;
    v25 = *(unsigned int *)(v21 + 12);
    v26 = (__int64 *)(*(_QWORD *)v21 + 8 * v25);
    if ( *(__int64 **)v21 != v26 )
    {
      a6 = *(_QWORD *)v21;
      if ( v22 == *v24 )
      {
LABEL_54:
        v23 = 0;
        goto LABEL_24;
      }
      while ( 1 )
      {
        a6 += 8LL;
        if ( v26 == (__int64 *)a6 )
          break;
        if ( v22 == *(_QWORD *)a6 )
          goto LABEL_54;
      }
    }
    if ( (unsigned int)v25 < *(_DWORD *)(v21 + 8) )
    {
      *(_DWORD *)(v21 + 12) = v25 + 1;
      *v26 = v22;
      v24 = *(_QWORD **)v21;
      a6 = *(_QWORD *)v21 + 8 * v25;
    }
    else
    {
LABEL_48:
      v38 = sub_2236760(v21, v22);
      v24 = *(_QWORD **)v21;
      a6 = v38;
      if ( !*(_BYTE *)(v21 + 20) )
      {
        v27 = &v24[*(unsigned int *)(v21 + 8)];
        goto LABEL_25;
      }
    }
LABEL_24:
    v27 = &v24[*(unsigned int *)(v21 + 12)];
LABEL_25:
    if ( v27 != (_QWORD *)a6 && *(_QWORD *)a6 >= 0xFFFFFFFFFFFFFFFELL )
    {
      a6 += 8LL;
      do
      {
        v28 = (_QWORD *)a6;
        if ( v27 == (_QWORD *)a6 )
          break;
        a6 += 8LL;
      }
      while ( *v28 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( v23 )
    {
      v39 = *(_QWORD *)(a1 + 24);
      a6 = *(unsigned int *)(v39 + 8);
      if ( a6 + 1 > *(unsigned int *)(v39 + 12) )
      {
        sub_2237220(*(_QWORD *)(a1 + 24), v39 + 16, a6 + 1, 8);
        a6 = *(unsigned int *)(v39 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v39 + 8 * a6) = v13;
      ++*(_DWORD *)(v39 + 8);
    }
    ++v10;
  }
  while ( v12 != v10 );
  v8 = a2;
  v29 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 5 && v69 == 1 )
  {
    sub_168B9F0((__int64)v76, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), **(_DWORD **)(a1 + 32), 0x15A1u, 0);
    sub_15F7200(v76);
    v74 = 0;
    v73 = *(_QWORD **)(a2 + 8);
    v49 = *(_QWORD *)(v8 + 8);
    v50 = *(unsigned int *)(v8 + 16);
    while ( v73 != (_QWORD *)(v49 + 8 * v50) )
    {
      v51 = v73;
      while ( 1 )
      {
        v73 = v51;
        v60 = *v51 & 0xFFFFFFFFFFFFFFF8LL;
        v63 = *(_BYTE *)(v60 + 28) & 0x7F;
        v64 = v63;
        if ( ((v63 + 52) & 0x7Fu) <= 1 || (v65 = *v51 & 0xFFFFFFFFFFFFFFF8LL, (unsigned int)(v64 - 53) <= 1) )
        {
          v65 = sub_B72ED0(v60);
          v64 = *(_BYTE *)(v65 + 28) & 0x7F;
        }
        v70 = v65;
        v66 = *(_DWORD *)(v60 + 24);
        v67 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
        if ( (unsigned int)(v64 - 58) <= 9 )
        {
          sub_168B9F0((__int64)v76, v67, v66, 0x171Cu, 0);
          v55 = *(_QWORD *)(v70 + 48);
          if ( v55 )
            v56 = v55 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v56 = sub_A7AA70(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), v70, *(_QWORD *)(a1 + 8), v52, v53, v54);
          v75 = v56;
          sub_162B6D0((__int64)v76, (__int64 *)&v75);
          sub_15F7200(v76);
        }
        else
        {
          sub_168B9F0((__int64)v76, v67, v66, 0x171Bu, 0);
          sub_15F7200(v76);
        }
        v57 = *(_BYTE *)(v60 + 28) & 0x7F;
        v58 = v57;
        a6 = (unsigned int)v57 - 53;
        if ( (unsigned int)a6 <= 1 || (v59 = (v57 + 52) & 0x7F, (unsigned __int8)v59 <= 1u) )
        {
          v60 = sub_B72ED0(v60);
          v58 = *(_BYTE *)(v60 + 28) & 0x7F;
        }
        if ( (unsigned int)(v58 - 58) > 9 )
          break;
        if ( (*v11 & 0xFFFFFFFFFFFFFFF0LL) != 0
          && (*(_BYTE *)(*(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        {
          v61 = *(_QWORD *)(v60 + 48);
          v62 = v61 ? v61 & 0xFFFFFFFFFFFFFFF0LL : sub_A7AA70(*(_QWORD *)(v71 + 248), v60, v59, a6, a7, a8);
          if ( !sub_199F900(v62, *v11) )
            break;
        }
        if ( ++v51 == (_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL * *(unsigned int *)(v8 + 16)) )
          goto LABEL_90;
      }
      v49 = *(_QWORD *)(v8 + 8);
      v68 = *(_QWORD *)(v49 + 8LL * *(unsigned int *)(v8 + 16) - 8);
      v50 = (unsigned int)(*(_DWORD *)(v8 + 16) - 1);
      a6 = v49 + 8 * v50;
      *(_DWORD *)(v8 + 16) = v50;
      if ( v51 != (_QWORD *)a6 )
      {
        *v51 = v68;
        v49 = *(_QWORD *)(v8 + 8);
        v50 = *(unsigned int *)(v8 + 16);
      }
      v74 = 1;
    }
LABEL_90:
    if ( v74 )
      sub_17A2370((unsigned int *)v8);
    goto LABEL_92;
  }
LABEL_34:
  if ( v29 == 5 )
  {
    **(_BYTE **)(a1 + 40) = 1;
    v29 = *(_DWORD *)v8;
  }
  if ( v29 != 2 )
    return 0;
  v30 = **(_QWORD **)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v31 = *(_BYTE *)(v30 + 28) & 0x7F;
  if ( ((v31 + 52) & 0x7Fu) > 1 && (unsigned int)v31 - 53 > 1 )
  {
    v32 = **(_QWORD **)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned int)v31 - 58 > 9 )
      return 0;
    goto LABEL_42;
  }
  v32 = sub_B72ED0(v30);
  v33 = *(_BYTE *)(v32 + 28) & 0x7F;
  if ( (unsigned int)v33 - 58 > 9 )
    return 0;
  if ( ((v33 + 52) & 0x7Fu) > 1 )
  {
    v30 = v32;
LABEL_42:
    v34 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v34 && (*(_BYTE *)(*v34 + 17LL) & 4) == 0 )
    {
      v35 = *(_QWORD *)(v30 + 48);
      if ( v35 )
      {
        v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v36 = sub_A7AA70(*(_QWORD *)(v71 + 248), v30, (__int64)v34, a6, a7, a8) & 0xFFFFFFFFFFFFFFF0LL;
        v34 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL);
      }
      a6 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)a6 != *(_QWORD *)(v34[1] & 0xFFFFFFFFFFFFFFF0LL) )
        return 0;
    }
    v42 = *(_QWORD *)(v32 + 48);
    v43 = *(__m128 **)(a1 + 8);
    if ( v42 )
    {
      v44 = v42 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v48 = sub_A7AA70(v43[15].m128_i64[1], v32, (__int64)v34, a6, a7, a8);
      v43 = *(__m128 **)(a1 + 8);
      v44 = v48;
    }
    sub_19116A0(v43, *(unsigned int *)(v32 + 24), v32, 0, a7, a8, a3, a4);
    v45 = *(_QWORD *)(a1 + 8);
    v46 = sub_A81910(*(_QWORD **)(v45 + 248), v44, **(_DWORD **)(a1 + 32));
    v47 = sub_A76250(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), 6, 0, v44, 0);
    return sub_1E61050(v45, v47, v46, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
  }
  v30 = sub_B72ED0(v32);
  if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 58 <= 9 )
    goto LABEL_42;
  return 0;
}
