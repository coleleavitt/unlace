__int64 __fastcall sub_191EF0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 *v10; // r14
  __int64 v11; // rsi
  unsigned __int8 *v12; // r13
  __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  char v19; // r15
  __int64 v20; // rsi
  char v21; // r15
  __int64 v22; // rdx
  __int64 v25; // [rsp+18h] [rbp-60h]
  unsigned __int8 v26[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD **)(a1 + 128);
  v6 = &v5[*(_QWORD *)(a1 + 136)];
  v27 = __readfsqword(0x28u);
  if ( v5 != v6 )
  {
    while ( a2[1] != *v5 )
    {
      if ( v6 == ++v5 )
        goto LABEL_6;
    }
    if ( v6 != v5 )
    {
      if ( !under_debugger )
        sub_383060(51538);
      BUG();
    }
  }
LABEL_6:
  sub_191D40((_QWORD *)(a1 + 16), a2);
  v9 = j__qalloc_or_throw(80, (__int64)a2, v7, v8);
  v10 = (unsigned __int8 *)(v9 + 48);
  v11 = *(_QWORD *)(a2[1] + 24);
  *(_QWORD *)(v9 + 40) = 0;
  v12 = (unsigned __int8 *)(v9 + 64);
  *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 72) = 0;
  sub_330970(v9, v11);
  *(_DWORD *)v9 = 12;
  sub_125180(v9 + 32, (unsigned __int8 *)(a1 + 192));
  sub_125180(v9 + 48, (unsigned __int8 *)(a2[1] + 32));
  *(_DWORD *)(v9 + 68) = *(_DWORD *)(v9 + 36);
  v13 = *(_QWORD *)(*(_QWORD *)(*a2 + 480) + 112LL);
  v25 = *(_QWORD *)(*a2 + 480);
  v14 = *(_DWORD *)(v13 + 84);
  if ( *(_DWORD *)(v9 + 52) != v14 )
  {
    sub_125180((__int64)v12, (unsigned __int8 *)(a2[1] + 64));
    v17 = *(_BYTE *)(v9 + 64);
    v18 = *(_BYTE *)(a3 + 8);
    if ( v17 == 1 )
    {
      v20 = *(int *)(v9 + 72);
    }
    else
    {
      if ( v17 != 5 )
      {
        v19 = 0;
        v20 = -1;
        if ( v18 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v20 = *(_QWORD *)(*(_QWORD *)(v9 + 72) + 8LL);
    }
    v19 = 0;
    if ( v17 < v18 || v18 < v17 )
      goto LABEL_15;
LABEL_14:
    v19 = *(_QWORD *)a3 == v20;
LABEL_15:
    v21 = sub_11CC50(v12, v25) == v19;
    sub_191CF0(v13, v10, *(unsigned int *)(v13 + 84), v21);
    v22 = *(unsigned int *)(v13 + 84);
    if ( a4 == -1 )
    {
      sub_191CF0(v13, v12, v22, v21);
    }
    else
    {
      *(_DWORD *)v26 = 1;
      *(_QWORD *)&v26[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      sub_125180((__int64)v12, v26);
      sub_11CDA0((__int64)v26);
    }
    goto LABEL_9;
  }
  if ( a4 != -1 )
  {
    *(_DWORD *)v26 = 1;
    *(_QWORD *)&v26[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(a4)).m128i_u64[0];
    sub_125180((__int64)v12, v26);
    sub_11CDA0((__int64)v26);
LABEL_9:
    sub_A3160(*a2, (_QWORD *)v9, a2[1]);
    goto LABEL_10;
  }
  sub_1262E0(a2[1] + 32, (unsigned __int8 *)v9);
  if ( v9 )
  {
    sub_11CDA0((__int64)v12);
    sub_11CDA0((__int64)v10);
    sub_11CDA0(v9 + 32);
    j__qfree(v9);
  }
LABEL_10:
  v15 = *(_DWORD *)(*a2 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(*a2 + 24) = v15;
  return 1;
}
