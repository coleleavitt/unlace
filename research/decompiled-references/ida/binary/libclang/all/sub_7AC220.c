void __fastcall sub_7AC220(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  char *v8; // r14
  __int64 v9; // r12
  char *v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned __int8 v25; // bp
  int v26; // r14d
  char *v27; // r15
  char *v28; // rbp
  __int64 v29; // rsi
  _QWORD *v30; // rdx
  char *v31; // rax
  unsigned __int64 *v32; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  void *ptr; // [rsp+10h] [rbp-148h] BYREF
  __int64 v37; // [rsp+18h] [rbp-140h]
  _BYTE v38[64]; // [rsp+20h] [rbp-138h] BYREF
  void *v39; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-F0h]
  int v41; // [rsp+70h] [rbp-E8h]
  char v42; // [rsp+74h] [rbp-E4h]
  char v43; // [rsp+78h] [rbp-E0h] BYREF
  void *v44; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-90h]
  int v46; // [rsp+D0h] [rbp-88h]
  char v47; // [rsp+D4h] [rbp-84h]
  char v48; // [rsp+D8h] [rbp-80h] BYREF

  v6 = *(_QWORD *)(a2 + 104);
  v41 = 0;
  ptr = v38;
  v42 = 1;
  v37 = 0x800000000LL;
  v39 = &v43;
  v44 = &v48;
  v40 = 8;
  v45 = 8;
  v46 = 0;
  v47 = 1;
  sub_6E77B0((unsigned __int64 *)(v6 + 96), v6);
  v7 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v7 + 56) & 4) != 0 )
  {
    v35 = sub_798D40(a2);
    sub_7A2D50(v7 + 40, v35);
  }
  v8 = *(char **)(v7 + 40);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  v9 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v9 + 56) & 4) != 0 )
  {
    v34 = sub_798D40(a2);
    sub_7A2D50(v9 + 40, v34);
  }
  v10 = *(char **)(v9 + 48);
  v11 = v10 - v8;
  if ( (v10 - v8) >> 3 )
  {
    v12 = (_QWORD *)a3[1];
    if ( (a3[2] & 0xFFFFFFFFFFFFFFF8LL) - (unsigned __int64)v12 < v11 )
    {
      sub_7A96A0(a3, a1, ((v10 - v8) >> 3) + (((__int64)v12 - *a3) >> 3));
      v12 = (_QWORD *)a3[1];
    }
    if ( v11 <= 8 )
    {
      if ( v11 == 8 )
      {
        *v12 = *(_QWORD *)v8;
        v12 = (_QWORD *)a3[1];
      }
    }
    else
    {
      memmove(v12, v8, v10 - v8);
      v12 = (_QWORD *)a3[1];
    }
    a3[1] = (char *)v12 + v11;
  }
  if ( v10 != v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = sub_7A21F0(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v47 )
          break;
LABEL_45:
        v8 += 8;
        sub_25D5540(&v44, v13);
        if ( v10 == v8 )
          goto LABEL_18;
      }
      v14 = v44;
      v15 = (__int64 *)((char *)v44 + 8 * HIDWORD(v45));
      if ( v44 == v15 )
      {
LABEL_47:
        if ( HIDWORD(v45) >= (unsigned int)v45 )
          goto LABEL_45;
        v8 += 8;
        ++HIDWORD(v45);
        *v15 = v13;
        if ( v10 == v8 )
          break;
      }
      else
      {
        while ( v13 != *v14 )
        {
          if ( v15 == ++v14 )
            goto LABEL_47;
        }
        v8 += 8;
        if ( v10 == v8 )
          break;
      }
    }
  }
LABEL_18:
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  v16 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
    v17 = sub_7A2E20(v16);
  else
    v17 = *(_QWORD *)(v16 + 24);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  v18 = *(_QWORD *)(a2 + 104);
  v19 = v17 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_6E77B0((unsigned __int64 *)(v18 + 96), v18);
  v20 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v20 + 24) & 1) != 0 )
    v21 = sub_7A2E20(v20);
  else
    v21 = *(_QWORD *)(v20 + 24);
  for ( ; v21 != v19; v21 += 24 )
  {
    v22 = *(_QWORD *)(**(_QWORD **)(v21 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v23 = *(_QWORD *)(v22 + 8);
    if ( (v23 & 7) != 0 || (v23 & 8) != 0 )
      v22 = sub_B0CF30(**(_QWORD **)(v21 + 16), v18);
    v24 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v24 + 16LL) == 47 )
    {
      v25 = *(_BYTE *)(v21 + 12);
      v26 = (v25 >> 2) & 3;
      if ( (~v25 & 0xC) == 0 )
        v26 = v25 & 2;
      v18 = sub_B14A40(*v24);
      sub_7ABBD0(a1, v18, v25 & 1, v26, &v44, a3, (__int64)&ptr, (__int64)&v39);
    }
  }
  v27 = (char *)ptr;
  v28 = (char *)ptr + 8 * (unsigned int)v37;
  if ( v28 != ptr )
  {
    while ( 1 )
    {
      v29 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*(_QWORD *)v27 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*(_QWORD *)v27 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v42 )
      {
        v30 = v39;
        v31 = (char *)v39 + 8 * HIDWORD(v40);
        if ( v39 == v31 )
          goto LABEL_51;
        while ( v29 != *v30 )
        {
          if ( v31 == (char *)++v30 )
            goto LABEL_51;
        }
LABEL_37:
        v27 += 8;
        if ( v28 == v27 )
          break;
      }
      else
      {
        if ( sub_25D5370(&v39, v29) )
          goto LABEL_37;
LABEL_51:
        v32 = (unsigned __int64 *)a3[1];
        v33 = *(_QWORD *)v27 & 0xFFFFFFFFFFFFFFFBLL;
        if ( (unsigned __int64)v32 >= (a3[2] & 0xFFFFFFFFFFFFFFF8LL) )
        {
          sub_7A96A0(a3, a1, 1u);
          v32 = (unsigned __int64 *)a3[1];
        }
        v27 += 8;
        *v32 = v33;
        a3[1] += 8LL;
        if ( v28 == v27 )
          break;
      }
    }
  }
  if ( !v47 )
    free(v44);
  if ( !v42 )
    free(v39);
  if ( ptr != v38 )
    free(ptr);
}

