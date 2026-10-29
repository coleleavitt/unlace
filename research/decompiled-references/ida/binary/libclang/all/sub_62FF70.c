_QWORD *__fastcall sub_62FF70(__int64 a1, char a2)
{
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 *v5; // r15
  __int64 *v6; // rbx
  void (__fastcall *v7)(_QWORD *); // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r13
  char *v30; // rdi
  char *v31; // rdi
  char *v32; // rdi
  __m128i v33; // [rsp+0h] [rbp-A8h] BYREF
  char *v34; // [rsp+18h] [rbp-90h]
  char *v35; // [rsp+20h] [rbp-88h]
  char *v36; // [rsp+28h] [rbp-80h]
  int v37[2]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v38; // [rsp+58h] [rbp-50h]

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 8);
  else
    v3 = 0;
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    if ( !a2 )
      return v4;
    v5 = (__int64 *)v4[2];
    v6 = (__int64 *)v4[1];
    if ( *(_DWORD *)(v3 + 912) == v5 - v6 )
      return v4;
    v7 = *(void (__fastcall **)(_QWORD *))(*v4 + 8LL);
    if ( v7 == sub_62FCA0 )
    {
      *v4 = &off_47CFF88;
      if ( v6 != v5 )
      {
        do
        {
          while ( 1 )
          {
            v8 = *v6;
            if ( !*v6 )
              break;
            ++v6;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
            *(v6 - 1) = 0;
            if ( v5 == v6 )
              goto LABEL_10;
          }
          ++v6;
        }
        while ( v5 != v6 );
LABEL_10:
        v5 = (__int64 *)v4[1];
      }
      if ( v5 )
        operator delete(v5, v4[3] - (_QWORD)v5);
      operator delete(v4, 0x28u);
    }
    else
    {
      v7(*(_QWORD **)(a1 + 24));
    }
    *(_QWORD *)(a1 + 24) = 0;
  }
  v9 = operator new(0x28u);
  *(_QWORD *)v9 = &off_47CFF88;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_BYTE *)(v9 + 32) = 0;
  *(_QWORD *)(a1 + 24) = v9;
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
  v10 = (char *)operator new(0x108u);
  *((_QWORD *)v10 + 6) = v10 + 64;
  v34 = v10 + 64;
  *((_QWORD *)v10 + 10) = v10 + 96;
  v35 = v10 + 96;
  *((_QWORD *)v10 + 14) = v10 + 128;
  v36 = v10 + 128;
  v11 = *(_QWORD *)v10 & 0xFF80000000000000LL | 0x6F000000001LL;
  *((_OWORD *)v10 + 9) = 0;
  *(_QWORD *)v10 = v11;
  *((_OWORD *)v10 + 10) = 0;
  *((_QWORD *)v10 + 3) = 0x1000000032LL;
  v12 = *((_QWORD *)v10 + 4);
  *((_OWORD *)v10 + 11) = 0;
  *((_OWORD *)v10 + 12) = 0;
  *((_OWORD *)v10 + 13) = 0;
  *((_OWORD *)v10 + 14) = 0;
  *((_OWORD *)v10 + 15) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E380);
  *((_QWORD *)v10 + 7) = 0;
  v10[64] = 0;
  *((_QWORD *)v10 + 11) = 0;
  v10[96] = 0;
  *((_QWORD *)v10 + 15) = 0;
  v10[128] = 0;
  *((_QWORD *)v10 + 32) = 0;
  *((_QWORD *)v10 + 4) = (unsigned int)v12 & 0xFFFFFFFE | 0x800000001LL;
  *((_DWORD *)v10 + 10) = 0;
  v10[44] = 0;
  *(__m128i *)(v10 + 8) = si128;
  sub_108F780(v37, *(_QWORD *)(*(_QWORD *)(v3 + 80) + 2160LL), v10);
  v14 = _mm_load_si128(&v33);
  *(_QWORD *)v37 = &off_49F4AA0;
  v15 = *(unsigned int *)(v3 + 912);
  v16 = *(_QWORD *)(v3 + 904);
  v38 = v14;
  v17 = v16 + 104 * v15;
  while ( v16 != v17 )
  {
    v16 += 104;
    sub_10918F0((int)v37);
  }
  *(_QWORD *)v37 = &off_49F4AA0;
  sub_1091970(v37);
  if ( (*(_DWORD *)v10)-- == 1 )
  {
    v20 = *((_QWORD *)v10 + 31);
    v21 = *((_QWORD *)v10 + 30);
    if ( v20 != v21 )
    {
      do
      {
        if ( *(_QWORD *)v21 != v21 + 16 )
          operator delete(*(void **)v21, *(_QWORD *)(v21 + 16) + 1LL);
        v21 += 32;
      }
      while ( v20 != v21 );
      v21 = *((_QWORD *)v10 + 30);
    }
    if ( v21 )
      operator delete((void *)v21, *((_QWORD *)v10 + 32) - v21);
    v22 = *((_QWORD *)v10 + 28);
    v23 = *((_QWORD *)v10 + 27);
    if ( v22 != v23 )
    {
      do
      {
        if ( *(_QWORD *)v23 != v23 + 16 )
          operator delete(*(void **)v23, *(_QWORD *)(v23 + 16) + 1LL);
        v23 += 32;
      }
      while ( v22 != v23 );
      v23 = *((_QWORD *)v10 + 27);
    }
    if ( v23 )
      operator delete((void *)v23, *((_QWORD *)v10 + 29) - v23);
    v24 = *((_QWORD *)v10 + 25);
    v25 = *((_QWORD *)v10 + 24);
    if ( v24 != v25 )
    {
      do
      {
        if ( *(_QWORD *)v25 != v25 + 16 )
          operator delete(*(void **)v25, *(_QWORD *)(v25 + 16) + 1LL);
        v25 += 32;
      }
      while ( v24 != v25 );
      v25 = *((_QWORD *)v10 + 24);
    }
    if ( v25 )
      operator delete((void *)v25, *((_QWORD *)v10 + 26) - v25);
    v26 = *((_QWORD *)v10 + 22);
    v27 = *((_QWORD *)v10 + 21);
    if ( v26 != v27 )
    {
      do
      {
        if ( *(_QWORD *)v27 != v27 + 16 )
          operator delete(*(void **)v27, *(_QWORD *)(v27 + 16) + 1LL);
        v27 += 32;
      }
      while ( v26 != v27 );
      v27 = *((_QWORD *)v10 + 21);
    }
    if ( v27 )
      operator delete((void *)v27, *((_QWORD *)v10 + 23) - v27);
    v28 = *((_QWORD *)v10 + 19);
    v29 = *((_QWORD *)v10 + 18);
    if ( v28 != v29 )
    {
      do
      {
        if ( *(_QWORD *)v29 != v29 + 16 )
          operator delete(*(void **)v29, *(_QWORD *)(v29 + 16) + 1LL);
        v29 += 32;
      }
      while ( v28 != v29 );
      v29 = *((_QWORD *)v10 + 18);
    }
    if ( v29 )
      operator delete((void *)v29, *((_QWORD *)v10 + 20) - v29);
    v30 = *((char **)v10 + 14);
    if ( v36 != v30 )
      operator delete(v30, *((_QWORD *)v10 + 16) + 1LL);
    v31 = *((char **)v10 + 10);
    if ( v35 != v31 )
      operator delete(v31, *((_QWORD *)v10 + 12) + 1LL);
    v32 = *((char **)v10 + 6);
    if ( v34 != v32 )
      operator delete(v32, *((_QWORD *)v10 + 8) + 1LL);
    operator delete(v10, 0x108u);
  }
  return *(_QWORD **)(a1 + 24);
}

