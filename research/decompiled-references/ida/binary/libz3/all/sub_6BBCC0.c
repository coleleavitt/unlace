__int64 __fastcall sub_6BBCC0(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 (*v6)(void); // rax
  __int64 v7; // r12
  __int64 v8; // r15
  _QWORD *v9; // r13
  int v10; // r10d
  __int64 *v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  void *v16; // rdi
  int v17; // eax
  int v18; // eax
  void *v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  __int64 i; // rax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 *v28; // r12
  __int64 v29; // rax
  unsigned int v30; // r15d
  __int64 v31; // rdi
  __int64 (*v32)(); // rdx
  char v34; // dl
  __int64 v35; // r15
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // ecx
  size_t v43; // rsi
  unsigned int *v44; // rax
  _QWORD *v45; // rdx
  char **exception; // r12
  __int64 v47; // [rsp+8h] [rbp-80h]
  unsigned int v48; // [rsp+8h] [rbp-80h]
  __int64 v49; // [rsp+10h] [rbp-78h]
  int v51; // [rsp+20h] [rbp-68h]
  void *v52; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  __int64 v54[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v55[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *(__int64 (**)(void))(*a1 + 48);
  if ( (char *)v6 == (char *)sub_6AFDD0 )
  {
    v7 = a1[91];
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL * a2);
  }
  else
  {
    v41 = v6();
    v7 = a1[91];
    v8 = v41;
  }
  v49 = a1[6];
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v54[0] = 1;
  v54[1] = 0;
  v55[0] = 1;
  v55[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v55);
  BYTE4(v55[0]) &= ~1u;
  LODWORD(v55[0]) = 1;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  sub_6A99A0(*(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 32));
  v9 = *(_QWORD **)(v7 + 16);
  *(_QWORD *)(v7 + 24) = v8;
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 )
    {
      v11 = v9;
      v12 = &v9[v10];
      while ( 1 )
      {
        v13 = *v11;
        if ( v8 == *v11 )
          break;
        if ( v12 == ++v11 )
          goto LABEL_17;
      }
      if ( v11 + 1 != v12 )
      {
        v53 = *v11;
        v51 = *((_DWORD *)v9 - 1);
        memmove(v11, v11 + 1, (char *)(v12 - 1) - (char *)v11);
        v10 = v51;
        v13 = v53;
      }
      *((_DWORD *)v9 - 1) = v10 - 1;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v7 + 8);
        if ( (*(_DWORD *)(v13 + 8))-- == 1 )
          sub_15D7BC0(v14, v13);
      }
    }
  }
LABEL_17:
  v16 = qword_1C7F2C0;
  if ( (v54[0] & 0x100000000LL) != 0 )
  {
    v52 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v7 + 112, v54);
    v16 = v52;
  }
  else
  {
    v17 = v54[0];
    *(_BYTE *)(v7 + 116) &= ~1u;
    *(_DWORD *)(v7 + 112) = v17;
  }
  if ( (v55[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v16, v7 + 128, v55);
  }
  else
  {
    v18 = v55[0];
    *(_BYTE *)(v7 + 132) &= ~1u;
    *(_DWORD *)(v7 + 128) = v18;
  }
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v54);
  sub_182CBA0(v19, v55);
  v20 = sub_6B61D0(a1[91], a3);
  a1[91] = (__int64)v20;
  v21 = v20;
  if ( v8 && a4 )
  {
    v35 = *(_QWORD *)(v8 + 16);
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v36 = (_QWORD *)v20[6];
    if ( v36 )
    {
      v37 = *((_DWORD *)v36 - 1);
      if ( v37 == *((_DWORD *)v36 - 2) )
      {
        v42 = (3 * v37 + 1) >> 1;
        v43 = 8 * v42 + 8;
        if ( 8 * v37 + 8 >= (unsigned int)v43 || v37 >= v42 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0(v54, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v54);
          sub_233E40((__int64)v54);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v48 = (3 * v37 + 1) >> 1;
        v44 = (unsigned int *)sub_186B300(v36 - 1, v43);
        v36 = v44 + 2;
        v21[6] = v44 + 2;
        *v44 = v48;
        LODWORD(v44) = v44[1];
        v40 = &v36[(unsigned int)v44];
        v39 = (_DWORD)v44 + 1;
      }
      else
      {
        v38 = v37;
        v39 = v37 + 1;
        v40 = &v36[v38];
      }
    }
    else
    {
      v45 = (_QWORD *)sub_186B270(0x18u);
      *v45 = 2;
      v39 = 1;
      v36 = v45 + 1;
      v21[6] = v36;
      v40 = v36;
    }
    *v40 = v35;
    *((_DWORD *)v36 - 1) = v39;
    ++*(_DWORD *)(a4 + 8);
    v54[0] = a4;
    sub_6ACBA0(v21 + 8, v54);
    v21 = (_QWORD *)a1[91];
  }
  for ( i = a1[94]; i; i = a1[94] )
  {
    v23 = *(_DWORD *)(i - 4);
    if ( !v23 )
      break;
    v24 = *(_QWORD *)(i + 8LL * (unsigned int)(v23 - 1));
    v54[0] = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_6ACAE0(v21 + 2, v54);
    sub_3A8160(a1 + 93);
  }
  v25 = a1[91];
  v26 = v25 + 176;
  v27 = v25 + 200;
  v28 = (__int64 *)(v25 + 72);
  v47 = v26;
  sub_14B9B80(a1 + 8, v28);
  v29 = a1[5];
LABEL_29:
  v30 = 0;
  while ( v29 && v30 < *(_DWORD *)(v29 - 4) )
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)(v29 + 8LL * v30);
      if ( v31 )
      {
        v32 = *(__int64 (**)())(*(_QWORD *)v31 + 64LL);
        if ( v32 != sub_6AFD50 )
          break;
      }
      if ( ++v30 >= *(_DWORD *)(v29 - 4) )
        goto LABEL_35;
    }
    v34 = ((__int64 (__fastcall *)(__int64, __int64 *))v32)(v31, v28);
    ++v30;
    v29 = a1[5];
    if ( v34 )
      goto LABEL_29;
  }
LABEL_35:
  sub_6BB860((__int64)(a1 + 97), v28, v47, v27);
  return sub_6A99C0(a3, v49);
}

