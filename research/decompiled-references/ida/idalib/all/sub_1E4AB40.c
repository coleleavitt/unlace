unsigned __int64 __fastcall sub_1E4AB40(__int64 a1, unsigned __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 v6; // rdx
  void **v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r13
  _QWORD *v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r14
  void **v35; // rbx
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  unsigned __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  __int64 v49; // r12
  unsigned __int64 v50; // r9
  __int64 v51; // rax
  unsigned __int64 *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-F0h]
  void *v56; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+18h] [rbp-E0h]
  _BYTE v58[16]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+38h] [rbp-C0h]
  __int64 v61; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-B0h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __int64 v64; // [rsp+88h] [rbp-70h]
  __int64 v65; // [rsp+90h] [rbp-68h] BYREF
  __int64 v66; // [rsp+98h] [rbp-60h]
  __int16 v67; // [rsp+A0h] [rbp-58h]
  char v68; // [rsp+A2h] [rbp-56h]
  __int64 v69; // [rsp+A8h] [rbp-50h]

  v6 = *(_QWORD *)a1;
  v60 = 1;
  v59 = v6;
  v7 = (void **)&v61;
  do
  {
    *v7 = (void *)-4096LL;
    v7 += 2;
  }
  while ( v7 != &ptr );
  v68 = 0;
  ptr = &v65;
  v64 = 0x100000000LL;
  v8 = *(_QWORD *)(v6 + 11280);
  *(_QWORD *)(v6 + 11280) = &v59;
  v9 = *(_QWORD *)(a2 + 56);
  v66 = v8;
  v67 = 0;
  v69 = 0;
  v12 = sub_1E48E00(a1, v9);
  if ( !v12 )
    goto LABEL_49;
  v13 = *(_QWORD **)(a2 + 48);
  v14 = v13[9];
  if ( (((unsigned __int8)v14 | (unsigned __int8)(v14 >> 1)) & 1) != 0 )
    goto LABEL_11;
  v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v15 )
    goto LABEL_11;
  v16 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v13[2] & 4) != 0 )
  {
    v17 = (*(_BYTE *)(*v16 + 8LL) & 0x7Fu) - 59;
    if ( (unsigned int)v17 > 2 )
      goto LABEL_10;
    v53 = *(_QWORD *)(v15 + 16);
    v16 = (_QWORD *)v16[1];
    v17 = v53 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v53 & 4) == 0 )
      goto LABEL_9;
LABEL_56:
    v17 = *(_QWORD *)(v17 + 8);
    if ( (_QWORD *)v17 != v16 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v17 = ((_BYTE)v16[1] & 0x7Fu) - 59;
  if ( (unsigned int)v17 > 2 )
    goto LABEL_10;
  v18 = *(_QWORD *)(v15 + 16);
  v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v18 & 4) != 0 )
    goto LABEL_56;
LABEL_9:
  if ( (_QWORD *)v17 != v16 )
  {
LABEL_11:
    v20 = 0;
    goto LABEL_12;
  }
LABEL_10:
  v19 = sub_B94670(*(_QWORD *)(a1 + 24), v13[5], v17, (__int64)v16, v10, v11);
  v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_11;
  if ( (v19 & 4) != 0 )
    v20 = *(_QWORD *)v20;
  if ( (*(_BYTE *)(v20 + 28) & 0x7F) != 0x45 )
    v20 = 0;
LABEL_12:
  v21 = sub_1E43C10((__int64 *)a1, (__int64)v13, 1, 0, a3, a4, a5);
  if ( !v21 )
  {
LABEL_49:
    v23 = 0;
    goto LABEL_18;
  }
  v22 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v22 = 0;
  v23 = sub_BBFAF0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 24), v22, v12, v21);
  sub_B73C10(v21, v23);
  sub_AEABB0((_QWORD *)(v23 + 64), v20, v24, v25, v26, v27);
  *(_BYTE *)(v23 + 29) = *(_BYTE *)(a2 + 29) & 0x60 | *(_BYTE *)(v23 + 29) & 0x9F;
  if ( v20 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      sub_B94AD0(*(__m128i **)(a1 + 24), v23, v28, v29, v30, v31);
      goto LABEL_18;
    }
LABEL_32:
    v37 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v37 = *(_QWORD *)(v37 + 8);
    sub_B90130(v23, v37, v28, v29, v30, v31);
    v42 = *(_QWORD *)(a2 + 16);
    if ( (v42 & 4) != 0 )
      v43 = *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    else
      v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
    sub_B90130(v21, v43, v38, v39, v40, v41);
    sub_B94AD0(*(__m128i **)(a1 + 24), v23, v44, v45, v46, v47);
    if ( v20 )
      goto LABEL_18;
    goto LABEL_37;
  }
  v54 = (_QWORD *)sub_BC3640((_QWORD *)v23);
  *v54 = a2 | *v54 & 7LL;
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 24LL))(a2) )
    goto LABEL_32;
  sub_B94AD0(*(__m128i **)(a1 + 24), v23, v28, v29, v30, v31);
LABEL_37:
  v56 = v58;
  v57 = 0x100000000LL;
  sub_BC3EF0((_QWORD *)a2, (__int64 *)&v56);
  if ( (_DWORD)v57 )
  {
    v48 = 0;
    v49 = 8LL * (unsigned int)(v57 - 1) + 8;
    do
    {
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)((char *)v56 + v48) + 80LL) + 24LL))(*(_QWORD *)(*(_QWORD *)((char *)v56 + v48) + 80LL)) )
      {
        v48 += 8;
        if ( v49 == v48 )
          goto LABEL_44;
      }
      v50 = *(_QWORD *)((char *)v56 + v48);
      v51 = *(unsigned int *)(a1 + 104);
      if ( v51 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 108) )
      {
        v55 = *(_QWORD *)((char *)v56 + v48);
        sub_2237220(a1 + 96, a1 + 112, v51 + 1, 16);
        v51 = *(unsigned int *)(a1 + 104);
        v50 = v55;
      }
      v48 += 8;
      v52 = (unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 16 * v51);
      *v52 = v23;
      v52[1] = v50;
      ++*(_DWORD *)(a1 + 104);
    }
    while ( v49 != v48 );
  }
LABEL_44:
  if ( v56 != v58 )
    free(v56);
LABEL_18:
  v32 = (char *)ptr;
  if ( !(_BYTE)v67 )
  {
    if ( (_DWORD)v64 )
    {
      v33 = 0;
      v34 = 8LL * (unsigned int)(v64 - 1) + 8;
      do
      {
        v35 = *(void ***)&v32[v33];
        if ( v35 )
        {
          if ( *v35 != v35 + 2 )
            free(*v35);
          operator delete(v35, 0x30u);
          v32 = (char *)ptr;
        }
        v33 += 8;
      }
      while ( v33 != v34 );
    }
    LOBYTE(v67) = 1;
    *(_QWORD *)(v59 + 11280) = v66;
  }
  if ( v32 != (char *)&v65 )
    free(v32);
  if ( (v60 & 1) == 0 )
    operator delete(v61, 16LL * v62, 8);
  return v23;
}
