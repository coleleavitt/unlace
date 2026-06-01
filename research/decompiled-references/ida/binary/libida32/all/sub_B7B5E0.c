void __fastcall sub_B7B5E0(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rsi
  char *v15; // r14
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  char *v19; // rbp
  signed __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // rdi
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // r14d
  char *v46; // r12
  char *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rdx
  char *v52; // rcx
  __int64 v53; // rax
  unsigned __int64 *v54; // rdx
  unsigned __int64 v55; // r13
  __int64 v56; // rax
  _QWORD *v57; // [rsp+8h] [rbp-170h]
  char v58; // [rsp+8h] [rbp-170h]
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __int64 v61; // [rsp+38h] [rbp-140h]
  _BYTE v62[64]; // [rsp+40h] [rbp-138h] BYREF
  void *v63; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+88h] [rbp-F0h]
  int v65; // [rsp+90h] [rbp-E8h]
  char v66; // [rsp+94h] [rbp-E4h]
  __int64 v67; // [rsp+98h] [rbp-E0h] BYREF
  void *v68; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v69; // [rsp+E8h] [rbp-90h]
  int v70; // [rsp+F0h] [rbp-88h]
  char v71; // [rsp+F4h] [rbp-84h]
  __int64 v72; // [rsp+F8h] [rbp-80h] BYREF

  v8 = *(_QWORD *)(a2 + 104);
  ptr = v62;
  v61 = 0x800000000LL;
  v63 = &v67;
  v64 = 8;
  v65 = 0;
  v66 = 1;
  v68 = &v72;
  v69 = 8;
  v70 = 0;
  v71 = 1;
  sub_6E4DB0((__int64 *)(v8 + 96), v8, (__int64)a3, a4, a5, a6);
  v13 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v13 + 56) & 4) != 0 )
  {
    v56 = sub_B685F0(a2);
    sub_B72B60(v13 + 40, v56);
  }
  v14 = *(_QWORD *)(a2 + 104);
  v15 = *(char **)(v13 + 40);
  sub_6E4DB0((__int64 *)(v14 + 96), v14, v9, v10, v11, v12);
  v18 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v18 + 56) & 4) != 0 )
  {
    v14 = sub_B685F0(a2);
    sub_B72B60(v18 + 40, v14);
  }
  v19 = *(char **)(v18 + 48);
  v20 = v19 - v15;
  v21 = (v19 - v15) >> 3;
  if ( v21 )
  {
    v22 = (char *)a3[1];
    if ( v21 > (__int64)((a3[2] & 0xFFFFFFFFFFFFFFF8LL) - (_QWORD)v22) >> 3 )
    {
      v14 = (__int64)a1;
      sub_B77CC0((__int64)a3, a1, ((__int64)&v22[-*a3] >> 3) + v21, v20, v16, v17);
      v22 = (char *)a3[1];
      v20 = v19 - v15;
      if ( v19 == v15 )
        goto LABEL_9;
    }
    else if ( v19 == v15 )
    {
LABEL_9:
      a3[1] = &v22[v20];
      goto LABEL_10;
    }
    v14 = (__int64)v15;
    v57 = (_QWORD *)v20;
    memmove(v22, v15, v20);
    v22 = (char *)a3[1];
    v20 = (signed __int64)v57;
    goto LABEL_9;
  }
LABEL_10:
  if ( v19 != v15 )
  {
    while ( 1 )
    {
      v23 = sub_B72350(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF8LL, v14);
      if ( v71 )
      {
        v20 = (signed __int64)v68;
        v17 = HIDWORD(v69);
        v14 = 8LL * HIDWORD(v69);
        v24 = (unsigned __int64 *)((char *)v68 + v14);
        if ( v68 != (char *)v68 + v14 )
        {
          v21 = (unsigned __int64)v68;
          if ( v23 == *(_QWORD *)v68 )
            goto LABEL_19;
          while ( 1 )
          {
            v21 += 8LL;
            if ( v24 == (unsigned __int64 *)v21 )
              break;
            if ( v23 == *(_QWORD *)v21 )
              goto LABEL_19;
          }
        }
        if ( HIDWORD(v69) < (unsigned int)v69 )
          break;
      }
      v14 = v23;
      v53 = sub_2212A20(&v68, v23);
      v20 = (signed __int64)v68;
      v21 = v53;
      if ( v71 )
        goto LABEL_19;
      v25 = (char *)v68 + 8 * (unsigned int)v69;
LABEL_20:
      if ( v25 != (char *)v21 && *(_QWORD *)v21 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v21 += 8LL;
        do
        {
          v20 = v21;
          if ( v25 == (char *)v21 )
            break;
          v21 += 8LL;
        }
        while ( *(_QWORD *)v20 >= 0xFFFFFFFFFFFFFFFELL );
      }
      v15 += 8;
      if ( v19 == v15 )
        goto LABEL_26;
    }
    v17 = (unsigned int)++HIDWORD(v69);
    *v24 = v23;
    v20 = (signed __int64)v68;
    v21 = (unsigned __int64)v68 + v14;
LABEL_19:
    v25 = (char *)(v20 + 8LL * HIDWORD(v69));
    goto LABEL_20;
  }
LABEL_26:
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v21, v20, v16, v17);
  v30 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v30 + 24) & 1) != 0 )
    v31 = sub_B72C40(v30);
  else
    v31 = *(_QWORD *)(v30 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v26, v27, v28, v29);
  v32 = *(_QWORD *)(a2 + 104);
  v33 = v31 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_6E4DB0((__int64 *)(v32 + 96), v32, v34, v35, v36, v37);
  v39 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v39 + 24) & 1) != 0 )
    v40 = sub_B72C40(v39);
  else
    v40 = *(_QWORD *)(v39 + 24);
  for ( ; v40 != v33; v40 += 24 )
  {
    v41 = *(_QWORD *)(**(_QWORD **)(v40 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v41 + 8) & 0xF) != 0 )
      v41 = sub_F411C0(**(_QWORD **)(v40 + 16));
    v42 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v42 + 16LL) == 48 )
    {
      v43 = *(unsigned __int8 *)(v40 + 12);
      v44 = v43;
      v45 = ((unsigned __int8)v43 >> 2) & 3;
      if ( (*(_BYTE *)(v40 + 12) & 0xC) == 0xC )
        v45 = 2 * ((v43 & 2) != 0);
      v58 = *(_BYTE *)(v40 + 12);
      LOBYTE(v44) = (unsigned __int8)v43 >> 2;
      v32 = sub_F3D1D0(*v42, v32, v43, v44, v38);
      sub_B7AFD0(a1, v32, v58 & 1, v45, (__int64)&v68, (__int64)a3, (__int64)&ptr, (__int64)&v63);
    }
  }
  v46 = (char *)ptr;
  v47 = (char *)ptr + 8 * (unsigned int)v61;
  if ( v47 != ptr )
  {
    while ( 1 )
    {
      v48 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*(_QWORD *)v46 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*(_QWORD *)v46 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v66 )
      {
        v51 = v63;
        v52 = (char *)v63 + 8 * HIDWORD(v64);
        if ( v63 == v52 )
          goto LABEL_55;
        while ( v48 != *v51 )
        {
          if ( v52 == (char *)++v51 )
            goto LABEL_55;
        }
LABEL_44:
        v46 += 8;
        if ( v47 == v46 )
          break;
      }
      else
      {
        if ( sub_2212830(&v63, v48) )
          goto LABEL_44;
LABEL_55:
        v54 = (unsigned __int64 *)a3[1];
        v55 = *(_QWORD *)v46 & 0xFFFFFFFFFFFFFFFBLL;
        if ( (unsigned __int64)v54 >= (a3[2] & 0xFFFFFFFFFFFFFFF8LL) )
        {
          sub_B77CC0((__int64)a3, a1, 1u, (__int64)v52, v49, v50);
          v54 = (unsigned __int64 *)a3[1];
        }
        v46 += 8;
        *v54 = v55;
        a3[1] += 8LL;
        if ( v47 == v46 )
          break;
      }
    }
  }
  if ( !v71 )
    free(v68);
  if ( !v66 )
    free(v63);
  if ( ptr != v62 )
    free(ptr);
}

