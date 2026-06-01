void __fastcall sub_1836CB0(__int64 *a1, __int64 a2, __m128i *a3, __int64 *a4, __m128 a5, __m128i a6)
{
  __int64 v6; // r12
  __int64 v9; // rax
  __int64 *v10; // r8
  __int64 *v11; // r13
  __int64 *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  char v16; // al
  _BYTE *v17; // rdi
  unsigned __int64 *v18; // r15
  unsigned __int64 *v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // r8
  __int64 *v26; // r13
  __int64 *v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  char v31; // al
  _BYTE *v32; // rdi
  unsigned __int64 *v33; // r15
  unsigned __int64 *v34; // r13
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // r13
  unsigned __int64 *v44; // r12
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  unsigned __int64 *v50; // r15
  unsigned __int64 *v51; // r14
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v61; // [rsp+28h] [rbp-80h]
  __int16 v62; // [rsp+3Eh] [rbp-6Ah] BYREF
  __int64 v63; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+48h] [rbp-60h] BYREF
  __int64 v65; // [rsp+50h] [rbp-58h]
  _BYTE v66[80]; // [rsp+58h] [rbp-50h] BYREF

  v6 = a2;
  v9 = a4[101];
  v62 = 1;
  v63 = 0;
  ptr = v66;
  v10 = *(__int64 **)(v9 + 8);
  v65 = 0x200000000LL;
  v11 = &v10[*(unsigned int *)(v9 + 16)];
  if ( v10 == v11 )
    goto LABEL_18;
  v12 = v10;
  do
  {
    while ( 1 )
    {
      v15 = *v12;
      v16 = *(_BYTE *)(*v12 + 34) & 0xF;
      if ( v16 != 2 && (*(_BYTE *)(v15 + 35) & 1) == 0 && v16 != 3 )
        break;
      if ( !sub_15D8670(*v12) )
        goto LABEL_6;
LABEL_11:
      ++v12;
      sub_15D8280(v15, (__int64)a1, (__int64)a3);
      if ( v11 == v12 )
        goto LABEL_12;
    }
    if ( *(_WORD *)(v15 + 32) == 19 && ((v16 - 6) & 0xFD) == 0 && sub_15D8670(*v12) )
      goto LABEL_11;
LABEL_6:
    v13 = (unsigned int)v65;
    v14 = (unsigned int)v65 + 1LL;
    if ( v14 > HIDWORD(v65) )
    {
      sub_2237220(&ptr, v66, v14, 8);
      v13 = (unsigned int)v65;
    }
    ++v12;
    *((_QWORD *)ptr + v13) = v15;
    LODWORD(v65) = v65 + 1;
  }
  while ( v11 != v12 );
LABEL_12:
  v17 = ptr;
  if ( (_DWORD)v65 )
  {
    v18 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v65);
    v19 = (unsigned __int64 *)ptr;
    do
    {
      v20 = *v19++;
      sub_1833C10((__int64)a1, a2, a3, v20, &v62, (_BYTE *)&v62 + 1, a5, a6);
    }
    while ( v18 != v19 );
    sub_18142E0(a1, (__int64)a3, (__int64)&v63, v21, v22, v23);
    v17 = ptr;
  }
  if ( v17 != v66 )
    free(v17);
LABEL_18:
  v63 = 0;
  v62 = 256;
  v24 = *a4;
  v65 = 0x200000000LL;
  ptr = v66;
  v25 = *(__int64 **)(v24 + 40);
  v26 = &v25[*(unsigned int *)(v24 + 48)];
  if ( v25 == v26 )
    goto LABEL_35;
  v27 = *(__int64 **)(v24 + 40);
  while ( 2 )
  {
    while ( 2 )
    {
      v30 = *v27;
      v31 = *(_BYTE *)(*v27 + 34) & 0xF;
      if ( v31 == 2 || (*(_BYTE *)(v30 + 35) & 1) != 0 || v31 == 3 )
      {
        if ( !sub_15D8670(*v27) )
          break;
        goto LABEL_28;
      }
      if ( *(_WORD *)(v30 + 32) == 19 && ((v31 - 6) & 0xFD) == 0 && sub_15D8670(*v27) )
      {
LABEL_28:
        ++v27;
        sub_15D8280(v30, (__int64)a1, (__int64)a3);
        if ( v26 == v27 )
          goto LABEL_29;
        continue;
      }
      break;
    }
    v28 = (unsigned int)v65;
    v29 = (unsigned int)v65 + 1LL;
    if ( v29 > HIDWORD(v65) )
    {
      sub_2237220(&ptr, v66, v29, 8);
      v28 = (unsigned int)v65;
    }
    ++v27;
    *((_QWORD *)ptr + v28) = v30;
    LODWORD(v65) = v65 + 1;
    if ( v26 != v27 )
      continue;
    break;
  }
LABEL_29:
  v32 = ptr;
  if ( (_DWORD)v65 )
  {
    v33 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v65);
    v34 = (unsigned __int64 *)ptr;
    do
    {
      v35 = *v34++;
      sub_1833C10((__int64)a1, a2, a3, v35, &v62, (_BYTE *)&v62 + 1, a5, a6);
    }
    while ( v33 != v34 );
    sub_18142E0(a1, (__int64)a3, (__int64)&v63, v36, v37, v38);
    v32 = ptr;
  }
  if ( v32 != v66 )
    free(v32);
LABEL_35:
  v39 = *((_DWORD *)a4 + 34);
  if ( v39 )
  {
    v61 = 16 * (9LL * (unsigned int)(v39 - 1) + 9);
    v40 = 0;
    do
    {
      LOWORD(v63) = 256;
      v41 = v40 + a4[16];
      v42 = *(unsigned int *)(v41 + 32);
      if ( (_DWORD)v42 )
      {
        v43 = *(_QWORD *)(v41 + 24) + 8 * v42;
        v44 = *(unsigned __int64 **)(v41 + 24);
        do
        {
          v45 = *v44++;
          sub_1833C10((__int64)a1, a2, a3, v45, &v63, (_BYTE *)&v63 + 1, a5, a6);
        }
        while ( (unsigned __int64 *)v43 != v44 );
        sub_18142E0(a1, (__int64)a3, v41 + 16, v46, v47, v48);
      }
      v40 += 144;
    }
    while ( v61 != v40 );
    v6 = a2;
  }
  LOWORD(v63) = 1;
  v49 = *((unsigned int *)a4 + 186);
  if ( (_DWORD)v49 )
  {
    v50 = (unsigned __int64 *)a4[92];
    v51 = &v50[v49];
    do
    {
      v52 = *v50++;
      sub_1833C10((__int64)a1, v6, a3, v52, &v63, (_BYTE *)&v63 + 1, a5, a6);
    }
    while ( v51 != v50 );
    sub_18142E0(a1, (__int64)a3, (__int64)(a4 + 91), v53, v54, v55);
  }
  sub_16660F0((__int64)a1, v6, (__int64)a3);
  sub_167AF90((__int64)a1, (__int64)a3, v56, v57, v58, v59, (__m128i)a5, *(double *)a6.m128i_i64);
}
