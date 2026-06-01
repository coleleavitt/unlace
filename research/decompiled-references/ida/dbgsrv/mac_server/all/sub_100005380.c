/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005380
// Address: 0x0000000100005380

//----- (0000000100005380) ----------------------------------------------------
__int64 __fastcall sub_100005380(__int64 a1, __int128 *a2)
{
  int v4; // ecx
  __int64 v5; // r13
  const void **v6; // r12
  __int64 v7; // rax
  size_t v8; // r15
  bool v9; // cf
  size_t v10; // rax
  void *v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  size_t v20; // r15
  size_t v21; // r15
  char *v22; // rcx
  char **v23; // r13
  char **v24; // r12
  unsigned __int64 v25; // rcx
  char *v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // rax
  unsigned __int64 v29; // r14
  __int64 **v30; // r12
  __int64 **v31; // r15
  unsigned __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rcx
  void *__src; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v37; // [rsp+10h] [rbp-C0h]
  __int128 v38; // [rsp+18h] [rbp-B8h]
  _BYTE v39[24]; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+40h] [rbp-90h]
  size_t v41; // [rsp+50h] [rbp-80h]
  __int64 v42; // [rsp+58h] [rbp-78h] BYREF
  __int64 v43; // [rsp+60h] [rbp-70h]
  char v44; // [rsp+68h] [rbp-68h]
  _BYTE __dst[52]; // [rsp+6Ch] [rbp-64h] BYREF

  v42 = 0xFFFFFFFFLL;
  v43 = -1;
  v44 = 0;
  memset(__dst, 0, sizeof(__dst));
  set_debug_event_code((__int64)&v42, 8);
  if ( (*(_DWORD *)__dst & 0xFFFFFFFu) > 0xB || (v4 = 2306, !_bittest(&v4, *(_DWORD *)__dst & 0xFFFFFFF)) )
  {
    if ( under_debugger != 1 )
      interr(0xCDFu);
    BUG();
  }
  LODWORD(v42) = *(_DWORD *)(a1 + 528);
  HIDWORD(v42) = *(_DWORD *)(*(_QWORD *)(a1 + 1208) + 32LL);
  v5 = *(_QWORD *)a2;
  v43 = *(_QWORD *)a2;
  v44 = 1;
  v6 = (const void **)(a2 + 1);
  if ( &__dst[4] != (_BYTE *)(a2 + 1) )
  {
    v7 = *((_QWORD *)a2 + 3);
    v8 = 0;
    v9 = v7 == 0;
    v10 = v7 - 1;
    if ( !v9 )
      v8 = v10;
    if ( v9 || v10 == 0 )
    {
      *(_QWORD *)&__dst[12] = 0;
    }
    else
    {
      __src = (void *)*v6;
      v11 = *(void **)&__dst[4];
      if ( *(_QWORD *)&__dst[20] <= v8 )
      {
        v11 = qvector_reserve((__int64)&__dst[4], *(void **)&__dst[4], v8 + 1, 1u);
        *(_QWORD *)&__dst[4] = v11;
      }
      *(_QWORD *)&__dst[12] = v8 + 1;
      memmove(v11, __src, v8);
      *(_BYTE *)(*(_QWORD *)&__dst[4] + v8) = 0;
      v5 = *(_QWORD *)a2;
    }
  }
  *(_QWORD *)&__dst[28] = v5;
  *(_QWORD *)&__dst[36] = *((_QWORD *)a2 + 1);
  *(_QWORD *)&__dst[44] = -1;
  if ( *(_BYTE *)(a1 + 733) == 1 )
  {
    v12 = _s1;
    v13 = _s1;
    if ( *((_QWORD *)a2 + 3) )
      v13 = *((const char **)a2 + 2);
    if ( *(_QWORD *)(a1 + 488) )
      v12 = *(const char **)(a1 + 480);
    if ( !strcasecmp(v13, v12) )
      *(_QWORD *)&__dst[44] = v5;
  }
  v14 = *(_QWORD *)(a1 + 152);
  if ( !v14 )
  {
    sub_10000A5A0(a1 + 120);
    v14 = *(_QWORD *)(a1 + 152);
  }
  v15 = *(_QWORD *)(a1 + 128);
  v16 = v14 / 0x38;
  v17 = 0;
  v18 = *(_QWORD *)(v15 + 8 * (v14 / 0x38));
  v19 = v18 + 72 * (v14 % 0x38);
  if ( *(_QWORD *)(a1 + 136) != v15 )
    v17 = v19;
  if ( v17 == v18 )
    v17 = *(_QWORD *)(v15 + 8 * v16 - 8) + 4032LL;
  *(_QWORD *)(v17 - 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v17 - 64) = -1;
  *(_BYTE *)(v17 - 56) = 0;
  *(_DWORD *)(v17 - 52) = 0;
  ((void (__fastcall *)(__int64, __int64 *))copy_debug_event)(v17 - 72, &v42);
  *(__m128i *)(a1 + 152) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_10008FE10);
  v37 = *(_QWORD *)a2;
  v38 = *a2;
  memset(v39, 0, sizeof(v39));
  v20 = *((_QWORD *)a2 + 3);
  if ( v20 )
  {
    *(_QWORD *)v39 = qalloc_or_throw(*((_QWORD *)a2 + 3));
    *(_QWORD *)&v39[16] = v20;
    memcpy(*(void **)v39, *v6, v20);
    *(_QWORD *)&v39[8] = v20;
  }
  *(_QWORD *)&v40 = 0;
  v41 = 0;
  v21 = *((_QWORD *)a2 + 6);
  if ( v21 )
  {
    *(_QWORD *)&v40 = qalloc_or_throw(*((_QWORD *)a2 + 6));
    v41 = v21;
    memcpy((void *)v40, *((const void **)a2 + 5), v21);
  }
  v22 = *(char **)(a1 + 1144);
  if ( v22 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = (char **)v22;
        v25 = *((_QWORD *)v22 + 4);
        if ( v37 >= v25 )
          break;
        v22 = *v24;
        v23 = v24;
        if ( !*v24 )
          goto LABEL_36;
      }
      if ( v37 <= v25 )
        break;
      v22 = v24[1];
      if ( !v22 )
      {
        v23 = v24 + 1;
        goto LABEL_36;
      }
    }
  }
  else
  {
    v23 = (char **)(a1 + 1144);
    v24 = (char **)(a1 + 1144);
LABEL_36:
    v26 = (char *)operator new(0x68u);
    *((_QWORD *)v26 + 4) = v37;
    *(_OWORD *)(v26 + 40) = v38;
    *((_QWORD *)v26 + 7) = *(_QWORD *)v39;
    *(_QWORD *)v39 = 0;
    *((_OWORD *)v26 + 4) = *(_OWORD *)&v39[8];
    *((_QWORD *)v26 + 10) = v40;
    *(_QWORD *)&v40 = 0;
    *((_QWORD *)v26 + 11) = v21;
    *((_QWORD *)v26 + 12) = v41;
    *(_OWORD *)v26 = 0;
    *((_QWORD *)v26 + 2) = v24;
    *v23 = v26;
    v27 = **(_QWORD **)(a1 + 1136);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 1136) = v27;
      v26 = *v23;
    }
    sub_10000C830(*(__int64 **)(a1 + 1144), (__int64 *)v26);
    ++*(_QWORD *)(a1 + 1152);
  }
  if ( (_QWORD)v40 )
    qfree((void *)v40);
  if ( *(_QWORD *)v39 )
    qfree(*(void **)v39);
  v28 = *(__int64 **)(a1 + 1168);
  v29 = *(_QWORD *)a2;
  if ( v28 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = (__int64 **)v28;
        v32 = v28[4];
        if ( v29 >= v32 )
          break;
        v28 = *v31;
        v30 = v31;
        if ( !*v31 )
          goto LABEL_50;
      }
      if ( v29 <= v32 )
        break;
      v28 = v31[1];
      if ( !v28 )
      {
        v30 = v31 + 1;
        goto LABEL_50;
      }
    }
  }
  else
  {
    v30 = (__int64 **)(a1 + 1168);
    v31 = (__int64 **)(a1 + 1168);
LABEL_50:
    v33 = (__int64 *)operator new(0x28u);
    v33[4] = v29;
    *(_OWORD *)v33 = 0;
    v33[2] = (__int64)v31;
    *v30 = v33;
    v34 = **(_QWORD **)(a1 + 1160);
    if ( v34 )
    {
      *(_QWORD *)(a1 + 1160) = v34;
      v33 = *v30;
    }
    sub_10000C830(*(__int64 **)(a1 + 1168), v33);
    ++*(_QWORD *)(a1 + 1176);
  }
  free_debug_event((__int64)&v42);
  return __stack_chk_guard;
}
// 10008FE10: using guessed type __int128 xmmword_10008FE10;
// 1000AE23D: using guessed type char under_debugger;
