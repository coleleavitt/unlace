_QWORD *__fastcall sub_1C8D00(_DWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __m128 v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // xmm1_8
  unsigned __int64 *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r12
  _QWORD *v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rdx
  const __m128i *v18; // r14
  __int64 v19; // rbp
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // cl
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  void *v25; // rdi
  char *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbp
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v34; // rax
  __m128i si128; // xmm0
  __int64 v36; // rbx
  __int64 v37; // rax
  struct _Unwind_Exception *v38; // rbx
  _QWORD *v39; // [rsp+0h] [rbp-58h]
  _QWORD *v40; // [rsp+8h] [rbp-50h]

  if ( a1 )
  {
    v3 = operator new(0x28u);
    *(_DWORD *)v3 = 1;
    v4 = v3;
    v5 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 2));
    v39 = (_QWORD *)v3;
    *(__m128 *)(v3 + 8) = v5;
    v6 = *((_QWORD *)a1 + 3);
    v7 = _mm_movehl_ps(a3, v5).m128_u64[0];
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 24) = v6;
    if ( v7 > 0x71C71C71C71C7180LL )
    {
      v38 = (struct _Unwind_Exception *)QT::qBadAlloc();
      operator delete(v39, 0x28u);
      _Unwind_Resume(v38);
    }
    v8 = (unsigned __int64 *)operator new[](144 * (v7 >> 7) + 8);
    *v8 = v7 >> 7;
    v9 = v8 + 1;
    if ( v7 >> 7 )
    {
      v10 = (v7 >> 7) - 2;
      v11 = v8 + 1;
      do
      {
        --v10;
        *v11 = -1;
        v11 += 9;
        *((_QWORD *)v11 - 2) = 0;
        *((_WORD *)v11 - 4) = 0;
        *(v11 - 8) = -1;
        *(v11 - 7) = -1;
        *(v11 - 6) = -1;
        *(v11 - 5) = -1;
        *(v11 - 4) = -1;
        *(v11 - 3) = -1;
        *(v11 - 2) = -1;
      }
      while ( v10 != -2 );
      v12 = 0;
      v39[4] = v9;
      do
      {
        v13 = 0;
        v14 = v12 + *((_QWORD *)a1 + 4);
        do
        {
          v17 = *(unsigned __int8 *)(v14 + v13);
          if ( (_BYTE)v17 != 0xFF )
          {
            v18 = (const __m128i *)(*(_QWORD *)(v14 + 128) + 16 * v17);
            v19 = v12 + v39[4];
            v20 = *(unsigned __int8 *)(v19 + 137);
            if ( (_BYTE)v20 == *(_BYTE *)(v19 + 136) )
            {
              if ( (_BYTE)v20 )
              {
                if ( (_BYTE)v20 == 48 )
                {
                  v21 = 1280;
                  v20 = 80;
                }
                else
                {
                  v20 += 16LL;
                  v21 = 16 * v20;
                }
              }
              else
              {
                v21 = 768;
                v20 = 48;
              }
              v15 = (_QWORD *)operator new[](v21);
              v22 = *(_BYTE *)(v19 + 136);
              v23 = 0;
              if ( !v22
                || (v26 = *(char **)(v19 + 128),
                    v23 = v22,
                    v27 = 16LL * v22,
                    *v15 = *(_QWORD *)v26,
                    v15[(unsigned __int64)v27 / 8 - 1] = *(_QWORD *)&v26[v27 - 8],
                    qmemcpy(
                      (void *)((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                      (const void *)(v26 - ((char *)v15 - ((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                      8LL * (((unsigned int)v15 - (((_DWORD)v15 + 8) & 0xFFFFFFF8) + (unsigned int)v27) >> 3)),
                    v23 < v20) )
              {
                do
                {
                  v24 = v23++;
                  LOBYTE(v15[2 * v24]) = v23;
                }
                while ( v23 < v20 );
              }
              v25 = *(void **)(v19 + 128);
              if ( v25 )
              {
                v40 = v15;
                operator delete[](v25);
                v15 = v40;
              }
              *(_BYTE *)(v19 + 136) = v20;
              LOBYTE(v20) = *(_BYTE *)(v19 + 137);
              *(_QWORD *)(v19 + 128) = v15;
            }
            else
            {
              v15 = *(_QWORD **)(v19 + 128);
            }
            v16 = &v15[2 * (unsigned __int8)v20];
            *(_BYTE *)(v19 + 137) = *v16;
            *(_BYTE *)(v19 + v13) = v20;
            *(__m128i *)v16 = _mm_loadu_si128(v18);
          }
          ++v13;
        }
        while ( v13 != 128 );
        v12 += 144;
      }
      while ( 144 * (v7 >> 7) != v12 );
    }
    else
    {
      v39[4] = v9;
    }
    if ( *a1 != -1 && !_InterlockedSub(a1, 1u) )
    {
      v28 = *((_QWORD *)a1 + 4);
      if ( v28 )
      {
        v29 = v28 + 144LL * *(_QWORD *)(v28 - 8);
        if ( v28 == v29 )
        {
          v32 = 0;
        }
        else
        {
          do
          {
            v30 = v29;
            v31 = *(void **)(v29 - 16);
            v29 -= 144;
            if ( v31 )
              operator delete[](v31);
          }
          while ( *((_QWORD *)a1 + 4) != v29 );
          v32 = 144LL * *(_QWORD *)(v30 - 152);
        }
        operator delete[]((void *)(v29 - 8), v32 + 8);
      }
      operator delete(a1, 0x28u);
    }
  }
  else
  {
    v34 = operator new(0x28u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC4C0);
    *(_QWORD *)v34 = 1;
    v36 = v34;
    *(_QWORD *)(v34 + 24) = 0;
    *(_QWORD *)(v34 + 32) = 0;
    *(__m128i *)(v34 + 8) = si128;
    v39 = (_QWORD *)v34;
    v37 = operator new[](0x98u);
    *(_QWORD *)v37 = 1;
    *(_OWORD *)(v37 + 8) = -1;
    *(_OWORD *)(v37 + 24) = -1;
    *(_OWORD *)(v37 + 40) = -1;
    *(_OWORD *)(v37 + 56) = -1;
    *(_OWORD *)(v37 + 72) = -1;
    *(_OWORD *)(v37 + 88) = -1;
    *(_OWORD *)(v37 + 104) = -1;
    *(_OWORD *)(v37 + 120) = -1;
    *(_QWORD *)(v37 + 136) = 0;
    *(_WORD *)(v37 + 144) = 0;
    *(_QWORD *)(v36 + 32) = v37 + 8;
    *(_QWORD *)(v36 + 24) = QT::QHashSeed::globalSeed(nullptr);
  }
  return v39;
}
