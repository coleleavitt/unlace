__int64 __fastcall sub_491670(const __m128i *a1, __int64 a2, int a3, __int64 *a4, __int64 *a5)
{
  _DWORD *v5; // rax
  __int64 v7; // rdx
  unsigned int v9; // esi
  __int64 *v11; // r13
  __int64 v12; // r15
  _BYTE *v13; // r10
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r13
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 *v22; // r15
  _BYTE *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE *v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rbp
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  void *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdi
  bool v39; // zf
  void *v40; // rdi
  _BYTE *v41; // r15
  __int64 v42; // rbx
  __int64 v43; // rbp
  unsigned __int64 v44; // r14
  __int64 v45; // rax
  void *v46; // r13
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  _BYTE *v54; // [rsp+0h] [rbp-108h]
  _BYTE *v55; // [rsp+0h] [rbp-108h]
  __int64 v56; // [rsp+0h] [rbp-108h]
  __m128i v57; // [rsp+0h] [rbp-108h]
  int v58; // [rsp+18h] [rbp-F0h]
  __int64 *dest; // [rsp+20h] [rbp-E8h]
  __int64 *desta; // [rsp+20h] [rbp-E8h]
  _BYTE *src; // [rsp+38h] [rbp-D0h]
  _BYTE *srca; // [rsp+38h] [rbp-D0h]
  _BYTE *v63; // [rsp+40h] [rbp-C8h]
  _BYTE *v64; // [rsp+40h] [rbp-C8h]
  unsigned int v65; // [rsp+48h] [rbp-C0h]
  unsigned int v66; // [rsp+48h] [rbp-C0h]
  _BYTE v67[184]; // [rsp+50h] [rbp-B8h] BYREF

  v5 = *(_DWORD **)(a2 + 24);
  if ( !v5 )
    return 5;
  LODWORD(v7) = *v5;
  v9 = 5;
  if ( *v5 == 5 )
  {
    if ( v5[1] == 6 )
    {
      v64 = v67;
      if ( a3 )
      {
        v19 = a4;
        LODWORD(v20) = 16;
        LODWORD(v21) = 0;
        v22 = &a4[a3];
        v23 = v67;
        while ( 1 )
        {
          v24 = *v19;
          v25 = (unsigned int)v21;
          ++v19;
          v21 = (unsigned int)(v21 + 1);
          *(_QWORD *)&v23[8 * v25] = v24;
          v66 = v21;
          if ( v19 == v22 )
            break;
          if ( (unsigned int)v21 >= (unsigned int)v20 )
          {
            v20 = (unsigned int)(2 * v20);
            v26 = sub_186B270(8 * v20);
            LODWORD(v21) = v66;
            v23 = (_BYTE *)v26;
            if ( v66 )
            {
              if ( v66 - 1 <= 2 || (_BYTE *)v26 == v64 + 8 )
              {
                v52 = 0;
                do
                {
                  *(_QWORD *)&v23[v52] = *(_QWORD *)&v64[v52];
                  v52 += 8;
                }
                while ( v52 != 8LL * v66 );
              }
              else
              {
                v27 = 0;
                do
                {
                  *(__m128i *)&v23[v27] = _mm_loadu_si128((const __m128i *)&v64[v27]);
                  v27 += 16;
                }
                while ( v27 != 16LL * (v66 >> 1) );
                if ( (v66 & 1) != 0 )
                  *(_QWORD *)&v23[8 * (v66 & 0xFFFFFFFE)] = *(_QWORD *)&v64[8 * (v66 & 0xFFFFFFFE)];
              }
            }
            if ( v64 != v67 && v64 )
            {
              v55 = v23;
              sub_186B220(v64);
              LODWORD(v21) = v66;
              v23 = v55;
            }
            v64 = v23;
          }
        }
        v28 = &v23[8 * v21];
        if ( v28 != v23 )
        {
          v58 = a3;
          dest = a5;
          v56 = a1[1].m128i_i64[1];
          v29 = (((8 * v21) >> 3) + 1) >> 1;
          v30 = v29;
          while ( 1 )
          {
            v31 = 8 * v29;
            src = v23;
            v32 = operator new(8 * v29, (const std::nothrow_t *)&std::nothrow);
            v23 = src;
            v33 = (void *)v32;
            if ( v32 )
              break;
            if ( v29 == 1 )
            {
              a3 = v58;
              a5 = dest;
              v31 = 0;
              sub_4948D0(src, v28, v56);
              goto LABEL_42;
            }
            v29 = (v29 + 1) >> 1;
          }
          v34 = v30;
          v35 = v29;
          a3 = v58;
          a5 = dest;
          if ( v34 == v35 )
          {
            sub_497480(src);
            sub_497480(&src[v31]);
            sub_493A80(src);
          }
          else
          {
            sub_497F10(src);
          }
LABEL_42:
          operator delete(v33, v31);
          v23 = v64;
        }
        if ( a3 == 1 )
        {
          v36 = *(_QWORD *)v23;
          if ( !*(_WORD *)(*(_QWORD *)v23 + 4LL) )
            goto LABEL_46;
        }
      }
      v36 = sub_15E1AF0(a1->m128i_i64[1]);
      if ( v36 )
LABEL_46:
        ++*(_DWORD *)(v36 + 8);
      v37 = *a5;
      if ( *a5 )
      {
        v38 = a5[1];
        v39 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v39 )
          sub_15D7BC0(v38, v37);
      }
      v40 = v64;
      *a5 = v36;
      if ( v64 == v67 || !v64 )
        return 4;
LABEL_52:
      sub_186B220(v40);
      return 4;
    }
  }
  else if ( !(_DWORD)v7 && v5[1] == 5 )
  {
    v63 = v67;
    if ( a3 )
    {
      v11 = a4;
      LODWORD(v12) = 16;
      v13 = v67;
      v14 = &a4[a3];
      while ( 1 )
      {
        v15 = *v11;
        v16 = (unsigned int)v7;
        ++v11;
        v7 = (unsigned int)(v7 + 1);
        *(_QWORD *)&v13[8 * v16] = v15;
        v65 = v7;
        if ( v14 == v11 )
          break;
        if ( (unsigned int)v7 >= (unsigned int)v12 )
        {
          v12 = (unsigned int)(2 * v12);
          v17 = sub_186B270(8 * v12);
          LODWORD(v7) = v65;
          v13 = (_BYTE *)v17;
          if ( v65 )
          {
            if ( v65 - 1 <= 2 || (_BYTE *)v17 == v63 + 8 )
            {
              v53 = 0;
              do
              {
                *(_QWORD *)&v13[v53] = *(_QWORD *)&v63[v53];
                v53 += 8;
              }
              while ( 8LL * v65 != v53 );
            }
            else
            {
              v18 = 0;
              do
              {
                *(__m128i *)&v13[v18] = _mm_loadu_si128((const __m128i *)&v63[v18]);
                v18 += 16;
              }
              while ( 16LL * (v65 >> 1) != v18 );
              if ( (v65 & 1) != 0 )
                *(_QWORD *)&v13[8 * (v65 & 0xFFFFFFFE)] = *(_QWORD *)&v63[8 * (v65 & 0xFFFFFFFE)];
            }
          }
          if ( v63 != v67 && v63 )
          {
            v54 = v13;
            sub_186B220(v63);
            LODWORD(v7) = v65;
            v13 = v54;
          }
          v63 = v13;
        }
      }
      v41 = &v13[8 * v7];
      if ( v41 != v13 )
      {
        desta = a5;
        v57 = _mm_loadu_si128(a1 + 2);
        v42 = (((8 * v7) >> 3) + 1) >> 1;
        v43 = v42;
        while ( 1 )
        {
          v44 = 8 * v42;
          srca = v13;
          v45 = operator new(8 * v42, (const std::nothrow_t *)&std::nothrow);
          v13 = srca;
          v46 = (void *)v45;
          if ( v45 )
            break;
          if ( v42 == 1 )
          {
            a5 = desta;
            v44 = 0;
            sub_495960(srca, v41, v57.m128i_i64[0], v57.m128i_i64[1]);
            goto LABEL_59;
          }
          v42 = (v42 + 1) >> 1;
        }
        v47 = v43;
        a5 = desta;
        if ( v47 == v42 )
        {
          sub_498450(srca);
          sub_498450(&srca[v44]);
          sub_494DE0(srca);
        }
        else
        {
          sub_498E30(srca, v41, v45, v42, v57.m128i_i64[0], v57.m128i_i64[1]);
        }
LABEL_59:
        operator delete(v46, v44);
      }
    }
    v48 = sub_15E1AF0(a1->m128i_i64[0]);
    v49 = v48;
    if ( v48 )
      ++*(_DWORD *)(v48 + 8);
    v50 = *a5;
    if ( *a5 )
    {
      v51 = a5[1];
      v39 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v51, v50);
    }
    v40 = v63;
    *a5 = v49;
    if ( v63 == v67 || !v63 )
      return 4;
    goto LABEL_52;
  }
  return v9;
}

