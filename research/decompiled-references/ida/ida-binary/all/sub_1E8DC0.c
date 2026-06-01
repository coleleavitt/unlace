unsigned __int64 __fastcall sub_1E8DC0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  _QWORD *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __m128i v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+8h] [rbp-D0h]
  __int128 v28; // [rsp+10h] [rbp-C8h]
  __int64 v29; // [rsp+20h] [rbp-B8h]
  __int128 v30; // [rsp+28h] [rbp-B0h]
  __m128i v31; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-90h]
  int v33; // [rsp+50h] [rbp-88h]
  __int64 v34; // [rsp+58h] [rbp-80h]
  __int128 v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+70h] [rbp-68h]
  __int128 v37; // [rsp+78h] [rbp-60h]
  __m128i v38; // [rsp+88h] [rbp-50h] BYREF
  int v39; // [rsp+98h] [rbp-40h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-30h]

  v6 = *(int *)(a1 + 40);
  v40 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v6 != v7 )
  {
    v26 = 0;
    v27 = 0;
    v29 = 0;
    LODWORD(v32) = 0;
    v28 = 0;
    v30 = 0;
    v31 = 0;
    if ( v6 >= v7 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 32);
      v11 = a1 + 16;
      if ( (unsigned __int64)&v26 < v9 || (unsigned __int64)&v26 >= v9 + 80 * v10 )
      {
        if ( v10 >= v6
          || (v9 = qvector_reserve(v11, *(_QWORD *)(a1 + 16), v6, 80),
              v7 = *(_QWORD *)(a1 + 24),
              *(_QWORD *)(a1 + 16) = v9,
              v7 < v6) )
        {
          v23 = _mm_loadu_si128(&v31);
          v24 = 80 * v7;
          while ( 1 )
          {
            v25 = v24 + v9;
            ++v7;
            v24 += 80;
            *(_DWORD *)v25 = 0;
            *(_QWORD *)(v25 + 8) = 0;
            *(_QWORD *)(v25 + 32) = 0;
            *(_DWORD *)(v25 + 72) = 0;
            *(_OWORD *)(v25 + 16) = 0;
            *(_OWORD *)(v25 + 40) = 0;
            *(__m128i *)(v25 + 56) = v23;
            if ( v6 == v7 )
              break;
            v9 = *(_QWORD *)(a1 + 16);
          }
        }
      }
      else
      {
        v35 = 0;
        v37 = 0;
        v12 = _mm_loadu_si128(&v31);
        v33 = 0;
        v34 = 0;
        v36 = 0;
        v39 = 0;
        v38 = v12;
        if ( v10 >= v6
          || (v9 = qvector_reserve(v11, v9, v6, 80), v7 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16) = v9, v7 < v6) )
        {
          v13 = _mm_loadu_si128(&v38);
          v14 = 80 * v7;
          while ( 1 )
          {
            v15 = v14 + v9;
            ++v7;
            v14 += 80;
            *(_DWORD *)v15 = 0;
            *(_QWORD *)(v15 + 8) = 0;
            *(_QWORD *)(v15 + 32) = 0;
            *(_DWORD *)(v15 + 72) = 0;
            *(_OWORD *)(v15 + 16) = 0;
            *(_OWORD *)(v15 + 40) = 0;
            *(__m128i *)(v15 + 56) = v13;
            if ( v6 == v7 )
              break;
            v9 = *(_QWORD *)(a1 + 16);
          }
        }
      }
      *(_QWORD *)(a1 + 24) = v6;
LABEL_17:
      v20 = 0;
      v21 = 0;
      do
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 80 * v21) = v20++;
        v21 = v20;
      }
      while ( (unsigned __int64)v20 < *(_QWORD *)(a1 + 24) );
      return v40 - __readfsqword(0x28u);
    }
    v16 = v6;
    do
    {
      v17 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 80 * v16);
      v18 = v17[4];
      if ( v18 )
      {
        v17[5] = 0;
        qfree(v18, a2, a3, a4, a5, a6, v26, v27, v28, v29, v30, *(_OWORD *)&v31, v32);
      }
      v19 = v17[1];
      if ( v19 )
      {
        v17[2] = 0;
        qfree(v19, a2);
      }
      ++v16;
    }
    while ( v16 < v7 );
    *(_QWORD *)(a1 + 24) = v6;
    if ( v6 )
      goto LABEL_17;
  }
  return v40 - __readfsqword(0x28u);
}
