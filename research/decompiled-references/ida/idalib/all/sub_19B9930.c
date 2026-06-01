unsigned __int64 __fastcall sub_19B9930(
        __int64 *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        __int64 a10,
        unsigned int **a11,
        __int64 a12)
{
  __int64 *v12; // r12
  unsigned int v13; // eax
  int *v14; // rbx
  char v15; // bp
  void **v16; // rbx
  void *v17; // r13
  unsigned __int64 v18; // rax
  __int64 v20; // rax
  int *v21; // rbx
  int *v22; // rdi
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // r13
  _DWORD *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  bool v34; // cc
  unsigned int v35; // edx
  __int64 v36; // rdx
  unsigned __int64 v37; // r13
  int *v38; // rbx
  int *v39; // rsi
  int v40; // eax
  int v41; // eax
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __m128i v44; // xmm4
  __int64 v45; // rax
  char *v46; // rbp
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  int v49; // r12d
  void *v50; // rdi
  char *v51; // rsi
  __int64 v52; // rdx
  unsigned int v53; // edx
  __int64 *v54; // rsi
  unsigned int v55; // ecx
  __int64 v56; // [rsp+0h] [rbp-118h]
  __int64 v57; // [rsp+8h] [rbp-110h]
  _QWORD *v64; // [rsp+38h] [rbp-E0h]
  __int64 v65; // [rsp+38h] [rbp-E0h]
  int *v66; // [rsp+48h] [rbp-D0h] BYREF
  void *v67; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v68; // [rsp+58h] [rbp-C0h]
  char v69; // [rsp+5Ch] [rbp-BCh]

  v12 = a1;
  v13 = *((_DWORD *)a11 + 34);
  v56 = 0;
  v57 = 0;
  if ( !v13 )
  {
    v15 = 0;
    goto LABEL_3;
  }
  v14 = (int *)a11[16];
  v15 = 0;
  if ( *v14 == 2 )
  {
    v35 = **a11;
    if ( (v35 & 0x7F000) == 0x34000 || (v35 & 0x7E000) == (_DWORD)&stru_32000 )
    {
      v53 = v14[1];
      v54 = a1 + 1;
      v55 = 4264;
    }
    else if ( (v14[14] & 0x20) != 0 )
    {
      v53 = v14[1];
      v54 = a1 + 1;
      v55 = 5020;
    }
    else
    {
      if ( a12 | *((_QWORD *)v14 + 8) )
      {
        v56 = *((_QWORD *)v14 + 8);
        v36 = 144LL * v13;
        v37 = 0x8E38E38E38E38E39LL * ((v36 - 144) >> 4);
        if ( v36 != 144 )
        {
          v38 = v14 + 6;
          do
          {
            v39 = *((int **)v38 + 18);
            v46 = (char *)(v38 + 40);
            *(v38 - 6) = v38[30];
            *(v38 - 5) = v38[31];
            *(v38 - 4) = v38[32];
            *((_QWORD *)v38 - 1) = *((_QWORD *)v38 + 17);
            if ( v39 == v38 + 40 )
            {
              v47 = (unsigned int)v38[38];
              v48 = (unsigned int)v38[2];
              v49 = v38[38];
              if ( v47 <= v48 )
              {
                if ( v38[38] )
                  memmove(*(void **)v38, v39, 8 * v47);
              }
              else
              {
                if ( v47 > (unsigned int)v38[3] )
                {
                  v38[2] = 0;
                  sub_2237220(v38, v38 + 4, v47, 8);
                  v47 = (unsigned int)v38[38];
                  v50 = *(void **)v38;
                  v48 = 0;
                  v46 = *((char **)v38 + 18);
                  v51 = v46;
                }
                else
                {
                  v50 = *(void **)v38;
                  v51 = (char *)(v38 + 40);
                  if ( v38[2] )
                  {
                    v65 = 8 * v48;
                    memmove(v50, v51, 8 * v48);
                    v46 = *((char **)v38 + 18);
                    v47 = (unsigned int)v38[38];
                    v50 = (void *)(v65 + *(_QWORD *)v38);
                    v48 = v65;
                    v51 = &v46[v65];
                  }
                }
                v52 = 8 * v47;
                if ( v51 != &v46[v52] )
                  memcpy(v50, v51, v52 - v48);
              }
              v38[2] = v49;
              v38[38] = 0;
            }
            else
            {
              if ( *(int **)v38 != v38 + 4 )
              {
                free(*(void **)v38);
                v39 = *((int **)v38 + 18);
              }
              v40 = v38[38];
              *(_QWORD *)v38 = v39;
              *((_QWORD *)v38 + 18) = v46;
              v38[2] = v40;
              v41 = v38[39];
              v38[38] = 0;
              v38[3] = v41;
              v38[39] = 0;
            }
            a7 = (__m128)_mm_loadu_si128((const __m128i *)v38 + 11);
            a8 = (__m128)_mm_loadu_si128((const __m128i *)v38 + 12);
            v42 = _mm_loadu_si128((const __m128i *)v38 + 13);
            v43 = _mm_loadu_si128((const __m128i *)v38 + 14);
            v44 = _mm_loadu_si128((const __m128i *)v38 + 15);
            v45 = *((_QWORD *)v38 + 32);
            *((__m128 *)v38 + 2) = a7;
            *((__m128 *)v38 + 3) = a8;
            *((__m128i *)v38 + 4) = v42;
            *((__m128i *)v38 + 5) = v43;
            *((__m128i *)v38 + 6) = v44;
            *((_QWORD *)v38 + 14) = v45;
            v38 += 36;
            --v37;
          }
          while ( v37 );
          v12 = a1;
          v13 = *((_DWORD *)a11 + 34);
          v14 = (int *)a11[16];
        }
        v20 = v13 - 1;
        *((_DWORD *)a11 + 34) = v20;
        v21 = &v14[36 * v20];
        v22 = *((int **)v21 + 3);
        if ( v22 != v21 + 10 )
          free(v22);
        v23 = *((_DWORD *)a11 + 34);
        if ( v23 )
        {
          v24 = (__int64)a11[16];
          if ( *(_DWORD *)v24 == 2 )
          {
            v25 = 144;
            v26 = 16 * (9LL * (unsigned int)(v23 - 1) + 9);
            while ( 1 )
            {
              v27 = *(_DWORD **)(v24 + 64);
              if ( v27 && ((*v27 >> 14) & 0xC) == 0 )
              {
                if ( (*(_BYTE *)(v12[29] + 1) & 0x20) != 0 )
                {
                  v64 = (_QWORD *)v12[31];
                  v28 = sub_A63CE0(v64);
                  v68 = sub_AAC1F0((__int64)v64, v28, (__int64)v64, v29, v30);
                  if ( v68 > 0x40 )
                    sub_2205470(&v67, 0, 0);
                  else
                    v67 = nullptr;
                  v31 = (_QWORD *)v12[31];
                  v69 = 1;
                  v32 = sub_A63CE0(v31);
                  v33 = sub_1C0AEA0(v12, v27, v32, &v67, 4) & 0xFFFFFFFFFFFFFFFELL;
                  v34 = v68 <= 0x40;
                  *(_QWORD *)(v24 + 64) = v33;
                  if ( !v34 && v67 )
                  {
                    operator delete[](v67);
                    v33 = *(_QWORD *)(v24 + 64);
                  }
                }
                else
                {
                  v33 = sub_1915C50(v12, *(_QWORD *)(v24 + 64), 0, 4263, 1, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
                  *(_QWORD *)(v24 + 64) = v33;
                }
                if ( !v33 )
                  return 1;
              }
              if ( v25 != v26 )
              {
                v24 = (__int64)&a11[16][(unsigned __int64)v25 / 4];
                v25 += 144;
                if ( *(_DWORD *)v24 == 2 )
                  continue;
              }
              break;
            }
          }
        }
        v15 = 1;
        goto LABEL_3;
      }
      v53 = v14[1];
      v54 = a1 + 1;
      v55 = 3079;
    }
    sub_168B9F0((__int64)&v67, v54, v53, v55, 0);
    v66 = (int *)a11[11];
    sub_1587DB0((__int64)&v67, (__int64 *)&v66);
    sub_15F7200(&v67);
    return 1;
  }
LABEL_3:
  v16 = (void **)sub_1E85170(v12, a11);
  v17 = *v16;
  if ( ((_BYTE)a11[90] & 1) != 0 || ((**a11 >> 12) & 0x7F) == 0x45 )
    return 1;
  v18 = 0;
  if ( a12 )
  {
    if ( (*(_WORD *)a12 & 0x1FF) == 0x13 )
      v18 = sub_EEC8C0(a12, (__int64)a11, *(double *)a7.m128_u64);
  }
  LOBYTE(v57) = v15;
  return sub_19B7590(
           v12,
           ((unsigned __int64)*((unsigned int *)a11 + 23) << 32) | a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           (unsigned __int64)v17,
           v16,
           v56,
           v57,
           v18,
           a12);
}
