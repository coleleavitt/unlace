unsigned __int64 __fastcall sub_1947890(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 *v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // rdx
  int v20; // esi
  int v21; // r8d
  __int64 v22; // r10
  __m128 v25[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1 + 8;
  v8 = *(unsigned int *)(a1 + 24);
  v9 = *(_QWORD *)(a3 + 32);
  v10 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v8 )
  {
    v11 = (v8 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( v9 == *v12 )
    {
LABEL_3:
      sub_AEAAD0(v25, v12, (_QWORD *)(16 * v8 + v10), v6, 1);
      v14 = v25[0].m128_u64[0];
      goto LABEL_4;
    }
    v20 = 1;
    if ( v13 != -4096 )
    {
      do
      {
        v21 = v20 + 1;
        v11 = (v8 - 1) & (v20 + v11);
        v12 = (__int64 *)(v10 + 16LL * v11);
        v22 = *v12;
        if ( v9 == *v12 )
          goto LABEL_3;
        v20 = v21;
      }
      while ( v22 != -4096 );
    }
  }
  sub_AEAAD0(v25, (_QWORD *)(v10 + 16LL * (unsigned int)v8), (_QWORD *)(v10 + 16LL * (unsigned int)v8), v6, 1);
  v14 = v25[0].m128_u64[0];
LABEL_4:
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v25, v15, v15, v6, 1);
  if ( v25[0].m128_u64[0] != v14 )
    v9 = *(_QWORD *)(v14 + 8);
  if ( (*(_BYTE *)(a3 + 18) & 8) != 0 )
  {
    v16 = (__int64)sub_1946CC0((__int64 *)a1, *(_QWORD *)(a3 + 48), a5, a6);
    if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  else
  {
    v16 = (__int64)sub_1946CC0((__int64 *)a1, *(_QWORD *)(a3 + 8), a5, a6);
    if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  v18 = sub_A77C90(
          *(_QWORD *)(*(_QWORD *)a1 + 248LL),
          v16,
          v9,
          *(_WORD *)(a3 + 20) & 0x7FFF,
          *(_WORD *)(a3 + 22) & 0x7FFF,
          *(_BYTE *)(a3 + 21) >> 7);
  sub_1EA6140(a2, v18, 4, 4);
  *v19 = *a4;
  return v18;
}
