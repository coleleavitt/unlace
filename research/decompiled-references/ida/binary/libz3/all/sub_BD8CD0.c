void __fastcall sub_BD8CD0(__int64 a1, unsigned int a2, __int64 a3, __m128 a4, __m128 a5, __m128 a6)
{
  char **exception; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // r12
  __int64 *v13; // r13
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  int v18; // r14d
  __int64 *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // r12d
  __int64 i; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // r14d
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = *(_QWORD *)(a1 + 264);
  if ( *(_BYTE *)(v9 + 17) && *(_QWORD *)(a3 + 24) != a3 )
    return;
  do
  {
    v10 = a2;
    v11 = a2;
    a2 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * a2);
  }
  while ( v11 != a2 );
  v12 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 8 * v10);
  v13 = *(__int64 **)(*(_QWORD *)(a1 + 256) + 8 * v10);
  if ( *(_BYTE *)(v9 + 18) || *v13 && *(_DWORD *)(*v13 - 4) )
  {
    sub_B30FF0((_DWORD *)a1, v11, v13);
    v14 = (_QWORD *)*v12;
  }
  else
  {
    v15 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_29;
    v16 = *((unsigned int *)v15 - 1);
    if ( !(_DWORD)v16 )
    {
      if ( !*((_DWORD *)v15 - 2) )
        goto LABEL_32;
      goto LABEL_10;
    }
    v30 = 8 * v16;
    v31 = 0;
    do
    {
      v32 = v15[v31 / 8];
      v31 += 8LL;
      sub_BD6C20(a1, v32, a4, a5, a6);
      v15 = (_QWORD *)*v12;
      v14 = (_QWORD *)*v12;
    }
    while ( v31 != v30 );
  }
  v15 = v14;
  if ( !v14 )
  {
LABEL_29:
    v18 = 1;
    v42 = (_QWORD *)sub_186B270(0x18u);
    v15 = v42 + 1;
    *v42 = 2;
    *v12 = v42 + 1;
    v19 = v42 + 1;
    goto LABEL_11;
  }
  LODWORD(v16) = *((_DWORD *)v14 - 1);
  if ( *((_DWORD *)v14 - 2) != (_DWORD)v16 )
  {
LABEL_10:
    v17 = (unsigned int)v16;
    v18 = v16 + 1;
    v19 = &v15[v17];
    goto LABEL_11;
  }
  v37 = (unsigned int)(3 * v16 + 1) >> 1;
  v38 = 8 * v37 + 8;
  if ( 8 * (int)v16 + 8 >= (unsigned int)v38 || (unsigned int)v16 >= v37 )
    goto LABEL_32;
  v39 = (unsigned int *)sub_186B300(v14 - 1, v38);
  v15 = v39 + 2;
  *v12 = v39 + 2;
  *v39 = v37;
  v40 = v39[1];
  v41 = v40;
  v19 = &v15[v40];
  v18 = v41 + 1;
LABEL_11:
  *v19 = a3;
  *((_DWORD *)v15 - 1) = v18;
  v20 = (_QWORD *)sub_180C100(a1 + 400, 16);
  v21 = *(_QWORD **)(a1 + 384);
  v22 = v20;
  *v20 = off_1C56E28;
  v20[1] = v12;
  if ( !v21 )
  {
    v43 = (_QWORD *)sub_186B270(0x18u);
    v21 = v43 + 1;
    *v43 = 2;
    v25 = 1;
    *(_QWORD *)(a1 + 384) = v21;
    v26 = v21;
    goto LABEL_14;
  }
  v23 = *((_DWORD *)v21 - 1);
  if ( v23 == *((_DWORD *)v21 - 2) )
  {
    v33 = (3 * v23 + 1) >> 1;
    v34 = 8 * v33 + 8;
    if ( 8 * v23 + 8 < (unsigned int)v34 && v23 < v33 )
    {
      v35 = (unsigned int *)sub_186B300(v21 - 1, v34);
      v36 = v35[1];
      v21 = v35 + 2;
      *v35 = v33;
      *(_QWORD *)(a1 + 384) = v35 + 2;
      LODWORD(v35) = v36;
      v26 = &v21[v36];
      v25 = (_DWORD)v35 + 1;
      goto LABEL_14;
    }
LABEL_32:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v44, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v44);
    sub_233E40((__int64)v44);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v24 = v23;
  v25 = v23 + 1;
  v26 = &v21[v24];
LABEL_14:
  *v26 = v22;
  v27 = 0;
  *((_DWORD *)v21 - 1) = v25;
  for ( i = v13[1]; i; i = v13[1] )
  {
    if ( v27 >= *(_DWORD *)(i - 4) )
      break;
    v29 = v27++;
    sub_BD5FC0(a1, *(__int64 **)(i + 8 * v29), a3, a4, a5, a6);
  }
  sub_BD6C20(a1, a3, a4, a5, a6);
}

