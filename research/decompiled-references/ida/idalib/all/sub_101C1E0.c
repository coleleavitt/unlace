__int64 __fastcall sub_101C1E0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128i a7)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __m128i v16; // xmm6
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm4
  int v23; // edi
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // edi
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  _QWORD *v35; // r13
  __int64 v36; // rcx
  __int64 v37; // r8
  __m128i v38; // xmm1
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // r9
  __int64 v42; // rax
  __m128i v43; // xmm2
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i v49; // xmm3
  __int64 v50; // rax
  __m128i v51; // xmm5
  __int128 v52; // [rsp-68h] [rbp-68h]

  result = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 512 )
  {
    v8 = a3;
    v9 = a1 + 32;
    if ( a3 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 56);
        --v8;
        v12 = a1 + 32 * (result >> 6);
        v13 = *(_QWORD *)(v12 + 24);
        if ( v11 > v13 || v11 == v13 && *(_DWORD *)(a1 + 40) < *(_DWORD *)(v12 + 8) )
        {
          v20 = *(a2 - 1);
          if ( v13 <= v20 && (v13 != v20 || *(_DWORD *)(v12 + 8) >= *((_DWORD *)a2 - 6)) )
          {
            if ( v11 > v20 || v11 == v20 && *(_DWORD *)(a1 + 40) < *((_DWORD *)a2 - 6) )
            {
              v21 = *(_QWORD *)a1;
              v22 = _mm_loadu_si128((const __m128i *)(a2 - 3));
              v23 = *(_DWORD *)(a1 + 8);
              *(_QWORD *)a1 = *(a2 - 4);
              v24 = *(_DWORD *)(a1 + 12);
              *(a2 - 4) = v21;
              v25 = *(_QWORD *)(a1 + 24);
              v26 = *(_QWORD *)(a1 + 16);
              *(__m128i *)(a1 + 8) = v22;
LABEL_15:
              *(_QWORD *)(a1 + 24) = *(a2 - 1);
              *((_DWORD *)a2 - 6) = v23;
              *((_DWORD *)a2 - 5) = v24;
              *(a2 - 2) = v26;
              *(a2 - 1) = v25;
              goto LABEL_16;
            }
LABEL_34:
            v42 = *(_QWORD *)a1;
            v43 = _mm_loadu_si128((const __m128i *)(a1 + 40));
            v44 = *(_QWORD *)(a1 + 8);
            v45 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)a1 = *(_QWORD *)(a1 + 32);
            *(_QWORD *)(a1 + 32) = v42;
            v46 = *(_QWORD *)(a1 + 16);
            v47 = *(_QWORD *)(a1 + 24);
            *(__m128i *)(a1 + 8) = v43;
            *(_QWORD *)(a1 + 24) = v45;
            *(_QWORD *)(a1 + 40) = v44;
            *(_QWORD *)(a1 + 48) = v46;
            *(_QWORD *)(a1 + 56) = v47;
            goto LABEL_16;
          }
          v48 = *(_QWORD *)a1;
          v49 = _mm_loadu_si128((const __m128i *)(v12 + 8));
          v17 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = *(_QWORD *)v12;
          v18 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)v12 = v48;
          v19 = *(_QWORD *)(a1 + 24);
          *(__m128i *)(a1 + 8) = v49;
        }
        else
        {
          v14 = *(a2 - 1);
          if ( v11 > v14 || v11 == v14 && *(_DWORD *)(a1 + 40) < *((_DWORD *)a2 - 6) )
            goto LABEL_34;
          if ( v13 > v14 || v13 == v14 && *(_DWORD *)(v12 + 8) < *((_DWORD *)a2 - 6) )
          {
            v50 = *(_QWORD *)a1;
            v51 = _mm_loadu_si128((const __m128i *)(a2 - 3));
            v23 = *(_DWORD *)(a1 + 8);
            *(_QWORD *)a1 = *(a2 - 4);
            v24 = *(_DWORD *)(a1 + 12);
            *(a2 - 4) = v50;
            v26 = *(_QWORD *)(a1 + 16);
            v25 = *(_QWORD *)(a1 + 24);
            *(__m128i *)(a1 + 8) = v51;
            goto LABEL_15;
          }
          v15 = *(_QWORD *)a1;
          v16 = _mm_loadu_si128((const __m128i *)(v12 + 8));
          v17 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = *(_QWORD *)v12;
          v18 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)v12 = v15;
          v19 = *(_QWORD *)(a1 + 24);
          *(__m128i *)(a1 + 8) = v16;
        }
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(v12 + 24);
        *(_QWORD *)(v12 + 8) = v17;
        *(_QWORD *)(v12 + 16) = v18;
        *(_QWORD *)(v12 + 24) = v19;
LABEL_16:
        v27 = *(_QWORD *)(a1 + 24);
        v28 = v9;
        v29 = a2;
        while ( 1 )
        {
          v34 = *(_QWORD *)(v28 + 24);
          v35 = (_QWORD *)v28;
          if ( v34 <= v27 && (v34 != v27 || *(_DWORD *)(v28 + 8) >= *(_DWORD *)(a1 + 8)) )
            break;
LABEL_21:
          v28 += 32LL;
        }
        do
        {
          do
            v29 -= 4;
          while ( v29[3] < v27 );
          if ( v29[3] != v27 )
          {
            if ( v28 >= (unsigned __int64)v29 )
              goto LABEL_28;
LABEL_20:
            v30 = *(_QWORD *)v28;
            a7 = _mm_loadu_si128((const __m128i *)(v29 + 1));
            v31 = *(_DWORD *)(v28 + 8);
            *(_QWORD *)v28 = *v29;
            v32 = *(_DWORD *)(v28 + 12);
            *v29 = v30;
            v33 = *(_QWORD *)(v28 + 16);
            *(__m128i *)(v28 + 8) = a7;
            *(_QWORD *)(v28 + 24) = v29[3];
            *((_DWORD *)v29 + 2) = v31;
            *((_DWORD *)v29 + 3) = v32;
            v29[2] = v33;
            v29[3] = v34;
            v27 = *(_QWORD *)(a1 + 24);
            goto LABEL_21;
          }
        }
        while ( *(_DWORD *)(a1 + 8) < *((_DWORD *)v29 + 2) );
        if ( v28 < (unsigned __int64)v29 )
          goto LABEL_20;
LABEL_28:
        sub_101C1E0(v28, a2, v8);
        result = v28 - a1;
        if ( (__int64)(v28 - a1) <= 512 )
          return result;
        a2 = (_QWORD *)v28;
        if ( !v8 )
          goto LABEL_30;
      }
    }
    v35 = a2;
LABEL_30:
    sub_101C0B0(a1, (unsigned __int64)v35, (unsigned __int64)v35, a7, a4, a5, a6);
    do
    {
      v38 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      v35 -= 4;
      v39 = *v35;
      v40 = v35[1];
      v41 = v35[2];
      *v35 = *(_QWORD *)a1;
      *(__m128i *)(v35 + 1) = v38;
      v35[3] = *(_QWORD *)(a1 + 24);
      *((_QWORD *)&v52 + 1) = v40;
      *(_QWORD *)&v52 = v39;
      result = sub_101BEA0(a1, 0, ((__int64)v35 - a1) >> 5, v36, v37, v41, v52, a7);
    }
    while ( (__int64)v35 - a1 > 32 );
  }
  return result;
}
