/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4564C0
// Address: 0x00000000004564C0

//----- (00000000004564C0) ----------------------------------------------------
__int64 __fastcall sub_4564C0(_QWORD *a1, _DWORD *a2, _QWORD *a3, int a4, int a5, double a6)
{
  __int64 v7; // r12
  _QWORD *v8; // rbp
  int v9; // ebx
  _QWORD *v10; // rbx
  _QWORD *v11; // r12
  _QWORD *v12; // rbp
  unsigned int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // edx
  _DWORD *v16; // r15
  _DWORD *v17; // rdx
  __int64 v18; // r15
  int v19; // edx
  _QWORD *i; // r12
  unsigned int v21; // r15d
  __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // r14d
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(); // rcx
  size_t v28; // r8
  size_t v29; // r11
  void *v30; // r14
  __int64 v31; // rax
  __m128i v32; // xmm3
  char v33; // r9
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  char *v36; // rsi
  char *v37; // rax
  void *v38; // rdi
  char *v39; // rax
  char *v40; // rdx
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // r13
  void *v44; // rdi
  int n; // [rsp+8h] [rbp-80h]
  size_t nb; // [rsp+8h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-80h]
  size_t v49; // [rsp+10h] [rbp-78h]
  int v50; // [rsp+18h] [rbp-70h]
  char v52; // [rsp+1Fh] [rbp-69h]
  size_t v53; // [rsp+28h] [rbp-60h]
  unsigned int v54; // [rsp+3Ch] [rbp-4Ch] BYREF
  _QWORD v55[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a5;
  v8 = a1;
  v9 = a4;
  v55[1] = __readfsqword(0x28u);
  if ( a1[17] == a1[21] )
  {
    v40 = (char *)a1[70];
    if ( v40 )
    {
      if ( a1[71] )
      {
        v41 = 0;
        v42 = 0;
        v43 = a1[71];
        do
        {
          v44 = *(void **)&v40[v42 + 8];
          if ( v44 )
          {
            *(_QWORD *)&v40[v42 + 16] = 0;
            j__free(v44);
            v40 = (char *)v8[70];
          }
          ++v41;
          v42 += 56;
        }
        while ( v43 != v41 );
        v9 = a4;
      }
      v8[71] = 0;
      j__free(v40);
      v8[70] = 0;
      v8[72] = 0;
    }
  }
  v50 = 0;
  v10 = &a3[7 * v9];
  if ( a3 != v10 )
  {
    n = v7;
    v11 = v8;
    v12 = a3;
    do
    {
      if ( !*((_BYTE *)v12 + 40) )
      {
        v13 = *((_DWORD *)v12 + 8);
        v14 = *v12;
        if ( v13 == 4 )
        {
          v26 = v11[62];
          v55[0] = *v12;
          v54 = v26;
          v27 = *(__int64 (__fastcall **)())(*v11 + 544LL);
          if ( v27 != nullsub_2 )
          {
            ((void (__fastcall *)(_QWORD *, _QWORD *, unsigned int *))v27)(v11, v55, &v54);
            v14 = *v12;
            v13 = *((_DWORD *)v12 + 8);
          }
        }
        else
        {
          v15 = *((_DWORD *)v12 + 9);
          v55[0] = *v12;
          v54 = v15;
        }
        v16 = (_DWORD *)v11[70];
        v17 = &v16[14 * v11[71]];
        if ( v16 != v17 )
        {
          while ( v14 != *(_QWORD *)v16 || v16[8] != v13 )
          {
            v16 += 14;
            if ( v17 == v16 )
              goto LABEL_14;
          }
          if ( v17 != v16 && v16[12] == *((_DWORD *)v12 + 12) )
          {
            v38 = *((void **)v16 + 1);
            if ( v38 )
            {
              *((_QWORD *)v16 + 2) = 0;
              j__free(v38);
            }
            memmove(v16, v16 + 14, v11[70] + 56LL * v11[71]-- - (_QWORD)v16 - 56);
            v13 = *((_DWORD *)v12 + 8);
          }
        }
LABEL_14:
        v18 = (*(unsigned int (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD, _QWORD))(*v11 + 312LL))(
                v11,
                v12 + 1,
                v13,
                v55[0],
                v54)
            + 2;
        sub_4563D0(
          (__int64)v11,
          "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n",
          *((_DWORD *)v12 + 8),
          a6,
          LODWORD(v55[0]),
          v54);
        LOBYTE(v19) = 8;
        if ( (unsigned int)v18 <= 4 )
        {
          v19 = *((_DWORD *)qword_491370 + v18);
          v50 += v19 == 10 || v19 == 0;
        }
        *((_BYTE *)v12 + 40) = v19;
      }
      v12 += 7;
    }
    while ( v10 != v12 );
    v8 = v11;
    v7 = n;
  }
  for ( i = &v10[7 * v7]; i != v10; ++v50 )
  {
    while ( 1 )
    {
      v22 = *((unsigned int *)v10 + 8);
      *((_BYTE *)v10 + 40) = 0;
      v23 = (_DWORD)v22 == 4 ? *((unsigned int *)v10 + 4) : *((unsigned int *)v10 + 9);
      v24 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, __int64))(*v8 + 320LL))(
              v8,
              v22,
              *v10,
              v10[1],
              v23);
      sub_4563D0((__int64)v8, "dbg_del_bpt(type=%d, ea=%a) => %d\n", *((_DWORD *)v10 + 8), a6, *v10);
      if ( v24 > 0 )
        break;
      *((_BYTE *)v10 + 40) = 8;
      v10 += 7;
      if ( i == v10 )
        goto LABEL_27;
    }
    v21 = *((_DWORD *)v10 + 8);
    if ( ((v21 - 4) & 0xFFFFFFFB) == 0 )
    {
      v28 = v10[2];
      v29 = *v10;
      v30 = nullptr;
      if ( v28 )
      {
        v49 = *v10;
        na = v10[2];
        v30 = sub_4814F0(na);
        memcpy(v30, (const void *)v10[1], na);
        v21 = *((_DWORD *)v10 + 8);
        v29 = v49;
        v28 = na;
      }
      v31 = v8[71];
      v32 = _mm_cvtsi32_si128(*((_DWORD *)v10 + 9));
      v33 = *((_BYTE *)v10 + 40);
      v34 = _mm_cvtsi32_si128(*((_DWORD *)v10 + 11));
      v35 = _mm_cvtsi32_si128(*((_DWORD *)v10 + 12));
      v36 = (char *)v8[70];
      if ( v8[72] < (unsigned __int64)(v31 + 1) )
      {
        v53 = v28;
        v52 = *((_BYTE *)v10 + 40);
        nb = v29;
        v39 = (char *)sub_481540((__int64)(v8 + 70), v36, v31 + 1, 0x38u);
        v8[70] = v39;
        v36 = v39;
        v28 = v53;
        v31 = v8[71];
        v35 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v35));
        v34 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v34));
        v33 = v52;
        v32 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v32));
        v29 = nb;
      }
      v37 = &v36[56 * v31];
      *((__m128i *)v37 + 1) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      *(_QWORD *)&a6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v32).m128i_u64[0];
      *(_QWORD *)v37 = v29;
      *((_QWORD *)v37 + 1) = v30;
      v37[40] = v33;
      *((double *)v37 + 4) = a6;
      *(_QWORD *)(v37 + 44) = _mm_unpacklo_epi32(v34, v35).m128i_u64[0];
      ++v8[71];
    }
    v10 += 7;
  }
LABEL_27:
  if ( a2 )
    *a2 = v50;
  return 1;
}
// 40C0B0: using guessed type __int64 __fastcall nullsub_2();
// 491370: using guessed type __int64 qword_491370[2];
