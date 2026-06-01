__int64 __fastcall sub_9E98E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  void *v9; // rdi
  bool v10; // zf
  _DWORD *v11; // rax
  char v12; // al
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // r13
  _BYTE *v17; // rdi
  char *v18; // rcx
  char *v19; // rax
  __int64 v20; // rdx
  unsigned int v22; // edx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  const __m128i *v26; // rsi
  __m128i *v27; // rax
  __int64 *v28; // r11
  int v29; // r12d
  __int64 v30; // r14
  char *v31; // rax
  char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __m128i *v36; // r10
  const __m128i *v37; // rax
  const __m128i *v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 *v41; // [rsp+8h] [rbp-130h]
  _QWORD *v42; // [rsp+8h] [rbp-130h]
  unsigned int v43; // [rsp+14h] [rbp-124h]
  char v44; // [rsp+2Fh] [rbp-109h] BYREF
  __int64 v45[4]; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v46[2]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+78h] [rbp-C0h]
  _BYTE v50[184]; // [rsp+80h] [rbp-B8h] BYREF

  v8 = a1 + 16;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  v9 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_DWORD *)a1 = 1;
  sub_182CBA0(v9, v8);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  v49 = 0x1000000000LL;
  *(_DWORD *)(a4 + 8) = 0;
  v10 = *(_WORD *)(a3 + 4) == 0;
  ptr = v50;
  v45[0] = a2;
  v45[1] = a1;
  v45[2] = (__int64)&ptr;
  v45[3] = a4;
  if ( v10 )
  {
    do
    {
      v11 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v11 )
        break;
      if ( *v11 != 5 )
        break;
      if ( v11[1] != 9 )
        break;
      v28 = (__int64 *)(a3 + 32);
      v29 = 0;
      v43 = *(_DWORD *)(a3 + 24);
      while ( ++v29 < v43 )
      {
        v41 = v28;
        sub_9D50C0(v45, *v28);
        v28 = v41 + 1;
      }
      a3 = *(_QWORD *)(a3 + 8LL * (v43 - 1) + 32);
    }
    while ( !*(_WORD *)(a3 + 4) );
  }
  v46[0] = 0;
  v46[1] = 0;
  v47[0] = 1;
  v47[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(a2 + 408, a3, v46, &v44) )
  {
    sub_9AF730((__int64)qword_1C7F2C0, a1, (__int64)v46, a1);
  }
  else
  {
    v12 = *(_BYTE *)(a3 + 6);
    if ( (v12 & 1) != 0 )
    {
      v13 = *(_DWORD *)(a4 + 8) - 1;
      while ( v13 != -1 )
      {
        v14 = v13--;
        v15 = *(_QWORD *)a4 + 16 * v14;
        if ( *(_QWORD *)v15 == a3 )
        {
          ++*(_DWORD *)(v15 + 8);
          break;
        }
      }
    }
    else
    {
      *(_BYTE *)(a3 + 6) = v12 | 1;
      v22 = v49;
      if ( (unsigned int)v49 >= HIDWORD(v49) )
      {
        v30 = (unsigned int)(2 * HIDWORD(v49));
        v31 = (char *)sub_186B270(8 * v30);
        v22 = v49;
        v32 = (char *)ptr;
        v23 = v31;
        if ( (_DWORD)v49 )
        {
          if ( (unsigned int)(v49 - 1) <= 2 || v31 == (char *)ptr + 8 )
          {
            v40 = 0;
            do
            {
              v23[v40] = *(_QWORD *)&v32[v40 * 8];
              ++v40;
            }
            while ( v40 != v22 );
          }
          else
          {
            v33 = 0;
            do
            {
              *(__m128i *)&v23[v33] = _mm_loadu_si128((const __m128i *)&v32[v33 * 8]);
              v33 += 2;
            }
            while ( v33 != 2LL * (v22 >> 1) );
            if ( (v22 & 1) != 0 )
              v23[v22 & 0xFFFFFFFE] = *(_QWORD *)&v32[8 * (v22 & 0xFFFFFFFE)];
          }
        }
        if ( v32 != v50 && v32 )
        {
          v42 = v23;
          sub_186B220(v32);
          v22 = v49;
          v23 = v42;
        }
        ptr = v23;
        HIDWORD(v49) = v30;
      }
      else
      {
        v23 = ptr;
      }
      v23[v22] = a3;
      v24 = *(unsigned int *)(a4 + 8);
      v25 = *(_DWORD *)(a4 + 12);
      LODWORD(v49) = v22 + 1;
      if ( (unsigned int)v24 >= v25 )
      {
        v34 = 2 * v25;
        v35 = sub_186B270(16 * v34);
        v24 = *(unsigned int *)(a4 + 8);
        v36 = *(__m128i **)a4;
        v26 = (const __m128i *)v35;
        if ( (_DWORD)v24 )
        {
          v37 = *(const __m128i **)a4;
          v38 = v26;
          do
          {
            v39 = _mm_loadu_si128(v37++);
            ++v38;
            v38[-1] = v39;
          }
          while ( v37 != &v36[(unsigned int)v24] );
        }
        if ( v36 && v36 != (__m128i *)(a4 + 16) )
        {
          sub_186B220(v36);
          v24 = *(unsigned int *)(a4 + 8);
        }
        *(_QWORD *)a4 = v26;
        *(_DWORD *)(a4 + 12) = v34;
      }
      else
      {
        v26 = *(const __m128i **)a4;
      }
      v27 = (__m128i *)&v26[v24];
      v27->m128i_i64[0] = a3;
      v27->m128i_i32[2] = 1;
      ++*(_DWORD *)(a4 + 8);
    }
  }
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v46);
  sub_182CBA0(v16, v47);
  v17 = ptr;
  v18 = (char *)ptr + 8 * (unsigned int)v49;
  v19 = (char *)ptr;
  if ( ptr != v18 )
  {
    do
    {
      v20 = *(_QWORD *)v19;
      v19 += 8;
      *(_BYTE *)(v20 + 6) &= ~1u;
    }
    while ( v18 != v19 );
  }
  LODWORD(v49) = 0;
  if ( v17 && v17 != v50 )
    sub_186B220(v17);
  return a1;
}

