/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F2B0
// Address: 0x000000010005F2B0

//----- (000000010005F2B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005F2B0(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  void *v7; // rdi
  void *v8; // rdi
  __int128 v10; // xmm0
  size_t v11; // r12
  size_t v12; // r12
  __int64 v14; // [rsp+0h] [rbp-1E0h] BYREF
  __int128 v15; // [rsp+8h] [rbp-1D8h]
  size_t v16; // [rsp+18h] [rbp-1C8h]
  int v17; // [rsp+20h] [rbp-1C0h]
  __int128 v18; // [rsp+28h] [rbp-1B8h]
  size_t v19; // [rsp+38h] [rbp-1A8h]
  _BYTE __dst[368]; // [rsp+40h] [rbp-1A0h] BYREF

  v4 = a1[1];
  if ( v4 > a2 )
  {
    v5 = (432 * a2) | 8;
    do
    {
      v6 = *a1;
      v7 = *(void **)(*a1 + v5 + 32);
      if ( v7 )
      {
        *(_QWORD *)(v6 + v5 + 40) = 0;
        qfree(v7);
        *(_QWORD *)(v6 + v5 + 32) = 0;
        *(_QWORD *)(v6 + v5 + 48) = 0;
      }
      v8 = *(void **)(v6 + v5);
      if ( v8 )
      {
        *(_QWORD *)(v6 + v5 + 8) = 0;
        qfree(v8);
        *(_QWORD *)(v6 + v5) = 0;
        *(_QWORD *)(v6 + v5 + 16) = 0;
      }
      --v4;
      v5 += 432;
    }
    while ( a2 != v4 );
    a1[1] = a2;
    return __stack_chk_guard;
  }
  if ( v4 >= a2 )
    return __stack_chk_guard;
  if ( *a1 <= a3 && 432 * a1[2] + *a1 > a3 )
  {
    v14 = *(_QWORD *)a3;
    v10 = 0;
    v15 = 0;
    v16 = 0;
    v11 = *(_QWORD *)(a3 + 16);
    if ( v11 )
    {
      *(_QWORD *)&v15 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
      v16 = v11;
      memcpy((void *)v15, *(const void **)(a3 + 8), v11);
      v10 = 0;
      *((_QWORD *)&v15 + 1) = v11;
    }
    v17 = *(_DWORD *)(a3 + 32);
    v18 = v10;
    v19 = 0;
    v12 = *(_QWORD *)(a3 + 48);
    if ( v12 )
    {
      *(_QWORD *)&v18 = qalloc_or_throw(*(_QWORD *)(a3 + 48));
      v19 = v12;
      memcpy((void *)v18, *(const void **)(a3 + 40), v12);
      *((_QWORD *)&v18 + 1) = v12;
    }
    memcpy(__dst, (const void *)(a3 + 64), sizeof(__dst));
    sub_10005F550((__int64)a1, a2, (__int64)&v14);
    if ( (_QWORD)v18 )
    {
      *((_QWORD *)&v18 + 1) = 0;
      qfree((void *)v18);
      *(_QWORD *)&v18 = 0;
      v19 = 0;
    }
    if ( (_QWORD)v15 )
    {
      *((_QWORD *)&v15 + 1) = 0;
      qfree((void *)v15);
    }
    return __stack_chk_guard;
  }
  return sub_10005F550((__int64)a1, a2, a3);
}
