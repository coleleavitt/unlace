__int64 __fastcall sub_8F73F0(__int64 a1, unsigned int a2)
{
  unsigned int v4; // r13d
  int *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *i; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned int v27; // [rsp+8h] [rbp-40h]
  unsigned int v28; // [rsp+Ch] [rbp-3Ch]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 912LL) && !*(_BYTE *)(a1 + 8612) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v4 = *(_DWORD *)(a1 + 9464) - a2;
  sub_8F7260(a1, v4);
  sub_953720(*(_QWORD *)(a1 + 7472), a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8952) + 96LL))(*(_QWORD *)(a1 + 8952), a2);
  v5 = (int *)(*(_QWORD *)(a1 + 9480) + 20LL * v4);
  v27 = v5[4];
  if ( v4 < *(_DWORD *)(a1 + 9468) )
  {
    v22 = (unsigned int *)(*(_QWORD *)(a1 + 9488) + 12LL * v4);
    sub_8EF3E0(a1, (unsigned int ***)(a1 + 8896), *v22);
    *(_DWORD *)(a1 + 8940) = v22[1];
    if ( !v22[2] )
    {
      v24 = qword_1C7EC50;
      v25 = *(_QWORD *)(a1 + 9016);
      *(_DWORD *)(a1 + 8992) = -2;
      v26 = *(_QWORD *)(a1 + 9008);
      *(_QWORD *)(a1 + 8984) = v24;
      sub_8E4DD0(v26, v25);
      *(_QWORD *)(a1 + 9008) = 0;
    }
    v23 = *(_QWORD *)(a1 + 9488);
    if ( v23 )
      *(_DWORD *)(v23 - 4) = v4;
  }
  else
  {
    v6 = qword_1C7EC50;
    *(_DWORD *)(a1 + 8992) = -2;
    *(_QWORD *)(a1 + 8984) = v6;
  }
  sub_8EF3E0(a1, (unsigned int ***)(a1 + 8888), v5[2]);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 88LL))(*(_QWORD *)(a1 + 7488), a2);
  sub_B703D0(a1 + 8440, a2);
  sub_8E8CA0(a1, *v5);
  v7 = *(_QWORD *)(a1 + 9456);
  v28 = v5[1];
  v8 = v7 + 8LL * v28;
  if ( v7 )
    v7 += 8LL * *(unsigned int *)(v7 - 4);
  while ( v8 != v7 )
  {
    v9 = *(_QWORD *)(v7 - 8);
    v7 -= 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(_QWORD *)(a1 + 9456);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = v28;
  v11 = *(_QWORD **)(a1 + 8688);
  if ( v11 )
  {
    for ( i = &v11[*((unsigned int *)v11 - 1)]; i != v11; ++v11 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v11 + 104LL))(*v11, a2);
  }
  sub_8E8D40(a1, (__int64 *)(a1 + 8600), v5[3]);
  sub_C10080(a1 + 216, a2);
  v13 = *(_QWORD *)(a1 + 8760);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(_QWORD *)(a1 + 8768);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = *(_QWORD *)(a1 + 8776);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = *(_QWORD *)(a1 + 9024);
  if ( v16 )
    *(_DWORD *)(v16 - 4) = 0;
  v17 = 0;
  if ( a2 )
  {
    do
    {
      sub_180C2E0(a1 + 8400);
      ++v17;
    }
    while ( a2 != v17 );
  }
  v18 = *(_QWORD *)(a1 + 9480);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = v4;
  sub_982B00(*(_QWORD *)(a1 + 9000));
  *(_DWORD *)(a1 + 9464) = v4;
  if ( v4 < *(_DWORD *)(a1 + 9468) )
    *(_QWORD *)(a1 + 9468) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v4), 224).m128i_u64[0];
  v19 = *(_QWORD *)(a1 + 8560);
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4);
  else
    v20 = 0;
  sub_8F3BA0(a1, a2, v20);
  sub_8F32C0(a1, v27);
  return v20;
}

