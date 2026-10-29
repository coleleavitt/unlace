__int64 __fastcall sub_869870(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  char v7; // si
  double v8; // xmm1_8
  __int64 v9; // rax
  double v10; // xmm2_8
  char v11; // di
  __int64 v12; // rcx
  double v13; // xmm0_8
  unsigned int v14; // r12d
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  unsigned int v24; // r15d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29[11]; // [rsp+18h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 904);
  if ( !v2 )
    return 0;
  v3 = *(unsigned int *)(v2 - 4);
  if ( !(_DWORD)v3 )
    return 0;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_BYTE *)(v6 + 109);
  v8 = *(double *)(v6 + 72);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 904);
    v10 = 0.0;
    v11 = 0;
    v12 = v2 + 16 * v3;
    while ( 1 )
    {
      if ( *(_BYTE *)(v9 + 12) )
        goto LABEL_7;
      v13 = *(float *)(v9 + 8);
      if ( v8 < v13 )
        goto LABEL_7;
      if ( v11 )
      {
        v10 = fmin(v13, v10);
LABEL_7:
        v9 += 16;
        if ( v9 == v12 )
          goto LABEL_12;
      }
      else
      {
        v9 += 16;
        v11 = v7;
        v10 = v13;
        if ( v9 == v12 )
        {
LABEL_12:
          v8 = v10;
          break;
        }
      }
    }
  }
  result = 0;
  v14 = 0;
  while ( 1 )
  {
    v15 = v2 + 16LL * v14;
    if ( !*(_BYTE *)(v15 + 12) && v8 >= *(float *)(v15 + 8) )
      break;
    ++v14;
LABEL_17:
    if ( v14 >= *(_DWORD *)(v2 - 4) )
      return result;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = sub_180C100(v16 + 2144, 24);
  v18 = *(_QWORD **)(v16 + 2128);
  v19 = v17;
  *(_QWORD *)v17 = off_1C55638;
  *(_QWORD *)(v17 + 8) = a1;
  *(_DWORD *)(v17 + 16) = v14;
  if ( v18 )
  {
    v20 = *((_DWORD *)v18 - 1);
    if ( v20 == *((_DWORD *)v18 - 2) )
    {
      v24 = (3 * v20 + 1) >> 1;
      v25 = 8 * v24 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v25 || v20 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v29, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = (unsigned int *)sub_186B300(v18 - 1, v25);
      v27 = v26[1];
      v18 = v26 + 2;
      *(_QWORD *)(v16 + 2128) = v26 + 2;
      *v26 = v24;
      LODWORD(v26) = v27;
      v23 = &v18[v27];
      v22 = (_DWORD)v26 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v18[v21];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x18u);
    v18 = v28 + 1;
    *v28 = 2;
    v22 = 1;
    *(_QWORD *)(v16 + 2128) = v18;
    v23 = v18;
  }
  *v23 = v19;
  *((_DWORD *)v18 - 1) = v22;
  ++*(_DWORD *)(a1 + 36);
  sub_869350(a1, v15);
  v2 = *(_QWORD *)(a1 + 904);
  if ( v2 )
  {
    ++v14;
    result = 1;
    goto LABEL_17;
  }
  return 1;
}

