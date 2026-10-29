_QWORD *__fastcall sub_47EA40(_DWORD *a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __m128 v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // xmm1_8
  unsigned __int64 *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rbp
  _QWORD *v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  void *v26; // rdi
  char *v27; // rsi
  __int64 v28; // rcx
  void **v29; // rax
  void **v30; // rbx
  void **v31; // r15
  char *v32; // rdi
  void **v33; // rbp
  void **v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v38; // rax
  __m128i si128; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rax
  struct _Unwind_Exception *v42; // rbx
  _QWORD *v43; // [rsp+0h] [rbp-58h]
  _QWORD *v44; // [rsp+8h] [rbp-50h]

  if ( a1 )
  {
    v3 = operator new(0x28u);
    *(_DWORD *)v3 = 1;
    v4 = v3;
    v5 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 2));
    v43 = (_QWORD *)v3;
    *(__m128 *)(v3 + 8) = v5;
    v6 = *((_QWORD *)a1 + 3);
    v7 = _mm_movehl_ps(a3, v5).m128_u64[0];
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 24) = v6;
    if ( v7 > 0x71C71C71C71C7180LL )
    {
      v42 = (struct _Unwind_Exception *)QT::qBadAlloc();
      operator delete(v43, 0x28u);
      _Unwind_Resume(v42);
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
      v43[4] = v9;
      do
      {
        v13 = 0;
        v14 = v12 + *((_QWORD *)a1 + 4);
        do
        {
          v17 = *(unsigned __int8 *)(v14 + v13);
          if ( (_BYTE)v17 != 0xFF )
          {
            v18 = (_DWORD *)(*(_QWORD *)(v14 + 128) + 16 * v17);
            v19 = v12 + v43[4];
            v20 = *(unsigned __int8 *)(v19 + 137);
            if ( (_BYTE)v20 == *(_BYTE *)(v19 + 136) )
            {
              if ( (_BYTE)v20 )
              {
                if ( (_BYTE)v20 == 48 )
                {
                  v22 = 1280;
                  v21 = 80;
                }
                else
                {
                  v21 = v20 + 16;
                  v22 = 16 * (v20 + 16);
                }
              }
              else
              {
                v22 = 768;
                v21 = 48;
              }
              v15 = (_QWORD *)operator new[](v22);
              v23 = *(_BYTE *)(v19 + 136);
              v24 = 0;
              if ( !v23
                || (v27 = *(char **)(v19 + 128),
                    v24 = v23,
                    v28 = 16LL * v23,
                    *v15 = *(_QWORD *)v27,
                    v15[(unsigned __int64)v28 / 8 - 1] = *(_QWORD *)&v27[v28 - 8],
                    qmemcpy(
                      (void *)((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                      (const void *)(v27 - ((char *)v15 - ((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                      8LL * (((unsigned int)v15 - (((_DWORD)v15 + 8) & 0xFFFFFFF8) + (unsigned int)v28) >> 3)),
                    v24 < v21) )
              {
                do
                {
                  v25 = v24++;
                  LOBYTE(v15[2 * v25]) = v24;
                }
                while ( v24 < v21 );
              }
              v26 = *(void **)(v19 + 128);
              if ( v26 )
              {
                v44 = v15;
                operator delete[](v26);
                v15 = v44;
              }
              *(_QWORD *)(v19 + 128) = v15;
              LOBYTE(v20) = *(_BYTE *)(v19 + 137);
              *(_BYTE *)(v19 + 136) = v21;
            }
            else
            {
              v15 = *(_QWORD **)(v19 + 128);
            }
            v16 = &v15[2 * (unsigned __int8)v20];
            *(_BYTE *)(v19 + 137) = *v16;
            *(_BYTE *)(v19 + v13) = v20;
            *(_DWORD *)v16 = *v18;
            QT::QIcon::QIcon((QT::QIcon *)(v16 + 8), (const QT::QIcon *)(v18 + 2));
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
      v43[4] = v9;
    }
    if ( *a1 != -1 && !_InterlockedSub(a1, 1u) )
    {
      v29 = *((void ***)a1 + 4);
      if ( v29 )
      {
        v30 = &v29[18 * (_QWORD)*(v29 - 1)];
        if ( v29 == v30 )
        {
          v36 = 0;
        }
        else
        {
          v31 = v30 - 2;
          do
          {
            v32 = (char *)*v31;
            v33 = v30;
            v30 -= 18;
            if ( *v31 )
            {
              v34 = v30;
              if ( v30 == v31 )
                goto LABEL_37;
              do
              {
                v35 = *(unsigned __int8 *)v34;
                if ( (_BYTE)v35 != 0xFF )
                {
                  QT::QIcon::~QIcon((QT::QIcon *)&v32[16 * v35 + 8]);
                  v32 = (char *)*v31;
                }
                v34 = (void **)((char *)v34 + 1);
              }
              while ( v34 != v31 );
              if ( v32 )
LABEL_37:
                operator delete[](v32);
            }
            v31 -= 18;
          }
          while ( *((void ***)a1 + 4) != v30 );
          v36 = 144LL * (_QWORD)*(v33 - 19);
        }
        operator delete[](v30 - 1, v36 + 8);
      }
      operator delete(a1, 0x28u);
    }
  }
  else
  {
    v38 = operator new(0x28u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC4C0);
    *(_QWORD *)v38 = 1;
    v40 = v38;
    *(_QWORD *)(v38 + 24) = 0;
    *(_QWORD *)(v38 + 32) = 0;
    *(__m128i *)(v38 + 8) = si128;
    v43 = (_QWORD *)v38;
    v41 = operator new[](0x98u);
    *(_QWORD *)v41 = 1;
    *(_OWORD *)(v41 + 8) = -1;
    *(_OWORD *)(v41 + 24) = -1;
    *(_OWORD *)(v41 + 40) = -1;
    *(_OWORD *)(v41 + 56) = -1;
    *(_OWORD *)(v41 + 72) = -1;
    *(_OWORD *)(v41 + 88) = -1;
    *(_OWORD *)(v41 + 104) = -1;
    *(_OWORD *)(v41 + 120) = -1;
    *(_QWORD *)(v41 + 136) = 0;
    *(_WORD *)(v41 + 144) = 0;
    *(_QWORD *)(v40 + 32) = v41 + 8;
    *(_QWORD *)(v40 + 24) = QT::QHashSeed::globalSeed(nullptr);
  }
  return v43;
}
