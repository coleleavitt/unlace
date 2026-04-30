unsigned __int64 *__fastcall sub_189980(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  void **v4; // rbp
  __m128 v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // xmm1_8
  unsigned __int64 *result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _OWORD *v12; // rax
  __int64 v14; // r12
  char *v15; // r13
  __int64 v16; // rbx
  char *v17; // r15
  unsigned __int8 v18; // al
  const __m128i *v19; // rbx
  _QWORD *v20; // r8
  _QWORD *v21; // rbp
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // r15
  _QWORD *i; // rbx
  __int64 v26; // rax
  int v27; // edx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  void *v34; // rdi
  char *v35; // rsi
  __int64 v36; // rcx
  unsigned __int64 *v37; // [rsp+8h] [rbp-60h]
  char v38; // [rsp+17h] [rbp-51h]
  _QWORD *v39; // [rsp+18h] [rbp-50h]

  v5 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 8));
  v6 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)a1 = 1;
  v7 = _mm_movehl_ps(a4, v5).m128_u64[0];
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = 0;
  *(__m128 *)(a1 + 8) = v5;
  if ( v7 > 0x71C71C71C71C7180LL )
  {
    QT::qBadAlloc();
    sub_16D970(v4);
    _Unwind_Resume((struct _Unwind_Exception *)v7);
  }
  result = (unsigned __int64 *)operator new[](144 * (v7 >> 7) + 8);
  v10 = (v7 >> 7) - 1;
  *result = v7 >> 7;
  v11 = result + 1;
  if ( v7 >> 7 )
  {
    v12 = result + 1;
    do
    {
      *v12 = -1;
      v12 += 9;
      *((_QWORD *)v12 - 2) = 0;
      *((_WORD *)v12 - 4) = 0;
      *(v12 - 8) = -1;
      *(v12 - 7) = -1;
      *(v12 - 6) = -1;
      *(v12 - 5) = -1;
      *(v12 - 4) = -1;
      *(v12 - 3) = -1;
      *(v12 - 2) = -1;
    }
    while ( v10-- != 0 );
    *(_QWORD *)(a1 + 32) = v11;
    v37 = nullptr;
    do
    {
      v14 = 0;
      v15 = (char *)v37 + *(_QWORD *)(a2 + 32);
      do
      {
        v16 = (unsigned __int8)v15[v14];
        if ( (_BYTE)v16 != 0xFF )
        {
          v17 = (char *)v37 + *(_QWORD *)(a1 + 32);
          v18 = v17[137];
          v19 = (const __m128i *)(*((_QWORD *)v15 + 16) + 32 * v16);
          if ( v18 == v17[136] )
          {
            if ( v18 )
            {
              if ( v18 == 48 )
              {
                v38 = 80;
                v29 = 2560;
                v28 = 80;
              }
              else
              {
                v28 = v18 + 16LL;
                v38 = v18 + 16;
                v29 = 32 * v28;
              }
            }
            else
            {
              v38 = 48;
              v29 = 1536;
              v28 = 48;
            }
            v30 = (_QWORD *)operator new[](v29);
            v31 = v17[136];
            v20 = v30;
            v32 = 0;
            if ( !v31
              || (v35 = *((char **)v17 + 16),
                  v32 = v31,
                  v36 = 32LL * v31,
                  *v20 = *(_QWORD *)v35,
                  v20[(unsigned __int64)v36 / 8 - 1] = *(_QWORD *)&v35[v36 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v35 - ((char *)v20 - ((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v20 - (((_DWORD)v20 + 8) & 0xFFFFFFF8) + (unsigned int)v36) >> 3)),
                  v32 < v28) )
            {
              do
              {
                v33 = v32++;
                LOBYTE(v20[4 * v33]) = v32;
              }
              while ( v32 < v28 );
            }
            v34 = *((void **)v17 + 16);
            if ( v34 )
            {
              v39 = v20;
              operator delete[](v34);
              v20 = v39;
            }
            *((_QWORD *)v17 + 16) = v20;
            v17[136] = v38;
            v18 = v17[137];
          }
          else
          {
            v20 = *((_QWORD **)v17 + 16);
          }
          v21 = &v20[4 * v18];
          v17[137] = *(_BYTE *)v21;
          v17[v14] = v18;
          v22 = _mm_loadu_si128(v19);
          v23 = v19[1].m128i_i64[0];
          *(__m128i *)v21 = v22;
          v21[2] = v23;
          if ( v22.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)v22.m128i_i64[0], 1u);
          v24 = v19[1].m128i_i64[1];
          for ( i = v21 + 3; v24; i = (_QWORD *)(v26 + 8) )
          {
            v26 = operator new(0x10u);
            v27 = *(_DWORD *)v24;
            *(_QWORD *)(v26 + 8) = 0;
            *(_DWORD *)v26 = v27;
            *i = v26;
            v24 = *(_QWORD *)(v24 + 8);
          }
        }
        ++v14;
      }
      while ( v14 != 128 );
      v37 += 18;
      result = v37;
    }
    while ( (unsigned __int64 *)(144 * (v7 >> 7)) != v37 );
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v11;
  }
  return result;
}
