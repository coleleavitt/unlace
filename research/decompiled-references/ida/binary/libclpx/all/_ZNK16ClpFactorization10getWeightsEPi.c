void __fastcall ClpFactorization::getWeights(ClpFactorization *this, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // ecx
  __m128i si128; // xmm0
  unsigned int v8; // r8d
  int *v9; // rdx
  unsigned int v10; // eax
  signed int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rcx
  _DWORD *v16; // r15
  __int64 v17; // r12
  __int64 v18; // r14
  int *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdi
  void *v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // rcx
  _DWORD *v29; // r9
  int *v30; // rsi
  _DWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // r11d
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // edi
  bool v41; // sf
  int v42; // eax
  int *v43; // rsi
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  int v48; // edx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // esi
  size_t n; // [rsp+0h] [rbp-48h]
  int *v53; // [rsp+8h] [rbp-40h]

  v2 = *((_QWORD *)this + 1);
  v3 = *(_DWORD *)(v2 + 32);
  if ( *(_QWORD *)this )
  {
    if ( v3 <= 0 )
      return;
    v4 = -(int)(a2 >> 2) & 3;
    v5 = v4 + 3;
    if ( (unsigned int)(v4 + 3) < 5 )
      v5 = 5;
    if ( v5 > v3 - 1 )
    {
      v11 = 0;
LABEL_13:
      *(_DWORD *)(a2 + 4LL * v11) = 1;
      if ( v11 + 1 < v3 )
      {
        *(_DWORD *)(a2 + 4LL * (v11 + 1)) = 1;
        if ( v11 + 2 < v3 )
        {
          *(_DWORD *)(a2 + 4LL * (v11 + 2)) = 1;
          if ( v11 + 3 < v3 )
          {
            *(_DWORD *)(a2 + 4LL * (v11 + 3)) = 1;
            v12 = v11 + 4;
            if ( v11 + 4 < v3 )
            {
              v13 = v11 + 5;
              *(_DWORD *)(a2 + 4LL * v12) = 1;
              if ( v13 < v3 )
                *(_DWORD *)(a2 + 4LL * v13) = 1;
            }
          }
        }
      }
      return;
    }
    v6 = 0;
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)a2 = 1;
      v6 = 1;
      if ( (_DWORD)v4 != 1 )
      {
        *(_DWORD *)(a2 + 4) = 1;
        v6 = 2;
        if ( (_DWORD)v4 != 2 )
        {
          *(_DWORD *)(a2 + 8) = 1;
          v6 = 3;
        }
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v8 = v3 - v4;
    v9 = (int *)(a2 + 4 * v4);
    v10 = 0;
    do
    {
      ++v10;
      v9 += 4;
      *((__m128i *)v9 - 1) = si128;
    }
    while ( v8 >> 2 > v10 );
    v11 = (v8 & 0xFFFFFFFC) + v6;
    if ( (v8 & 0xFFFFFFFC) != v8 )
      goto LABEL_13;
  }
  else
  {
    v14 = *(_DWORD *)(v2 + 216);
    v15 = 0;
    v16 = *(_DWORD **)(v2 + 232);
    v17 = *(_QWORD *)(v2 + 152);
    v18 = *(_QWORD *)(v2 + 624);
    v19 = *(int **)(v2 + 648);
    if ( v14 > -2 )
      v15 = *(_QWORD *)(v2 + 208);
    if ( *(int *)(v2 + 240) <= -2 )
      v16 = nullptr;
    if ( *(int *)(v2 + 160) <= -2 )
      v17 = 0;
    if ( *(int *)(v2 + 632) <= -2 )
      v18 = 0;
    if ( *(int *)(v2 + 656) <= -2 )
      v19 = nullptr;
    if ( *(int *)(v2 + 1064) >= -1 && (v20 = *(_QWORD *)(v2 + 1056), v20 != 0 && v14 >= -1) && *(_QWORD *)(v2 + 208) )
    {
      if ( v3 > 0 )
      {
        v21 = 0;
        do
        {
          v22 = *(_DWORD *)(v15 + v21) + *(_DWORD *)(v20 + v21 + 4) - *(_DWORD *)(v20 + v21);
          v23 = *(int *)(v17 + v21);
          v21 += 4;
          *(_DWORD *)(a2 + 4 * v23) = v22 + 1;
        }
        while ( 4LL * (unsigned int)(v3 - 1) + 4 != v21 );
      }
    }
    else
    {
      v53 = v19;
      if ( (unsigned __int64)v3 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      n = 4LL * v3;
      v26 = (void *)operator new[](n);
      v27 = memset(v26, 0, n);
      v28 = v27;
      if ( v3 > 0 )
      {
        v29 = v27;
        v30 = v53;
        v31 = v16;
        do
        {
          ++*v29;
          v32 = *v30;
          if ( (int)v32 < (int)v32 + *v31 )
          {
            v33 = (int)v32 + 1;
            v34 = v18 + 4 * (v32 - v33);
            do
            {
              v35 = *(int *)(v34 + 4 * v33);
              v36 = v33++;
              ++v28[v35];
            }
            while ( *v30 + *v31 > v36 );
          }
          ++v30;
          ++v29;
          ++v31;
        }
        while ( v30 != &v53[v3 - 1 + 1] );
      }
      v37 = *((_QWORD *)this + 1);
      v38 = *(_QWORD *)(v37 + 760);
      v39 = *(_QWORD *)(v37 + 736);
      v40 = *(_DWORD *)(v37 + 700);
      if ( *(int *)(v37 + 768) <= -2 )
        v38 = 0;
      if ( *(int *)(v37 + 744) <= -2 )
        v39 = 0;
      v41 = -*(_DWORD *)(v37 + 696) < 0;
      v42 = v40 + *(_DWORD *)(v37 + 696);
      if ( v41 != __OFSUB__(v40, v42) )
      {
        v43 = (int *)(v38 + 4LL * v40);
        v44 = v38 + 4 * (v40 + (unsigned __int64)(unsigned int)(v42 - v40 - 1)) + 4;
        do
        {
          v45 = *v43;
          if ( (int)v45 < v43[1] )
          {
            v46 = (int)v45 + 1;
            v47 = v39 + 4 * (v45 - v46);
            do
            {
              ++v28[*(int *)(v47 + 4 * v46)];
              v48 = v46++;
            }
            while ( v43[1] > v48 );
          }
          ++v43;
        }
        while ( (int *)v44 != v43 );
      }
      if ( v3 > 0 )
      {
        v49 = 0;
        do
        {
          v50 = *(int *)(v17 + v49);
          v51 = v28[v49 / 4];
          v49 += 4LL;
          *(_DWORD *)(a2 + 4 * v50) = v51;
        }
        while ( 4LL * (unsigned int)(v3 - 1) + 4 != v49 );
      }
      operator delete[](v28);
    }
  }
}

