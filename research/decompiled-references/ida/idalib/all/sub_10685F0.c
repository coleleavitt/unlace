void __fastcall sub_10685F0(__int64 a1, __int64 a2, const void *a3, size_t a4, char a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // r13
  unsigned int v18; // eax
  unsigned int **v19; // rbx
  int i; // eax
  unsigned int *v21; // r12
  unsigned int v22; // eax
  char v23; // al
  size_t v24; // r13
  __int64 v25; // rax
  const void *v26; // r12
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // r14d
  __int64 *v33; // r15
  void *v34; // rax
  char v35; // al
  void *v36; // rdi
  char **v37; // r12
  __int64 *v38; // rax
  size_t v39; // rbx
  char *v40; // r13
  unsigned int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // r15d
  __int64 *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 *v55; // [rsp+8h] [rbp-E0h]
  char **v56; // [rsp+8h] [rbp-E0h]
  __int64 v57; // [rsp+18h] [rbp-D0h]
  __int64 v58; // [rsp+18h] [rbp-D0h]
  __int64 *v59; // [rsp+28h] [rbp-C0h] BYREF
  void *v60[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+40h] [rbp-A8h]
  __int64 *v62[2]; // [rsp+50h] [rbp-98h] BYREF
  int v63; // [rsp+60h] [rbp-88h]
  _BYTE v64[96]; // [rsp+88h] [rbp-60h] BYREF

  v8 = sub_2244B30(a3, a4);
  v9 = (unsigned int)sub_2244CB0(a2, a3, a4, v8);
  v12 = v9;
  v13 = (__int64 *)(*(_QWORD *)a2 + 8 * v9);
  if ( !*v13 )
    goto LABEL_5;
  if ( *v13 == -8 )
  {
    --*(_DWORD *)(a2 + 16);
LABEL_5:
    v55 = v13;
    v15 = sub_22300B0(a4 + 17, 8, v9, v13, v10, v11);
    v16 = v55;
    v17 = v15;
    if ( a4 )
    {
      memcpy((void *)(v15 + 16), a3, a4);
      v16 = v55;
    }
    *(_BYTE *)(v17 + a4 + 16) = 0;
    *(_QWORD *)v17 = a4;
    *(_BYTE *)(v17 + 8) = 0;
    *v16 = v17;
    ++*(_DWORD *)(a2 + 12);
    v18 = sub_22450D0(a2, v12);
    sub_10298F0(v62, (__int64 *)(*(_QWORD *)a2 + 8LL * v18), 0);
    v14 = v62[0];
    goto LABEL_8;
  }
  sub_10298F0(v62, v13, 0);
  v14 = v62[0];
LABEL_8:
  *(_BYTE *)(*v14 + 8) = a5;
  sub_22982E0(v62, a3, a4);
  if ( !v64[24] || !a5 )
    return;
  v19 = (unsigned int **)&off_2C29AA0;
  for ( i = 65; ; i = (*v19)[4] )
  {
    if ( v63 != i )
      goto LABEL_13;
    v21 = *v19;
    v22 = **v19;
    if ( LODWORD(v62[0]) == v22 )
    {
      v23 = sub_A09E20(*v19, (unsigned int *)v62);
      goto LABEL_18;
    }
    if ( v22 != 8 || LODWORD(v62[0]) != 9 )
      goto LABEL_13;
    v54 = 5;
    if ( SHIBYTE(v62[0]) < 0 )
      v54 = (HIDWORD(v62[0]) & 0x7FFFFFFF) + 5;
    if ( *((char *)v21 + 7) >= 0 )
      break;
    v23 = (v21[1] & 0x7FFFFFFF) <= v54;
LABEL_18:
    if ( v23 )
      break;
LABEL_13:
    if ( &unk_2C29B30 == (_UNKNOWN *)++v19 )
      goto LABEL_25;
LABEL_14:
    ;
  }
  v24 = *((_QWORD *)v21 + 6);
  v25 = 0;
  if ( v24 )
  {
    --v24;
    v25 = 1;
  }
  v26 = (const void *)(*((_QWORD *)v21 + 5) + v25);
  v27 = sub_2244B30(v26, v24);
  v28 = (unsigned int)sub_2244CB0(a2, v26, v24, v27);
  v32 = v28;
  v33 = (__int64 *)(*(_QWORD *)a2 + 8 * v28);
  if ( *v33 )
  {
    if ( *v33 != -8 )
    {
      sub_10298F0((__int64 **)v60, v33, 0);
      v34 = v60[0];
      goto LABEL_24;
    }
    --*(_DWORD *)(a2 + 16);
  }
  v51 = sub_22300B0(v24 + 17, 8, v28, v29, v30, v31);
  v52 = v51;
  if ( v24 )
  {
    v57 = v51;
    memcpy((void *)(v51 + 16), v26, v24);
    v52 = v57;
  }
  *(_BYTE *)(v52 + v24 + 16) = 0;
  *(_QWORD *)v52 = v24;
  *(_BYTE *)(v52 + 8) = 0;
  *v33 = v52;
  ++*(_DWORD *)(a2 + 12);
  v53 = sub_22450D0(a2, v32);
  sub_10298F0((__int64 **)v60, (__int64 *)(*(_QWORD *)a2 + 8LL * v53), 0);
  v34 = v60[0];
LABEL_24:
  ++v19;
  *(_BYTE *)(*(_QWORD *)v34 + 8LL) = 1;
  if ( &unk_2C29B30 != (_UNKNOWN *)v19 )
    goto LABEL_14;
LABEL_25:
  v61 = 0;
  *(_OWORD *)v60 = 0;
  v35 = sub_22983F0(v64, v60);
  v36 = v60[0];
  if ( v35 )
  {
    v56 = (char **)v60[1];
    if ( v60[1] != v60[0] )
    {
      v37 = (char **)v60[0];
      while ( 1 )
      {
        v39 = (size_t)v37[1];
        v40 = *v37;
        if ( v39 )
        {
          --v39;
          ++v40;
        }
        v41 = sub_2244B30(v40, v39);
        v42 = sub_2244CB0(a2, v40, v39, v41);
        v46 = v42;
        v47 = (__int64 *)(*(_QWORD *)a2 + 8LL * v42);
        if ( !*v47 )
          goto LABEL_35;
        if ( *v47 == -8 )
          break;
        sub_10298F0(&v59, v47, 0);
        v38 = v59;
LABEL_29:
        v37 += 2;
        *(_BYTE *)(*v38 + 8) = 1;
        if ( v56 == v37 )
        {
          v36 = v60[0];
          goto LABEL_39;
        }
      }
      --*(_DWORD *)(a2 + 16);
LABEL_35:
      v48 = sub_22300B0(v39 + 17, 8, v42, v43, v44, v45);
      v49 = v48;
      if ( v39 )
      {
        v58 = v48;
        memcpy((void *)(v48 + 16), v40, v39);
        v49 = v58;
      }
      *(_BYTE *)(v49 + v39 + 16) = 0;
      *(_QWORD *)v49 = v39;
      *(_BYTE *)(v49 + 8) = 0;
      *v47 = v49;
      ++*(_DWORD *)(a2 + 12);
      v50 = sub_22450D0(a2, v46);
      sub_10298F0(&v59, (__int64 *)(*(_QWORD *)a2 + 8LL * v50), 0);
      v38 = v59;
      goto LABEL_29;
    }
  }
LABEL_39:
  if ( v36 )
    operator delete(v36);
}
