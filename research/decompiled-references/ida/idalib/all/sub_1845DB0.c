bool __fastcall sub_1845DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  void **v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rbx
  unsigned int v31; // r14d
  _QWORD *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // r9
  void **v39; // rdx
  __int64 v40; // rax
  void **v41; // rbx
  void **v42; // rdi
  void **v43; // rbp
  __int64 v47; // [rsp+10h] [rbp-1A8h] BYREF
  void *v48[3]; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-188h]
  __int64 v50; // [rsp+38h] [rbp-180h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-178h]
  void *v52[2]; // [rsp+B8h] [rbp-100h] BYREF
  int v53; // [rsp+C8h] [rbp-F0h]
  char v54; // [rsp+CCh] [rbp-ECh]
  _QWORD v55[5]; // [rsp+D0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+F8h] [rbp-C0h]
  __int64 v57; // [rsp+100h] [rbp-B8h]
  _DWORD v58[26]; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+170h] [rbp-48h]
  __int16 v60; // [rsp+178h] [rbp-40h]
  char v61; // [rsp+17Ah] [rbp-3Eh]

  *(_QWORD *)a4 = 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, (__int64)a5, a6);
  v13 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
    v14 = sub_B96980(v13);
  else
    v14 = *(_QWORD *)(v13 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12);
  v15 = *(_QWORD *)(a2 + 104);
  v16 = v14 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_7052B0((__int64 *)(v15 + 96), v15, v17, v18, v19, v20);
  v25 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
    v26 = sub_B96980(v25);
  else
    v26 = *(_QWORD *)(v25 + 24);
  if ( v26 != v16 )
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
        v27 = sub_F64F00(**(_QWORD **)(v26 + 16), v15, (__int64)v21, v22, v23);
      v21 = (_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *v21 == *(_QWORD *)(*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
        break;
      v26 += 24;
      if ( v26 == v16 )
        goto LABEL_12;
    }
    *(_QWORD *)a4 = v26;
  }
LABEL_12:
  *a5 = 0;
  if ( *(_QWORD *)a4 && (*(_BYTE *)(*(_QWORD *)a4 + 12LL) & 1) != 0 )
    return 1;
  v47 = 0;
  v48[2] = nullptr;
  v49 = 1;
  v48[1] = v48;
  v48[0] = v48;
  v28 = (void **)&v50;
  do
  {
    *v28 = nullptr;
    v28 += 2;
  }
  while ( v28 != v52 );
  v29 = *(_QWORD *)(a2 + 48);
  v52[1] = &byte_4;
  v52[0] = v55;
  ptr = v58;
  v53 = 0;
  v30 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  v54 = 1;
  v55[4] = 0;
  v57 = 0x400000000LL;
  v58[24] = 0;
  v59 = 0;
  v60 = 257;
  v61 = 0;
  if ( !v29 )
  {
    v15 = a2;
    v30 = (__int64 *)(sub_A7AA70(*(_QWORD *)(a1 + 248), a2, 0, v22, v23, v24) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v31 = *(_DWORD *)(a2 + 24);
  v32 = sub_F63270(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v15, v29, v22, v23, v24);
  v37 = sub_F63270(*v30, v15, v33, v34, v35, v36);
  if ( (unsigned __int8)sub_183BAC0(a1, v31, (__int64)v37, (__int64)v32, (__int64)&v47, v38) )
  {
    v39 = (void **)v48[0];
    if ( v48[0] != v48 )
    {
      while ( 1 )
      {
        v40 = *((_QWORD *)v39[2] + 3 * *((unsigned int *)v39 + 6) - 3);
        if ( (*(_BYTE *)(v40 + 12) & 1) != 0 )
          break;
        v39 = (void **)*v39;
        if ( v39 == v48 )
          goto LABEL_24;
      }
      *a5 = v40;
    }
  }
LABEL_24:
  if ( ptr != v58 )
    free(ptr);
  if ( v54 )
  {
    if ( (v49 & 1) != 0 )
      goto LABEL_28;
    goto LABEL_37;
  }
  free(v52[0]);
  if ( (v49 & 1) == 0 )
LABEL_37:
    operator delete(v50, 16LL * v51, 8);
LABEL_28:
  v41 = (void **)v48[0];
  if ( v48[0] != v48 )
  {
    while ( 1 )
    {
      v42 = (void **)v41[2];
      v43 = (void **)*v41;
      if ( v42 == v41 + 4 )
      {
        operator delete(v41);
        if ( v43 == v48 )
          break;
      }
      else
      {
        free(v42);
        operator delete(v41);
        if ( v43 == v48 )
          break;
      }
      v41 = v43;
    }
  }
  if ( !*(_QWORD *)a4 )
    return *a5 != 0;
  return 1;
}
