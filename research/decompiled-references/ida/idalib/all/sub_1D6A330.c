void __fastcall sub_1D6A330(
        __int64 a1,
        unsigned __int64 ***a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  int v13; // eax
  unsigned __int64 v14; // rbp
  char v15; // al
  unsigned __int64 **v16; // r12
  unsigned __int64 *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int16 v22; // dx
  unsigned __int64 v23; // rsi
  __int64 *v24; // rcx
  __int64 v25; // rax
  unsigned __int64 *v26; // rcx
  __int64 v27; // r10
  _QWORD *v28; // rsi
  __int64 v29; // rax
  const __m128i *v30; // roff
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdx
  char v34; // al
  int v35; // eax
  __int64 v36; // rdx
  int *v37; // rax
  unsigned __int64 v38; // rsi
  __int64 v39; // rbp
  char *v40; // rdx
  unsigned __int64 v41; // rbp
  __m128i v42; // xmm3
  _BYTE *v43; // rdi
  unsigned __int64 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rdi
  unsigned __int64 v49; // rsi
  char *v51; // [rsp+28h] [rbp-158h]
  unsigned __int64 *v52; // [rsp+28h] [rbp-158h]
  unsigned __int64 *v53; // [rsp+28h] [rbp-158h]
  unsigned __int64 *v54; // [rsp+30h] [rbp-150h]
  char *v55; // [rsp+30h] [rbp-150h]
  void *ptr; // [rsp+38h] [rbp-148h] BYREF
  __int64 v57; // [rsp+40h] [rbp-140h]
  _BYTE v58[32]; // [rsp+48h] [rbp-138h] BYREF
  int v59; // [rsp+68h] [rbp-118h] BYREF
  __m128i v60; // [rsp+70h] [rbp-110h]
  __int64 v61; // [rsp+80h] [rbp-100h]
  __int8 v62; // [rsp+88h] [rbp-F8h]
  __int64 v63; // [rsp+90h] [rbp-F0h]
  __int64 v64; // [rsp+98h] [rbp-E8h]
  char v65; // [rsp+A8h] [rbp-D8h]
  void *v66; // [rsp+B0h] [rbp-D0h]
  __int64 v67; // [rsp+B8h] [rbp-C8h]
  _BYTE v68[128]; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+140h] [rbp-40h]

  ptr = v58;
  v57 = 0x200000000LL;
  sub_1E4C8C0(**(_QWORD **)a1, (unsigned int)&ptr, a3, a4, a5, a6, a7, a8, a9);
  if ( (_DWORD)v57 )
  {
    v10 = 0;
    v11 = 16 * ((unsigned int)(v57 - 1) + 1LL);
    while ( 1 )
    {
      v14 = *(_QWORD *)((_BYTE *)ptr + v10) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)((_BYTE *)ptr + v10) & 4) == 0 )
      {
        if ( v14 )
          break;
      }
      v15 = *(_BYTE *)(v14 + 28) & 0x7F;
      if ( v15 != 67 )
      {
        if ( v15 == 47 )
        {
          v22 = *(_WORD *)(v14 + 70) >> 4;
          v13 = *(_DWORD *)(v14 + 68) & 0xFFFFF;
        }
        else
        {
          v22 = *(_WORD *)(v14 + 66) >> 4;
          v13 = *(_DWORD *)(v14 + 64) & 0xFFFFF;
        }
        v12 = v22;
LABEL_5:
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != v13 )
          goto LABEL_6;
        goto LABEL_10;
      }
      v12 = (unsigned int)sub_BBE5B0(*(_QWORD *)((_BYTE *)ptr + v10) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != (unsigned int)sub_BBE590(v14) )
        goto LABEL_6;
LABEL_10:
      v16 = *a2;
      v17 = **a2;
      v18 = *v17;
      if ( (*v17 & 1) != 0 )
      {
        v19 = v18 >> 58;
        v20 = ~(-1LL << (v18 >> 58));
        v21 = v20 & (v18 >> 1);
        if ( !_bittest64((const __int64 *)&v21, v12) )
        {
          *v17 = 2 * ((v19 << 57) | v20 & (v21 | (1LL << v12))) + 1;
          goto LABEL_21;
        }
      }
      else
      {
        v23 = v12 & 0x3F;
        v24 = (__int64 *)(*(_QWORD *)v18 + 8LL * ((unsigned int)v12 >> 6));
        v25 = *v24;
        if ( !_bittest64(&v25, v23) )
        {
          *v24 = v25 | (1LL << v23);
LABEL_21:
          v26 = v16[1];
          v27 = (unsigned int)v12;
          v28 = (_QWORD *)v26[2];
          v29 = 32LL * (unsigned int)v12;
          *((_BYTE *)v26 + 38) = (*(_DWORD *)(*v28 + v29) & 0x7FFFFFFF) != 0;
          v66 = v68;
          v59 = v12;
          v60.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
          v60.m128i_i64[1] = 0;
          v62 = 0;
          v63 &= 0xFFFFFFFE00000000LL;
          v64 = 0;
          v65 = 0;
          v67 = 0x400000000LL;
          v69 = 0;
          if ( !*((_BYTE *)v26 + 39) )
          {
            v30 = (const __m128i *)(*v28 + v29);
            v60 = _mm_loadu_si128(v30);
            v61 = v30[1].m128i_i64[0];
            v62 = v30[1].m128i_i8[8];
            v31 = *v28 + v29;
            *(_QWORD *)v31 &= 0xFFFFFFFE00000000LL;
            *(_QWORD *)(v31 + 8) = 0;
            *(_BYTE *)(v31 + 24) = 0;
          }
          v32 = 8LL * (unsigned int)v12;
          v33 = *(_QWORD *)(v26[1] + 8 * v27 + 24);
          v34 = *(_BYTE *)(v33 + 28) & 0x7F;
          if ( v34 == 67 )
          {
            v35 = *(_DWORD *)(v33 + 64);
            if ( v35 )
              goto LABEL_25;
          }
          else
          {
            if ( v34 == 47 )
            {
              if ( !*(_BYTE *)(v33 + 81) )
                goto LABEL_26;
              v35 = *(_DWORD *)(v33 + 84) + 1;
              if ( *(_DWORD *)(v33 + 84) == -1 )
                goto LABEL_26;
            }
            else
            {
              if ( v34 != 68 )
                goto LABEL_26;
              if ( (*(_BYTE *)(v33 + 80) & 4) == 0 )
                goto LABEL_26;
              v35 = *(_DWORD *)(v33 + 84) + 1;
              if ( *(_DWORD *)(v33 + 84) == -1 )
                goto LABEL_26;
            }
LABEL_25:
            *((_DWORD *)v26 + 10) = v35;
          }
LABEL_26:
          v36 = *((unsigned int *)v26 + 14);
          v37 = (int *)v26[6];
          v38 = v36 + 1;
          v39 = 7 * v36;
          v40 = (char *)&v59;
          v41 = (unsigned __int64)&v37[8 * v39];
          if ( v38 > *((unsigned int *)v26 + 15) )
          {
            v48 = (__int64)(v26 + 6);
            if ( v37 > &v59 || v41 <= (unsigned __int64)&v59 )
            {
              v53 = v26;
              sub_1D67900(v48, v38);
              v26 = v53;
              v40 = (char *)&v59;
              v41 = v53[6] + 224LL * *((unsigned int *)v53 + 14);
            }
            else
            {
              v55 = (char *)v26[6];
              v52 = v26;
              sub_1D67900(v48, v38);
              v26 = v52;
              v49 = v52[6];
              v40 = (char *)(v49 + (char *)&v59 - v55);
              v41 = v49 + 224LL * *((unsigned int *)v52 + 14);
            }
          }
          *(_DWORD *)v41 = *(_DWORD *)v40;
          *(__m128i *)(v41 + 8) = _mm_loadu_si128((const __m128i *)(v40 + 8));
          *(__m128i *)(v41 + 24) = _mm_loadu_si128((const __m128i *)(v40 + 24));
          *(__m128i *)(v41 + 40) = _mm_loadu_si128((const __m128i *)(v40 + 40));
          v42 = _mm_loadu_si128((const __m128i *)(v40 + 56));
          *(_QWORD *)(v41 + 72) = v41 + 88;
          *(__m128i *)(v41 + 56) = v42;
          *(_QWORD *)(v41 + 80) = 0x400000000LL;
          if ( *((_DWORD *)v40 + 20) )
          {
            v54 = v26;
            v51 = v40;
            sub_1D3C410((__int64 *)(v41 + 72), (__int64 *)v40 + 9);
            v26 = v54;
            v40 = v51;
          }
          *(_QWORD *)(v41 + 216) = *((_QWORD *)v40 + 27);
          v43 = v66;
          ++*((_DWORD *)v26 + 14);
          if ( v43 != v68 )
            free(v43);
          v44 = v16[1];
          v45 = *(_QWORD *)(v44[1] + v32 + 24);
          if ( (*(_BYTE *)(v45 + 28) & 0x7F) == 0x2F && !*(_BYTE *)(v45 + 81) )
          {
            v46 = *(_QWORD *)(sub_AB5860(*(_QWORD *)(*v44 + 248), *(_QWORD *)(v45 + 48)) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v46 + 16) == 38 )
            {
              v47 = (__int64)v16[2];
              sub_F1D250((__int64)&v59, *(_QWORD *)(v46 + 32), 0, 0);
              sub_1CB6790(v47, (const __m128i *)&v59);
            }
          }
        }
      }
LABEL_6:
      v10 += 16;
      if ( v10 == v11 )
        goto LABEL_16;
    }
    v12 = *(unsigned __int16 *)(v14 + 22);
    v13 = *(_WORD *)(v14 + 20) & 0x7FFF;
    goto LABEL_5;
  }
LABEL_16:
  if ( ptr != v58 )
    free(ptr);
}
