__int64 __fastcall sub_A92800(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 **v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 *v17; // rcx
  unsigned int v18; // edi
  _QWORD *v19; // rsi
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // rdi
  int v23; // ecx
  unsigned int v24; // edx
  __int64 v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // r8
  int v28; // r10d
  __int64 **v29; // r11
  int v30; // edi
  int v31; // edi
  unsigned int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // r9
  bool v35; // zf
  int v36; // r11d
  _QWORD *v37; // r13
  int v38; // edi
  int v39; // edi
  int v40; // esi
  __int64 *v41; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+18h] [rbp-40h] BYREF
  __m128 v44[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (__int64 *)(a1 + 18472);
  v9 = *(_DWORD *)(a1 + 18488);
  v41 = (__int64 *)a3;
  v43 = (__int64)a2;
  if ( !v9 )
  {
    v44[0].m128_u64[0] = 0;
LABEL_30:
    v42 = v6;
    sub_A925F0((__int64)v6, 2 * v9, a3, (__int64)v6, a5, a6);
LABEL_31:
    sub_A6DF60(v42, &v43, v44);
    v11 = (__int64 **)v44[0].m128_u64[0];
    a5 = *(_QWORD *)(a1 + 18472);
    v31 = *(_DWORD *)(a1 + 18480) + 1;
    v9 = *(_DWORD *)(a1 + 18488);
    v6 = v42;
    goto LABEL_17;
  }
  a5 = *(_QWORD *)(a1 + 18472);
  v10 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = (__int64 **)(a5 + 16LL * v10);
  v12 = *v11;
  if ( *v11 == a2 )
  {
LABEL_3:
    sub_A83EC0(v44, v11, (_QWORD *)(a5 + 16LL * v9), (__int64)v6, 1);
    goto LABEL_4;
  }
  v28 = 1;
  v29 = nullptr;
  if ( v12 != (__int64 *)-4096LL )
  {
    while ( 1 )
    {
      if ( !v29 && v12 == (__int64 *)-8192LL )
        v29 = v11;
      v10 = (v9 - 1) & (v28 + v10);
      v11 = (__int64 **)(a5 + 16LL * v10);
      v12 = *v11;
      if ( a2 == *v11 )
        goto LABEL_3;
      if ( v12 == (__int64 *)-4096LL )
      {
        if ( v29 )
          v11 = v29;
        break;
      }
      ++v28;
    }
  }
  v30 = *(_DWORD *)(a1 + 18480);
  a3 = 3 * v9;
  v44[0].m128_u64[0] = (unsigned __int64)v11;
  v31 = v30 + 1;
  a6 = (unsigned int)(4 * v31);
  if ( (unsigned int)a6 >= (unsigned int)a3 )
    goto LABEL_30;
  v32 = v9 - *(_DWORD *)(a1 + 18484);
  v42 = a2;
  v33 = v32 - v31;
  v34 = v9 >> 3;
  if ( (unsigned int)v33 <= (unsigned int)v34 )
  {
    v42 = v6;
    sub_A925F0((__int64)v6, v9, v33, (__int64)v6, a5, v34);
    goto LABEL_31;
  }
LABEL_17:
  v35 = *v11 + 512 == nullptr;
  *(_DWORD *)(a1 + 18480) = v31;
  if ( !v35 )
    --*(_DWORD *)(a1 + 18484);
  *(__m128 *)v11 = _mm_loadh_ps((const double *)&v41);
  sub_A83EC0(v44, v11, (_QWORD *)(a5 + 16LL * v9), (__int64)v6, 1);
LABEL_4:
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 32))(a2);
  v16 = *(unsigned int *)(a1 + 18512);
  v17 = (__int64 *)(a1 + 18496);
  v43 = v13;
  if ( !(_DWORD)v16 )
  {
    v44[0].m128_u64[0] = 0;
    goto LABEL_27;
  }
  v15 = *(_QWORD *)(a1 + 18496);
  v18 = (v16 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
  v19 = (_QWORD *)(v15 + 16LL * v18);
  v20 = *v19;
  if ( v13 == *v19 )
    goto LABEL_6;
  v36 = 1;
  v37 = nullptr;
  if ( v20 == -4096 )
  {
LABEL_21:
    v38 = *(_DWORD *)(a1 + 18504);
    v14 = (unsigned int)(3 * v16);
    v44[0].m128_u64[0] = (unsigned __int64)v19;
    v39 = v38 + 1;
    if ( 4 * v39 < (unsigned int)v14 )
    {
      v14 = (unsigned int)(v16 - *(_DWORD *)(a1 + 18508) - v39);
      if ( (unsigned int)v14 > (unsigned int)v16 >> 3 )
      {
LABEL_23:
        v35 = *v19 == -4096;
        *(_DWORD *)(a1 + 18504) = v39;
        if ( !v35 )
          --*(_DWORD *)(a1 + 18508);
        v41 = a2;
        *(__m128 *)v19 = _mm_loadh_ps((const double *)&v41);
        goto LABEL_6;
      }
      v40 = v16;
LABEL_28:
      v41 = (__int64 *)(a1 + 18496);
      sub_A923E0(a1 + 18496, v40, v16, (__int64)v17, v14, v15);
      sub_A6DEA0(v41, &v43, v44);
      v15 = *(_QWORD *)(a1 + 18496);
      v16 = *(unsigned int *)(a1 + 18512);
      v39 = *(_DWORD *)(a1 + 18504) + 1;
      v19 = (_QWORD *)v44[0].m128_u64[0];
      v17 = v41;
      goto LABEL_23;
    }
LABEL_27:
    v40 = 2 * v16;
    goto LABEL_28;
  }
  while ( 1 )
  {
    if ( !v37 && v20 == -8192 )
      v37 = v19;
    v18 = (v16 - 1) & (v36 + v18);
    v19 = (_QWORD *)(v15 + 16LL * v18);
    v20 = *v19;
    if ( v13 == *v19 )
      break;
    if ( v20 == -4096 )
    {
      if ( v37 )
        v19 = v37;
      goto LABEL_21;
    }
    ++v36;
  }
LABEL_6:
  sub_A83F30(v44, v19, (_QWORD *)(v15 + 16 * v16), (__int64)v17, 1);
  result = *(unsigned int *)(a1 + 18536);
  v22 = *(_QWORD *)(a1 + 18520);
  if ( !(_DWORD)result )
    return result;
  v23 = result - 1;
  v24 = (result - 1) & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
  result = v22 + 16LL * v24;
  v25 = *(_QWORD *)result;
  if ( *(_QWORD *)result == v43 )
    goto LABEL_8;
  result = 1;
  if ( v25 != -4096 )
  {
    while ( 1 )
    {
      v26 = result + 1;
      v24 = v23 & (result + v24);
      result = v22 + 16LL * v24;
      v27 = *(_QWORD *)result;
      if ( v43 == *(_QWORD *)result )
        break;
      result = v26;
      if ( v27 == -4096 )
        return result;
    }
LABEL_8:
    *(_QWORD *)result = -8192;
    --*(_DWORD *)(a1 + 18528);
    ++*(_DWORD *)(a1 + 18532);
  }
  return result;
}
