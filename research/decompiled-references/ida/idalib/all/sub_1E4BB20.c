unsigned __int64 __fastcall sub_1E4BB20(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v11; // rdx
  void **v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 (__fastcall *v22)(__int64); // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // edx
  char *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // r14
  void **v29; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  double v35; // xmm4_8
  double v36; // xmm5_8
  unsigned __int64 v37; // rax
  double v38; // xmm4_8
  double v39; // xmm5_8
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r14
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  unsigned int v49; // eax
  __int64 v50; // [rsp+0h] [rbp-E8h]
  __int64 v51; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v52; // [rsp+0h] [rbp-E8h]
  __int64 v53; // [rsp+8h] [rbp-E0h]
  _BYTE v54[16]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+28h] [rbp-C0h]
  __int64 v57; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-B0h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v60; // [rsp+78h] [rbp-70h]
  __int64 v61; // [rsp+80h] [rbp-68h] BYREF
  __int64 v62; // [rsp+88h] [rbp-60h]
  __int16 v63; // [rsp+90h] [rbp-58h]
  char v64; // [rsp+92h] [rbp-56h]
  __int64 v65; // [rsp+98h] [rbp-50h]

  v11 = *a1;
  v56 = 1;
  v55 = v11;
  v12 = (void **)&v57;
  do
  {
    *v12 = (void *)-4096LL;
    v12 += 2;
  }
  while ( v12 != &ptr );
  v64 = 0;
  ptr = &v61;
  v60 = 0x100000000LL;
  v13 = *(_QWORD *)(v11 + 11280);
  *(_QWORD *)(v11 + 11280) = &v55;
  v14 = *(_QWORD *)(a2 + 56);
  v62 = v13;
  v63 = 0;
  v65 = 0;
  v15 = sub_1E48E00((__int64)a1, v14);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 48);
    v17 = sub_B8D390(a2);
    v18 = a1[4];
    v19 = (unsigned int)(*(_DWORD *)(v18 + 112) + *(_DWORD *)(v18 + 8));
    if ( v17 < (unsigned int)v19 )
    {
      v51 = *(_QWORD *)v18;
      v41 = v51 + 24 * (v19 - (unsigned int)sub_B8D390(a2));
      v20 = *(_QWORD *)(v41 - 16);
      v21 = *(_QWORD *)(v41 - 8);
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    v53 = v21;
    v50 = v20;
    v22 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
    if ( v22 == sub_BA57F0 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 48) + 16LL))(*(_QWORD *)(a2 + 48));
      v23 = v50;
      v24 = v53;
      v25 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
    }
    else
    {
      v49 = v22(a2);
      v24 = v53;
      v23 = v50;
      v25 = v49;
    }
    sub_1DC38B0((__int64)v54, *a1, v25, a2, v23, v24, 0);
    if ( v54[8] )
      goto LABEL_9;
    if ( sub_1E0AD20(v16) )
    {
      v37 = sub_B94670(a1[3], *(_QWORD *)(v16 + 40), v31, v32, v33, v34);
      if ( (v37 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v52 = v37 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v37 & 4) != 0 )
          v52 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v52 + 28) & 0x7F) == 0x46 )
        {
          v42 = sub_1E461B0(a1, v16, 1, a3, a4, a5, a6, v38, v39, a9, a10);
          if ( v42 )
          {
            v43 = sub_BBF8A0(*(_QWORD *)(*a1 + 248), a1[3], *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 40), v15, v42);
            *(_QWORD *)(v42 + 88) = v43;
            v15 = v43;
            sub_AEABB0((_QWORD *)(v43 + 64), v52, v44, v45, v46, v47);
            *(_BYTE *)(v15 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v15 + 29) & 0x9F;
            goto LABEL_10;
          }
LABEL_9:
          v15 = 0;
LABEL_10:
          sub_1DBADA0(v54);
          goto LABEL_11;
        }
      }
      v40 = sub_1E461B0(a1, v16, 1, a3, a4, a5, a6, v38, v39, a9, a10);
      if ( !v40 )
        goto LABEL_9;
    }
    else
    {
      v40 = sub_1E461B0(a1, v16, 1, a3, a4, a5, a6, v35, v36, a9, a10);
      if ( !v40 )
        goto LABEL_9;
    }
    v15 = sub_BBF8A0(*(_QWORD *)(*a1 + 248), a1[3], *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 40), v15, v40);
    *(_QWORD *)(v40 + 88) = v15;
    *(_BYTE *)(v15 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v15 + 29) & 0x9F;
    v48 = (_QWORD *)sub_BC3640((_QWORD *)v15);
    *v48 = *v48 & 7LL | a2;
    goto LABEL_10;
  }
LABEL_11:
  v26 = (char *)ptr;
  if ( !(_BYTE)v63 )
  {
    if ( (_DWORD)v60 )
    {
      v27 = 0;
      v28 = 8LL * (unsigned int)(v60 - 1) + 8;
      do
      {
        v29 = *(void ***)&v26[v27];
        if ( v29 )
        {
          if ( *v29 != v29 + 2 )
            free(*v29);
          operator delete(v29, 0x30u);
          v26 = (char *)ptr;
        }
        v27 += 8;
      }
      while ( v28 != v27 );
    }
    LOBYTE(v63) = 1;
    *(_QWORD *)(v55 + 11280) = v62;
  }
  if ( v26 != (char *)&v61 )
    free(v26);
  if ( (v56 & 1) == 0 )
    operator delete(v57, 16LL * v58, 8);
  return v15;
}
