void __fastcall sub_183C990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  const void *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rdx
  char *v15; // rbx
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rdi
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  unsigned int v27; // r10d
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 *v32; // rsi
  __int64 v33; // rax
  const void *v34; // rsi
  __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  int v41; // ecx
  char *v42; // rsi
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int64 v44; // [rsp+8h] [rbp-90h]
  _BYTE v45[32]; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v46; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-60h]
  _BYTE v48[88]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a1 + 4328);
  v44 = 0x200000000LL;
  v47 = 0x200000000LL;
  ptr = v45;
  v46 = (__int64 *)v48;
  if ( v6 <= 2 )
  {
    v7 = v6;
    v8 = 0;
    v9 = 0;
LABEL_3:
    if ( v8 < v6 )
    {
      v10 = *(_QWORD *)(a1 + 4320);
      v11 = (const void *)(v10 + 16 * v9);
      if ( v11 != (const void *)(16 * v6 + v10) )
      {
        memcpy((char *)ptr + 16 * v8, v11, 16 * v6 - 16 * v9);
        v7 = (unsigned int)(v44 + v6 - v8);
      }
      LODWORD(v44) = v7;
      *(_DWORD *)(a1 + 4328) = v9;
    }
    goto LABEL_7;
  }
  sub_2237220(&ptr, v45, v6, 16);
  v8 = (unsigned int)v44;
  if ( *(_DWORD *)(a1 + 4332) < (unsigned int)v44 )
  {
    sub_2237220(a1 + 4320, a1 + 4336, (unsigned int)v44, 16);
    v8 = (unsigned int)v44;
  }
  v6 = *(unsigned int *)(a1 + 4328);
  v9 = v6;
  v7 = v6;
  if ( v8 <= v6 )
    v9 = v8;
  v35 = 0;
  a5 = 16 * v9;
  if ( v9 )
  {
    do
    {
      v36 = (__int64 *)(v35 + *(_QWORD *)(a1 + 4320));
      v37 = (__int64 *)((char *)ptr + v35);
      v35 += 16;
      v38 = *v37;
      *v37 = *v36;
      v39 = v36[1];
      *v36 = v38;
      v40 = v37[1];
      v37[1] = v39;
      v36[1] = v40;
    }
    while ( a5 != v35 );
  }
  if ( v8 <= v6 )
    goto LABEL_3;
  v41 = v6;
  a5 = 16 * v9;
  v42 = (char *)ptr + 16 * v9;
  if ( v42 != (char *)ptr + 16 * v8 )
  {
    memcpy((void *)(*(_QWORD *)(a1 + 4320) + 16 * v6), v42, 16 * v8 - a5);
    v41 = *(_DWORD *)(a1 + 4328);
  }
  LODWORD(v44) = v9;
  *(_DWORD *)(a1 + 4328) = v41 + v8 - v6;
LABEL_7:
  v12 = *(unsigned int *)(a1 + 4376);
  v13 = HIDWORD(v47);
  if ( v46 != (__int64 *)v48 )
  {
    v14 = *(__int64 **)(a1 + 4368);
    if ( v14 != (__int64 *)(a1 + 4384) )
    {
      *(_QWORD *)(a1 + 4368) = v46;
      v46 = v14;
      *(_DWORD *)(a1 + 4376) = v47;
      v47 = __PAIR64__(*(_DWORD *)(a1 + 4380), v12);
      *(_DWORD *)(a1 + 4380) = v13;
      goto LABEL_10;
    }
  }
  if ( HIDWORD(v47) < (unsigned int)v12 )
  {
    sub_2237220(&v46, v48, (unsigned int)v12, 16);
    v24 = (unsigned int)v47;
    v12 = (unsigned int)v47;
    if ( *(_DWORD *)(a1 + 4380) >= (unsigned int)v47 )
      goto LABEL_23;
    goto LABEL_35;
  }
  v24 = (unsigned int)v47;
  v12 = (unsigned int)v47;
  if ( *(_DWORD *)(a1 + 4380) < (unsigned int)v47 )
  {
LABEL_35:
    sub_2237220(a1 + 4368, a1 + 4384, v24, 16);
    v24 = (unsigned int)v47;
    v12 = (unsigned int)v47;
  }
LABEL_23:
  v25 = *(unsigned int *)(a1 + 4376);
  v26 = v24;
  v27 = *(_DWORD *)(a1 + 4376);
  if ( v25 <= v24 )
    v26 = *(unsigned int *)(a1 + 4376);
  v28 = 0;
  v7 = 16 * v26;
  if ( v26 )
  {
    do
    {
      v29 = (_QWORD *)(v28 + *(_QWORD *)(a1 + 4368));
      v13 = (__int64)&v46[v28 / 8];
      v28 += 16LL;
      v30 = *(_QWORD *)v13;
      *(_QWORD *)v13 = *v29;
      a5 = v29[1];
      *v29 = v30;
      v31 = *(_QWORD *)(v13 + 8);
      *(_QWORD *)(v13 + 8) = a5;
      v29[1] = v31;
    }
    while ( v7 != v28 );
  }
  if ( v25 >= v24 )
  {
    if ( v25 > v24 )
    {
      v33 = *(_QWORD *)(a1 + 4368);
      v12 = v27;
      v13 = 16 * v26;
      v34 = (const void *)(v33 + 16 * v26);
      if ( v34 != (const void *)(16 * v25 + v33) )
      {
        memcpy(&v46[2 * v24], v34, 16 * v25 - v13);
        v12 = (unsigned int)(v25 + v47 - v24);
      }
      LODWORD(v47) = v12;
      *(_DWORD *)(a1 + 4376) = v26;
    }
  }
  else
  {
    v13 = v25;
    a5 = 16 * v26;
    v32 = &v46[2 * v26];
    if ( v32 != &v46[2 * v24] )
    {
      memcpy((void *)(*(_QWORD *)(a1 + 4368) + 16 * v25), v32, 16 * v24 - a5);
      v13 = *(unsigned int *)(a1 + 4376);
    }
    v12 = (unsigned int)v26;
    LODWORD(v47) = v26;
    *(_DWORD *)(a1 + 4376) = v13 + v24 - v25;
  }
LABEL_10:
  v15 = (char *)ptr;
  v16 = (char *)ptr + 16 * (unsigned int)v44;
  if ( ptr != v16 )
  {
    do
    {
      v17 = *((_QWORD *)v15 + 1);
      v18 = *(_QWORD *)v15;
      v15 += 16;
      sub_18B4F10(a1, v18, v17);
    }
    while ( v16 != v15 );
    v12 = (unsigned int)v47;
  }
  v19 = v46;
  v20 = 2 * v12;
  v21 = &v46[v20];
  if ( v46 != &v46[v20] )
  {
    do
    {
      v22 = v19[1];
      v23 = *v19;
      v19 += 2;
      sub_18B6770(a1, v22, v23, v13, a5, v7);
    }
    while ( v21 != v19 );
    v21 = v46;
  }
  if ( v21 != (__int64 *)v48 )
    free(v21);
  if ( ptr != v45 )
    free(ptr);
}
