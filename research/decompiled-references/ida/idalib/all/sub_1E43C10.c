unsigned __int64 __fastcall sub_1E43C10(__int64 *a1, __int64 a2, char a3, __int64 a4, __m128 a5, __m128 a6, __m128i a7)
{
  __int64 v11; // r12
  __int64 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 *v16; // r12
  bool v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v22; // rsi
  int v23; // ecx
  int v24; // edx
  _QWORD *v25; // rdi
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  char v36; // al
  unsigned __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // r10
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v56[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v58[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v59; // [rsp+88h] [rbp-50h]
  unsigned int v60; // [rsp+90h] [rbp-48h]
  char v61; // [rsp+94h] [rbp-44h]

  v11 = *a1;
  v12 = *(_QWORD *)(a2 + 40);
  v13 = sub_B72FF0(a2);
  v14 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v14 = *(_QWORD *)(v14 + 32);
  v15 = (__int64 *)sub_1DD4AE0(v11, (void **)v14, a1[4], v13, v12, 1, a5, a6);
  v16 = v15;
  if ( !v15 )
    return 0;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v17 = 0;
    sub_168B9F0((__int64)v56, (__int64 *)(*a1 + 8), *(_DWORD *)(a2 + 24), 0x1537u, 0);
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    {
      v18 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v18 = *(_QWORD *)v18;
      v17 = ((*(_BYTE *)(v18 + 8) + 70) & 0x7Fu) <= 3;
    }
    if ( v59 )
    {
      sub_AE9DF0(v58, v17, 2u);
      v36 = v59;
    }
    else
    {
      if ( !v61 )
      {
        v19 = *v16;
        goto LABEL_12;
      }
      v50 = sub_168B9E0(v56);
      v53 = v57;
      if ( v57 )
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57);
      v55 = v53;
      v54 = sub_1587BC0(v50, &v55, v48, v49, v51, v52);
      sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v60 + 8), v17, 2u);
      v36 = v59;
    }
    v19 = *v16;
    if ( v36 )
    {
      sub_AE9DF0(v58, *v16, 8u);
LABEL_13:
      sub_15F7200(v56);
      return 0;
    }
LABEL_12:
    if ( v61 )
    {
      v45 = sub_168B9E0(v56);
      v46 = v57;
      if ( v57 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57);
      v55 = v46;
      v47 = sub_1587BC0(v45, &v55, v41, v42, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v60 + 8), v19, 8u);
    }
    goto LABEL_13;
  }
  v22 = a1[3];
  v55 = v22;
  if ( (*(_BYTE *)(a2 + 31) & 8) != 0 )
  {
    sub_17A42D0((unsigned __int64 *)&v55);
    v22 = v55;
  }
  v23 = *(_DWORD *)(a2 + 24);
  v24 = *(_DWORD *)(a2 + 64);
  v25 = *(_QWORD **)(*a1 + 248);
  if ( a4 )
  {
    v20 = sub_B9AE80(
            v25,
            v22,
            v24,
            v23,
            *v16,
            (__int64)v16,
            *(_BYTE *)(a2 + 96) & 7,
            *(__int64 **)a4,
            *(_QWORD *)(a4 + 8));
  }
  else
  {
    v39 = *(_QWORD *)(a2 + 40);
    v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v39 & 7) != 0 )
      v40 = 0;
    v20 = sub_B731A0((__int64)v25, v22, v24, v23, v40, *v16, (__int64)v16, *(_BYTE *)(a2 + 96) & 7);
  }
  v26 = *a1;
  v27 = *(_QWORD *)(*a1 + 232);
  if ( (*(_BYTE *)(v27 + 107) & 4) != 0 )
  {
    if ( (unsigned __int8)sub_189F360(*(__int64 **)(v26 + 736), v20) )
      sub_B88650(v20, 1);
    v26 = *a1;
    v27 = *(_QWORD *)(*a1 + 232);
  }
  if ( (*(_BYTE *)(v27 + 47) & 0x20) != 0 )
  {
    sub_17A40B0(v26, v20);
    v26 = *a1;
  }
  if ( (unsigned __int8)sub_1DFDB20(v26, a2, v20, a1[4]) )
    return 0;
  sub_1E3AB40(*a1, v20, a2, a1[4], a1[5], a1[3], *(double *)a5.m128_u64, a6, a7, a1[6], a3, 0);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(a2 + 97) & 4) != 0 && *(char *)(v20 + 28) >= 0 )
  {
    if ( (*(_BYTE *)(v55 + 8) & 0x7Fu) - 34 > 5 || v55 == 72 )
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_15F24E0(*a1, v20, v28, v29, v30, v31) + 1544) & 0xFFFFFFFFFFFFFFF0LL)
                      + 24LL);
    else
      v32 = sub_C1D490(v55 - 72, v20, v28, v29);
    v33 = sub_1C36DD0(*a1, v20);
    v34 = *a1;
    v56[1] = v35;
    v56[0] = v33;
    *(_BYTE *)(v20 + 97) = (4 * (sub_1C37160(v34, v56, v32) != 0)) | *(_BYTE *)(v20 + 97) & 0xFB;
  }
  *(_BYTE *)(v20 + 29) = *(_BYTE *)(a2 + 29) & 2 | *(_BYTE *)(v20 + 29) & 0xFD;
  if ( (*(_BYTE *)(v20 + 96) & 7) == 2 || (*(_BYTE *)(v20 + 96) & 7) == 0 && ((*(_BYTE *)(v20 + 96) >> 3) & 3) == 2 )
  {
    if ( ((*(_BYTE *)(v20 + 28) + 85) & 0x7D) == 0 )
      goto LABEL_48;
    v37 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
      v37 = *(_QWORD *)(v37 + 8);
    v38 = *(_BYTE *)(sub_B8EAA0(v37) + 8) & 0x7F;
    if ( v38 )
    {
      if ( v38 != 24 && ((*(_BYTE *)(v20 + 28) & 0x7F) == 0x2B || !sub_1DFE740(v20)) )
LABEL_48:
        sub_17A5190(*a1, v20);
    }
  }
  if ( (unsigned int)sub_B73370(v20) )
    sub_17B9310(*a1, v20);
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 97LL) & 4) != 0 )
    sub_1AAABD0(*(_QWORD *)(*a1 + 744), v20);
  return v20;
}
