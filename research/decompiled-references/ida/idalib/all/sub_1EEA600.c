void __fastcall sub_1EEA600(__int64 *a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  unsigned int v5; // r13d
  unsigned int v6; // eax
  int v7; // r15d
  int v8; // ebp
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // rax
  _QWORD *v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rsi
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r13d
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r15d
  int v34; // r13d
  unsigned __int64 v35; // r8
  unsigned __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbp
  _QWORD *v40; // r12
  unsigned __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rdx
  _BYTE *v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rsi
  char *v52; // rcx
  __m128i v53; // xmm0
  unsigned __int64 v54; // rsi
  unsigned __int64 *v55; // rcx
  char *v56; // [rsp+8h] [rbp-480h]
  unsigned int v57; // [rsp+10h] [rbp-478h]
  unsigned int v58; // [rsp+28h] [rbp-460h]
  __int64 v59; // [rsp+28h] [rbp-460h]
  __int64 v60; // [rsp+30h] [rbp-458h]
  unsigned __int64 v61; // [rsp+38h] [rbp-450h]
  void *v62; // [rsp+40h] [rbp-448h] BYREF
  __int64 v63; // [rsp+48h] [rbp-440h]
  _BYTE v64[64]; // [rsp+50h] [rbp-438h] BYREF
  void *v65; // [rsp+90h] [rbp-3F8h] BYREF
  __int64 v66; // [rsp+98h] [rbp-3F0h]
  _BYTE v67[128]; // [rsp+A0h] [rbp-3E8h] BYREF
  void *v68; // [rsp+120h] [rbp-368h] BYREF
  __int64 v69; // [rsp+128h] [rbp-360h]
  _BYTE v70[128]; // [rsp+130h] [rbp-358h] BYREF
  void *v71; // [rsp+1B0h] [rbp-2D8h] BYREF
  __int64 v72; // [rsp+1B8h] [rbp-2D0h]
  _BYTE v73[128]; // [rsp+1C0h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+240h] [rbp-248h] BYREF
  __int64 v75; // [rsp+248h] [rbp-240h]
  _BYTE v76[568]; // [rsp+250h] [rbp-238h] BYREF

  v3 = sub_1EE7490(*a1);
  v4 = *(unsigned int *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 12) = v3;
  v6 = *(_DWORD *)(a2 + 24);
  v7 = v4;
  v65 = v67;
  v57 = v6;
  v58 = *(_DWORD *)(a2 + 28);
  v66 = 0x1000000000LL;
  if ( v4 <= 0x10 )
  {
    v56 = (char *)(a2 + 80);
    if ( (_DWORD)v4 )
      goto LABEL_3;
LABEL_52:
    ptr = v65;
    v75 = (unsigned int)v66;
    sub_EB8020((__int64)&ptr, (char *)(a2 + 80));
    LODWORD(v66) = 0;
    sub_EB8680(a2, (__int64)v65, 0);
    v14 = 0;
    LODWORD(v66) = 0;
    goto LABEL_10;
  }
  sub_2237220(&v65, v67, v4, 8);
  v56 = (char *)(a2 + 80);
  if ( !v7 )
    goto LABEL_52;
LABEL_3:
  v8 = 0;
  do
  {
    ++v8;
    v9 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&v65, v9);
  }
  while ( v8 != v7 );
  v10 = 0;
  ptr = v65;
  v75 = (unsigned int)v66;
  sub_EB8020((__int64)&ptr, v56);
  LODWORD(v66) = 0;
  do
  {
    ++v10;
    v11 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&v65, v11);
  }
  while ( v10 != v7 );
  v12 = 0;
  sub_EB8680(a2, (__int64)v65, (unsigned int)v66);
  LODWORD(v66) = 0;
  do
  {
    ++v12;
    v13 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&v65, v13);
  }
  while ( v12 != v7 );
  v14 = (unsigned int)v66;
LABEL_10:
  sub_EB86B0(a2, (__int64)v65, v14);
  v69 = 0x1000000000LL;
  v68 = v70;
  if ( v5 <= 0x10uLL )
  {
    if ( v5 )
      goto LABEL_12;
LABEL_56:
    v16 = (unsigned int)v69;
    goto LABEL_16;
  }
  sub_2237220(&v68, v70, v5, 8);
  if ( !v5 )
    goto LABEL_56;
LABEL_12:
  v15 = 0;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD **)(*a1 + 8);
      v18 = sub_1EE13A0((__int64)v17, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      v23 = sub_1EDB980(v17, v18, v19, v20, v21, v22);
      v24 = (unsigned int)v69 + 1LL;
      if ( v24 > HIDWORD(v69) )
        break;
      ++v15;
      *((_QWORD *)v68 + (unsigned int)v69) = v23;
      v16 = (unsigned int)(v69 + 1);
      LODWORD(v69) = v69 + 1;
      if ( v15 == v5 )
        goto LABEL_16;
    }
    ++v15;
    v60 = v23;
    sub_2237220(&v68, v70, v24, 8);
    *((_QWORD *)v68 + (unsigned int)v69) = v60;
    v16 = (unsigned int)(v69 + 1);
    LODWORD(v69) = v69 + 1;
  }
  while ( v5 != v15 );
LABEL_16:
  v75 = v16;
  v25 = (char *)(a2 + 8LL * (unsigned int)(3 * *(_DWORD *)(a2 + 16)) + 80);
  ptr = v68;
  sub_1EB4E80((__int64)&ptr, v25);
  v62 = v64;
  v63 = 0x1000000000LL;
  if ( v5 > 0x10uLL )
    sub_2237220(&v62, v64, v5, 4);
  v26 = 0;
  if ( v5 )
  {
    do
    {
      v27 = *a1;
      ++v26;
      v28 = *(unsigned int *)(*a1 + 24);
      *(_DWORD *)(v27 + 24) = v28 + 1;
      sub_9B7040((__int64)&v62, *(_QWORD *)(*(_QWORD *)(v27 + 32) + 8 * v28));
    }
    while ( v26 != v5 );
  }
  v29 = *(unsigned int *)(a2 + 20);
  ptr = v62;
  v75 = (unsigned int)v63;
  sub_1EB4EB0((__int64)&ptr, (char *)(a2 + 8 * (v29 + (unsigned int)(3 * *(_DWORD *)(a2 + 16))) + 80));
  v71 = v73;
  v72 = 0x2000000000LL;
  if ( v57 > 0x20uLL )
    sub_2237220(&v71, v73, v57, 4);
  v30 = 0;
  if ( v57 )
  {
    do
    {
      v31 = *a1;
      ++v30;
      v32 = *(unsigned int *)(*a1 + 24);
      *(_DWORD *)(v31 + 24) = v32 + 1;
      sub_9B7040((__int64)&v71, *(_QWORD *)(*(_QWORD *)(v31 + 32) + 8 * v32));
    }
    while ( v30 != v57 );
  }
  ptr = v71;
  v75 = (unsigned int)v72;
  sub_1EB4EB0(
    (__int64)&ptr,
    (char *)(a2 + 12LL * *(unsigned int *)(a2 + 20) + 80 + 8LL * (unsigned int)(3 * *(_DWORD *)(a2 + 16))));
  ptr = v76;
  v75 = 0x2000000000LL;
  if ( v58 > 0x20uLL )
  {
    sub_2237220(&ptr, v76, v58, 16);
    v33 = v58;
    if ( v58 )
      goto LABEL_26;
  }
  else
  {
    v33 = v58;
    if ( v58 )
    {
LABEL_26:
      v34 = 0;
      while ( 1 )
      {
        v39 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        v40 = *(_QWORD **)(*a1 + 8);
        v41 = sub_1EE13A0((__int64)v40, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
        v37 = sub_1EDB980(v40, v41, v42, v43, v44, v45);
        if ( v37 )
        {
          v35 = v39 & 0xFFFFFFFFFFFFFFFDLL;
          if ( HIDWORD(v75) <= (unsigned int)v75 )
          {
            v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
            v46 = (unsigned int)v75;
            v54 = HIDWORD(v75);
            v47 = v39 & 0xFFFFFFFFFFFFFFFDLL;
LABEL_48:
            if ( v46 + 1 > v54 )
            {
              v61 = v47;
              v59 = v37;
              sub_2237220(&ptr, v76, v46 + 1, 16);
              v47 = v61;
              v37 = v59;
              v46 = (unsigned int)v75;
            }
            v55 = (unsigned __int64 *)((char *)ptr + 16 * v46);
            *v55 = v47;
            v55[1] = v37;
            v38 = (unsigned int)(v75 + 1);
            LODWORD(v75) = v75 + 1;
            goto LABEL_30;
          }
          v36 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v75);
          *v36 = v35;
          v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        }
        else
        {
          v46 = (unsigned int)v75;
          v47 = v39 & 0xFFFFFFFFFFFFFFFDLL;
          if ( HIDWORD(v75) <= (unsigned int)v75 )
          {
            v54 = HIDWORD(v75);
            goto LABEL_48;
          }
          v36 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v75);
          *v36 = v47;
        }
        v36[1] = v37;
        v38 = (unsigned int)(v75 + 1);
        LODWORD(v75) = v75 + 1;
LABEL_30:
        if ( ++v34 == v33 )
          goto LABEL_34;
      }
    }
  }
  v38 = (unsigned int)v75;
LABEL_34:
  v48 = 16 * v38;
  v49 = ptr;
  v50 = (a2
       + 8 * (*(unsigned int *)(a2 + 20) + (unsigned __int64)(unsigned int)(3 * *(_DWORD *)(a2 + 16)))
       + 4LL * (unsigned int)(*(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 20))
       + 80
       + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  v51 = v50 + v48;
  v52 = (char *)ptr - v50;
  if ( v48 )
  {
    do
    {
      v53 = _mm_loadu_si128((const __m128i *)&v52[v50]);
      v50 += 16LL;
      *(__m128i *)(v50 - 16) = v53;
    }
    while ( v50 != v51 );
  }
  if ( v49 != v76 )
    free(v49);
  if ( v71 != v73 )
    free(v71);
  if ( v62 != v64 )
    free(v62);
  if ( v68 != v70 )
    free(v68);
  if ( v65 != v67 )
    free(v65);
}
