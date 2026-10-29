/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027F20
// Address: 0x0000000100027F20

//----- (0000000100027F20) ----------------------------------------------------
void *__fastcall sub_100027F20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // rsi
  __int64 v4; // rax
  size_t v5; // r14
  bool v6; // cf
  size_t v7; // rax
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  int v14; // edx
  int v15; // eax
  __int64 *v16; // r15
  char *v17; // r14
  __int64 v18; // r12
  __int64 v19; // r12
  _BYTE *v20; // rax
  unsigned __int64 v21; // r13
  void *__src[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v23; // [rsp+20h] [rbp-40h]

  if ( *(_BYTE *)(a2 + 40) == 1 )
  {
    *(_OWORD *)__src = 0;
    v23 = 0;
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 )
      v3 = *(char **)a2;
    else
      v3 = (char *)_s1;
    v14 = 0;
    v6 = v2 == 0;
    v15 = v2 - 1;
    if ( !v6 )
      v14 = v15;
    if ( !utf8_utf16((__int64)__src, v3, v14) )
    {
      if ( under_debugger != 1 )
        interr(0x112u);
      BUG();
    }
    if ( __src[1] )
      v16 = (__int64 *)__src[0];
    else
      v16 = qword_10008FFB0;
    v17 = (char *)__src[1] - 1;
    if ( !__src[1] )
      v17 = nullptr;
    v18 = *(_QWORD *)(a1 + 8);
    v6 = v18 == 0;
    v19 = v18 - 1;
    if ( v6 )
      v19 = 0;
    v20 = *(_BYTE **)a1;
    v21 = v19 + 2LL * (_QWORD)v17 + 1;
    if ( *(_QWORD *)(a1 + 16) < v21 )
    {
      v20 = qvector_reserve(a1, *(void **)a1, v19 + 2LL * (_QWORD)v17 + 1, 1u);
      *(_QWORD *)a1 = v20;
    }
    *(_QWORD *)(a1 + 8) = v21;
    v20[2 * (_QWORD)v17 + v19] = 0;
    memmove((void *)(*(_QWORD *)a1 + v19), v16, 2LL * (_QWORD)v17);
    if ( __src[0] )
    {
      __src[1] = nullptr;
      qfree(__src[0]);
    }
    return (void *)__stack_chk_guard;
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = v4 == 0;
  v7 = v4 - 1;
  if ( !v6 )
    v5 = v7;
  if ( v6 || v7 == 0 )
    return (void *)__stack_chk_guard;
  v8 = *(void **)a1;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v6 = v9 == 0;
  v11 = v9 - 1;
  if ( !v6 )
    v10 = v11;
  v12 = v10 + v5 + 1;
  if ( *(_QWORD *)(a1 + 16) < v12 )
  {
    v8 = qvector_reserve(a1, v8, v10 + v5 + 1, 1u);
    *(_QWORD *)a1 = v8;
  }
  *(_QWORD *)(a1 + 8) = v12;
  *((_BYTE *)v8 + v10 + v5) = 0;
  return memcpy((void *)(*(_QWORD *)a1 + v10), *(const void **)a2, v5);
}
// 10008FFB0: using guessed type __int64 qword_10008FFB0[2];
// 1000AE23D: using guessed type char under_debugger;
