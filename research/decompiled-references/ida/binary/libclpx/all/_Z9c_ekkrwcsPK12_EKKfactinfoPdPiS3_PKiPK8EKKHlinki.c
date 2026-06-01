__int64 __fastcall c_ekkrwcs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v8; // eax
  __int64 v9; // rdx
  int v11; // r9d
  int v12; // r15d
  unsigned int v13; // ecx
  int *v14; // rsi
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 v22; // r8
  __int64 v23; // r10
  _DWORD *v24; // r13
  int v25; // ebp
  int v26; // ecx
  __int64 v27; // xmm0_8
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // rdi
  unsigned int v31; // r13d
  __int64 v32; // rsi
  __int64 v33; // r11
  __int64 v34; // rcx
  unsigned int v35; // r10d
  __int64 v36; // rsi
  __int64 v37; // r11
  __int128 v38; // xmm1
  unsigned int v39; // eax
  signed int v40; // ebp
  int v41; // esi
  unsigned int v42; // ecx
  int v43; // esi
  __int64 v44; // xmm0_8
  int v45; // ecx
  unsigned int v46; // ecx
  int v47; // esi
  int v48; // eax
  __int64 v49; // xmm0_8
  int v50; // ecx
  int v51; // ebp
  __int64 v52; // xmm0_8
  int v53; // eax
  unsigned __int64 v55; // rax
  int v56; // r10d
  unsigned int v57; // [rsp+0h] [rbp-74h]
  __int64 v58; // [rsp+4h] [rbp-70h]
  __int64 v62; // [rsp+2Ch] [rbp-48h]
  int v63; // [rsp+34h] [rbp-40h]
  signed int v64; // [rsp+38h] [rbp-3Ch]

  v8 = *(_DWORD *)(a1 + 240);
  v9 = a7;
  if ( v8 <= 0 )
    return 1;
  v11 = 1;
  v63 = v8 + 1;
  v12 = 1;
  do
  {
    v13 = *(_DWORD *)(a5 + 4 * v9);
    v14 = (int *)(a4 + 4 * v9);
    v15 = *v14;
    if ( *v14 == v11 )
    {
      v11 += v13;
    }
    else
    {
      *v14 = v11;
      v64 = v13 + v15;
      if ( (int)(v13 + v15) > v15 )
      {
        v16 = v15;
        v17 = v13;
        v18 = v15 + 4LL;
        v19 = 8LL * v11;
        v57 = v13;
        v20 = 8 * v18;
        v21 = 4 * v18;
        v62 = v17 + v11;
        v22 = a2 + v19;
        v58 = v20 - 32;
        v23 = 4LL * v11;
        v24 = (_DWORD *)(a3 + v23);
        if ( v57 > 0xC
          && (v21 <= v23 || v23 + 16 <= v21 - 16)
          && (v19 >= v20 || v20 - 32 >= v19 + 32)
          && ((unsigned __int64)v24 >= a2 + 8 * v62 || v22 >= a3 + 4 * v62) )
        {
          v25 = v11;
          if ( (((unsigned __int64)(a2 + v58) >> 3) & 1) != 0 )
          {
            v26 = *(_DWORD *)(a3 + 4LL * v15);
            v27 = *(_QWORD *)(a2 + 8LL * v15);
            v25 = v11 + 1;
            ++v15;
            *(_QWORD *)(a2 + 8LL * v11) = v27;
            *v24 = v26;
          }
          v28 = (((unsigned __int64)(a2 + v58) >> 3) & 1) + v16;
          v29 = a2 + 8 * v28;
          v30 = a3 + 4 * v28;
          v31 = v57 - (((unsigned __int64)(a2 + v58) >> 3) & 1);
          v32 = v19 + 8 * (((unsigned __int64)(a2 + v58) >> 3) & 1);
          v33 = v23 + 4 * (((unsigned __int64)(a2 + v58) >> 3) & 1);
          v34 = 0;
          v35 = 0;
          v36 = a2 + v32;
          v37 = a3 + v33;
          do
          {
            ++v35;
            v38 = *(_OWORD *)(v29 + 2 * v34);
            *(_OWORD *)(v36 + 2 * v34 + 16) = *(_OWORD *)(v29 + 2 * v34 + 16);
            *(_OWORD *)(v36 + 2 * v34) = v38;
            *(__m128i *)(v37 + v34) = _mm_loadu_si128((const __m128i *)(v30 + v34));
            v34 += 16;
          }
          while ( v31 >> 2 > v35 );
          v39 = (v31 & 0xFFFFFFFC) + v15;
          v40 = (v31 & 0xFFFFFFFC) + v25;
          if ( v31 != (v31 & 0xFFFFFFFC) )
          {
            v41 = *(_DWORD *)(a3 + 4LL * (int)v39);
            *(_QWORD *)(a2 + 8LL * v40) = *(_QWORD *)(a2 + 8LL * (int)v39);
            *(_DWORD *)(a3 + 4LL * v40) = v41;
            v42 = v39 + 1;
            v43 = v40 + 1;
            if ( v64 > (int)(v39 + 1) )
            {
              v44 = *(_QWORD *)(a2 + 8LL * (int)v42);
              v45 = *(_DWORD *)(a3 + 4LL * (int)v42);
              *(_QWORD *)(a2 + 8LL * v43) = v44;
              *(_DWORD *)(a3 + 4LL * v43) = v45;
              v46 = v39 + 2;
              v47 = v40 + 2;
              if ( v64 > (int)(v39 + 2) )
              {
                v48 = v39 + 3;
                v49 = *(_QWORD *)(a2 + 8LL * (int)v46);
                v50 = *(_DWORD *)(a3 + 4LL * (int)v46);
                v51 = v40 + 3;
                *(_QWORD *)(a2 + 8LL * v47) = v49;
                *(_DWORD *)(a3 + 4LL * v47) = v50;
                if ( v64 > v48 )
                {
                  v52 = *(_QWORD *)(a2 + 8LL * v48);
                  v53 = *(_DWORD *)(a3 + 4LL * v48);
                  *(_QWORD *)(a2 + 8LL * v51) = v52;
                  *(_DWORD *)(a3 + 4LL * v51) = v53;
                }
              }
            }
          }
        }
        else
        {
          v55 = 0;
          do
          {
            v56 = *(_DWORD *)(a3 + v21 - 16 + v55);
            *(_QWORD *)(v22 + 2 * v55) = *(_QWORD *)(a2 + v58 + 2 * v55);
            v24[v55 / 4] = v56;
            v55 += 4LL;
          }
          while ( v55 != 4LL * (v57 - 1) + 4 );
        }
        v11 += v57;
      }
    }
    ++v12;
    v9 = *(int *)(a6 + 8 * v9);
  }
  while ( v12 != v63 );
  return (unsigned int)v11;
}

