__int64 __fastcall sub_7C38A0(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // edx
  __int64 v4; // rsi
  unsigned int *v5; // rax
  unsigned int *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r14d
  int v11; // ebp
  __m128i v12; // xmm0
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r13d
  unsigned int v20; // ebp
  bool v21; // cc
  int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rbx
  unsigned int *v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // rcx
  _BYTE *v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 v32; // rdi
  __int64 v33; // rax
  int *v34; // rbx
  int *v35; // rbp
  int v36; // esi
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rdx
  int v40; // ebp
  char v41; // dl
  __int64 v42; // r12
  int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rbx
  unsigned __int64 v46; // rbp
  unsigned int v47; // esi
  __int64 v48; // rax
  unsigned int v49; // ebp
  unsigned int v50; // r12d
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // r14d
  unsigned int *v54; // rbx
  unsigned int *v55; // rbp
  __int64 v56; // rsi
  unsigned int v57; // edx
  __int64 v58; // [rsp+20h] [rbp-88h]
  __int64 *v59; // [rsp+28h] [rbp-80h]
  int v60; // [rsp+30h] [rbp-78h]
  unsigned int v61; // [rsp+34h] [rbp-74h]
  char v62; // [rsp+47h] [rbp-61h] BYREF
  __int64 v63; // [rsp+48h] [rbp-60h] BYREF
  __m128i v64; // [rsp+50h] [rbp-58h] BYREF
  __int64 v65; // [rsp+60h] [rbp-48h]

  if ( !*(_DWORD *)(a1 + 848) )
    return 0;
  v2 = *(unsigned int **)(a1 + 800);
  *(_BYTE *)(a1 + 996) = 0;
  if ( v2 )
  {
    v3 = *(v2 - 1);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 792);
      v5 = &v2[v3 - 1];
      do
      {
        *(_QWORD *)(v4 + 8LL * *v5) = 0;
        v6 = v5--;
      }
      while ( v2 != v6 );
    }
    *(v2 - 1) = 0;
  }
  sub_7B77C0(a1);
  v7 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 784) = 0;
  *(_DWORD *)(a1 + 808) = 0;
  v8 = *(_QWORD *)(v7 + 3208);
  v9 = *(_QWORD *)(v7 + 3200);
  v10 = *(_DWORD *)(v7 + 3216);
  v64 = _mm_loadu_si128((const __m128i *)(v7 + 3192));
  v11 = *(_DWORD *)(v7 + 3208);
  v65 = v8;
  v64.m128i_i64[1] = v9;
  v12 = _mm_load_si128(&v64);
  v16 = sub_11B6490(v7, v10, (unsigned int)&v62, v13, v14, v15, v12.m128i_i32[0], v12.m128i_i64[1], v8);
  *(_DWORD *)(a1 + 788) = v16;
  if ( !v16 )
    return 0;
  if ( v10 != -2 )
  {
    v10 ^= 1u;
    sub_7C03E0(a1, v10, 1u, *(double *)v12.m128i_i64);
  }
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(_QWORD *)(v17 + 3784);
  if ( v18 )
    v19 = *(_DWORD *)(v18 - 4) - 1;
  else
    v19 = -1;
  v20 = v11 & 7;
  v21 = v20 <= 2;
  if ( v20 == 2 )
  {
LABEL_41:
    v42 = sub_1170D10(v17 + (-*(unsigned __int8 *)(v17 + 2352) & 0x238) + 1216, v9);
    if ( v10 == -2 )
    {
      v20 = 0;
    }
    else
    {
      sub_7BC120(a1, v10 >> 1);
      sub_7C00D0(a1, v10, 1u);
      if ( *(_DWORD *)(v42 + 20) == v10 )
        v20 = 1;
      else
        sub_7C03E0(a1, *(_DWORD *)(v42 + 20), 1u, *(double *)v12.m128i_i64);
    }
    v43 = *(_DWORD *)(a1 + 808);
    *(_BYTE *)(a1 + 996) |= v43 == -1;
    *(_DWORD *)(a1 + 808) = v43 + 1;
    v44 = *(_DWORD *)(v42 + 4);
    if ( v20 < v44 )
    {
      v45 = v42 + 4LL * v20;
      v46 = v42 + 4 * (v20 + (unsigned __int64)(v44 - 1 - v20)) + 4;
      do
      {
        v47 = *(_DWORD *)(v45 + 20);
        v45 += 4;
        sub_7C03E0(a1, v47, 1u, *(double *)v12.m128i_i64);
      }
      while ( v46 != v45 );
    }
  }
  else
  {
LABEL_13:
    if ( v21 )
    {
      sub_7BC120(a1, v10 >> 1);
      v22 = *(_DWORD *)(a1 + 808);
      *(_BYTE *)(a1 + 996) |= v22 == -1;
      *(_DWORD *)(a1 + 808) = v22 + 1;
      sub_7C00D0(a1, v10, 1u);
      if ( v20 )
        sub_7C03E0(a1, v9, 1u, *(double *)v12.m128i_i64);
    }
    else
    {
      if ( v20 != 3 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1077);
      }
      v32 = *(_QWORD *)v9;
      ++*(_DWORD *)(a1 + 184);
      if ( a1 == v32 )
      {
        v58 = v9 + 8;
        v61 = *(_DWORD *)(v9 + 68);
        v60 = *(_DWORD *)(v9 + 40);
        v48 = *(_QWORD *)(a1 + 1000);
        if ( v48 )
          *(_DWORD *)(v48 - 4) = 0;
        *(_QWORD *)(a1 + 1008) = 0;
        if ( v60 )
        {
          v49 = 0;
          v59 = (__int64 *)(a1 + 1000);
          do
          {
            v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v9 + 8) + 88LL))(v58, v49);
            v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v9 + 8) + 160LL))(v58, v49);
            if ( v50 == v10
              || *(_DWORD *)(*(_QWORD *)(a1 + 24) + 3848LL) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3840LL)
                                                                         + 4LL * (v50 & 0xFFFFFFFE)) )
            {
              v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v51), _mm_cvtsi32_si128(v50));
              v63 = v12.m128i_i64[0];
              sub_7B8130(v59, &v63);
            }
            else
            {
              v61 -= v51;
            }
            ++v49;
          }
          while ( v49 != v60 );
        }
        else
        {
          v59 = (__int64 *)(a1 + 1000);
        }
        v52 = *(_DWORD *)(v9 + 24);
        if ( v52 != -2 )
        {
          HIDWORD(v63) = v52 ^ 1;
          LODWORD(v63) = v61;
          sub_7B8130(v59, &v63);
        }
        *(_QWORD *)(a1 + 1008) = v61;
        sub_7AF500((__int64 *)a1, v59);
        if ( v10 == -2 )
        {
          v54 = *(unsigned int **)(a1 + 1000);
          *(_DWORD *)(a1 + 808) = *(_QWORD *)(a1 + 1008);
          if ( v54 )
          {
            v55 = &v54[2 * *(v54 - 1)];
            while ( v55 != v54 )
            {
              v56 = *(_QWORD *)v54;
              v57 = *v54;
              v54 += 2;
              sub_7C03E0(a1, HIDWORD(v56), v57, *(double *)v12.m128i_i64);
            }
          }
        }
        else
        {
          v53 = v10 >> 1;
          sub_7BC120(a1, v53);
          if ( *(_DWORD *)(v9 + 16) == 1 )
            sub_7AF1E0((_QWORD *)a1, v59, v53);
          sub_7C0360(a1, v59);
        }
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 832);
        if ( v33 )
          *(_DWORD *)(v33 - 4) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v32 + 80LL))(
          v32,
          v10,
          v9,
          a1 + 832,
          0);
        v34 = *(int **)(a1 + 832);
        if ( v34 )
        {
          v35 = &v34[*(v34 - 1)];
          while ( v35 != v34 )
          {
            v36 = *v34++;
            sub_7C03E0(a1, v36 ^ 1, 1u, *(double *)v12.m128i_i64);
          }
        }
      }
    }
  }
  sub_7C35F0(a1);
  v17 = *(_QWORD *)(a1 + 24);
  v23 = *(_QWORD *)(v17 + 3840);
  v24 = *(_QWORD *)(v17 + 3312);
  v25 = (unsigned int *)(*(_QWORD *)(v17 + 3784) + 4LL * v19);
  while ( 1 )
  {
    v10 = *v25;
    v26 = v10 >> 1;
    *(_DWORD *)(v23 + 4LL * (*v25 & 0xFFFFFFFE)) = *(_DWORD *)(v17 + 3848) + 1;
    v27 = v10 >> 1;
    v28 = (_BYTE *)(v24 + v27);
    if ( !*(_BYTE *)(v24 + v27) )
      goto LABEL_24;
    v29 = *(_QWORD *)(a1 + 792);
    if ( v29 )
    {
      if ( v26 < *(_DWORD *)(v29 - 4) )
      {
        v30 = *(_QWORD *)(v29 + 8 * v27);
        if ( v30 )
        {
          if ( (v10 & 1) != v30 >> 63 )
            break;
        }
      }
    }
    *v28 = 0;
    --*(_DWORD *)(a1 + 784);
LABEL_24:
    --v25;
    if ( !v19 )
      goto LABEL_25;
    --v19;
  }
  *v28 = 0;
  --v19;
  v37 = *(_QWORD *)(v17 + 3296);
  v38 = (*(_DWORD *)(a1 + 784))-- == 1;
  v39 = v37 + 24 * v27;
  v9 = *(_QWORD *)(v39 + 8);
  v40 = *(_DWORD *)(v39 + 16);
  v41 = *(_BYTE *)(a1 + 996);
  if ( !v38 )
  {
    if ( !v41 )
    {
      v20 = v40 & 7;
      v21 = v20 <= 2;
      if ( v20 != 2 )
        goto LABEL_13;
      goto LABEL_41;
    }
LABEL_26:
    ++*(_DWORD *)(a1 + 212);
    *(_BYTE *)(a1 + 996) = 0;
    return 0;
  }
  if ( v41 == 1 )
    goto LABEL_26;
  if ( v10 != -2 )
  {
    sub_7BC120(a1, v26);
    v41 = *(_BYTE *)(a1 + 996);
  }
  if ( v41 )
    goto LABEL_26;
  if ( !(unsigned __int8)sub_7C2EB0(a1, *(double *)v12.m128i_i64) )
  {
LABEL_25:
    if ( !*(_BYTE *)(a1 + 996) )
      return 0;
    goto LABEL_26;
  }
  sub_7BD480(a1, v12);
  return 1;
}

