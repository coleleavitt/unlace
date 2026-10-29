/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006C98
// Address: 0x0000000100006C98

//----- (0000000100006C98) ----------------------------------------------------
void __fastcall sub_100006C98(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // x9
  size_t v6; // x20
  const void *v7; // x21
  void *v8; // x1
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x10
  unsigned __int64 v12; // x9
  __int64 v13; // x0
  unsigned __int64 v14; // [xsp+0h] [xbp-70h] BYREF
  __int64 v15; // [xsp+8h] [xbp-68h]
  char v16; // [xsp+10h] [xbp-60h]
  _BYTE __dst[52]; // [xsp+14h] [xbp-5Ch] BYREF

  v14 = 0xFFFFFFFFLL;
  v15 = -1;
  v16 = 0;
  memset(__dst, 0, sizeof(__dst));
  set_debug_event_code((__int64)&v14, 11);
  if ( (*(_DWORD *)__dst & 0xFFFFFFFu) > 0xB || ((1 << __dst[0]) & 0x902) == 0 )
  {
    if ( under_debugger != 1 )
      goto LABEL_21;
    while ( 1 )
    {
      __break(1u);
LABEL_21:
      interr(3295);
    }
  }
  v14 = __PAIR64__(*(_DWORD *)(*(_QWORD *)(a1 + 1904) + 32LL), a2);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 672LL))(a1);
  v16 = 1;
  if ( &__dst[4] != (_BYTE *)(a1 + 1784) )
  {
    v5 = *(_QWORD *)(a1 + 1792);
    if ( v5 )
      v6 = v5 - 1;
    else
      v6 = 0;
    if ( v5 >= 2 )
    {
      v7 = *(const void **)(a1 + 1784);
      v8 = *(void **)&__dst[4];
      if ( *(_QWORD *)&__dst[20] <= v6 )
      {
        v8 = qvector_reserve(&__dst[4], *(_QWORD **)&__dst[4], v6 + 1, 1u);
        *(_QWORD *)&__dst[4] = v8;
      }
      *(_QWORD *)&__dst[12] = v6 + 1;
      memmove(v8, v7, v6);
      *(_BYTE *)(*(_QWORD *)&__dst[4] + v6) = 0;
    }
    else
    {
      *(_QWORD *)&__dst[12] = 0;
    }
  }
  v9 = *(_QWORD *)(a1 + 136);
  v10 = *(_QWORD *)(a1 + 128);
  v11 = 56 * ((unsigned __int64)(v9 - v10) >> 3) - 1;
  *(_OWORD *)&__dst[28] = *(_OWORD *)(a1 + 1768);
  *(_QWORD *)&__dst[44] = -1;
  if ( v9 == v10 )
    v11 = 0;
  v12 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
  if ( v11 == v12 )
  {
    sub_100009D70(a1 + 120);
    v10 = *(_QWORD *)(a1 + 128);
    v12 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
  }
  v13 = *(_QWORD *)(v10 + 8 * (v12 / 0x38)) + 72 * (v12 % 0x38);
  *(_QWORD *)v13 = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 8) = -1;
  *(_BYTE *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 20) = 0;
  copy_debug_event(v13, (__int64)&v14);
  ++*(_QWORD *)(a1 + 160);
  sub_100001EE8(a1);
  *(_BYTE *)(a1 + 1928) = 1;
  free_debug_event((__int64)&v14);
}
// 10009D90D: using guessed type char under_debugger;
