unsigned __int64 __fastcall sub_318EA0(__int64 a1, unsigned __int64 a2, int a3, __m128 a4)
{
  int v4; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 tinfo_size; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // r14
  int v17; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // r14
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // r15
  void *v28; // rax
  const void *v29; // rsi
  char v30; // [rsp+8h] [rbp-80h]
  __int64 v31[2]; // [rsp+20h] [rbp-68h] BYREF
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 20);
  v34 = __readfsqword(0x28u);
  if ( !v4 )
    sub_316630(a2, 0xC62Du, *(double *)a4.m128_u64);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 80 * v9;
      v11 = 80 * v9 + *(_QWORD *)(a1 + 24);
      if ( (unsigned int)verify_tinfo(*(_QWORD *)(v11 + 24)) )
        sub_316630(a2, 0xC62Eu, *(double *)a4.m128_u64);
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v11 + 24), 0);
      v13 = *(int *)(v11 + 4);
      v14 = v13;
      if ( v13 != tinfo_size )
        sub_316630(a2, 0xC62Fu, *(double *)a4.m128_u64);
      if ( !(_DWORD)v13 )
        sub_316630(a2, 0xC630u, *(double *)a4.m128_u64);
      if ( *(_QWORD *)(v11 + 16) != -1 )
      {
        v15 = sub_32BF20(*(_QWORD *)(a2 + 8), *(_QWORD *)(v11 + 16));
        if ( !(unsigned __int8)is_mapped(v15) )
          sub_316630(a2, 0xC77Au, *(double *)a4.m128_u64);
        v14 = *(unsigned int *)(v11 + 4);
      }
      if ( (unsigned int)verify_argloc(v11 + 56, v14, 0) )
        sub_316630(a2, 0xC62Cu, *(double *)a4.m128_u64);
      sub_317F30((unsigned __int8 *)v11, a2, 4, a4);
      if ( !*(_BYTE *)v11 )
        sub_316630(a2, 0xC631u, *(double *)a4.m128_u64);
      if ( !(unsigned __int8)sub_32B710(a1, v8, *(_QWORD *)(a1 + 24) + v10 + 24, *(double *)a4.m128_u64) )
        sub_316630(a2, 0xCB30u, *(double *)a4.m128_u64);
      ++v8;
      v7 = *(_QWORD *)(a1 + 32);
      v9 = (int)v8;
    }
    while ( (int)v8 < v7 );
  }
  if ( v7 < *(int *)(a1 + 8) )
    sub_316630(a2, 0xC632u, *(double *)a4.m128_u64);
  if ( (unsigned int)verify_tinfo(*(_QWORD *)(a1 + 72)) )
    sub_316630(a2, 0xC633u, *(double *)a4.m128_u64);
  if ( !(unsigned __int8)sub_60680((_QWORD *)(a1 + 176)) || *(_QWORD *)(a1 + 200) )
  {
    if ( (**(_BYTE **)(a2 + 8) & 0x40) == 0 )
      sub_316630(a2, 0xC78Fu, *(double *)a4.m128_u64);
    if ( !(unsigned __int8)sub_60620((_QWORD *)(a1 + 176), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_3131C0((__int64 *)(a1 + 152), a1 + 192) )
    {
      sub_316630(a2, 0xC72Fu, *(double *)a4.m128_u64);
    }
  }
  if ( (*(_BYTE *)(a1 + 281) & 2) != 0 )
  {
    v16 = (_QWORD *)(a1 + 96);
  }
  else
  {
    v16 = (_QWORD *)(a1 + 96);
    if ( !(unsigned __int8)sub_60620((_QWORD *)(a1 + 96), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_3131C0((__int64 *)(a1 + 152), a1 + 112) )
    {
      sub_316630(a2, 0xC634u, *(double *)a4.m128_u64);
    }
  }
  if ( !(unsigned __int8)sub_60620((_QWORD *)(a1 + 240), v16)
    || !(unsigned __int8)sub_3131C0((__int64 *)(a1 + 112), a1 + 256) )
  {
    sub_316630(a2, 0xC635u, *(double *)a4.m128_u64);
  }
  if ( a3 == -1 )
    sub_316630(a2, 0xC636u, *(double *)a4.m128_u64);
  if ( a3
    && (get_tinfo_property(*(_QWORD *)(a1 + 72), 2) & 0x2F) == 0xD
    && a3 != get_tinfo_size(0, *(_QWORD *)(a1 + 72), 0) )
  {
    sub_316630(a2, 0xCE7Eu, *(double *)a4.m128_u64);
  }
  v17 = *(_DWORD *)(a1 + 280) & 1;
  if ( !v17 )
  {
    sub_5FE00(v31, (__int64)v16);
    v23 = *(_QWORD *)(a1 + 120);
    v32 = nullptr;
    v33 = 0;
    if ( v23 )
    {
      v28 = (void *)qalloc_or_throw(16 * v23);
      v29 = *(const void **)(a1 + 112);
      v32 = v28;
      *((_QWORD *)&v33 + 1) = v23;
      memcpy(v28, v29, 16 * v23);
      *(_QWORD *)&v33 = v23;
    }
    sub_60440(v31, (__int64 *)(a1 + 240), v19, v20, v21, v22);
    sub_312EE0((__int64 *)&v32, a1 + 256);
    if ( a3 != (unsigned int)sub_60920((__int64)v31) )
      sub_316630(a2, 0xC637u, 0.0);
    v24 = *(_QWORD *)(a1 + 56);
    v30 = 0;
    if ( v24 == 1 )
    {
      v30 = 4 * (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL) == get_tinfo_size(0, *(_QWORD *)(a1 + 72), 0));
      v24 = *(_QWORD *)(a1 + 56);
    }
    if ( v24 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = *(_QWORD *)(a1 + 48) + 16 * v26;
        sub_317F30((unsigned __int8 *)v27, a2, v30, (__m128)0LL);
        ++v25;
        v17 += *(_DWORD *)(v27 + 4);
        v26 = v25;
      }
      while ( (unsigned __int64)v25 < *(_QWORD *)(a1 + 56) );
    }
    if ( (*(_BYTE *)(a1 + 280) & 2) != 0 )
    {
      if ( a3 > v17 )
        sub_316630(a2, 0xC638u, 0.0);
    }
    else if ( a3 != v17 )
    {
      sub_316630(a2, 0xC639u, 0.0);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    qfree(v31[0]);
  }
  return v34 - __readfsqword(0x28u);
}
