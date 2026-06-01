/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006EC4
// Address: 0x0000000100006EC4

//----- (0000000100006EC4) ----------------------------------------------------
void __fastcall sub_100006EC4(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v7; // x9
  size_t v8; // x20
  const void *v9; // x21
  void *v10; // x1
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x10
  unsigned __int64 v14; // x9
  __int64 v15; // x0
  unsigned __int64 v16; // [xsp+0h] [xbp-70h] BYREF
  __int64 v17; // [xsp+8h] [xbp-68h]
  char v18; // [xsp+10h] [xbp-60h]
  void *__dst[6]; // [xsp+14h] [xbp-5Ch] BYREF
  int v20; // [xsp+44h] [xbp-2Ch]

  v16 = 0xFFFFFFFFLL;
  v17 = -1;
  v18 = 0;
  memset(__dst, 0, sizeof(__dst));
  v20 = 0;
  set_debug_event_code((__int64)&v16, 1);
  if ( (unsigned __int64)((__int64)__dst[0] & 0xFFFFFFF) > 0xB || ((1 << SLOBYTE(__dst[0])) & 0x902) == 0 )
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
  v16 = __PAIR64__(a3, a2);
  v17 = -1;
  v18 = 1;
  *(void **)((char *)&__dst[3] + 4) = *(void **)(a1 + 1768);
  if ( (void **)((char *)__dst + 4) != (void **)(a1 + 1784) )
  {
    v7 = *(_QWORD *)(a1 + 1792);
    if ( v7 )
      v8 = v7 - 1;
    else
      v8 = 0;
    if ( v7 >= 2 )
    {
      v9 = *(const void **)(a1 + 1784);
      v10 = *(void **)((char *)__dst + 4);
      if ( *(void **)((char *)&__dst[2] + 4) <= (void *)v8 )
      {
        v10 = qvector_reserve((void **)((char *)__dst + 4), *(_QWORD **)((char *)__dst + 4), v8 + 1, 1u);
        *(void **)((char *)__dst + 4) = v10;
      }
      *(void **)((char *)&__dst[1] + 4) = (void *)(v8 + 1);
      memmove(v10, v9, v8);
      (*(_BYTE **)((char *)__dst + 4))[v8] = 0;
    }
    else
    {
      *(void **)((char *)&__dst[1] + 4) = nullptr;
    }
  }
  v11 = *(_QWORD *)(a1 + 136);
  v12 = *(_QWORD *)(a1 + 128);
  v13 = 56 * ((unsigned __int64)(v11 - v12) >> 3) - 1;
  *(void **)((char *)&__dst[4] + 4) = *(void **)(a1 + 1776);
  if ( v11 == v12 )
    v13 = 0;
  v14 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
  if ( v13 == v14 )
  {
    sub_10000A578(a1 + 120);
    v12 = *(_QWORD *)(a1 + 128);
    v14 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
  }
  v15 = *(_QWORD *)(v12 + 8 * (v14 / 0x38)) + 72 * (v14 % 0x38);
  *(_QWORD *)v15 = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 8) = -1;
  *(_BYTE *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 20) = 0;
  copy_debug_event(v15, (__int64)&v16);
  ++*(_QWORD *)(a1 + 160);
  free_debug_event((__int64)&v16);
}
// 1000A590D: using guessed type char under_debugger;
