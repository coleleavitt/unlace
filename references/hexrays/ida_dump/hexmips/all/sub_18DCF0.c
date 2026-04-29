__int64 __fastcall sub_18DCF0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  unsigned __int8 *v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *v10; // r13
  __int64 v11; // r12
  unsigned int v12; // eax
  int v13; // eax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // dl
  char v17; // r15
  __int64 v18; // rsi
  char v19; // r15
  unsigned int v20; // edx
  __int64 v23; // [rsp+18h] [rbp-60h]
  unsigned __int8 v24[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD **)(a1 + 128);
  v6 = &v5[*(_QWORD *)(a1 + 136)];
  v25 = __readfsqword(0x28u);
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
        sub_37E160(51538);
      BUG();
    }
  }
LABEL_6:
  sub_18DB40((_QWORD *)(a1 + 16), a2);
  v7 = j__qalloc_or_throw(80);
  v8 = (unsigned __int8 *)(v7 + 48);
  v9 = *(_QWORD *)(a2[1] + 24);
  *(_QWORD *)(v7 + 40) = 0;
  v10 = (unsigned __int8 *)(v7 + 64);
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  sub_32B920(v7, v9);
  *(_DWORD *)v7 = 12;
  sub_120F80(v7 + 32, (unsigned __int8 *)(a1 + 192));
  sub_120F80(v7 + 48, (unsigned __int8 *)(a2[1] + 32));
  *(_DWORD *)(v7 + 68) = *(_DWORD *)(v7 + 36);
  v11 = *(_QWORD *)(*(_QWORD *)(*a2 + 480) + 112LL);
  v23 = *(_QWORD *)(*a2 + 480);
  v12 = *(_DWORD *)(v11 + 84);
  if ( *(_DWORD *)(v7 + 52) != v12 )
  {
    sub_120F80((__int64)v10, (unsigned __int8 *)(a2[1] + 64));
    v15 = *(_BYTE *)(v7 + 64);
    v16 = *(_BYTE *)(a3 + 8);
    if ( v15 == 1 )
    {
      v18 = *(int *)(v7 + 72);
    }
    else
    {
      if ( v15 != 5 )
      {
        v17 = 0;
        v18 = -1;
        if ( v16 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL);
    }
    v17 = 0;
    if ( v15 < v16 || v16 < v15 )
      goto LABEL_15;
LABEL_14:
    v17 = *(_QWORD *)a3 == v18;
LABEL_15:
    v19 = sub_118A50(v10, v23) == v17;
    sub_18DAF0(v11, v8, *(_DWORD *)(v11 + 84), v19);
    v20 = *(_DWORD *)(v11 + 84);
    if ( a4 == -1 )
    {
      sub_18DAF0(v11, v10, v20, v19);
    }
    else
    {
      *(_DWORD *)v24 = 1;
      *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      sub_120F80((__int64)v10, v24);
      sub_118BA0((__int64)v24);
    }
    goto LABEL_9;
  }
  if ( a4 != -1 )
  {
    *(_DWORD *)v24 = 1;
    *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(a4)).m128i_u64[0];
    sub_120F80((__int64)v10, v24);
    sub_118BA0((__int64)v24);
LABEL_9:
    sub_9EF60(*a2, (_QWORD *)v7, a2[1]);
    goto LABEL_10;
  }
  sub_1220E0(a2[1] + 32, (unsigned __int8 *)v7);
  if ( v7 )
  {
    sub_118BA0((__int64)v10);
    sub_118BA0((__int64)v8);
    sub_118BA0(v7 + 32);
    j__qfree(v7);
  }
LABEL_10:
  v13 = *(_DWORD *)(*a2 + 24);
  BYTE1(v13) &= ~2u;
  LOBYTE(v13) = v13 | 0x80;
  *(_DWORD *)(*a2 + 24) = v13;
  return 1;
}
