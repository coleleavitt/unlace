__int64 __fastcall sub_4B2EA0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __m128 v4; // xmm0
  __int64 v5; // rax
  unsigned __int64 v6; // xmm1_8
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // r15
  _QWORD *v16; // rbp
  _QWORD *v17; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rbx
  const __m128i *v21; // rbx
  __int64 v22; // r13
  unsigned __int8 v23; // r14
  __int64 v24; // rdx
  char v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  void *v32; // rdi
  char *v33; // rsi
  __int64 v34; // rcx
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]

  v4 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 8));
  v5 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 32) = 0;
  v6 = _mm_movehl_ps(a4, v4).m128_u64[0];
  *(_QWORD *)(a1 + 24) = v5;
  *(__m128 *)(a1 + 8) = v4;
  if ( v6 > 0x71C71C71C71C7180LL )
  {
    QT::qBadAlloc();
    return sub_4B31A0();
  }
  else
  {
    result = operator new[](144 * (v6 >> 7) + 8);
    v8 = a1;
    *(_QWORD *)result = v6 >> 7;
    v9 = result + 8;
    if ( v6 >> 7 )
    {
      v10 = (_OWORD *)(result + 8);
      v11 = (v6 >> 7) - 2;
      do
      {
        --v11;
        *v10 = -1;
        v10 += 9;
        *((_QWORD *)v10 - 2) = 0;
        *((_WORD *)v10 - 4) = 0;
        *(v10 - 8) = -1;
        *(v10 - 7) = -1;
        *(v10 - 6) = -1;
        *(v10 - 5) = -1;
        *(v10 - 4) = -1;
        *(v10 - 3) = -1;
        *(v10 - 2) = -1;
      }
      while ( v11 != -2 );
      *(_QWORD *)(a1 + 32) = v9;
      v12 = 0;
      do
      {
        result = a2;
        v13 = v12;
        v14 = 0;
        v15 = v12 + *(_QWORD *)(a2 + 32);
        do
        {
          v20 = *(unsigned __int8 *)(v15 + v14);
          if ( (_BYTE)v20 != 0xFF )
          {
            v21 = (const __m128i *)(*(_QWORD *)(v15 + 128) + 32 * v20);
            v22 = v13 + *(_QWORD *)(v8 + 32);
            v23 = *(_BYTE *)(v22 + 137);
            if ( v23 == *(_BYTE *)(v22 + 136) )
            {
              if ( v23 )
              {
                if ( v23 == 48 )
                {
                  v25 = 80;
                  v27 = 2560;
                  v26 = 80;
                }
                else
                {
                  v24 = v23;
                  v25 = v23 + 16;
                  v26 = v24 + 16;
                  v27 = 32 * v26;
                }
              }
              else
              {
                v25 = 48;
                v27 = 1536;
                v26 = 48;
              }
              v37 = v8;
              v36 = v13;
              v35 = v26;
              v28 = (_QWORD *)operator new[](v27);
              v13 = v36;
              v29 = *(_BYTE *)(v22 + 136);
              v16 = v28;
              v30 = 0;
              v8 = v37;
              if ( !v29
                || (v33 = *(char **)(v22 + 128),
                    v30 = v29,
                    v34 = 32LL * v29,
                    *v16 = *(_QWORD *)v33,
                    v16[(unsigned __int64)v34 / 8 - 1] = *(_QWORD *)&v33[v34 - 8],
                    qmemcpy(
                      (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                      (const void *)(v33 - ((char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                      8LL * (((unsigned int)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8) + (unsigned int)v34) >> 3)),
                    v30 < v35) )
              {
                do
                {
                  v31 = v30++;
                  LOBYTE(v16[4 * v31]) = v30;
                }
                while ( v30 < v35 );
              }
              v32 = *(void **)(v22 + 128);
              if ( v32 )
              {
                operator delete[](v32);
                v8 = v37;
                v13 = v36;
              }
              *(_BYTE *)(v22 + 136) = v25;
              v23 = *(_BYTE *)(v22 + 137);
              *(_QWORD *)(v22 + 128) = v16;
            }
            else
            {
              v16 = *(_QWORD **)(v22 + 128);
            }
            v17 = &v16[4 * v23];
            *(_BYTE *)(v22 + 137) = *(_BYTE *)v17;
            *(_BYTE *)(v22 + v14) = v23;
            v18 = _mm_loadu_si128(v21);
            v19 = v21[1].m128i_i64[0];
            *(__m128i *)v17 = v18;
            v17[2] = v19;
            if ( v18.m128i_i64[0] )
              _InterlockedAdd((volatile signed __int32 *)v18.m128i_i64[0], 1u);
            result = v21[1].m128i_u16[4];
            *((_WORD *)v17 + 12) = result;
          }
          ++v14;
        }
        while ( v14 != 128 );
        v12 = v13 + 144;
      }
      while ( 144 * (v6 >> 7) != v13 + 144 );
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v9;
    }
  }
  return result;
}
