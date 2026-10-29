__int64 __fastcall sub_56BD80(__int64 a1)
{
  char **exception; // rbx
  __m128i *v3; // rdi
  unsigned __int64 v4; // r12
  int v5; // r10d
  char *v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  char *v9; // rax
  char *v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  __m128i *v20; // rax
  __m128i si128; // xmm0
  unsigned int v22; // esi
  __int64 v23[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_5692F0(a1);
  v3 = *(__m128i **)(a1 + 88);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v3 )
  {
    v4 = v3[-1].m128i_u64[1];
    if ( v4 > 7 )
    {
      v5 = *(_DWORD *)(a1 + 140);
      v3[-1].m128i_i64[1] = 8;
      if ( v5 )
        goto LABEL_4;
      goto LABEL_27;
    }
  }
  else
  {
    v4 = 0;
    v20 = (__m128i *)sub_186B270(0x12u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
    v3 = v20 + 1;
    *(_QWORD *)(a1 + 88) = v20 + 1;
    *v20 = si128;
  }
  while ( 1 )
  {
    v19 = v3[-1].m128i_u64[0];
    if ( v19 > 7 )
      break;
    v17 = (3 * v19 + 1) >> 1;
    if ( v19 + 16 >= v17 + 16 || v19 >= v17 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v23, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v23);
      sub_233E40((__int64)v23);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v18 = (unsigned __int64 *)sub_186B300(&v3[-1], v17 + 16);
    v3 = (__m128i *)(v18 + 2);
    *v18 = v17;
    *(_QWORD *)(a1 + 88) = v18 + 2;
  }
  v3[-1].m128i_i64[1] = 8;
  memset(&v3->m128i_i8[v4], 0, 8 - v4);
  if ( *(_DWORD *)(a1 + 140) )
    goto LABEL_4;
LABEL_27:
  if ( !*(_DWORD *)(a1 + 144) )
    goto LABEL_21;
LABEL_4:
  v6 = *(char **)(a1 + 128);
  v7 = 0;
  v8 = *(unsigned int *)(a1 + 136);
  v9 = v6;
  v10 = &v6[16 * v8];
  if ( v6 == v10 )
    goto LABEL_20;
  do
  {
    while ( *((_DWORD *)v9 + 1) )
    {
      *((_DWORD *)v9 + 1) = 0;
      v9 += 16;
      if ( v10 == v9 )
        goto LABEL_9;
    }
    v9 += 16;
    ++v7;
  }
  while ( v10 != v9 );
LABEL_9:
  if ( (unsigned int)v8 <= 0x10 || 3 * (int)v8 >= (unsigned int)(4 * v7) )
    goto LABEL_20;
  if ( !v6 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    v22 = (unsigned int)v8 >> 1;
    *(_DWORD *)(a1 + 136) = v22;
    v12 = v22;
    v13 = sub_186B270(16LL * v22);
    goto LABEL_14;
  }
  sub_186B220(v6);
  v11 = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 128) = 0;
  v12 = v11 >> 1;
  *(_DWORD *)(a1 + 136) = v12;
  v13 = sub_186B270(16LL * v12);
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v15 = (_QWORD *)v13;
LABEL_18:
      *v15 = 0;
      goto LABEL_19;
    }
LABEL_14:
    v14 = (_QWORD *)v13;
    do
    {
      *v14 = 0;
      v14 += 4;
      *(v14 - 2) = 0;
    }
    while ( (_QWORD *)(v13 + 32LL * (v12 >> 1)) != v14 );
    if ( (v12 & 1) == 0 )
      goto LABEL_19;
    v15 = (_QWORD *)(v13 + 16LL * (v12 & 0x7FFFFFFE));
    goto LABEL_18;
  }
LABEL_19:
  *(_QWORD *)(a1 + 128) = v13;
LABEL_20:
  *(_QWORD *)(a1 + 140) = 0;
LABEL_21:
  *(_QWORD *)(a1 + 152) = 0xFFFFFFFFLL;
  return 0xFFFFFFFFLL;
}

