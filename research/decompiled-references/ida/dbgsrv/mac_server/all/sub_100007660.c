/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007660
// Address: 0x0000000100007660

//----- (0000000100007660) ----------------------------------------------------
__int64 __fastcall sub_100007660(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v5; // ecx
  __int64 v6; // rcx
  size_t v7; // r14
  bool v8; // cf
  size_t v9; // rcx
  const void *v10; // r15
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int64 v17; // [rsp+0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+8h] [rbp-68h]
  char v19; // [rsp+10h] [rbp-60h]
  void *__dst[6]; // [rsp+14h] [rbp-5Ch] BYREF
  int v21; // [rsp+44h] [rbp-2Ch]

  v17 = 0xFFFFFFFFLL;
  v18 = -1;
  v19 = 0;
  memset(__dst, 0, sizeof(__dst));
  v21 = 0;
  set_debug_event_code((__int64)&v17, 1);
  if ( (unsigned __int64)((__int64)__dst[0] & 0xFFFFFFF) > 0xB
    || (v5 = 2306, !_bittest(&v5, (__int64)__dst[0] & 0xFFFFFFF)) )
  {
    if ( under_debugger != 1 )
      interr(0xCDFu);
    BUG();
  }
  v17 = __PAIR64__(a3, a2);
  v18 = -1;
  v19 = 1;
  *(void **)((char *)&__dst[3] + 4) = *(void **)(a1 + 1072);
  if ( (void **)((char *)__dst + 4) != (void **)(a1 + 1088) )
  {
    v6 = *(_QWORD *)(a1 + 1096);
    v7 = 0;
    v8 = v6 == 0;
    v9 = v6 - 1;
    if ( !v8 )
      v7 = v9;
    if ( v8 || v9 == 0 )
    {
      *(void **)((char *)&__dst[1] + 4) = nullptr;
    }
    else
    {
      v10 = *(const void **)(a1 + 1088);
      v11 = *(void **)((char *)__dst + 4);
      if ( *(void **)((char *)&__dst[2] + 4) <= (void *)v7 )
      {
        v11 = qvector_reserve((__int64)__dst + 4, *(void **)((char *)__dst + 4), v7 + 1, 1u);
        *(void **)((char *)__dst + 4) = v11;
      }
      *(void **)((char *)&__dst[1] + 4) = (void *)(v7 + 1);
      memmove(v11, v10, v7);
      (*(_BYTE **)((char *)__dst + 4))[v7] = 0;
    }
  }
  *(void **)((char *)&__dst[4] + 4) = *(void **)(a1 + 1080);
  v12 = *(_QWORD *)(a1 + 128);
  v13 = 0;
  if ( *(_QWORD *)(a1 + 136) != v12 )
    v13 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v12) >> 3) - 1;
  v14 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
  if ( v13 == v14 )
  {
    sub_10000AF80(a1 + 120);
    v12 = *(_QWORD *)(a1 + 128);
    v14 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
  }
  v15 = *(_QWORD *)(v12 + 8 * (v14 / 0x38)) + 72 * (v14 % 0x38);
  *(_QWORD *)v15 = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 8) = -1;
  *(_BYTE *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 20) = 0;
  ((void (__fastcall *)(unsigned __int64, unsigned __int64 *))copy_debug_event)(v15, &v17);
  ++*(_QWORD *)(a1 + 160);
  free_debug_event((__int64)&v17);
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
