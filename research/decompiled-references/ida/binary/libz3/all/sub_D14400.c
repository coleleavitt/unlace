__int64 __fastcall sub_D14400(__int64 a1, _QWORD *a2, __int64 a3)
{
  _OWORD *v4; // rbp
  _OWORD *v5; // rax
  __int64 *v6; // rcx
  void *v7; // r12
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rbx
  __int64 v11; // r14
  _DWORD *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // esi
  _DWORD **v16; // rdx
  __int64 v17; // rbx
  std::ostream *v18; // rdi
  __int64 *v19; // r14
  unsigned int v20; // edx
  unsigned int v21; // ebx
  __int64 v22; // r13
  void *v23; // rdi
  __int64 v25; // rbx
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 i; // rax
  __int64 v30; // [rsp+0h] [rbp-D8h]
  __int64 *v32; // [rsp+18h] [rbp-C0h]
  _BYTE v33[8]; // [rsp+28h] [rbp-B0h] BYREF
  int v34; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-98h]
  int v37[4]; // [rsp+50h] [rbp-88h] BYREF
  int v38[2]; // [rsp+60h] [rbp-78h]
  __int64 v39; // [rsp+68h] [rbp-70h]
  int v40; // [rsp+70h] [rbp-68h]
  void *v41; // [rsp+78h] [rbp-60h]
  __int64 v42; // [rsp+80h] [rbp-58h]
  int v43; // [rsp+88h] [rbp-50h]
  int v44; // [rsp+90h] [rbp-48h]

  sub_EE4940(v33, "collect-statistics", *a2);
  *(__m128i *)v37 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)(a1 + 16), (__m128i)(unsigned __int64)(a1 + 3064));
  v4 = (_OWORD *)sub_186B270(0x40u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v39 = 8;
  v40 = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  v6 = (__int64 *)*a2;
  v42 = 8;
  v7 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v8 = v6[9];
  v43 = 0;
  v44 = 0;
  v35 = 0;
  ptr = nullptr;
  if ( !v8 )
    goto LABEL_20;
  v9 = *(_BYTE *)(v8 + 3) >> 6;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
LABEL_4:
      if ( v9 == 2 )
        v10 = (unsigned int)(*(_DWORD *)(v8 + 4) - 1);
      else
        v10 = *(unsigned int *)(v8 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v8 = *(_QWORD *)(v8 + 16);
      v9 = *(_BYTE *)(v8 + 3) >> 6;
    }
    while ( !v9 );
    if ( v9 != 1 )
      goto LABEL_4;
  }
  v10 = (unsigned int)(*(_DWORD *)(v8 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v10 )
    goto LABEL_20;
  v11 = 0;
  while ( 2 )
  {
    v13 = *v6;
    if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
    {
      v12 = *(_DWORD **)(v13 + 864);
      goto LABEL_9;
    }
    v14 = v6[9];
    v15 = 17;
    while ( 1 )
    {
      if ( *(char *)(v14 + 3) < 0 )
      {
        if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
        {
          v16 = (_DWORD **)(*(_QWORD *)(v14 + 16) + 8 * v11);
          goto LABEL_16;
        }
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v14 + 4) == (_DWORD)v11 )
        break;
LABEL_18:
      v14 = *(_QWORD *)(v14 + 16);
      if ( !--v15 )
      {
        v32 = v6;
        sub_233F80((__int64 *)(v13 + 616), (_DWORD *)v6 + 18);
        v16 = (_DWORD **)(*(_QWORD *)(v32[9] + 16) + 8 * v11);
        goto LABEL_16;
      }
    }
    v16 = (_DWORD **)(v14 + 8);
LABEL_16:
    v12 = *v16;
LABEL_9:
    *(_QWORD *)v38 = v4;
    v41 = v7;
    sub_D13AA0((size_t)v37, (__int64)&v34, v12);
    ++v11;
    v4 = *(_OWORD **)v38;
    v7 = v41;
    if ( v10 != v11 )
    {
      v6 = (__int64 *)*a2;
      continue;
    }
    break;
  }
LABEL_20:
  std::__ostream_insert<char,std::char_traits<char>>();
  v17 = *(_QWORD *)(a1 + 3088);
  v30 = a1 + 3072;
  if ( v30 != v17 )
  {
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v18 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
      if ( *(_QWORD *)((char *)v18 + *(_QWORD *)(*(_QWORD *)v18 - 24LL) + 16) )
        std::__ostream_insert<char,std::char_traits<char>>();
      else
        std::ostream::put(v18, 10);
    }
    while ( v30 != std::_Rb_tree_increment() );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v19 = (__int64 *)*a2;
  if ( *a2 )
    ++*((_DWORD *)v19 + 8);
  v20 = *(_DWORD *)(a3 + 8);
  v21 = *(_DWORD *)(a3 + 12);
  if ( v20 >= v21 )
  {
    v25 = 2 * v21;
    v22 = sub_186B270(8 * v25);
    v20 = *(_DWORD *)(a3 + 8);
    v26 = *(_QWORD **)a3;
    if ( v20 )
    {
      if ( v20 - 1 <= 2 || (_QWORD *)v22 == v26 + 1 )
      {
        for ( i = 0; i != v20; ++i )
          *(_QWORD *)(v22 + i * 8) = v26[i];
      }
      else
      {
        v27 = 0;
        do
        {
          *(__m128i *)(v22 + v27 * 8) = _mm_loadu_si128((const __m128i *)&v26[v27]);
          v27 += 2;
        }
        while ( 2LL * (v20 >> 1) != v27 );
        if ( (v20 & 1) != 0 )
          *(_QWORD *)(v22 + 8LL * (v20 & 0xFFFFFFFE)) = v26[v20 & 0xFFFFFFFE];
      }
    }
    if ( v26 != (_QWORD *)(a3 + 16) && v26 )
    {
      sub_186B220(v26);
      v20 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v22;
    *(_DWORD *)(a3 + 12) = v25;
  }
  else
  {
    v22 = *(_QWORD *)a3;
  }
  v23 = ptr;
  *(_QWORD *)(v22 + 8LL * v20) = v19;
  *(_DWORD *)(a3 + 8) = v20 + 1;
  if ( v23 )
    sub_186B220(v23);
  if ( v7 )
    sub_186B220(v7);
  if ( v4 )
    sub_186B220(v4);
  return sub_EE4A00(v33);
}

