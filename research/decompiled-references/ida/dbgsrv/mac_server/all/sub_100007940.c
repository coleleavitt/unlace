/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007940
// Address: 0x0000000100007940

//----- (0000000100007940) ----------------------------------------------------
__int64 __fastcall sub_100007940(__int64 a1, int a2)
{
  int v3; // ecx
  __int64 v4; // rcx
  size_t v5; // r14
  bool v6; // cf
  size_t v7; // rcx
  const void *v8; // r15
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+8h] [rbp-68h]
  char v17; // [rsp+10h] [rbp-60h]
  _BYTE __dst[52]; // [rsp+14h] [rbp-5Ch] BYREF

  v15 = 0xFFFFFFFFLL;
  v16 = -1;
  v17 = 0;
  memset(__dst, 0, sizeof(__dst));
  set_debug_event_code((__int64)&v15, 11);
  if ( (*(_DWORD *)__dst & 0xFFFFFFFu) > 0xB || (v3 = 2306, !_bittest(&v3, *(_DWORD *)__dst & 0xFFFFFFF)) )
  {
    if ( under_debugger != 1 )
      interr(0xCDFu);
    BUG();
  }
  LODWORD(v15) = a2;
  HIDWORD(v15) = *(_DWORD *)(*(_QWORD *)(a1 + 1208) + 32LL);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 640LL))(a1);
  v17 = 1;
  if ( &__dst[4] != (_BYTE *)(a1 + 1088) )
  {
    v4 = *(_QWORD *)(a1 + 1096);
    v5 = 0;
    v6 = v4 == 0;
    v7 = v4 - 1;
    if ( !v6 )
      v5 = v7;
    if ( v6 || v7 == 0 )
    {
      *(_QWORD *)&__dst[12] = 0;
    }
    else
    {
      v8 = *(const void **)(a1 + 1088);
      v9 = *(void **)&__dst[4];
      if ( *(_QWORD *)&__dst[20] <= v5 )
      {
        v9 = qvector_reserve((__int64)&__dst[4], *(void **)&__dst[4], v5 + 1, 1u);
        *(_QWORD *)&__dst[4] = v9;
      }
      *(_QWORD *)&__dst[12] = v5 + 1;
      memmove(v9, v8, v5);
      *(_BYTE *)(*(_QWORD *)&__dst[4] + v5) = 0;
    }
  }
  *(_OWORD *)&__dst[28] = *(_OWORD *)(a1 + 1072);
  *(_QWORD *)&__dst[44] = -1;
  v10 = *(_QWORD *)(a1 + 128);
  v11 = 0;
  if ( *(_QWORD *)(a1 + 136) != v10 )
    v11 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v10) >> 3) - 1;
  v12 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
  if ( v11 == v12 )
  {
    sub_10000AF80(a1 + 120);
    v10 = *(_QWORD *)(a1 + 128);
    v12 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
  }
  v13 = *(_QWORD *)(v10 + 8 * (v12 / 0x38)) + 72 * (v12 % 0x38);
  *(_QWORD *)v13 = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 8) = -1;
  *(_BYTE *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 20) = 0;
  ((void (__fastcall *)(unsigned __int64, __int64 *))copy_debug_event)(v13, &v15);
  ++*(_QWORD *)(a1 + 160);
  sub_1000022E0(a1);
  *(_BYTE *)(a1 + 1232) = 1;
  free_debug_event((__int64)&v15);
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
