__int64 __fastcall sub_1744E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, double a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  bool v12; // zf
  __int64 v13; // rbp
  unsigned int v14; // r13d
  unsigned __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  int v30; // r13d
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rdx
  char *v41; // rcx
  __int64 v42; // rsi
  __int64 i; // rdx
  __int64 *v44; // rdx
  __int64 v45; // r13
  __int64 *v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rdi
  __int64 v49; // rsi
  unsigned int *v50; // rdi
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  int v54; // ebx
  unsigned int v55; // eax
  __int64 v56; // r14
  unsigned int v57; // r13d
  __int64 *v58; // rbx
  void **v59; // r15
  __int64 v60; // rdi
  unsigned __int64 v62; // [rsp+20h] [rbp-188h]
  unsigned __int64 v63; // [rsp+20h] [rbp-188h]
  void **v64; // [rsp+20h] [rbp-188h]
  unsigned __int64 v65; // [rsp+28h] [rbp-180h]
  unsigned __int64 v66; // [rsp+28h] [rbp-180h]
  __int64 v67; // [rsp+30h] [rbp-178h]
  void *v68; // [rsp+40h] [rbp-168h] BYREF
  char v69; // [rsp+48h] [rbp-160h]
  void *ptr; // [rsp+50h] [rbp-158h] BYREF
  __int64 v71; // [rsp+58h] [rbp-150h]
  _BYTE v72[256]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v73; // [rsp+160h] [rbp-48h]

  v8 = *(_QWORD *)a2;
  v9 = *(_QWORD *)a2 & 3LL;
  if ( v9 != 2 )
  {
    if ( v9 == 1 )
    {
      v54 = *(_DWORD *)(a1 + 12632);
      *(_DWORD *)(a1 + 12632) = 0;
      v55 = sub_1744E80(a1, (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL) + 8);
      *(_DWORD *)(a1 + 12632) = v54;
      return v55;
    }
    v10 = v8 & 0xFFFFFFFFFFFFFFFCLL;
    v11 = *(_QWORD *)(a3 + 56);
    v73 = 0;
    v12 = *(_BYTE *)(v10 + 32) == 0;
    ptr = v72;
    v71 = 0x800000000LL;
    if ( !v12 )
      goto LABEL_4;
    sub_1504FB0((__int64 *)&v68, *(_DWORD *)(v11 + 20) & 0x1FFFFFFF, 0);
    v18 = *(_QWORD *)v10;
    sub_1D3B390(a1, *(_QWORD *)v10, 0, 0, &v68);
    if ( ((unsigned __int8)v68 & 1) != 0 )
    {
      v23 = __popcountdi2(
              ((unsigned __int64)v68 >> 1) & ~(-1LL << ((unsigned __int64)v68 >> 58)),
              v18,
              v19,
              (unsigned __int64)v68 >> 58,
              v21,
              v22);
      v24 = v23 - 1LL;
      a2 = 32LL * v23;
    }
    else
    {
      v44 = *(__int64 **)v68;
      if ( *(_QWORD *)v68 == *(_QWORD *)v68 + 8LL * *((unsigned int *)v68 + 2) )
      {
        a2 = 0;
        v62 = sub_1744E40((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 0, 3u);
LABEL_18:
        v29 = (unsigned __int64)v68;
        v30 = *(_DWORD *)(v11 + 20) & 0x1FFFFFFF;
        if ( v30 )
        {
          v65 = v10;
          a2 = 0;
          v31 = 0;
          do
          {
            v28 = (unsigned int)v31;
            v35 = v29 & 1;
            v26 = (unsigned int)v31;
            if ( (v29 & 1) != 0 )
              v32 = (((v29 >> 1) & ~(-1LL << (v29 >> 58))) >> v31) & 1;
            else
              v32 = (*(_QWORD *)(*(_QWORD *)v29 + 8LL * ((unsigned int)v31 >> 6)) >> v31) & 1LL;
            if ( (_BYTE)v32 )
            {
              v33 = *(_QWORD *)(v11 + 8 * v31 + 24);
              v34 = 0;
              if ( a5[2] > (unsigned int)v31 )
              {
                v50 = &a5[8 * v31 + 4];
                if ( ((*v50 + 2147483642) & 0x7FFFFFFF) <= 1 )
                {
                  v34 = *(unsigned int *)((*(_QWORD *)&a5[8 * v31 + 10] & 0xFFFFFFFFFFFFFFFCLL) + 16);
                }
                else
                {
                  v67 = *(_QWORD *)(v11 + 8 * v31 + 24);
                  v51 = sub_F1E510((__int64)v50, a2, a6);
                  v33 = v67;
                  v34 = v51;
                }
              }
              sub_1D3ADE0(v62 + 32LL * (unsigned int)a2, a1, v33, v34);
              v29 = (unsigned __int64)v68;
              a2 = (unsigned int)(a2 + 1);
              v35 = (unsigned __int8)v68 & 1;
            }
            ++v31;
          }
          while ( v30 != (_DWORD)v31 );
          v10 = v65;
        }
        else
        {
          v35 = (unsigned __int8)v68 & 1;
        }
        if ( v35 )
        {
          v52 = __popcountdi2((v29 >> 1) & ~(-1LL << (v29 >> 58)), a2, v29 >> 1, v29 >> 58, v27, v28);
          a2 = v62;
          *(_BYTE *)(v10 + 32) = 1;
          *(_QWORD *)(v10 + 24) = v52;
          v53 = a5[2];
          *(_QWORD *)(v10 + 16) = v62;
          if ( v53 )
            goto LABEL_5;
          goto LABEL_12;
        }
        v56 = *(_QWORD *)v29 + 8LL * *(unsigned int *)(v29 + 8);
        if ( *(_QWORD *)v29 != v56 )
        {
          v66 = v10;
          v57 = 0;
          v58 = *(__int64 **)v29;
          v59 = (void **)v29;
          do
          {
            v60 = *v58++;
            v57 += __popcountdi2(v60, a2, v29, v26, v27, v28);
          }
          while ( (__int64 *)v56 != v58 );
          v10 = v66;
          v29 = (unsigned __int64)v59;
          v35 = v57;
        }
        *(_QWORD *)(v10 + 24) = v35;
        *(_BYTE *)(v10 + 32) = 1;
        *(_QWORD *)(v10 + 16) = v62;
        if ( v29 )
        {
          if ( *(_QWORD *)v29 != v29 + 16 )
          {
            v64 = (void **)v29;
            free(*(void **)v29);
            v29 = (unsigned __int64)v64;
          }
          a2 = 72;
          operator delete((void *)v29, 0x48u);
        }
LABEL_4:
        if ( a5[2] )
        {
LABEL_5:
          v13 = (__int64)(a5 + 4);
          v14 = sub_F1E510(v13, a2, a6);
          v15 = sub_F1E510(v13, a2, a6) >> 32;
          goto LABEL_6;
        }
LABEL_12:
        v14 = *a5;
        v15 = a5[1];
LABEL_6:
        sub_1DC37E0(&v68, a1, v14, *(_QWORD *)(v10 + 8), v14 | (v15 << 32));
        if ( v69 || (v16 = sub_1DD74F0(a1, *(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24), a4, &ptr), (_BYTE)v16) )
        {
          v16 = 1;
        }
        else
        {
          v36 = (unsigned int)v71;
          v37 = 32LL * (unsigned int)v71;
          v38 = sub_1744E40((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), v37, 3u);
          v39 = (_QWORD *)v38;
          if ( v36 )
          {
            do
            {
              *v39 &= 0xFFFFFFFE00000000LL;
              v39 += 4;
              *(v39 - 3) = 0;
              *(v39 - 1) = 0;
            }
            while ( (_QWORD *)(v37 + v38) != v39 );
          }
          v40 = (unsigned int)v71;
          v41 = (char *)ptr;
          v42 = 32LL * (unsigned int)v71;
          if ( v42 )
          {
            for ( i = 0; i != v42; i += 32 )
            {
              *(__m128i *)(v38 + i) = _mm_loadu_si128((const __m128i *)&v41[i]);
              *(__m128i *)(v38 + i + 16) = _mm_loadu_si128((const __m128i *)&v41[i + 16]);
            }
            v40 = (unsigned int)v71;
          }
          *(_QWORD *)(v10 + 16) = v38;
          *(_QWORD *)(v10 + 24) = v40;
          *(_BYTE *)(v10 + 32) = 1;
        }
        sub_1DBADA0(&v68);
        if ( ptr != v72 )
          free(ptr);
        return v16;
      }
      v63 = v10;
      LODWORD(v45) = 0;
      v46 = *(__int64 **)v68;
      v47 = *(_QWORD *)v68 + 8LL * *((unsigned int *)v68 + 2);
      do
      {
        v48 = *v46++;
        v45 = (unsigned int)__popcountdi2(v48, v18, v44, v20, v21, v22) + (unsigned int)v45;
      }
      while ( (__int64 *)v47 != v46 );
      v49 = v45;
      v10 = v63;
      v24 = v45 - 1;
      a2 = 32 * v49;
    }
    v25 = (_QWORD *)sub_1744E40((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), a2, 3u);
    v62 = (unsigned __int64)v25;
    if ( v24 != -1 )
    {
      v26 = (__int64)&v25[4 * v24 + 4];
      do
      {
        *v25 &= 0xFFFFFFFE00000000LL;
        v25 += 4;
        *(v25 - 3) = 0;
        *(v25 - 1) = 0;
      }
      while ( (_QWORD *)v26 != v25 );
    }
    goto LABEL_18;
  }
  v16 = sub_1744E80(a1, v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !(_BYTE)v16 )
    return (unsigned int)sub_1744E80(a1, (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  return v16;
}
