/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026210
// Address: 0x0000000100026210

//----- (0000000100026210) ----------------------------------------------------
__int64 __fastcall sub_100026210(__int64 a1, const char *a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  size_t v6; // rax
  size_t v7; // r12
  __int64 v8; // r13
  void *v9; // rdi
  const char *v10; // rdi
  int v11; // eax
  char v12; // cl
  char v13; // r12
  unsigned __int64 v14; // r14
  size_t v15; // r12
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // r13d
  unsigned __int64 v20; // r12
  const char *v21; // rdi
  __int64 v22; // rax
  __int64 *v24; // [rsp+8h] [rbp-68h]
  __int64 v25; // [rsp+10h] [rbp-60h]
  __m256i __src; // [rsp+20h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a1 + 120) )
  {
    memset(&__src, 0, 24);
    sub_10002E340(a1 + 112, 0, (unsigned __int64)&__src);
    if ( __src.i64[0] )
    {
      __src.i64[1] = 0;
      qfree((void *)__src.i64[0]);
    }
  }
  LODWORD(v4) = a1 + 136;
  if ( *(_QWORD *)(a1 + 144) )
  {
    memset(&__src, 0, 24);
    sub_10002E340(a1 + 136, 0, (unsigned __int64)&__src);
    if ( __src.i64[0] )
    {
      __src.i64[1] = 0;
      qfree((void *)__src.i64[0]);
    }
  }
  if ( *(_QWORD *)(a1 + 168) )
  {
    memset(&__src, 0, 24);
    sub_10002E340(a1 + 160, 0, (unsigned __int64)&__src);
    if ( __src.i64[0] )
    {
      __src.i64[1] = 0;
      qfree((void *)__src.i64[0]);
    }
  }
  if ( *(_QWORD *)(a1 + 432) )
  {
    __src.i8[0] = 2;
    memset(&__src.u32[2], 0, 24);
    sub_10002E5F0(a1 + 424, 0, (unsigned __int8 *)&__src);
    free_idcv((unsigned __int8 *)&__src);
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
    __src.i32[0] = 0;
    sub_10001DB00(a1 + 224, 0, (unsigned int *)&__src);
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    __src.i32[0] = 0;
    sub_10001DB00(a1 + 248, 0, (unsigned int *)&__src);
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    __src.i32[0] = 0;
    sub_10001DB00(a1 + 272, 0, (unsigned int *)&__src);
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    __src.i32[0] = 0;
    sub_10001DB00(a1 + 296, 0, (unsigned int *)&__src);
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    __src.i16[0] = 0;
    sub_10001DC80(a1 + 320, 0, (unsigned __int16 *)&__src);
  }
  if ( *(_QWORD *)(a1 + 352) )
  {
    __src.i64[0] = 0;
    sub_10002E7D0(a1 + 344, 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    __src.i128[0] = 0;
    sub_10002E950(a1 + 368, 0, &__src);
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    __src.i128[0] = 0;
    sub_10002E950(a1 + 392, 0, &__src);
  }
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  v5 = *(_QWORD *)(a1 + 184);
  if ( !v5 )
  {
    v2 = sub_100033AD0(*(_QWORD *)(a1 + 104), a2);
LABEL_67:
    if ( v2 == -1 )
    {
      set_error_string(0, a2);
      LODWORD(v4) = set_qerrno();
    }
    else
    {
      v22 = *(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v2);
      *(_QWORD *)(a1 + 192) = v22;
      *(_QWORD *)(a1 + 200) = v22 + 32;
      *(_DWORD *)(a1 + 208) = 0;
      *(_BYTE *)(a1 + 212) = -90;
      LODWORD(v4) = 0;
      if ( *(_DWORD *)(v22 + 136) != -1 )
      {
        if ( under_debugger != 1 )
          interr(0x1E4u);
        BUG();
      }
    }
    return (unsigned int)v4;
  }
  memset(&__src, 0, 24);
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6;
    v8 = v6 + 1;
    if ( v6 == -1 )
    {
      v9 = nullptr;
    }
    else
    {
      v9 = qvector_reserve((__int64)&__src, nullptr, v6 + 1, 1u);
      __src.i64[0] = (__int64)v9;
    }
    __src.i64[1] = v8;
    memmove(v9, a2, v7);
    *(_BYTE *)(__src.i64[0] + v7) = 0;
    v5 = *(_QWORD *)(a1 + 184);
  }
  if ( *(_QWORD *)(v5 + 40) )
    v10 = *(const char **)(v5 + 32);
  else
    v10 = _s1;
  v11 = strcmp(v10, a2);
  v12 = *(_BYTE *)(a1 + 220);
  if ( v11 )
  {
    if ( v12 )
    {
      LODWORD(v4) = set_qerrno();
      v13 = 0;
      goto LABEL_64;
    }
  }
  else if ( v12 )
  {
    v14 = __src.u64[1];
    v15 = 0;
    if ( __src.i64[1] )
      v15 = __src.i64[1] - 1;
    v16 = (_BYTE *)__src.i64[0];
    if ( __src.i64[2] < v15 + 2 )
    {
      v16 = qvector_reserve((__int64)&__src, (void *)__src.i64[0], v15 + 2, 1u);
      __src.i64[0] = (__int64)v16;
    }
    __src.i64[1] = v15 + 2;
    v16[v15 + 1] = 0;
    if ( v14 >= 2 )
      memmove((void *)(__src.i64[0] + 1), (const void *)__src.i64[0], v15);
    *(_BYTE *)__src.i64[0] = 126;
    *(_DWORD *)(a1 + 216) = 2;
    v5 = *(_QWORD *)(a1 + 184);
  }
  else
  {
    *(_DWORD *)(a1 + 216) = 1;
  }
  v17 = sub_1000344A0(v5, *(_QWORD **)(a1 + 104), (__int64)&__src);
  v13 = 1;
  if ( v17 == -1 )
  {
    v2 = -1;
  }
  else
  {
    v24 = (__int64 *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 216) == 2 )
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 64LL) = v17;
    v25 = v17;
    v4 = *(_QWORD *)(a1 + 144);
    if ( !v4 )
      goto LABEL_63;
    v18 = *v24;
    v19 = 1;
    v20 = 0;
    while ( 1 )
    {
      v21 = _s1;
      if ( *(_QWORD *)(v18 + 24 * v20 + 8) )
        v21 = *(const char **)(v18 + 24 * v20);
      if ( !strcmp(v21, "this") )
        break;
      v20 = v19++;
      if ( v4 <= v20 )
        goto LABEL_63;
    }
    if ( v20 == -1 )
    {
LABEL_63:
      sub_10002B270((__int64)v24, "this");
      v2 = v25;
      v13 = 1;
    }
    else
    {
      v2 = v25;
      v13 = 1;
    }
  }
LABEL_64:
  if ( __src.i64[0] )
  {
    __src.i64[1] = 0;
    qfree((void *)__src.i64[0]);
  }
  if ( v13 )
    goto LABEL_67;
  return (unsigned int)v4;
}
// 100026687: variable 'v2' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
