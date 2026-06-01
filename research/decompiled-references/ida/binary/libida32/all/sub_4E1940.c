unsigned __int64 __fastcall sub_4E1940(__int64 *a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  __m128i *v7; // r15
  __int64 v9; // r13
  unsigned __int64 *v10; // r14
  unsigned __int64 v13; // rdx
  __m128i *v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 *v17; // rax
  _QWORD *v18; // rsi
  __m128i *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r13
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  __m128i v29; // xmm0
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edi
  int v33; // esi
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  _QWORD *v39; // rdx
  __int64 *v40; // rsi
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(__m128i **)a2;
  v46 = __readfsqword(0x28u);
  v9 = 8 * v6;
  v10 = (unsigned __int64 *)v7 + v6;
  if ( v7 != (__m128i *)v10 )
  {
    if ( v9 >> 3 )
    {
      _BitScanReverse64(&v13, v9 >> 3);
      sub_4DD200(v7, v10, 2LL * (int)v13, a4, a5, a6);
      if ( v9 > 128 )
      {
        v14 = v7 + 8;
        sub_4DCDA0(v7->m128i_i8, v7[8].m128i_i8);
        do
        {
          while ( 1 )
          {
            v15 = v14->m128i_i64[0];
            v16 = v14[-1].m128i_u64[1];
            v17 = &v14[-1].m128i_i64[1];
            if ( v14->m128i_i64[0] < v16 )
              break;
            v40 = (__int64 *)v14;
            v14 = (__m128i *)((char *)v14 + 8);
            *v40 = v15;
            if ( v10 == (unsigned __int64 *)v14 )
              goto LABEL_8;
          }
          do
          {
            v17[1] = v16;
            v18 = v17;
            v16 = *--v17;
          }
          while ( v15 < v16 );
          v14 = (__m128i *)((char *)v14 + 8);
          *v18 = v15;
        }
        while ( v10 != (unsigned __int64 *)v14 );
LABEL_8:
        v19 = *(__m128i **)a2;
        v20 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)a2 == v20 )
        {
          if ( !a1[1] )
            return v46 - __readfsqword(0x28u);
          v26 = 0;
          goto LABEL_37;
        }
        v21 = *(_QWORD *)a2;
        while ( 1 )
        {
          v22 = (_QWORD *)v21;
          v21 += 8;
          if ( v20 == v21 )
            break;
          if ( *(_QWORD *)(v21 - 8) == v22[1] )
          {
            if ( (_QWORD *)v20 == v22 )
            {
              v21 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
            }
            else
            {
              v39 = v22 + 2;
              if ( (_QWORD *)v20 != v22 + 2 )
              {
                do
                {
                  if ( *v22 != *v39 )
                  {
                    v22[1] = *v39;
                    ++v22;
                  }
                  ++v39;
                }
                while ( (_QWORD *)v20 != v39 );
                v19 = *(__m128i **)a2;
              }
              v21 = (__int64)(v22 + 1);
            }
            break;
          }
        }
        v23 = a1[1];
        v24 = (v21 - (__int64)v19) >> 3;
        v25 = v24;
        v26 = v24;
        if ( v24 == v23 )
        {
LABEL_38:
          if ( !v26 )
            return v46 - __readfsqword(0x28u);
          goto LABEL_21;
        }
        v45.m128i_i64[0] = 0xFFFFFFFFLL;
        v45.m128i_i64[1] = 0xFFFFFFFFLL;
        if ( v24 >= v23 )
        {
          v27 = *a1;
          v28 = a1[2];
          if ( (unsigned __int64)&v45 >= *a1 && (unsigned __int64)&v45 < v27 + 16 * v28 )
          {
            if ( v28 < v24 )
            {
              v44 = qvector_reserve(a1, v27, v24, 16);
              *a1 = v44;
              v27 = v44;
              v23 = a1[1];
              if ( v23 >= v25 )
              {
                a1[1] = v25;
LABEL_21:
                v31 = 0;
                do
                {
                  v32 = *(_DWORD *)(a3 + 8);
                  v33 = *(unsigned __int16 *)(a3 + 12);
                  v34 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v31);
                  v35 = 0;
                  if ( *(_BYTE *)(a3 + 49) == 5 )
                    v35 = *(_BYTE *)(a3 + 73) == 0;
                  v36 = v31++;
                  v37 = *a1 + 16 * v36;
                  *(_QWORD *)v37 = v34;
                  *(_DWORD *)(v37 + 8) = v32;
                  *(_DWORD *)(v37 + 12) = v33 | (v35 << 16);
                }
                while ( v31 != v26 );
                return v46 - __readfsqword(0x28u);
              }
            }
            else if ( v23 >= v24 )
            {
              goto LABEL_37;
            }
            while ( 1 )
            {
              v41 = v23++;
              v42 = (_QWORD *)(16 * v41 + v27);
              *v42 = 0xFFFFFFFFLL;
              v42[1] = 0xFFFFFFFFLL;
              if ( v25 == v23 )
                break;
              v27 = *a1;
            }
LABEL_20:
            a1[1] = v25;
            goto LABEL_21;
          }
          if ( v28 < v24 )
          {
            v43 = qvector_reserve(a1, v27, v24, 16);
            *a1 = v43;
            v27 = v43;
            v23 = a1[1];
            if ( v23 >= v25 )
              goto LABEL_20;
LABEL_17:
            v29 = _mm_load_si128(&v45);
            while ( 1 )
            {
              v30 = v23++;
              *(__m128i *)(v27 + 16 * v30) = v29;
              if ( v25 == v23 )
                break;
              v27 = *a1;
            }
            goto LABEL_20;
          }
          if ( v23 < v24 )
            goto LABEL_17;
        }
LABEL_37:
        a1[1] = v26;
        goto LABEL_38;
      }
    }
    else
    {
      sub_4DD200(v7, v10, -2, a4, a5, a6);
    }
    sub_4DCDA0(v7->m128i_i8, (char *)v10);
    goto LABEL_8;
  }
  if ( a1[1] )
    a1[1] = 0;
  return v46 - __readfsqword(0x28u);
}

