void __fastcall sub_1EEB4A0(__int64 *a1, __int64 a2)
{
  unsigned int *v2; // r13
  __int64 *v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rdx
  unsigned int v6; // r12d
  unsigned int v7; // eax
  int v8; // r14d
  unsigned int v9; // ebp
  int v10; // r15d
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char *v22; // rsi
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r14d
  int v32; // r12d
  unsigned __int64 v33; // r8
  unsigned __int64 *v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rbp
  _QWORD *v38; // r13
  unsigned __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // rdx
  _BYTE *v47; // rdi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rsi
  char *v50; // rcx
  __m128i v51; // xmm0
  unsigned __int64 v52; // rsi
  unsigned __int64 *v53; // rcx
  unsigned int v54; // [rsp+20h] [rbp-468h]
  unsigned int *v55; // [rsp+20h] [rbp-468h]
  __int64 v56; // [rsp+28h] [rbp-460h]
  __int64 v57; // [rsp+30h] [rbp-458h]
  unsigned __int64 v58; // [rsp+38h] [rbp-450h]
  void *v59; // [rsp+40h] [rbp-448h] BYREF
  __int64 v60; // [rsp+48h] [rbp-440h]
  _BYTE v61[64]; // [rsp+50h] [rbp-438h] BYREF
  void *v62; // [rsp+90h] [rbp-3F8h] BYREF
  __int64 v63; // [rsp+98h] [rbp-3F0h]
  _BYTE v64[128]; // [rsp+A0h] [rbp-3E8h] BYREF
  void *v65; // [rsp+120h] [rbp-368h] BYREF
  __int64 v66; // [rsp+128h] [rbp-360h]
  _BYTE v67[128]; // [rsp+130h] [rbp-358h] BYREF
  void *v68; // [rsp+1B0h] [rbp-2D8h] BYREF
  __int64 v69; // [rsp+1B8h] [rbp-2D0h]
  _BYTE v70[128]; // [rsp+1C0h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+240h] [rbp-248h] BYREF
  __int64 v72; // [rsp+248h] [rbp-240h]
  _BYTE v73[568]; // [rsp+250h] [rbp-238h] BYREF

  v2 = (unsigned int *)a2;
  v3 = a1;
  v4 = sub_1EE7490(*a1);
  v5 = *(unsigned int *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 12) = v4;
  v7 = *(_DWORD *)(a2 + 28);
  v8 = v5;
  v9 = *(_DWORD *)(a2 + 24);
  v62 = v64;
  v54 = v7;
  v63 = 0x1000000000LL;
  if ( v5 > 0x10 )
    sub_2237220(&v62, v64, v5, 8);
  v10 = 0;
  if ( v8 )
  {
    do
    {
      ++v10;
      v11 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      sub_14B7B40((__int64)&v62, v11);
    }
    while ( v10 != v8 );
    v3 = a1;
  }
  ptr = v62;
  v72 = (unsigned int)v63;
  sub_EB8020((__int64)&ptr, (char *)(a2 + 80));
  LODWORD(v63) = 0;
  v66 = 0x1000000000LL;
  v65 = v67;
  if ( v6 <= 0x10uLL )
  {
    if ( v6 )
      goto LABEL_8;
LABEL_51:
    v13 = (unsigned int)v66;
    goto LABEL_12;
  }
  sub_2237220(&v65, v67, v6, 8);
  if ( !v6 )
    goto LABEL_51;
LABEL_8:
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD **)(*v3 + 8);
      v15 = sub_1EE13A0((__int64)v14, *(_QWORD *)(*v3 + 16), (__int64 *)(*v3 + 32), (_DWORD *)(*v3 + 24));
      v20 = sub_1EDB980(v14, v15, v16, v17, v18, v19);
      v21 = (unsigned int)v66 + 1LL;
      if ( v21 > HIDWORD(v66) )
        break;
      ++v12;
      *((_QWORD *)v65 + (unsigned int)v66) = v20;
      v13 = (unsigned int)(v66 + 1);
      LODWORD(v66) = v66 + 1;
      if ( v12 == v6 )
        goto LABEL_12;
    }
    v57 = v20;
    ++v12;
    sub_2237220(&v65, v67, v21, 8);
    *((_QWORD *)v65 + (unsigned int)v66) = v57;
    v13 = (unsigned int)(v66 + 1);
    LODWORD(v66) = v66 + 1;
  }
  while ( v6 != v12 );
LABEL_12:
  v72 = v13;
  v22 = (char *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 80);
  ptr = v65;
  sub_1EB4E80((__int64)&ptr, v22);
  v59 = v61;
  v60 = 0x1000000000LL;
  if ( v6 > 0x10uLL )
    sub_2237220(&v59, v61, v6, 4);
  v23 = 0;
  if ( v6 )
  {
    do
    {
      v24 = *v3;
      ++v23;
      v25 = *(unsigned int *)(*v3 + 24);
      *(_DWORD *)(v24 + 24) = v25 + 1;
      sub_9B7040((__int64)&v59, *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25));
    }
    while ( v23 != v6 );
  }
  v26 = v2[4];
  ptr = v59;
  v72 = (unsigned int)v60;
  sub_1EB4EB0((__int64)&ptr, (char *)&v2[2 * v26 + 20 + 2 * v2[5]]);
  v68 = v70;
  v69 = 0x2000000000LL;
  if ( v9 > 0x20uLL )
    sub_2237220(&v68, v70, v9, 4);
  v27 = 0;
  if ( v9 )
  {
    do
    {
      v28 = *v3;
      ++v27;
      v29 = *(unsigned int *)(*v3 + 24);
      *(_DWORD *)(v28 + 24) = v29 + 1;
      sub_9B7040((__int64)&v68, *(_QWORD *)(*(_QWORD *)(v28 + 32) + 8 * v29));
    }
    while ( v27 != v9 );
  }
  v30 = v2[5];
  ptr = v68;
  v72 = (unsigned int)v69;
  sub_1EB4EB0((__int64)&ptr, (char *)&v2[2 * v30 + 20 + 2 * v2[4] + v30]);
  ptr = v73;
  v72 = 0x2000000000LL;
  if ( v54 > 0x20uLL )
  {
    sub_2237220(&ptr, v73, v54, 16);
    v31 = v54;
    if ( v54 )
      goto LABEL_22;
  }
  else
  {
    v31 = v54;
    if ( v54 )
    {
LABEL_22:
      v32 = 0;
      v55 = v2;
      while ( 1 )
      {
        v37 = sub_1F61940(*(_QWORD *)(*v3 + 8));
        v38 = *(_QWORD **)(*v3 + 8);
        v39 = sub_1EE13A0((__int64)v38, *(_QWORD *)(*v3 + 16), (__int64 *)(*v3 + 32), (_DWORD *)(*v3 + 24));
        v35 = sub_1EDB980(v38, v39, v40, v41, v42, v43);
        if ( v35 )
        {
          v33 = v37 & 0xFFFFFFFFFFFFFFFDLL;
          if ( HIDWORD(v72) <= (unsigned int)v72 )
          {
            v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
            v44 = (unsigned int)v72;
            v52 = HIDWORD(v72);
            v45 = v37 & 0xFFFFFFFFFFFFFFFDLL;
LABEL_45:
            if ( v44 + 1 > v52 )
            {
              v58 = v45;
              v56 = v35;
              sub_2237220(&ptr, v73, v44 + 1, 16);
              v45 = v58;
              v35 = v56;
              v44 = (unsigned int)v72;
            }
            v53 = (unsigned __int64 *)((char *)ptr + 16 * v44);
            *v53 = v45;
            v53[1] = v35;
            v36 = (unsigned int)(v72 + 1);
            LODWORD(v72) = v72 + 1;
            goto LABEL_26;
          }
          v34 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v72);
          *v34 = v33;
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
        }
        else
        {
          v44 = (unsigned int)v72;
          v45 = v37 & 0xFFFFFFFFFFFFFFFDLL;
          if ( HIDWORD(v72) <= (unsigned int)v72 )
          {
            v52 = HIDWORD(v72);
            goto LABEL_45;
          }
          v34 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v72);
          *v34 = v45;
        }
        v34[1] = v35;
        v36 = (unsigned int)(v72 + 1);
        LODWORD(v72) = v72 + 1;
LABEL_26:
        if ( ++v32 == v31 )
        {
          v2 = v55;
          goto LABEL_31;
        }
      }
    }
  }
  v36 = (unsigned int)v72;
LABEL_31:
  v46 = 16 * v36;
  v47 = ptr;
  v48 = ((unsigned __int64)&v2[2 * v2[5] + 21 + 2 * (unsigned __int64)v2[4] + v2[6] + v2[5]] + 3) & 0xFFFFFFFFFFFFFFF8LL;
  v49 = v48 + v46;
  v50 = (char *)ptr - v48;
  if ( v46 )
  {
    do
    {
      v51 = _mm_loadu_si128((const __m128i *)&v50[v48]);
      v48 += 16LL;
      *(__m128i *)(v48 - 16) = v51;
    }
    while ( v48 != v49 );
  }
  if ( v47 != v73 )
    free(v47);
  if ( v68 != v70 )
    free(v68);
  if ( v59 != v61 )
    free(v59);
  if ( v65 != v67 )
    free(v65);
  if ( v62 != v64 )
    free(v62);
}
