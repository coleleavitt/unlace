void __fastcall sub_1687F30(
        __int64 a1,
        unsigned __int64 a2,
        int *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        char a9,
        __int64 a10)
{
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  const __m128i *v27; // rdi
  __m128i *v28; // rax
  unsigned __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // rsi
  char v33; // [rsp+Ch] [rbp-CCh]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+18h] [rbp-C0h]
  char v37; // [rsp+20h] [rbp-B8h]
  __int64 v38; // [rsp+28h] [rbp-B0h]
  __m128i v39; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v40[16]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v41[136]; // [rsp+50h] [rbp-88h] BYREF

  v33 = a6;
  v39.m128i_i64[0] = (__int64)v40;
  v39.m128i_i64[1] = 0;
  v40[0] = 0;
  v13 = sub_1681E90(a1, (_QWORD *)a2, &v39, a10, a5, a6);
  v34 = v14;
  if ( !v13 )
    goto LABEL_11;
  v15 = v13;
  if ( v13 != 1 )
    goto LABEL_27;
  if ( a9 )
    goto LABEL_11;
  if ( *(_DWORD *)(a1 + 40) && (v22 = **(_QWORD **)(a1 + 32)) != 0 )
  {
    *(_BYTE *)(v22 + 9) |= 8u;
  }
  else
  {
LABEL_27:
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12
      || (v16 = sub_BACEB0(a2, 1)) == 0
      || (v35 = v16, v18 = sub_B90D60(v16, nullptr, nullptr, 0, 0, v17), v19 = v35, v15 != v18) )
    {
      v19 = 0;
    }
    if ( *(_QWORD *)(a1 + 512) )
    {
      sub_15B6740((__int64)v41, v15, a3, a4, a2, v34, a5, v19, (const void *)v39.m128i_i64[0], v39.m128i_u64[1], v33);
      v23 = *(_QWORD *)(a1 + 512);
      v24 = *(unsigned int *)(v23 + 16);
      v25 = v24 + 1;
      if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 20) )
      {
        v29 = *(_QWORD *)(v23 + 8);
        v30 = v23 + 8;
        v31 = v23 + 24;
        if ( v29 > (unsigned __int64)v41 || (unsigned __int64)v41 >= v29 + 80 * v24 )
        {
          sub_2237220(v30, v31, v25, 80);
          v26 = *(_QWORD *)(v23 + 8);
          v24 = *(unsigned int *)(v23 + 16);
          v27 = (const __m128i *)v41;
        }
        else
        {
          sub_2237220(v30, v31, v25, 80);
          v26 = *(_QWORD *)(v23 + 8);
          v24 = *(unsigned int *)(v23 + 16);
          v27 = (const __m128i *)&v41[v26 - v29];
        }
      }
      else
      {
        v26 = *(_QWORD *)(v23 + 8);
        v27 = (const __m128i *)v41;
      }
      v28 = (__m128i *)(v26 + 80 * v24);
      *v28 = _mm_loadu_si128(v27);
      v28[1] = _mm_loadu_si128(v27 + 1);
      v28[2] = _mm_loadu_si128(v27 + 2);
      v28[3] = _mm_loadu_si128(v27 + 3);
      v28[4] = _mm_loadu_si128(v27 + 4);
      ++*(_DWORD *)(v23 + 16);
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 3032);
      v37 = v39.m128i_i8[0];
      v38 = v39.m128i_i64[1];
      if ( !v20 )
        v20 = *(_QWORD *)(a1 + 544);
      v36 = v19;
      v21 = sub_B8C1B0(v20);
      sub_1685FE0(a1, v15, v21, a2, v34, a5, a7, a8, v37, v38, (unsigned int *)a3, a4, v36, v33);
    }
  }
LABEL_11:
  if ( (_BYTE *)v39.m128i_i64[0] != v40 )
    operator delete((void *)v39.m128i_i64[0]);
}
