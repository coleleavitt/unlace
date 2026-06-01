__int64 __fastcall sub_3D79C0(_QWORD *a1)
{
  char **exception; // r14
  __int64 v3; // r12
  int v4; // eax
  int v5; // edi
  _QWORD *v6; // rbp
  _QWORD *v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // rbp
  _QWORD *v10; // r14
  __int64 *v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // r14
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 v25; // rsi
  char v26; // dl
  unsigned int v27; // edx
  int v28; // edx
  __int64 *v29; // rax
  char *v30; // rbx
  char *v31; // r13
  _DWORD *v32; // rbp
  void *v33; // rbx
  unsigned int v35; // r10d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rax
  _Unwind_Exception *v40; // [rsp+0h] [rbp-128h]
  _DWORD *v41; // [rsp+8h] [rbp-120h]
  unsigned int v42; // [rsp+8h] [rbp-120h]
  int v43; // [rsp+10h] [rbp-118h]
  __int64 v44; // [rsp+18h] [rbp-110h]
  __int64 v45; // [rsp+20h] [rbp-108h]
  void *v46; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v47[4]; // [rsp+40h] [rbp-E8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-C0h]
  _BYTE v50[184]; // [rsp+70h] [rbp-B8h] BYREF

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 712LL);
  *(_DWORD *)(*a1 + 712LL) = 0;
  HIDWORD(v45) = v4;
  v41 = (_DWORD *)sub_186B270(0x80u);
  sub_ED2A30(v41, v3, 0, 0, 0);
  v5 = (int)v41;
  v6 = (_QWORD *)a1[1];
  ++v41[8];
  v46 = v41;
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 != v7 )
    {
      while ( 1 )
      {
        sub_EDBA20(v5, *v6++, 0, v40, (int)v41, v43, v44, v45);
        if ( v7 == v6 )
          break;
        v5 = (int)v46;
      }
    }
  }
  v47[0] = 0;
  ptr = v50;
  v49 = 0x1000000000LL;
  v8 = sub_C3EAB0(v3, v47);
  v9 = (_DWORD *)v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  sub_18572D0(v47);
  (*(void (__fastcall **)(_DWORD *, void **, void **))(*(_QWORD *)v9 + 128LL))(v9, &v46, &ptr);
  v10 = (_QWORD *)a1[1];
  v11 = *(__int64 **)ptr;
  if ( v10 )
  {
    v12 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v12 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v13 = *v10;
        if ( *v10 )
        {
          v14 = *a1;
          v15 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v10 >= v12 )
          goto LABEL_15;
      }
      sub_15D7BC0(v14, v13);
      ++v10;
    }
    while ( v10 < v12 );
LABEL_15:
    v10 = (_QWORD *)a1[1];
    if ( v10 )
LABEL_16:
      *((_DWORD *)v10 - 1) = 0;
  }
  v16 = v11[9];
  if ( !v16 )
    goto LABEL_41;
  v17 = *v11;
  v18 = 0;
  while ( 2 )
  {
    v25 = v16;
    v26 = *(_BYTE *)(v16 + 3) >> 6;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_29;
    }
    else
    {
      do
      {
        v25 = *(_QWORD *)(v25 + 16);
        v26 = *(_BYTE *)(v25 + 3) >> 6;
      }
      while ( !v26 );
      if ( v26 != 1 )
      {
LABEL_29:
        if ( v26 == 2 )
          v27 = *(_DWORD *)(v25 + 4) - 1;
        else
          v27 = *(_DWORD *)(v25 + 4);
        if ( v18 >= v27 )
          break;
        goto LABEL_32;
      }
    }
    if ( v18 >= *(_DWORD *)(v25 + 4) + 1 )
      break;
LABEL_32:
    if ( (*((_BYTE *)v11 + 123) & 0x20) != 0 )
    {
      v19 = *(_QWORD *)(v17 + 864);
      goto LABEL_20;
    }
    v28 = 17;
    while ( 1 )
    {
      if ( *(char *)(v16 + 3) < 0 )
      {
        if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
        {
          v29 = (__int64 *)(*(_QWORD *)(v16 + 16) + 8LL * v18);
          goto LABEL_37;
        }
        goto LABEL_58;
      }
      if ( v18 == *(_DWORD *)(v16 + 4) )
        break;
LABEL_58:
      v16 = *(_QWORD *)(v16 + 16);
      if ( !--v28 )
      {
        sub_233F80((__int64 *)(v17 + 616), (_DWORD *)v11 + 18);
        v29 = (__int64 *)(*(_QWORD *)(v11[9] + 16) + 8LL * v18);
        goto LABEL_37;
      }
    }
    v29 = (__int64 *)(v16 + 8);
LABEL_37:
    v19 = *v29;
LABEL_20:
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v20 = (_QWORD *)a1[1];
    if ( v20 )
    {
      v21 = *((_DWORD *)v20 - 1);
      if ( v21 == *((_DWORD *)v20 - 2) )
      {
        v35 = (3 * v21 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v36 || v21 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3D2D40(v47, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v42 = (3 * v21 + 1) >> 1;
        v37 = (unsigned int *)sub_186B300(v20 - 1, v36);
        v38 = v37[1];
        v20 = v37 + 2;
        a1[1] = v37 + 2;
        *v37 = v42;
        LODWORD(v37) = v38;
        v24 = &v20[v38];
        v23 = (_DWORD)v37 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v20[v22];
      }
    }
    else
    {
      v39 = (_QWORD *)sub_186B270(0x18u);
      v20 = v39 + 1;
      *v39 = 2;
      v23 = 1;
      a1[1] = v20;
      v24 = v20;
    }
    *v24 = v19;
    ++v18;
    *((_DWORD *)v20 - 1) = v23;
    v16 = v11[9];
    if ( v16 )
    {
      v17 = *v11;
      continue;
    }
    break;
  }
LABEL_41:
  v15 = v9[2]-- == 1;
  if ( v15 )
  {
    (**(void (__fastcall ***)(_DWORD *))v9)(v9);
    sub_186B220(v9);
  }
  v30 = (char *)ptr;
  v31 = (char *)ptr + 8 * (unsigned int)v49;
  if ( ptr < v31 )
  {
    do
    {
      while ( 1 )
      {
        v32 = *(_DWORD **)v30;
        if ( *(_QWORD *)v30 )
        {
          v15 = v32[8]-- == 1;
          if ( v15 )
            break;
        }
        v30 += 8;
        if ( v30 >= v31 )
          goto LABEL_49;
      }
      v30 += 8;
      sub_ED44E0(v32);
      sub_186B220(v32);
    }
    while ( v30 < v31 );
LABEL_49:
    v30 = (char *)ptr;
  }
  if ( v30 != v50 && v30 )
    sub_186B220(v30);
  v33 = v46;
  if ( v46 )
  {
    v15 = (*((_DWORD *)v46 + 8))-- == 1;
    if ( v15 )
    {
      sub_ED44E0(v33);
      sub_186B220(v33);
    }
  }
  *(_DWORD *)(v3 + 712) = HIDWORD(v45);
  return HIDWORD(v45);
}

