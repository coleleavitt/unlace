unsigned __int64 __fastcall sub_2BFAA0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // r12
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  const __m128i *v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  size_t v26; // rbp
  void *v27; // r14
  __int64 v28; // rbx
  size_t v29; // r12
  __int64 v30; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // r14
  __int64 *v43; // r12
  __int64 v44; // rdi
  __int64 v45; // r15
  __int64 v46; // r14
  __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // [rsp+0h] [rbp-C8h]
  const __m128i *v51; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v52; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v54; // [rsp+0h] [rbp-C8h]
  const __m128i *v56; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+8h] [rbp-C0h]
  __int64 *v59; // [rsp+18h] [rbp-B0h]
  _QWORD *v60; // [rsp+20h] [rbp-A8h]
  _QWORD *v61; // [rsp+28h] [rbp-A0h]
  const __m128i *v62; // [rsp+30h] [rbp-98h]
  unsigned int v63; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int64 v64; // [rsp+40h] [rbp-88h]
  _QWORD *v65; // [rsp+48h] [rbp-80h]
  __int64 v66; // [rsp+50h] [rbp-78h] BYREF
  __int128 v67; // [rsp+58h] [rbp-70h]
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-50h]
  unsigned __int64 v70; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v3 = a1[5];
  v70 = __readfsqword(0x28u);
  v59 = a1 + 5;
  if ( v3 )
  {
    if ( a1[6] )
    {
      v50 = a1[6];
      v4 = 0;
      do
      {
        v5 = (__int64 *)(v3 + 24 * v4);
        v6 = *v5;
        if ( *v5 )
        {
          v7 = v5[1];
          if ( v7 )
          {
            v8 = 0;
            v9 = 0;
            do
            {
              v10 = v6 + v8;
              ++v9;
              v8 += 112;
              sub_119360(v10 + 88);
              sub_119360(v10 + 72);
              sub_119360(v10 + 56);
              v6 = *v5;
            }
            while ( v7 != v9 );
          }
          v5[1] = 0;
          qfree(v6);
          v3 = a1[5];
        }
        ++v4;
      }
      while ( v50 != v4 );
      v2 = a1;
    }
    v2[6] = 0;
    qfree(v3);
    v2[5] = 0;
    v2[7] = 0;
  }
  v11 = (_QWORD *)v2[8];
  v12 = (_QWORD *)*v11;
  if ( *v11 )
  {
    if ( v11[1] )
    {
      v13 = (_QWORD *)v12[1];
      if ( v12 != v13 )
      {
        while ( 1 )
        {
LABEL_15:
          v14 = v2[5];
          v15 = v2[6];
          v16 = (const __m128i *)(v13 + 3);
          v17 = *((int *)v13 + 34);
          v18 = v14;
          v19 = *((_DWORD *)v13 + 34);
          if ( v17 >= v15 )
          {
            v33 = (int)v17 + 1;
            if ( v15 != v33 )
            {
              v66 = 0;
              v67 = 0;
              if ( v33 < v15 )
              {
                v52 = v15;
                v62 = (const __m128i *)(v13 + 3);
                v63 = v17;
                v64 = (int)v17 + 1;
                v65 = v13;
                v60 = v2;
                v61 = v12;
                v42 = v64;
                do
                {
                  v43 = (__int64 *)(v14 + 24 * v42);
                  v44 = *v43;
                  if ( *v43 )
                  {
                    if ( v43[1] )
                    {
                      v57 = v42;
                      v45 = 0;
                      v46 = 0;
                      v47 = v43[1];
                      do
                      {
                        v48 = v44 + v46;
                        ++v45;
                        v46 += 112;
                        sub_119360(v48 + 88);
                        sub_119360(v48 + 72);
                        sub_119360(v48 + 56);
                        v44 = *v43;
                      }
                      while ( v47 != v45 );
                      v42 = v57;
                    }
                    v43[1] = 0;
                    qfree(v44);
                    v14 = v60[5];
                  }
                  ++v42;
                }
                while ( v42 < v52 );
                v2 = v60;
                v18 = v14;
                v12 = v61;
                v16 = v62;
                v19 = v63;
                v13 = v65;
                v60[6] = v64;
              }
              else
              {
                v34 = v2[7];
                if ( (unsigned __int64)&v66 >= v14 && (unsigned __int64)&v66 < v14 + 24 * v34 )
                {
                  src = nullptr;
                  *(_OWORD *)n = 0;
                  if ( v34 < v33 )
                  {
                    v54 = v33;
                    v18 = qvector_reserve(v59, v14, v33, 24);
                    v15 = v2[6];
                    v16 = (const __m128i *)(v13 + 3);
                    v2[5] = v18;
                    v33 = v54;
                  }
                  if ( v15 < v33 )
                  {
                    v35 = 24 * v15;
                    do
                    {
                      v36 = v35 + v18;
                      ++v15;
                      v35 += 24;
                      *(_QWORD *)v36 = 0;
                      *(_OWORD *)(v36 + 8) = 0;
                      v18 = v2[5];
                    }
                    while ( v33 != v15 );
                  }
LABEL_38:
                  v2[6] = v33;
                  goto LABEL_16;
                }
                if ( v34 < v33 )
                {
                  v53 = v33;
                  v18 = qvector_reserve(v59, v14, v33, 24);
                  v15 = v2[6];
                  v16 = (const __m128i *)(v13 + 3);
                  v2[5] = v18;
                  v33 = v53;
                }
                if ( v15 >= v33 )
                  goto LABEL_38;
                v40 = 24 * v15;
                do
                {
                  v41 = v40 + v18;
                  ++v15;
                  v40 += 24;
                  *(_QWORD *)v41 = 0;
                  *(_OWORD *)(v41 + 8) = 0;
                  v18 = v2[5];
                }
                while ( v33 != v15 );
                v2[6] = v33;
              }
            }
          }
LABEL_16:
          v20 = (__int64 *)(v18 + 24LL * v19);
          v21 = v20[1];
          v22 = *v20;
          if ( v20[2] < (unsigned __int64)(v21 + 1) )
          {
            v51 = v16;
            v32 = qvector_reserve(v20, v22, v21 + 1, 112);
            v21 = v20[1];
            v16 = v51;
            *v20 = v32;
            v22 = v32;
          }
          v56 = v16;
          v23 = v22 + 112 * v21;
          *(_QWORD *)v23 = -1;
          *(_QWORD *)(v23 + 8) = 0;
          *(_DWORD *)(v23 + 16) = -1;
          *(_QWORD *)(v23 + 56) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 64) = 0;
          *(_QWORD *)(v23 + 72) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 80) = 0;
          *(_QWORD *)(v23 + 88) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v23 + 96) = 0;
          sub_32C520(v23 + 24, -1);
          *(_DWORD *)(v23 + 104) = 0;
          ++v20[1];
          *(__m128i *)v23 = _mm_loadu_si128(v56);
          *(_DWORD *)(v23 + 16) = v56[1].m128i_i32[0];
          sub_121960(v23 + 24, (__int64)&v56[1].m128i_i64[1]);
          *(_DWORD *)(v23 + 104) = v56[6].m128i_i32[2];
          if ( (*v13 & 2) != 0 )
            goto LABEL_21;
          v24 = (_QWORD *)v13[2];
          if ( (*(_BYTE *)v24 & 2) != 0 )
          {
            v37 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
            v38 = *v37;
            if ( (*v37 & 2) == 0 )
            {
              while ( v13 == (_QWORD *)v37[2] )
              {
                v13 = v37;
                v39 = v38 & 0xFFFFFFFFFFFFFFFCLL;
                v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v38 & 2) != 0 )
                {
                  v13 = (_QWORD *)v39;
                  if ( v12 != (_QWORD *)v39 )
                    goto LABEL_15;
                  goto LABEL_22;
                }
                v37 = (_QWORD *)v39;
              }
            }
            v13 = v37;
            if ( v12 == v37 )
              break;
          }
          else
          {
            do
            {
              v13 = v24;
              v24 = (_QWORD *)v24[1];
            }
            while ( (*(_BYTE *)v24 & 2) == 0 );
LABEL_21:
            if ( v12 == v13 )
              break;
          }
        }
      }
    }
  }
LABEL_22:
  v25 = v2[1];
  src = nullptr;
  v2[3] = v59;
  *(_OWORD *)n = 0;
  sub_2B45E0((__int64 *)&src, v59, v25);
  v26 = n[0];
  v27 = src;
  v28 = a2[1];
  v29 = n[0];
  if ( v28 )
  {
    --v28;
    v29 = n[0] + v28;
  }
  v30 = *a2;
  if ( a2[2] < v29 + 1 )
  {
    v49 = qvector_reserve(a2, v30, v29 + 1, 1);
    *a2 = v49;
    v30 = v49;
  }
  a2[1] = v29 + 1;
  *(_BYTE *)(v30 + v29) = 0;
  memmove((void *)(*a2 + v28), v27, v26);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v70 - __readfsqword(0x28u);
}
