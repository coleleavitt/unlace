void __fastcall sub_1894F20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // r8
  _QWORD *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned int *v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+0h] [rbp-40h]

  if ( a4 )
  {
    v8 = *a1;
    v9 = *(_QWORD *)(v8 + 192);
    v10 = sub_1A5B7C0(v8, v9, a4, a5, 0, 0);
    if ( v10 )
    {
      v11 = (*(_BYTE *)(v10 + 28) & 0x7Fu) - 64;
      if ( (unsigned int)v11 <= 2 )
      {
        v12 = *(_QWORD *)(v10 + 80);
        v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        v14 = (v12 & 4) != 0 ? v13[1] : *v13;
        v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
          && ((unsigned int)*(unsigned __int8 *)(v15 + 16) - 35 <= 1 || (v15 = sub_F63050(v15, v9, v13, v11)) != 0) )
        {
          v16 = 8LL * (*(_BYTE *)(v15 + 19) >> 2);
          v17 = v16 >> 3;
          v18 = (_QWORD *)(v15 + (*(_WORD *)(v15 + 18) & 0x3F8) + 48);
          v19 = *(unsigned int *)(a2 + 8);
          v20 = (v16 >> 3) + v19;
          if ( v20 > *(unsigned int *)(a2 + 12) )
          {
            v32 = (8LL * (*(_BYTE *)(v15 + 19) >> 2)) >> 3;
            sub_2237220(a2, a2 + 16, v20, 8);
            v19 = *(unsigned int *)(a2 + 8);
            v17 = v32;
            LODWORD(v20) = v32 + v19;
          }
          v21 = (_QWORD *)(*(_QWORD *)a2 + 8 * v19);
          if ( v16 )
          {
            if ( v16 == 8 )
              goto LABEL_15;
            v22 = 0;
            do
            {
              *(__m128i *)&v21[v22] = _mm_loadu_si128((const __m128i *)&v18[v22]);
              v22 += 2;
            }
            while ( v22 != 2 * (v17 >> 1) );
            v23 = 8 * (v17 & 0xFFFFFFFFFFFFFFFELL);
            v18 = (_QWORD *)((char *)v18 + v23);
            v21 = (_QWORD *)((char *)v21 + v23);
            if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_15:
              *v21 = *v18;
          }
          *(_DWORD *)(a2 + 8) = v20;
          v24 = *(unsigned int *)(a3 + 8);
          v25 = *(_BYTE *)(v15 + 19) >> 2;
          if ( v25 + v24 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
          {
            sub_2237220(a3, a3 + 16, v25 + v24, 4);
            v24 = *(unsigned int *)(a3 + 8);
          }
          v26 = (unsigned int *)(*(_QWORD *)a3 + 4 * v24);
          if ( !v25 )
            goto LABEL_27;
          if ( (unsigned __int64)(v25 - 1) <= 2 )
          {
            v31 = v25;
          }
          else
          {
            v27 = 0;
            v28 = ((unsigned __int64)(v25 - 4) >> 2) + 1;
            v29 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a5), 0);
            do
            {
              v30 = v27++;
              *(__m128i *)&v26[4 * v30] = v29;
            }
            while ( v27 < v28 );
            v31 = v25 - 4 * v28;
            v26 += 4 * v28;
            if ( v25 == 4 * v28 )
            {
LABEL_26:
              LODWORD(v24) = *(_DWORD *)(a3 + 8);
LABEL_27:
              *(_DWORD *)(a3 + 8) = v24 + v25;
              return;
            }
          }
          *v26 = a5;
          if ( v31 != 1 )
          {
            v26[1] = a5;
            if ( v31 != 2 )
              v26[2] = a5;
          }
          goto LABEL_26;
        }
      }
    }
  }
}
