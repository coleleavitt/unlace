__int64 __fastcall sub_1866110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rsi
  char v11; // dl
  char *v12; // rdi
  __int64 v13; // r8
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  char *v24; // r12
  char *v25; // rbp
  char *v26; // r13
  char *v27; // rbx
  char *v28; // rdi
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rbp
  char *v45; // [rsp+10h] [rbp-198h]
  __int64 v47; // [rsp+30h] [rbp-178h]
  __int64 v48; // [rsp+30h] [rbp-178h]
  __int64 v49; // [rsp+48h] [rbp-160h] BYREF
  _QWORD v50[2]; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-148h]
  char *v52; // [rsp+68h] [rbp-140h]
  __int64 v53; // [rsp+70h] [rbp-138h]
  char v54; // [rsp+78h] [rbp-130h] BYREF
  void *ptr; // [rsp+80h] [rbp-128h] BYREF
  __int64 v56; // [rsp+88h] [rbp-120h]
  int v57; // [rsp+90h] [rbp-118h]
  char v58; // [rsp+94h] [rbp-114h]
  char v59; // [rsp+98h] [rbp-110h] BYREF
  _QWORD v60[2]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-B8h]
  unsigned __int8 *v62[11]; // [rsp+100h] [rbp-A8h] BYREF
  char v63; // [rsp+158h] [rbp-50h]
  unsigned int v64; // [rsp+160h] [rbp-48h]
  char v65; // [rsp+164h] [rbp-44h]

  v52 = &v54;
  v50[0] = 0;
  v50[1] = 0;
  v51 = 0;
  v53 = 0;
  sub_B6F050(a2, (__int64)v50, (__int64)v50, a4, a5, a6);
  v6 = v52;
  v56 = 8;
  ptr = &v59;
  v57 = 0;
  v58 = 1;
  v45 = &v52[48 * (unsigned int)v53];
  if ( v52 != v45 )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)v6 + 4);
      v8 = v7 + 120LL * *((unsigned int *)v6 + 10);
      if ( v7 != v8 )
        break;
LABEL_24:
      v6 += 48;
      if ( v45 == v6 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 16) != 1 )
        goto LABEL_23;
      v9 = *(__int64 **)(v7 + 8);
      v10 = *v9;
      if ( (*(_BYTE *)(*v9 + 82) & 8) == 0 )
        goto LABEL_23;
      v11 = v58;
      if ( !v58 )
        goto LABEL_47;
      v12 = (char *)ptr;
      v13 = 8LL * HIDWORD(v56);
      v14 = (char *)ptr + v13;
      if ( ptr != (char *)ptr + v13 )
      {
        v15 = (char *)ptr;
        if ( v10 == *(_QWORD *)ptr )
        {
LABEL_49:
          v11 = 0;
          goto LABEL_13;
        }
        while ( 1 )
        {
          v15 += 8;
          if ( v14 == v15 )
            break;
          if ( v10 == *(_QWORD *)v15 )
            goto LABEL_49;
        }
      }
      if ( HIDWORD(v56) < (unsigned int)v56 )
      {
        ++HIDWORD(v56);
        *(_QWORD *)v14 = v10;
        v12 = (char *)ptr;
        v15 = (char *)ptr + v13;
      }
      else
      {
LABEL_47:
        v15 = (char *)sub_2236760(&ptr, v10);
        v12 = (char *)ptr;
        if ( !v58 )
        {
          v16 = (char *)ptr + 8 * (unsigned int)v56;
          goto LABEL_14;
        }
      }
LABEL_13:
      v16 = &v12[8 * HIDWORD(v56)];
LABEL_14:
      if ( v16 != v15 && (*(_QWORD *)v15 == -2 || *(_QWORD *)v15 == -1) )
      {
        do
          v15 += 8;
        while ( v16 != v15 && *(_QWORD *)v15 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( !v11 )
        goto LABEL_23;
      sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(**(_QWORD **)(v7 + 8) + 24LL), 0x18BCu, 0);
      v17 = **(_QWORD **)(v7 + 8);
      v18 = *(_QWORD *)(v17 + 40);
      if ( v63 )
      {
        sub_AE9DF0(v62, *(_QWORD *)(v17 + 40), 9u);
LABEL_51:
        v30 = *(_QWORD *)(a2 + 40);
        if ( v63 )
        {
          sub_AE9DF0(v62, *(_QWORD *)(a2 + 40), 9u);
        }
        else if ( v65 )
        {
          v37 = sub_168B9E0(v60);
          v41 = v61;
          if ( v61 )
          {
            v48 = v37;
            v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
            v37 = v48;
          }
          v49 = v41;
          v42 = sub_1587BC0(v37, &v49, v37, v38, v39, v40);
          sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v64 + 8), v30, 9u);
        }
        goto LABEL_22;
      }
      if ( v65 )
      {
        v31 = sub_168B9E0(v60);
        v35 = v61;
        if ( v61 )
        {
          v47 = v31;
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
          v31 = v47;
        }
        v49 = v35;
        v36 = sub_1587BC0(v31, &v49, v31, v32, v33, v34);
        sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v64 + 8), v18, 9u);
        goto LABEL_51;
      }
LABEL_22:
      sub_15F7200(v60);
LABEL_23:
      v7 += 120;
      if ( v8 == v7 )
        goto LABEL_24;
    }
  }
LABEL_25:
  v19 = *(_QWORD *)(a1 + 4096);
  if ( !v19 )
  {
    v19 = operator new(0x58u);
    *(_QWORD *)v19 = v19 + 24;
    *(_QWORD *)(v19 + 8) = 8;
    v43 = *(_QWORD *)(a1 + 4096);
    *(_DWORD *)(v19 + 16) = 0;
    *(_BYTE *)(v19 + 20) = 1;
    *(_QWORD *)(a1 + 4096) = v19;
    if ( v43 )
    {
      if ( !*(_BYTE *)(v43 + 20) )
        free(*(void **)v43);
      operator delete((void *)v43, 0x58u);
      v19 = *(_QWORD *)(a1 + 4096);
    }
  }
  v20 = sub_1703870(v19, a2);
  if ( *(_BYTE *)(v19 + 20) )
    v21 = *(_QWORD *)v19 + 8LL * *(unsigned int *)(v19 + 12);
  else
    v21 = *(_QWORD *)v19 + 8LL * *(unsigned int *)(v19 + 8);
  if ( v20 != (_QWORD *)v21 && *v20 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v22 = v20 + 1;
    do
    {
      v23 = v22;
      if ( (_QWORD *)v21 == v22 )
        break;
      ++v22;
    }
    while ( *v23 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( !v58 )
    free(ptr);
  v24 = v52;
  v25 = &v52[48 * (unsigned int)v53];
  if ( v52 != v25 )
  {
    do
    {
      v25 -= 48;
      v26 = *((char **)v25 + 4);
      v27 = &v26[120 * *((unsigned int *)v25 + 10)];
      if ( v26 != v27 )
      {
        do
        {
          while ( 1 )
          {
            v27 -= 120;
            v28 = *((char **)v27 + 1);
            if ( v28 == v27 + 24 )
              break;
            free(v28);
            if ( v26 == v27 )
              goto LABEL_39;
          }
        }
        while ( v26 != v27 );
LABEL_39:
        v26 = *((char **)v25 + 4);
      }
      if ( v26 != v25 + 48 )
        free(v26);
      operator delete(*((_QWORD *)v25 + 1), 8LL * *((unsigned int *)v25 + 6), 4);
    }
    while ( v24 != v25 );
    v25 = v52;
  }
  if ( v25 != &v54 )
    free(v25);
  return operator delete(v50[0], 16LL * v51, 8);
}
