__int64 __fastcall sub_97B390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  unsigned int v14; // esi
  __int64 v15; // r12
  __int64 *v16; // rdi
  __int32 v17; // r15d
  __int64 v18; // r13
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __m128 *v22; // rdx
  bool v23; // zf
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  int v27; // r8d
  int v28; // r8d
  __int64 v29; // r9
  unsigned int v30; // edi
  int v31; // edx
  int v32; // edi
  __int64 v33; // r8
  unsigned int v34; // r14d
  __int64 *v35; // r9
  int v36; // r11d
  __int64 v37; // r11
  __int64 *v38; // r10
  int v39; // r14d
  double v40; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+Ch] [rbp-3Ch]

  v8 = *(_QWORD *)(a2 + 16);
  sub_979740(a1, v8, 1, 0, a5, a6);
  result = *(_QWORD *)(a1 + 16);
  if ( !result )
    result = sub_975DA0(a1, v8, v9, v10, v11, v12);
  v14 = *(_DWORD *)(a1 + 160);
  v15 = *(_QWORD *)(a1 + 128);
  v16 = (__int64 *)(a1 + 144);
  v17 = *(_DWORD *)(a1 + 136);
  v18 = *(_QWORD *)(a2 + 8);
  if ( !v14 )
    goto LABEL_15;
  v19 = *(_QWORD *)(a1 + 144);
  v20 = (v14 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
  v9 = v19 + 32LL * v20;
  v21 = *(_QWORD *)v9;
  if ( v18 == *(_QWORD *)v9 )
    goto LABEL_5;
  if ( v21 != -4096 )
  {
    LODWORD(v40) = 1;
    v37 = 0;
    v41 = v14;
    while ( 1 )
    {
      if ( !v37 && v21 == -8192 )
        v37 = v9;
      v20 = (v14 - 1) & (v40 + v20);
      v9 = v19 + 32LL * v20;
      v21 = *(_QWORD *)v9;
      if ( v18 == *(_QWORD *)v9 )
        goto LABEL_5;
      if ( v21 == -4096 )
        break;
      LODWORD(v40) = v40 + 1;
    }
    v14 = v41;
    if ( v37 )
      v9 = v37;
  }
  v11 = 3 * v14;
  v10 = (unsigned int)(*(_DWORD *)(a1 + 152) + 1);
  v12 = (unsigned int)(4 * v10);
  if ( (unsigned int)v12 >= (unsigned int)v11 )
  {
LABEL_15:
    v40 = result;
    sub_970AE0(v16, 2 * v14, v9, v10, v11, v12);
    v27 = *(_DWORD *)(a1 + 160);
    if ( v27 )
    {
      v28 = v27 - 1;
      v29 = *(_QWORD *)(a1 + 144);
      LODWORD(v10) = *(_DWORD *)(a1 + 152) + 1;
      result = v40;
      v30 = v28 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
      v9 = v29 + 32LL * v30;
      v26 = *(_QWORD *)v9;
      if ( v18 != *(_QWORD *)v9 )
      {
        if ( v26 != -4096 )
        {
          v38 = (__int64 *)(v29 + 32LL * (v28 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4))));
          v39 = 1;
          v9 = 0;
          while ( 1 )
          {
            if ( !v9 && v26 == -8192 )
              v9 = (__int64)v38;
            v30 = v28 & (v39 + v30);
            v38 = (__int64 *)(v29 + 32LL * v30);
            v26 = *v38;
            if ( v18 == *v38 )
            {
              v9 = v29 + 32LL * v30;
              goto LABEL_12;
            }
            if ( v26 == -4096 )
              break;
            ++v39;
          }
          if ( v9 )
            goto LABEL_11;
          v9 = v29 + 32LL * v30;
        }
        goto LABEL_18;
      }
LABEL_12:
      *(_DWORD *)(a1 + 152) = v10;
      if ( v26 != -4096 )
        --*(_DWORD *)(a1 + 156);
      goto LABEL_14;
    }
LABEL_52:
    ++*(_DWORD *)(a1 + 152);
    BUG();
  }
  v24 = v14 - *(_DWORD *)(a1 + 156) - (unsigned int)v10;
  v25 = v14 >> 3;
  if ( (unsigned int)v24 > (unsigned int)v25 )
  {
LABEL_11:
    v26 = *(_QWORD *)v9;
    goto LABEL_12;
  }
  v40 = result;
  sub_970AE0(v16, v14, v9, v10, v24, v25);
  v31 = *(_DWORD *)(a1 + 160);
  if ( !v31 )
    goto LABEL_52;
  v32 = v31 - 1;
  v33 = *(_QWORD *)(a1 + 144);
  v34 = (v31 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
  LODWORD(v10) = *(_DWORD *)(a1 + 152) + 1;
  result = v40;
  v9 = v33 + 32LL * v34;
  v26 = *(_QWORD *)v9;
  if ( v18 == *(_QWORD *)v9 )
    goto LABEL_12;
  if ( v26 != -4096 )
  {
    v35 = (__int64 *)(v33 + 32LL * v34);
    v36 = 1;
    v9 = 0;
    while ( 1 )
    {
      if ( v26 == -8192 && !v9 )
        v9 = (__int64)v35;
      v34 = v32 & (v36 + v34);
      v35 = (__int64 *)(v33 + 32LL * v34);
      v26 = *v35;
      if ( v18 == *v35 )
      {
        v9 = v33 + 32LL * v34;
        goto LABEL_12;
      }
      if ( v26 == -4096 )
        break;
      ++v36;
    }
    if ( v9 )
      goto LABEL_11;
    v9 = v33 + 32LL * v34;
  }
LABEL_18:
  *(_DWORD *)(a1 + 152) = v10;
LABEL_14:
  *(_QWORD *)v9 = v18;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
LABEL_5:
  v22 = (__m128 *)(v9 + 8);
  v40 = v15;
  v23 = *(_BYTE *)(a1 + 320) == 0;
  v22[1].m128_i32[0] = v17;
  *v22 = _mm_loadh_ps((const double *)&v40);
  *(_QWORD *)(result + 24) = a2;
  if ( !v23 )
    return 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}

