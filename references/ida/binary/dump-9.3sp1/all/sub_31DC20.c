unsigned __int64 __fastcall sub_31DC20(__int64 a1, __int64 a2, int a3, __m128 a4)
{
  int v4; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 tinfo_size; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r14
  int v15; // r12d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // r14
  __int64 v23; // rax
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r15
  void *v27; // rax
  const void *v28; // rsi
  char v29; // [rsp+8h] [rbp-80h]
  __int64 v30[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int128 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 20);
  v33 = __readfsqword(0x28u);
  if ( !v4 )
    sub_31B3B0(a2, 0xC62Du, *(double *)a4.m128_u64);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 80 * v9;
      v11 = 80 * v9 + *(_QWORD *)(a1 + 24);
      if ( (unsigned int)verify_tinfo() )
        sub_31B3B0(a2, 0xC62Eu, *(double *)a4.m128_u64);
      tinfo_size = get_tinfo_size();
      v13 = *(int *)(v11 + 4);
      if ( v13 != tinfo_size )
        sub_31B3B0(a2, 0xC62Fu, *(double *)a4.m128_u64);
      if ( !(_DWORD)v13 )
        sub_31B3B0(a2, 0xC630u, *(double *)a4.m128_u64);
      if ( *(_QWORD *)(v11 + 16) != -1 )
      {
        sub_330F80(*(_QWORD *)(a2 + 8));
        if ( !(unsigned __int8)is_mapped() )
          sub_31B3B0(a2, 0xC77Au, *(double *)a4.m128_u64);
      }
      if ( (unsigned int)verify_argloc() )
        sub_31B3B0(a2, 0xC62Cu, *(double *)a4.m128_u64);
      sub_31CCB0((unsigned __int8 *)v11, a2, 4, a4);
      if ( !*(_BYTE *)v11 )
        sub_31B3B0(a2, 0xC631u, *(double *)a4.m128_u64);
      if ( !(unsigned __int8)sub_330760(a1, v8, *(_QWORD *)(a1 + 24) + v10 + 24, *(double *)a4.m128_u64) )
        sub_31B3B0(a2, 0xCB30u, *(double *)a4.m128_u64);
      ++v8;
      v7 = *(_QWORD *)(a1 + 32);
      v9 = (int)v8;
    }
    while ( (int)v8 < v7 );
  }
  if ( v7 < *(int *)(a1 + 8) )
    sub_31B3B0(a2, 0xC632u, *(double *)a4.m128_u64);
  if ( (unsigned int)verify_tinfo() )
    sub_31B3B0(a2, 0xC633u, *(double *)a4.m128_u64);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 176)) || *(_QWORD *)(a1 + 200) )
  {
    if ( (**(_BYTE **)(a2 + 8) & 0x40) == 0 )
      sub_31B3B0(a2, 0xC78Fu, *(double *)a4.m128_u64);
    if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 176), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 152), a1 + 192) )
    {
      sub_31B3B0(a2, 0xC72Fu, *(double *)a4.m128_u64);
    }
  }
  if ( (*(_BYTE *)(a1 + 281) & 2) != 0 )
  {
    v14 = (_QWORD *)(a1 + 96);
  }
  else
  {
    v14 = (_QWORD *)(a1 + 96);
    if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 96), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 152), a1 + 112) )
    {
      sub_31B3B0(a2, 0xC634u, *(double *)a4.m128_u64);
    }
  }
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 240), v14)
    || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 112), a1 + 256) )
  {
    sub_31B3B0(a2, 0xC635u, *(double *)a4.m128_u64);
  }
  if ( a3 == -1 )
    sub_31B3B0(a2, 0xC636u, *(double *)a4.m128_u64);
  if ( a3 && (get_tinfo_property() & 0x2F) == 0xD && a3 != get_tinfo_size() )
    sub_31B3B0(a2, 0xCE7Eu, *(double *)a4.m128_u64);
  v15 = *(_DWORD *)(a1 + 280) & 1;
  if ( !v15 )
  {
    v17 = (__int64)v14;
    sub_64000(v30, (__int64)v14);
    v22 = *(_QWORD *)(a1 + 120);
    v31 = 0;
    v32 = 0;
    if ( v22 )
    {
      v27 = (void *)qalloc_or_throw(16 * v22, v17, 16 * v22, v19);
      v28 = *(const void **)(a1 + 112);
      v31 = (__int64)v27;
      *((_QWORD *)&v32 + 1) = v22;
      memcpy(v27, v28, 16 * v22);
      *(_QWORD *)&v32 = v22;
    }
    sub_64640(v30, (__int64 *)(a1 + 240), v18, v19, v20, v21);
    sub_317C60(&v31, a1 + 256);
    if ( a3 != (unsigned int)sub_64B20((__int64)v30) )
      sub_31B3B0(a2, 0xC637u, 0.0);
    v23 = *(_QWORD *)(a1 + 56);
    v29 = 0;
    if ( v23 == 1 )
    {
      v29 = 4 * (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL) == get_tinfo_size());
      v23 = *(_QWORD *)(a1 + 56);
    }
    if ( v23 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = *(_QWORD *)(a1 + 48) + 16 * v25;
        sub_31CCB0((unsigned __int8 *)v26, a2, v29, (__m128)0LL);
        ++v24;
        v15 += *(_DWORD *)(v26 + 4);
        v25 = v24;
      }
      while ( (unsigned __int64)v24 < *(_QWORD *)(a1 + 56) );
    }
    if ( (*(_BYTE *)(a1 + 280) & 2) != 0 )
    {
      if ( a3 > v15 )
        sub_31B3B0(a2, 0xC638u, 0.0);
    }
    else if ( a3 != v15 )
    {
      sub_31B3B0(a2, 0xC639u, 0.0);
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
    qfree(v30[0]);
  }
  return v33 - __readfsqword(0x28u);
}
