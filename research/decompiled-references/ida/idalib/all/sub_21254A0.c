__int64 __fastcall sub_21254A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int8 *v13; // rsi
  unsigned __int8 *v14; // rdi
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  _BYTE *v19; // rdx
  char *v20; // rax
  __int64 v21; // r12
  __m128i si128; // xmm0
  __int64 v23; // rax
  _QWORD *v24; // rdi
  void *v25[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v26[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 120) + 64LL) )
    goto LABEL_4;
  v8 = *(unsigned __int8 **)(a2 + 56);
  v9 = *v8;
  if ( (_BYTE)v9 == 42 )
  {
    *(_BYTE *)(a2 + 147) = 0;
    v13 = v8 + 1;
    v14 = (unsigned __int8 *)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
    *(_QWORD *)(a2 + 56) = v8 + 1;
    if ( v8 + 1 == v14 )
    {
LABEL_15:
      v25[0] = v26;
      v20 = (char *)operator new(0x15u);
      v21 = *(_QWORD *)(a2 + 136);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AB460);
      strcpy(v20 + 16, "ment");
      *(_QWORD *)(a2 + 80) = v21;
      *(__m128i *)v20 = si128;
      v25[0] = v20;
      v26[0] = 20;
      v25[1] = &dword_14;
      sub_9EE8A0(a2 + 88, (__int64)v25);
      v23 = *(_QWORD *)(a2 + 56);
      v24 = v25[0];
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = v21;
      *(_DWORD *)(a1 + 32) = 64;
      *(_QWORD *)(a1 + 16) = v23 - v21;
      *(_QWORD *)(a1 + 24) = 0;
      if ( v24 != v26 )
        operator delete(v24);
    }
    else
    {
      v15 = v8 + 2;
      while ( 1 )
      {
        *(_QWORD *)(a2 + 56) = v15;
        v16 = v15;
        if ( *(v15 - 1) == 42 && *v15 == 47 )
          break;
        ++v15;
        if ( v16 == v14 )
          goto LABEL_15;
      }
      v17 = *(_QWORD *)(a2 + 168);
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64, unsigned __int8 *, unsigned __int8 *, signed __int64))(*(_QWORD *)v17 + 16LL))(
          v17,
          v13,
          v13,
          v15 - 1 - v13);
        v16 = *(unsigned __int8 **)(a2 + 56);
      }
      v18 = *(_QWORD *)(a2 + 136);
      v19 = v16 + 1;
      *(_QWORD *)(a2 + 56) = v19;
      *(_DWORD *)a1 = 7;
      *(_QWORD *)(a1 + 8) = v18;
      *(_QWORD *)(a1 + 16) = &v19[-v18];
      *(_DWORD *)(a1 + 32) = 64;
      *(_QWORD *)(a1 + 24) = 0;
    }
    return a1;
  }
  if ( (_BYTE)v9 != 47 )
  {
LABEL_4:
    v10 = *(_QWORD *)(a2 + 136);
    *(_BYTE *)(a2 + 147) = 0;
    v11 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
    *(_DWORD *)a1 = 15;
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 32) = 64;
    *(__m128i *)(a1 + 16) = v11;
    return a1;
  }
  *(_QWORD *)(a2 + 56) = v8 + 1;
  sub_2124C90(a1, a2, v9, a4, a5, a6);
  return a1;
}
