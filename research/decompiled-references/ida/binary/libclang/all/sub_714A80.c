__int64 __fastcall sub_714A80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // r12
  char v5; // cl
  unsigned __int64 v6; // rdx
  unsigned int v7; // r13d
  _QWORD *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 *v11; // rdi
  _QWORD *v12; // rbp
  __int64 *i; // rax
  __int64 v14; // r10
  int v15; // r11d
  int v16; // r14d
  _QWORD *v17; // r13
  __int64 v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // ecx
  __m128 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __int64 result; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __m128 *j; // rsi
  __int64 v32; // rdi
  int v33; // r8d
  int v34; // r11d
  _QWORD *v35; // r10
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // r9
  int v39; // edx
  __int64 v40; // rax
  __m128 v41; // [rsp+0h] [rbp-78h] BYREF
  char v42; // [rsp+10h] [rbp-68h] BYREF

  LODWORD(v2) = a2;
  v4 = *(_QWORD **)(a1 + 8);
  v5 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !v5 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v8 = v4;
      LODWORD(v2) = v7;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1) | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)) >> 4);
    v2 = (v6 | (v6 >> 8) | ((v6 | (v6 >> 8)) >> 16)) + 1;
    if ( (unsigned int)v2 < 0x40 )
      LODWORD(v2) = 64;
    if ( !v5 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      v8 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v2, 8);
      *(_DWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 8) = v8;
LABEL_8:
      v9 = 2LL * (unsigned int)v2;
      v10 = *(_QWORD *)a1 & 1LL;
      v11 = &v4[2 * v7];
      *(_QWORD *)a1 = v10;
      if ( v10 )
      {
        v8 = (_QWORD *)(a1 + 8);
        v9 = 8;
      }
      v12 = &v8[v9];
      if ( v8 != v12 )
      {
        if ( (((_BYTE)v12 - (_BYTE)v8) & 0x10) == 0 || (*v8 = -4096, v8 += 2, v12 != v8) )
        {
          do
          {
            *v8 = -4096;
            v8 += 4;
            *(v8 - 2) = -4096;
          }
          while ( v12 != v8 );
        }
      }
      for ( i = v4; v11 != i; i += 2 )
      {
        v21 = *i;
        if ( *i != -4096 && v21 != -8192 )
        {
          if ( (*(_BYTE *)a1 & 1) != 0 )
          {
            v14 = a1 + 8;
            v15 = 3;
          }
          else
          {
            v22 = *(_DWORD *)(a1 + 16);
            v14 = *(_QWORD *)(a1 + 8);
            if ( !v22 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v15 = v22 - 1;
          }
          v16 = 1;
          v17 = nullptr;
          LODWORD(v18) = v15 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
          v19 = (_QWORD *)(v14 + 16LL * (unsigned int)v18);
          v20 = *v19;
          if ( v21 != *v19 )
          {
            while ( v20 != -4096 )
            {
              if ( v20 == -8192 && !v17 )
                v17 = v19;
              v18 = v15 & (unsigned int)(v18 + v16);
              v19 = (_QWORD *)(v14 + 16 * v18);
              v20 = *v19;
              if ( v21 == *v19 )
                goto LABEL_18;
              ++v16;
            }
            if ( v17 )
              v19 = v17;
          }
LABEL_18:
          *v19 = v21;
          v19[1] = i[1];
          *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        }
      }
      return operator delete();
    }
  }
  if ( v4 == (_QWORD *)-4096LL || v4 == (_QWORD *)-8192LL )
  {
    v23 = &v41;
  }
  else
  {
    v23 = (__m128 *)&v42;
    v41 = _mm_loadh_ps((const double *)(a1 + 16));
  }
  v24 = *(_QWORD *)(a1 + 24);
  if ( v24 != -4096 && v24 != -8192 )
  {
    ++v23;
    v23[-1] = _mm_loadh_ps((const double *)(a1 + 32));
  }
  v25 = *(_QWORD *)(a1 + 40);
  if ( v25 != -4096 && v25 != -8192 )
  {
    ++v23;
    v23[-1] = _mm_loadh_ps((const double *)(a1 + 48));
  }
  v26 = *(_QWORD *)(a1 + 56);
  if ( v26 != -4096 && v26 != -8192 )
  {
    ++v23;
    v23[-1] = _mm_loadh_ps((const double *)(a1 + 64));
  }
  if ( (unsigned int)v2 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v40 = sub_25CC9C0(16LL * (unsigned int)v2, 8);
    *(_DWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 8) = v40;
  }
  v27 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v27 )
  {
    result = *(_QWORD *)(a1 + 8);
    v29 = 16LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = a1 + 8;
    v29 = 64;
  }
  v30 = result + v29;
  if ( result != v30 )
  {
    if ( (((_BYTE)v30 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = -4096, result += 16, v30 != result) )
    {
      do
      {
        *(_QWORD *)result = -4096;
        result += 32;
        *(_QWORD *)(result - 16) = -4096;
      }
      while ( v30 != result );
    }
  }
  for ( j = &v41; v23 != j; ++j )
  {
    result = j->m128_u64[0];
    if ( j->m128_u64[0] != -4096 && result != -8192 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v32 = a1 + 8;
        v33 = 3;
      }
      else
      {
        v39 = *(_DWORD *)(a1 + 16);
        v32 = *(_QWORD *)(a1 + 8);
        if ( !v39 )
        {
          *(_QWORD *)&dword_0 = j->m128_u64[0];
          BUG();
        }
        v33 = v39 - 1;
      }
      v34 = 1;
      v35 = nullptr;
      LODWORD(v36) = v33 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
      v37 = (_QWORD *)(v32 + 16LL * (unsigned int)v36);
      v38 = *v37;
      if ( result != *v37 )
      {
        while ( v38 != -4096 )
        {
          if ( !v35 && v38 == -8192 )
            v35 = v37;
          v36 = v33 & (unsigned int)(v36 + v34);
          v37 = (_QWORD *)(v32 + 16 * v36);
          v38 = *v37;
          if ( result == *v37 )
            goto LABEL_49;
          ++v34;
        }
        if ( v35 )
          v37 = v35;
      }
LABEL_49:
      *(__m128 *)v37 = _mm_loadh_ps((const double *)&j->m128_u64[1]);
      result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
      *(_DWORD *)a1 = result;
    }
  }
  return result;
}

