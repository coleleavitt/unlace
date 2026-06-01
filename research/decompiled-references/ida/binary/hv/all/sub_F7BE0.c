__int64 __fastcall sub_F7BE0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, unsigned __int64 a6, __int64 a7)
{
  __int64 v8; // r14
  int v11; // edx
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _DWORD *v17; // r14
  _QWORD *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  int *v21; // rdx
  __int64 v22; // r10
  __int64 v23; // r15
  unsigned int v24; // r9d
  int v25; // ebp
  int v26; // edx
  unsigned __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int v29; // esi
  unsigned int v30; // edx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  const __m128i *v34; // rsi
  int v35; // edx
  int v36; // ebp
  __m128i *v37; // rdi
  __m128i *v38; // rdx
  __m128i *v39; // rdi
  const __m128i *v40; // rsi
  __m128i v41; // xmm0
  __m128i *v42; // rdx
  char *v43; // rcx
  const __m128i *v44; // rsi
  __m128i *v45; // rdx
  __m128i v46; // xmm2
  unsigned int v47; // eax
  __int64 v49; // r11
  unsigned __int64 v51; // [rsp+10h] [rbp-58h]
  const __m128i *v52; // [rsp+18h] [rbp-50h]
  void (__fastcall *v53)(__int64, __int64, _DWORD *, unsigned __int64, __int64); // [rsp+20h] [rbp-48h]
  unsigned int v54; // [rsp+28h] [rbp-40h]
  unsigned int v55; // [rsp+28h] [rbp-40h]
  unsigned int v56; // [rsp+2Ch] [rbp-3Ch]

  v8 = a2;
  v11 = 1;
  v13 = a7;
  v56 = *(_DWORD *)(a2 + 272);
  if ( *(_DWORD *)(a2 + 24) <= *(_DWORD *)(a2 + 28) )
  {
    v14 = *(_QWORD *)(a2 + 248);
    v11 = 0;
    if ( v14 )
      v11 = (*(_DWORD *)(v14 + 140) != 0) + 2;
  }
  v53 = (void (__fastcall *)(__int64, __int64, _DWORD *, unsigned __int64, __int64))sub_AB110(
                                                                                      *(_DWORD *)(a2 + 280),
                                                                                      a5,
                                                                                      v11);
  if ( *(_DWORD *)(a2 + 280) > 6u )
  {
    *(_QWORD *)(a2 + 288) = a1;
    v53(a2, a3, a4, a6, a7);
    sub_F7B60(a1, a7);
    return v49;
  }
  else
  {
    v15 = a6 + a7;
    v51 = a6 + a7;
    v16 = *(_QWORD *)(a1 + 8);
    if ( v16 < *(_QWORD *)(a1 + 24) && a6 < v15 )
    {
      v17 = a4;
      v18 = (_QWORD *)a1;
      v52 = (const __m128i *)(v15 - 32);
      while ( 1 )
      {
        v21 = (int *)(*v18 + 12 * v16);
        v22 = v51 - a6;
        v23 = (unsigned int)v21[1];
        v24 = v21[2];
        v25 = *v21;
        if ( (int)v51 - (int)a6 >= (unsigned int)v23 + v24 )
        {
          v18[1] = v16 + 1;
        }
        else
        {
          if ( (unsigned int)v22 <= (unsigned int)v23 )
          {
            v25 = 0;
          }
          else
          {
            if ( v56 > (int)v51 - (int)a6 - (int)v23 )
              v25 = 0;
            v24 = v51 - a6 - v23;
          }
          v54 = v24;
          sub_F7AA0(v18, (unsigned int)v22, v56);
          v24 = v54;
        }
        v26 = *(_DWORD *)(a2 + 44);
        v27 = a6 - *(_QWORD *)(a2 + 8);
        v28 = a6 - *(_DWORD *)(a2 + 8);
        v29 = v26 + 1024;
        if ( !v25 )
        {
          a4 = v17;
          v13 = v22;
          v8 = a2;
          goto LABEL_45;
        }
        if ( v29 < (unsigned int)v27 )
        {
          v30 = v27 + -1024 - v26;
          if ( v30 > 0x200 )
            v30 = 512;
          *(_DWORD *)(a2 + 44) = v27 - v30;
        }
        v55 = v24;
        sub_F6900(a2, a6);
        v31 = a6;
        v32 = v23 + a6;
        v33 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned __int64, __int64))v53)(
                a2,
                a3,
                v17,
                v31,
                v23);
        v34 = (const __m128i *)(v32 - v33);
        v17[2] = v17[1];
        v35 = *v17;
        *v17 = v25;
        v36 = v25 + 3;
        v17[1] = v35;
        if ( (unsigned __int64)v52 < v32 )
          break;
        *(__m128i *)*(_QWORD *)(a3 + 24) = _mm_loadu_si128(v34);
        if ( v33 > 0x10 )
        {
          v42 = *(__m128i **)(a3 + 24);
          v42[1] = _mm_loadu_si128(v34 + 1);
          if ( (__int64)(v33 - 16) > 16 )
          {
            v43 = &v42->m128i_i8[v33];
            v44 = v34 + 2;
            v45 = v42 + 2;
            do
            {
              v46 = _mm_loadu_si128(v44);
              v45 += 2;
              v44 += 2;
              v45[-2] = v46;
              v45[-1] = _mm_loadu_si128(v44 - 1);
            }
            while ( v43 > (char *)v45 );
          }
LABEL_32:
          v37 = *(__m128i **)(a3 + 24);
LABEL_33:
          v19 = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 24) = (char *)v37 + v33;
          if ( v33 > 0xFFFF )
          {
            *(_DWORD *)(a3 + 72) = 1;
            *(_DWORD *)(a3 + 76) = (v19 - *(_QWORD *)a3) >> 3;
          }
          goto LABEL_10;
        }
        *(_QWORD *)(a3 + 24) += v33;
        v19 = *(_QWORD *)(a3 + 8);
LABEL_10:
        *(_WORD *)(v19 + 4) = v33;
        **(_DWORD **)(a3 + 8) = v36;
        if ( (unsigned __int64)v55 - 3 > 0xFFFF )
        {
          *(_DWORD *)(a3 + 72) = 2;
          v20 = *(_QWORD *)(a3 + 8);
          *(_DWORD *)(a3 + 76) = (v20 - *(_QWORD *)a3) >> 3;
        }
        else
        {
          v20 = *(_QWORD *)(a3 + 8);
        }
        *(_WORD *)(v20 + 6) = v55 - 3;
        a6 = v55 + v32;
        *(_QWORD *)(a3 + 8) += 8LL;
        v16 = v18[1];
        if ( v16 >= v18[3] || v51 <= a6 )
        {
          a4 = v17;
          v8 = a2;
          v26 = *(_DWORD *)(a2 + 44);
          v13 = v51 - a6;
          v28 = a6 - *(_DWORD *)(a2 + 8);
          v29 = v26 + 1024;
          goto LABEL_45;
        }
      }
      v37 = *(__m128i **)(a3 + 24);
      if ( v34 > v52 )
      {
        if ( (unsigned __int64)v34 >= v32 )
          goto LABEL_33;
      }
      else
      {
        v38 = (__m128i *)((char *)v37 + (char *)v52 - (char *)v34);
        *v37 = _mm_loadu_si128(v34);
        if ( (char *)v52 - (char *)v34 > 16 )
        {
          v39 = v37 + 1;
          v40 = v34 + 1;
          do
          {
            v41 = _mm_loadu_si128(v40);
            v39 += 2;
            v40 += 2;
            v39[-2] = v41;
            v39[-1] = _mm_loadu_si128(v40 - 1);
          }
          while ( v38 > v39 );
        }
        v34 = v52;
        v37 = v38;
      }
      do
      {
        v37->m128i_i8[0] = v34->m128i_i8[0];
        v34 = (const __m128i *)((char *)v34 + 1);
        v37 = (__m128i *)((char *)v37 + 1);
      }
      while ( v32 > (unsigned __int64)v34 );
      goto LABEL_32;
    }
    v26 = *(_DWORD *)(a2 + 44);
    v28 = a6 - *(_DWORD *)(a2 + 8);
    v29 = v26 + 1024;
LABEL_45:
    if ( v28 > v29 )
    {
      v47 = v28 - 1024 - v26;
      if ( v47 > 0x200 )
        v47 = 512;
      *(_DWORD *)(v8 + 44) = v28 - v47;
    }
    sub_F6900(v8, a6);
    return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned __int64, __int64))v53)(v8, a3, a4, a6, v13);
  }
}

