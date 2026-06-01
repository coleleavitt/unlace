__int64 __fastcall sub_B9B890(
        int *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int *v9; // r15
  unsigned int v11; // ebp
  unsigned int *v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rsi
  _DWORD *v16; // rbx
  __int64 v17; // rax
  int *v18; // rcx
  int v19; // r12d
  unsigned int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // r14
  _QWORD *v23; // rdi
  char v24; // al
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rbx
  _QWORD *v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // r10
  unsigned __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // [rsp+0h] [rbp-B8h]
  int *v47; // [rsp+8h] [rbp-B0h]
  int v48; // [rsp+10h] [rbp-A8h]
  __int64 v49; // [rsp+10h] [rbp-A8h]
  int v50; // [rsp+18h] [rbp-A0h]
  int *v51; // [rsp+18h] [rbp-A0h]
  int v52; // [rsp+20h] [rbp-98h]
  void *v53; // [rsp+28h] [rbp-90h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int64 v55; // [rsp+38h] [rbp-80h]
  int v56[30]; // [rsp+40h] [rbp-78h] BYREF

  v9 = a1;
  if ( !*((_WORD *)a2 + 2) && (*((_BYTE *)a2 + 30) & 1) != 0 )
  {
    v35 = *((_QWORD *)a1 + 11);
    v36 = *(_QWORD *)a1;
    v37 = *((_QWORD *)a1 + 9);
    v20 = *(_DWORD *)(v35 + 24);
    v38 = *(__int64 **)(*(_QWORD *)a1 + 7472LL);
    *(_DWORD *)(v35 + 24) = v20 + 1;
    v39 = sub_952CC0(v38, v37);
    sub_B6F6E0(v36, (__int64)a2, 0, v39, a7, a8, a9);
    v40 = *(_QWORD *)(*(_QWORD *)(v36 + 8656) + 8LL * *a2);
    v41 = (_QWORD *)sub_180C100(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), 32);
    *(_DWORD *)v41 = 29;
    v41[1] = 0;
    *((_DWORD *)v41 + 4) = v20;
    v41[3] = v40;
    src = v41;
    sub_B9B7D0((_QWORD *)v9 + 21, &src);
  }
  else
  {
    v11 = a2[6];
    v47 = v56;
    src = v56;
    v55 = 0x1000000000LL;
    if ( v11 )
    {
      v12 = a2;
      v46 = (__int64)&a2[2 * v11];
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 + 4);
        if ( *(_WORD *)(v13 + 4) == 1 )
        {
          v15 = *(unsigned int *)(*((_QWORD *)v9 + 8) + 4LL * *(unsigned int *)(v13 + 16));
          if ( (_DWORD)v15 == -1 )
          {
            a1 = (int *)sub_180B150(a1, v15);
            std::__ostream_insert<char,std::char_traits<char>>();
            LODWORD(v15) = *(_DWORD *)(*((_QWORD *)v9 + 8) + 4LL * *(unsigned int *)(v13 + 16));
          }
          a3 = v55;
          if ( (unsigned int)v55 >= HIDWORD(v55) )
          {
            v48 = v15;
            v26 = (unsigned int)(2 * HIDWORD(v55));
            v27 = sub_186B270(4 * v26);
            a3 = v55;
            a1 = (int *)src;
            v16 = (_DWORD *)v27;
            if ( (_DWORD)v55 )
            {
              if ( (unsigned int)(v55 - 1) <= 2 || (unsigned __int64)(v27 - ((_QWORD)src + 4)) <= 8 )
              {
                v42 = 0;
                v43 = 4LL * (unsigned int)v55;
                do
                {
                  LODWORD(a6) = a1[v42 / 4];
                  v16[v42 / 4] = a6;
                  v42 += 4LL;
                }
                while ( v42 != v43 );
              }
              else
              {
                v28 = 0;
                a6 = 16LL * ((unsigned int)v55 >> 2);
                do
                {
                  *(__m128i *)&v16[v28 / 4] = _mm_loadu_si128((const __m128i *)&a1[v28 / 4]);
                  v28 += 16LL;
                }
                while ( v28 != a6 );
                v29 = a3 & 0xFFFFFFFC;
                if ( (a3 & 3) != 0 )
                {
                  v16[v29] = a1[v29];
                  a6 = v29 + 1;
                  if ( (unsigned int)a6 < a3 )
                  {
                    v30 = v29 + 2;
                    v16[a6] = a1[a6];
                    if ( (unsigned int)v30 < a3 )
                    {
                      LODWORD(a6) = a1[v30];
                      v16[v30] = a6;
                    }
                  }
                }
              }
            }
            if ( a1 != v47 && a1 )
              goto LABEL_29;
            goto LABEL_30;
          }
        }
        else
        {
          a1 = v9;
          v14 = sub_B9B890((int)v9, *((_QWORD *)v12 + 4), a3, a4, a5, a6, v46, (int)v47, v48, v50, v52, v53);
          a3 = v55;
          LODWORD(v15) = v14;
          if ( (unsigned int)v55 >= HIDWORD(v55) )
          {
            v48 = v14;
            v26 = (unsigned int)(2 * HIDWORD(v55));
            v31 = sub_186B270(4 * v26);
            a3 = v55;
            a1 = (int *)src;
            v16 = (_DWORD *)v31;
            LODWORD(v15) = v48;
            if ( (_DWORD)v55 )
            {
              if ( (unsigned int)(v55 - 1) <= 2 || (unsigned __int64)(v31 - ((_QWORD)src + 4)) <= 8 )
              {
                v44 = 0;
                v45 = 4LL * (unsigned int)v55;
                do
                {
                  LODWORD(a6) = a1[v44 / 4];
                  v16[v44 / 4] = a6;
                  v44 += 4LL;
                }
                while ( v44 != v45 );
              }
              else
              {
                v32 = 0;
                a6 = 16LL * ((unsigned int)v55 >> 2);
                do
                {
                  *(__m128i *)&v16[v32 / 4] = _mm_loadu_si128((const __m128i *)&a1[v32 / 4]);
                  v32 += 16LL;
                }
                while ( v32 != a6 );
                v33 = a3 & 0xFFFFFFFC;
                if ( (a3 & 3) != 0 )
                {
                  v16[v33] = a1[v33];
                  a6 = v33 + 1;
                  if ( (unsigned int)a6 < a3 )
                  {
                    v34 = v33 + 2;
                    v16[a6] = a1[a6];
                    if ( (unsigned int)v34 < a3 )
                    {
                      LODWORD(a6) = a1[v34];
                      v16[v34] = a6;
                    }
                  }
                }
              }
            }
            if ( a1 )
            {
              if ( a1 == v47 )
              {
                src = v16;
                HIDWORD(v55) = v26;
                goto LABEL_8;
              }
LABEL_29:
              v48 = v15;
              sub_186B220(a1);
              a3 = v55;
            }
LABEL_30:
            src = v16;
            HIDWORD(v55) = v26;
            goto LABEL_8;
          }
        }
        v16 = src;
LABEL_8:
        v12 += 2;
        v16[a3] = v15;
        LODWORD(v55) = v55 + 1;
        if ( v12 == (unsigned int *)v46 )
          goto LABEL_9;
      }
    }
    v16 = v56;
LABEL_9:
    v17 = *((_QWORD *)v9 + 11);
    v18 = *((int **)a2 + 2);
    v19 = 7;
    v20 = *(_DWORD *)(v17 + 24);
    if ( v11 <= 7 )
      v19 = v11;
    v51 = v18;
    *(_DWORD *)(v17 + 24) = v20 + 1;
    v49 = *((_QWORD *)v9 + 2);
    v21 = sub_180C100(*(_QWORD *)(v49 + 16), 4 * v11 + 40);
    *(_DWORD *)v21 = v19 + 29;
    v22 = v21;
    *(_QWORD *)(v21 + 24) = 0;
    *(_QWORD *)(v21 + 8) = 0;
    v23 = *(_QWORD **)v49;
    *(_QWORD *)(v21 + 16) = v51;
    v24 = sub_B9B270(v23, v51);
    *(_DWORD *)(v22 + 36) = v20;
    *(_QWORD *)(v22 + 24) |= 1LL << v24;
    *(_WORD *)(v22 + 32) = v11;
    memcpy((void *)(v22 + 40), v16, 4LL * v11);
    v53 = (void *)v22;
    sub_B9B7D0((_QWORD *)v9 + 21, &v53);
    if ( src != v47 && src )
      sub_186B220(src);
  }
  return v20;
}

